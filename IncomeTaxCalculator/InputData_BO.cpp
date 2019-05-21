#include <iostream>
#include <fstream>
#include <string>
#include "constants.h"
#include "InputData_BO.h"
using namespace std;
using namespace System::Windows::Forms;

InputData_BO::InputData_BO(const string filename)
{
	// Create input file object.
	ifstream infile;

	// Create file buffer and input stream/
	infile.open(filename.c_str());

	// Get the text file header (first line of text).
	getline(infile, hdr);

	// Get the input values.
	infile >> fs;
	infile >> sd;
	infile >> LA;
	infile >> wages;
	infile >> taxExmp;
	infile >> taxInt;
	infile >> qualDiv;
	infile >> ordDiv;
	infile >> capGain;
	infile >> taxAmt;
	infile >> ssb;
	infile >> adj2inc;

	// Close file.
	infile.close();
}

void InputData_BO::showInputFields()
{
	// Display input variables and calculated tax.
	MessageBox::Show
	(
		"Filing status: " + fs + "\n"
		"Standard deduction: $" + sd + "\n"
		"Living arrangement: " + LA + "\n"
		"Wages: $" + wages + "\n"
		"Tax exempt interest: $" + taxExmp + "\n"
		"Taxable interest: $" + taxInt + "\n"
		"Qualified dividends: $" + qualDiv + "\n"
		"Ordinary dividends: $" + ordDiv + "\n"
		"Capital gains distribution: $" + capGain + "\n"
		"Taxable amount: $" + taxAmt + "\n"
		"Social security benefits: $" + ssb + "\n"
		"Adjustments to income: $" + adj2inc + "\n\n"
		"Social security benefits tax due: $" + getTaxableAmount()
	);
}

// Perform calculations for the Social Security Benefits Worksheet for Form 1040.
double InputData_BO::getTaxableAmount()
{
	// Declae an array to hold all the line calculations. Let L[0] represent the number of items in the array.
	double L[19] = { 19 };

	// Enter Social Security Benefits
	L[1] = ssb;

	// Multiply line 1 by 50% (0.50).
	L[2] = L[1] * 0.50;

	// Combine the amounts from Form 1040, lines 1, 2b, 3b, 3c,	and 4b
	L[3] = wages + taxInt + ordDiv + capGain + taxAmt;

	// Enter the amount, if any, from Form 1040, line 2a
	L[4] = taxExmp;

	// Combine lines 2, 3, and 4.
	L[5] = L[2] + L[3] + L[4];

	// Enter Adjustments to Income.
	L[6] = adj2inc;

	// Subtract line 6 from line 5; if L[5] is smaller than L[6], return 0.
	L[7] = 0;
	if (L[6] < L[5]) { L[7] = L[5] - L[6]; }
	else { return 0; }

	// Enter Living Arrangment. 
	L[8] = 0;
	bool skip(false);
	switch (fs)
	{
	case MARRIED: L[8] = 32000; break;                                   // Married filing jointly
	case SINGLE: case HDHOUSEHOLD: case WIDOW: L[8] = 25000; break;		 // Single, head of household, qualifying widow(er), -or- married filing separately and you lived apart from your spouse for all of 2018,
	case MARRIEDFS: L[8] = L[7] * 0.85; skip = true; break;              // Married filing separately and you lived with your spouse	at any time in 2018.   SKIP lines 8 through 15;	multiply line 7 by 85% (0.85) and enter the result on line 16.   Then, go to line 17.
	}

	// If line 8 is smaller than line 7, Subtract line 8 from line 7, otherwise enter -0- on Form 1040, line 5b.
	L[9] = 0;
	if (L[8] < L[7]) { L[9] = L[7] - L[8]; }
	else { return 0; }

	// Enter Living Arrangment. 
	L[10] = 0;
	switch (LA)
	{
	case 1: L[10] = 12000; break;
	case 0: case 2: case 3: L[10] = 9000; break;
	}

	// Subtract line 10 from line 9. If zero or less, enter -0-.
	L[11] = L[9] - L[10];
	L[11] = (L[11] <= 0 ? 0 : L[11]);

	// Enter the smaller of line 9 or line 10.
	L[12] = (L[9] < L[10] ? L[9] : L[10]);

	// Enter one - half of line 12.
	L[13] = L[12] * .5;

	// Enter the smaller of line 2 or line 13.
	L[14] = (L[2] < L[13] ? L[2] : L[13]);

	// Multiply line 11 by 85% (0.85); if line 11 is zero, enter - 0 - (0 * .85 = 0...).
	L[15] = L[11] * .85;

	// Add lines 14 and 15
	L[16] = (skip == false ? L[14] + L[15] : L[8]);

	// Multiply line 1 by 85% (0.85).
	L[17] = L[1] * .85;

	// Enter the smaller of line 16 or line 17.
	L[18] = (L[16] < L[17] ? L[16] : L[17]);

	return L[18];
}