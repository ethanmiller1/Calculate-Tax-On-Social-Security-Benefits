#include <iostream>
#include "InputData_BO.h"
#include "constants.h"
#include "Form1040.h"

using namespace std;
using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew IncomeTaxCalculator::Form1040());
	return 0;
}