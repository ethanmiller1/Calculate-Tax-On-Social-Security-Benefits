#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <iomanip>
#include "InputData_BO.h"
#include "constants.h"
#include "Form1040.h"

using namespace std;
using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main()
{
	// Create an array to hold 4 file names.
	string testCases[4] = { "testCase1.txt", "testCase2.txt", "testCase3.txt", "testCase4.txt" };

	for (size_t i = 0; i != 4; i++)
	{
		// Print a header to identify test cases.
		cout << "==========================================================================================\nTest Case " << i + 1 << "\n==========================================================================================\n\n";

		// Instantiate an InputData_BO object for each test case using the struct constructor (taking in the name of a file, e.g. "example.txt").
		InputData_BO testCase(testCases[i]);

		// Display the input fields for each test case.
		testCase.showInputFields();

		// Display Line 18 from the Social Security Benefits Worksheet for each test case.
		cout << "Taxable Amount on SSB:    " << setw(10) << getTaxableAmount(testCase) << endl << endl << endl;
	}

	system("pause");
	return 0;
}