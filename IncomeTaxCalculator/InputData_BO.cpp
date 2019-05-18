#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;

#include "constants.h"
#include "InputData_BO.h"

InputData_BO::InputData_BO(const string filename)
{
	cout << "DATA FILE: " << filename << endl;

	//create input file object
	ifstream infile;

	//create file buffer and input stream
	infile.open(filename.c_str());

	//read data file header
	getline(infile, hdr);
	cout << hdr << endl;

	//read filing status
	infile >> fs;
	cout << fs << endl;

	//read number of Standard Deduction boxes checked
	infile >> sd;
	cout << sd << endl;

	//read Living Arrangement
	infile >> LA;
	cout << LA << endl;

	//read wages earned
	infile >> wages;
	cout << wages << endl;

	//read tax exempt interest
	infile >> taxExmp;
	cout << taxExmp << endl;

	//read taxable interest   
	infile >> taxInt;
	cout << taxInt << endl;

	//read qualified dividends
	infile >> qualDiv;
	cout << qualDiv << endl;

	//read ordinary dividends
	infile >> ordDiv;
	cout << ordDiv << endl;

	//read capital gains distribution (or loss) 
	infile >> capGain;
	cout << capGain << endl;

	//read taxable amount 
	infile >> taxAmt;
	cout << taxAmt << endl;

	//read social security benefits 
	infile >> ssb;
	cout << ssb << endl;

	//read adjustments to income
	infile >> adj2inc;
	cout << adj2inc << endl;

	//close file
	infile.close();
}

void InputData_BO::showInputFields()
{
	//File Header
	cout << "\n\n" << hdr << endl << endl;

	//Filing status
	cout << "Filing Status:            " << setw(10) << fs << endl;

	//Number of Standard Deduction boxes checked
	cout << "Boxes checked:            " << setw(10) << sd << endl;

	//Living Arrangement
	cout << "Living Arrangement:       " << setw(10) << LA << endl;

	//Set Output Stream
	cout << fixed << showpoint << setprecision(2);

	//Wages earned
	cout << "Wages earned:             " << setw(10) << wages << endl;

	//Tax exempt interest
	cout << "Tax Exempt Interest:      " << setw(10) << taxExmp << endl;

	//Taxable interest   
	cout << "Taxable Interest:         " << setw(10) << taxInt << endl;

	//Qualified dividends
	cout << "Qualified Dividends:      " << setw(10) << qualDiv << endl;

	//Ordinary dividends
	cout << "Ordinary Dividends:       " << setw(10) << ordDiv << endl;

	//Capital gains distribution (or loss)
	cout << "Capital Gains Distribution: " << setw(8) << capGain << endl;

	//Taxable amount 
	cout << "Taxable Amount:           " << setw(10) << taxAmt << endl;

	//Social security benefits 
	cout << "Social Security Benefits: " << setw(10) << ssb << endl;

	//Adjustments to income
	cout << "Adjustments To Income:    " << setw(10) << adj2inc << endl << endl;
}

double getTaxableAmount(InputData_BO testCase)
{
	// Enter Social Security Benefits
	double L1 = testCase.ssb;

	// Multiply line 1 by 50% (0.50).
	double L2 = L1 * 0.50;

	// Combine the amounts from Form 1040, lines 1, 2b, 3b, 3c,	and 4b
	double L3 = testCase.wages + testCase.taxInt + testCase.ordDiv + testCase.capGain + testCase.taxAmt;

	// Enter the amount, if any, from Form 1040, line 2a
	double L4 = testCase.taxExmp;

	// Combine lines 2, 3, and 4.
	double L5 = L2 + L3 + L4;

	// Enter Adjustments to Income.
	double L6 = testCase.adj2inc;

	// Subtract line 6 from line 5; if L5 is smaller than L6, return 0.
	double L7(0);
	if (L6 < L5) { L7 = L5 - L6; }
	else { return 0; }

	// Enter Living Arrangment. 
	double L8(0);
	bool skip(false);
	switch (testCase.fs)
	{
	case MARRIED: L8 = 32000; break;																// Married filing jointly
	case SINGLE: case HDHOUSEHOLD: case WIDOW: L8 = 25000; break;		// Single, head of household, qualifying widow(er), -or- married filing separately and you lived apart from your spouse for all of 2018,
	case MARRIEDFS: L8 = L7 * 0.85; skip = true; break;							// Married filing separately and you lived with your spouse	at any time in 2018.   SKIP lines 8 through 15;	multiply line 7 by 85% (0.85) and enter the result on line 16.   Then, go to line 17.
	}

	// If line 8 is smaller than line 7, Subtract line 8 from line 7, otherwise enter -0- on Form 1040, line 5b.
	double L9(0);
	if (L8 < L7) { L9 = L7 - L8; }
	else { return 0; }

	// Enter Living Arrangment. 
	double L10(0);
	switch (testCase.LA)
	{
	case 1: L10 = 12000; break;
	case 0: case 2: case 3: L10 = 9000; break;
	}

	// Subtract line 10 from line 9. If zero or less, enter -0-.
	double L11 = L9 - L10;
	L11 = (L11 <= 0 ? 0 : L11);

	// Enter the smaller of line 9 or line 10.
	double L12 = (L9 < L10 ? L9 : L10);

	// Enter one - half of line 12.
	double L13 = L12 * .5;

	// Enter the smaller of line 2 or line 13.
	double L14 = (L2 < L13 ? L2 : L13);

	// Multiply line 11 by 85% (0.85); if line 11 is zero, enter - 0 - (0 * .85 = 0...).
	double L15 = L11 * .85;

	// Add lines 14 and 15
	double L16 = (skip == false ? L14 + L15 : L8);

	// Multiply line 1 by 85% (0.85).
	double L17 = L1 * .85;

	// Enter the smaller of line 16 or line 17.
	double L18 = (L16 < L17 ? L16 : L17);

	return L18;
}