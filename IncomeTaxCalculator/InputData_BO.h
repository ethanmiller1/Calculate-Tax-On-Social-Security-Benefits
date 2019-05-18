// InputData_BO.h

#ifndef INPUT_DATA_BO
#define INPUT_DATA_BO

#include <string>
using namespace std;

struct InputData_BO
{
	string   hdr;        // File heading
	int      fs;         // Filing status
	double   sd;         // Standard deduction (boxes checked)
	int      LA;         // Living Arrangement {0,1,2,3} 
	double   wages;      // Wages
	double 	 taxExmp;    // Tax exempt interest
	double 	 taxInt;     // Taxable interest   
	double 	 qualDiv;    // Qualified dividends
	double 	 ordDiv;     // Ordinary dividends
	double 	 capGain;    // Capital gains distribution (or loss) 
	double   taxAmt;     // Taxable amount (form 1040 4b)
	double 	 ssb;        // Social security benefits 
	double 	 adj2inc;    // Adjustments to income

	InputData_BO(const string filename);   //constructor

	void showInputFields();               //output method
};
double getTaxableAmount(InputData_BO);
#endif