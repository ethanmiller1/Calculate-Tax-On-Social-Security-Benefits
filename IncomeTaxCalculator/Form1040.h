#pragma once

#include "InputData_BO.h"
#include <msclr\marshal_cppstd.h>
#include <fstream>
#include <string>
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

// Validate that user input is numeric.
int validateField(System::Windows::Forms::TextBox^ textBox)
{
	// Declare variable to hold the textbox value.
	int value(0);

	// If textbox is empty, assign its value to zero.
	if (textBox->Text->Length == 0)
	{
		value = 0;
	}
	// Check that input is a numeric value.
	else if (System::Text::RegularExpressions::Regex::IsMatch(textBox->Text,
		"^[0-9]*$"))
	{
		value = Convert::ToInt32(textBox->Text);
	}
	// If textbox contains non-numeric characters, alert the user.
	else
	{
		MessageBox::Show("Must be a number");
	}

	return value;
}

// Declare function to split file name.
string SplitFilename(const std::string& str)
{
	size_t found = str.find_last_of("/\\");
	string path = str.substr(0, found);
	string file = str.substr(found + 1);
	return file;
}

namespace IncomeTaxCalculator {

	

	/// <summary>
	/// Summary for Form1040
	/// </summary>
	public ref class Form1040 : public System::Windows::Forms::Form
	{
	public:
		Form1040(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1040()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^  incomeTaxToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  qualifiedDividendsTaxToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  socialSecurityBenefitsTaxToolStripMenuItem;
	private: System::Windows::Forms::ToolStrip^  toolStrip1;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  wages;

	private: System::Windows::Forms::ToolStripSplitButton^  toolStripSplitButton1;
	private: System::Windows::Forms::ToolStripMenuItem^  importFileToolStripMenuItem;
	private: System::Windows::Forms::TextBox^  taxExmp;



	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  taxInt;

	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  qualDiv;

	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  ordDiv;

	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  capGain;

	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  taxAmt;

	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  ssb;

	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TextBox^  adj2inc;

	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Button^  submit;
























	private: System::Windows::Forms::ToolStripMenuItem^  exportDataToFileToolStripMenuItem;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::RadioButton^  hdhousehold;
	private: System::Windows::Forms::RadioButton^  marriedfs;
	private: System::Windows::Forms::RadioButton^  widow;
	private: System::Windows::Forms::RadioButton^  single;
	private: System::Windows::Forms::RadioButton^  married;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::CheckBox^  sblind;
	private: System::Windows::Forms::CheckBox^  sover65;
	private: System::Windows::Forms::CheckBox^  blind;
	private: System::Windows::Forms::CheckBox^  over65;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::SaveFileDialog^  saveFileDialog1;



	private: System::ComponentModel::IContainer^  components;






	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1040::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->incomeTaxToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->qualifiedDividendsTaxToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->socialSecurityBenefitsTaxToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->toolStripSplitButton1 = (gcnew System::Windows::Forms::ToolStripSplitButton());
			this->importFileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exportDataToFileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->wages = (gcnew System::Windows::Forms::TextBox());
			this->taxExmp = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->taxInt = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->qualDiv = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->ordDiv = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->capGain = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->taxAmt = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->ssb = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->adj2inc = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->submit = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->hdhousehold = (gcnew System::Windows::Forms::RadioButton());
			this->marriedfs = (gcnew System::Windows::Forms::RadioButton());
			this->widow = (gcnew System::Windows::Forms::RadioButton());
			this->single = (gcnew System::Windows::Forms::RadioButton());
			this->married = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->sblind = (gcnew System::Windows::Forms::CheckBox());
			this->sover65 = (gcnew System::Windows::Forms::CheckBox());
			this->blind = (gcnew System::Windows::Forms::CheckBox());
			this->over65 = (gcnew System::Windows::Forms::CheckBox());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->menuStrip1->SuspendLayout();
			this->toolStrip1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->incomeTaxToolStripMenuItem,
					this->qualifiedDividendsTaxToolStripMenuItem, this->socialSecurityBenefitsTaxToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(443, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// incomeTaxToolStripMenuItem
			// 
			this->incomeTaxToolStripMenuItem->Name = L"incomeTaxToolStripMenuItem";
			this->incomeTaxToolStripMenuItem->Size = System::Drawing::Size(79, 20);
			this->incomeTaxToolStripMenuItem->Text = L"Income Tax";
			// 
			// qualifiedDividendsTaxToolStripMenuItem
			// 
			this->qualifiedDividendsTaxToolStripMenuItem->Name = L"qualifiedDividendsTaxToolStripMenuItem";
			this->qualifiedDividendsTaxToolStripMenuItem->Size = System::Drawing::Size(142, 20);
			this->qualifiedDividendsTaxToolStripMenuItem->Text = L"Qualified Dividends Tax";
			// 
			// socialSecurityBenefitsTaxToolStripMenuItem
			// 
			this->socialSecurityBenefitsTaxToolStripMenuItem->Name = L"socialSecurityBenefitsTaxToolStripMenuItem";
			this->socialSecurityBenefitsTaxToolStripMenuItem->Size = System::Drawing::Size(160, 20);
			this->socialSecurityBenefitsTaxToolStripMenuItem->Text = L"Social Security Benefits Tax";
			// 
			// toolStrip1
			// 
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->toolStripSplitButton1 });
			this->toolStrip1->Location = System::Drawing::Point(0, 24);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(443, 25);
			this->toolStrip1->TabIndex = 1;
			this->toolStrip1->Text = L"toolStrip1";
			// 
			// toolStripSplitButton1
			// 
			this->toolStripSplitButton1->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->toolStripSplitButton1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->importFileToolStripMenuItem,
					this->exportDataToFileToolStripMenuItem
			});
			this->toolStripSplitButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripSplitButton1.Image")));
			this->toolStripSplitButton1->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripSplitButton1->Name = L"toolStripSplitButton1";
			this->toolStripSplitButton1->Size = System::Drawing::Size(41, 22);
			this->toolStripSplitButton1->Text = L"File";
			// 
			// importFileToolStripMenuItem
			// 
			this->importFileToolStripMenuItem->Name = L"importFileToolStripMenuItem";
			this->importFileToolStripMenuItem->Size = System::Drawing::Size(189, 22);
			this->importFileToolStripMenuItem->Text = L"Import Data From File";
			this->importFileToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1040::importFileToolStripMenuItem_Click);
			// 
			// exportDataToFileToolStripMenuItem
			// 
			this->exportDataToFileToolStripMenuItem->Name = L"exportDataToFileToolStripMenuItem";
			this->exportDataToFileToolStripMenuItem->Size = System::Drawing::Size(189, 22);
			this->exportDataToFileToolStripMenuItem->Text = L"Export Data To File";
			this->exportDataToFileToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1040::exportDataToFileToolStripMenuItem_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(97, 75);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(72, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Enter Wages:";
			// 
			// wages
			// 
			this->wages->Location = System::Drawing::Point(282, 72);
			this->wages->Name = L"wages";
			this->wages->Size = System::Drawing::Size(100, 20);
			this->wages->TabIndex = 3;
			this->wages->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1040::wages_KeyPress);
			// 
			// taxExmp
			// 
			this->taxExmp->Location = System::Drawing::Point(282, 98);
			this->taxExmp->Name = L"taxExmp";
			this->taxExmp->Size = System::Drawing::Size(100, 20);
			this->taxExmp->TabIndex = 5;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(97, 101);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(132, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Enter Tax Exempt Interest:";
			// 
			// taxInt
			// 
			this->taxInt->Location = System::Drawing::Point(282, 124);
			this->taxInt->Name = L"taxInt";
			this->taxInt->Size = System::Drawing::Size(100, 20);
			this->taxInt->TabIndex = 7;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(97, 127);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(114, 13);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Enter Taxable Interest:";
			// 
			// qualDiv
			// 
			this->qualDiv->Location = System::Drawing::Point(282, 150);
			this->qualDiv->Name = L"qualDiv";
			this->qualDiv->Size = System::Drawing::Size(100, 20);
			this->qualDiv->TabIndex = 9;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(97, 153);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(129, 13);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Enter Qualified Dividends:";
			// 
			// ordDiv
			// 
			this->ordDiv->Location = System::Drawing::Point(282, 176);
			this->ordDiv->Name = L"ordDiv";
			this->ordDiv->Size = System::Drawing::Size(100, 20);
			this->ordDiv->TabIndex = 11;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(97, 179);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(127, 13);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Enter Ordinary Dividends:";
			// 
			// capGain
			// 
			this->capGain->Location = System::Drawing::Point(282, 202);
			this->capGain->Name = L"capGain";
			this->capGain->Size = System::Drawing::Size(100, 20);
			this->capGain->TabIndex = 13;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(97, 205);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(166, 13);
			this->label6->TabIndex = 12;
			this->label6->Text = L"Capital Gains Distribution (or loss):";
			// 
			// taxAmt
			// 
			this->taxAmt->Location = System::Drawing::Point(282, 228);
			this->taxAmt->Name = L"taxAmt";
			this->taxAmt->Size = System::Drawing::Size(100, 20);
			this->taxAmt->TabIndex = 15;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(97, 231);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(115, 13);
			this->label7->TabIndex = 14;
			this->label7->Text = L"Enter Taxable Amount:";
			// 
			// ssb
			// 
			this->ssb->Location = System::Drawing::Point(282, 254);
			this->ssb->Name = L"ssb";
			this->ssb->Size = System::Drawing::Size(100, 20);
			this->ssb->TabIndex = 17;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(97, 257);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(149, 13);
			this->label8->TabIndex = 16;
			this->label8->Text = L"Enter Social Security Benefits:";
			// 
			// adj2inc
			// 
			this->adj2inc->Location = System::Drawing::Point(282, 280);
			this->adj2inc->Name = L"adj2inc";
			this->adj2inc->Size = System::Drawing::Size(100, 20);
			this->adj2inc->TabIndex = 19;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(97, 283);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(145, 13);
			this->label9->TabIndex = 18;
			this->label9->Text = L"Enter Adjustments to Income:";
			// 
			// submit
			// 
			this->submit->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->submit->ForeColor = System::Drawing::Color::Snow;
			this->submit->Location = System::Drawing::Point(282, 615);
			this->submit->Name = L"submit";
			this->submit->Size = System::Drawing::Size(100, 33);
			this->submit->TabIndex = 20;
			this->submit->Text = L"OK";
			this->submit->UseVisualStyleBackColor = false;
			this->submit->Click += gcnew System::EventHandler(this, &Form1040::button1_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->hdhousehold);
			this->groupBox1->Controls->Add(this->marriedfs);
			this->groupBox1->Controls->Add(this->widow);
			this->groupBox1->Controls->Add(this->single);
			this->groupBox1->Controls->Add(this->married);
			this->groupBox1->Location = System::Drawing::Point(91, 309);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(291, 143);
			this->groupBox1->TabIndex = 33;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Filing Status:";
			// 
			// hdhousehold
			// 
			this->hdhousehold->AutoSize = true;
			this->hdhousehold->Location = System::Drawing::Point(24, 111);
			this->hdhousehold->Name = L"hdhousehold";
			this->hdhousehold->Size = System::Drawing::Size(210, 17);
			this->hdhousehold->TabIndex = 31;
			this->hdhousehold->TabStop = true;
			this->hdhousehold->Text = L"Head of Household (e.g. Single Parent)";
			this->hdhousehold->UseVisualStyleBackColor = true;
			// 
			// marriedfs
			// 
			this->marriedfs->AutoSize = true;
			this->marriedfs->Location = System::Drawing::Point(24, 88);
			this->marriedfs->Name = L"marriedfs";
			this->marriedfs->Size = System::Drawing::Size(146, 17);
			this->marriedfs->TabIndex = 30;
			this->marriedfs->TabStop = true;
			this->marriedfs->Text = L"Married (Filing Separately)";
			this->marriedfs->UseVisualStyleBackColor = true;
			// 
			// widow
			// 
			this->widow->AutoSize = true;
			this->widow->Location = System::Drawing::Point(24, 65);
			this->widow->Name = L"widow";
			this->widow->Size = System::Drawing::Size(73, 17);
			this->widow->TabIndex = 29;
			this->widow->TabStop = true;
			this->widow->Text = L"Widow(er)";
			this->widow->UseVisualStyleBackColor = true;
			// 
			// single
			// 
			this->single->AutoSize = true;
			this->single->Location = System::Drawing::Point(24, 19);
			this->single->Name = L"single";
			this->single->Size = System::Drawing::Size(54, 17);
			this->single->TabIndex = 28;
			this->single->TabStop = true;
			this->single->Text = L"Single";
			this->single->UseVisualStyleBackColor = true;
			this->single->CheckedChanged += gcnew System::EventHandler(this, &Form1040::single_CheckedChanged);
			// 
			// married
			// 
			this->married->AutoSize = true;
			this->married->Location = System::Drawing::Point(24, 42);
			this->married->Name = L"married";
			this->married->Size = System::Drawing::Size(60, 17);
			this->married->TabIndex = 27;
			this->married->TabStop = true;
			this->married->Text = L"Married";
			this->married->UseVisualStyleBackColor = true;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->sblind);
			this->groupBox2->Controls->Add(this->sover65);
			this->groupBox2->Controls->Add(this->blind);
			this->groupBox2->Controls->Add(this->over65);
			this->groupBox2->Location = System::Drawing::Point(91, 473);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(291, 116);
			this->groupBox2->TabIndex = 34;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Standard Deduction:";
			// 
			// sblind
			// 
			this->sblind->AutoSize = true;
			this->sblind->Location = System::Drawing::Point(24, 88);
			this->sblind->Name = L"sblind";
			this->sblind->Size = System::Drawing::Size(97, 17);
			this->sblind->TabIndex = 35;
			this->sblind->Text = L"Spouse is blind";
			this->sblind->UseVisualStyleBackColor = true;
			// 
			// sover65
			// 
			this->sover65->AutoSize = true;
			this->sover65->Location = System::Drawing::Point(24, 65);
			this->sover65->Name = L"sover65";
			this->sover65->Size = System::Drawing::Size(220, 17);
			this->sover65->TabIndex = 34;
			this->sover65->Text = L"Spouse was born before January 2, 1954";
			this->sover65->UseVisualStyleBackColor = true;
			// 
			// blind
			// 
			this->blind->AutoSize = true;
			this->blind->Location = System::Drawing::Point(24, 42);
			this->blind->Name = L"blind";
			this->blind->Size = System::Drawing::Size(88, 17);
			this->blind->TabIndex = 33;
			this->blind->Text = L"You are blind";
			this->blind->UseVisualStyleBackColor = true;
			// 
			// over65
			// 
			this->over65->AutoSize = true;
			this->over65->Location = System::Drawing::Point(24, 19);
			this->over65->Name = L"over65";
			this->over65->Size = System::Drawing::Size(207, 17);
			this->over65->TabIndex = 32;
			this->over65->Text = L"You were born before January 2, 1954";
			this->over65->UseVisualStyleBackColor = true;
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// Form1040
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(443, 664);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->submit);
			this->Controls->Add(this->adj2inc);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->ssb);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->taxAmt);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->capGain);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->ordDiv);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->qualDiv);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->taxInt);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->taxExmp);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->wages);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->toolStrip1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Form1040";
			this->Text = L"Form1040";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	// TODO: Move code to a function in InputData_BO and invoke it here.
	// Create an instance of the InputData_BO struct.
	// TODO: Instantiate InputData_BO without using the constructor.
	InputData_BO testCase("testCase1.txt");

	// Get filing status from which radio button the user selects.
	if (single->Checked) { testCase.fs = SINGLE; }
	else if (married->Checked) { testCase.fs = MARRIED; }
	else if (marriedfs->Checked) { testCase.fs = MARRIEDFS; }
	else if (widow->Checked) { testCase.fs = WIDOW; }
	else if (hdhousehold->Checked) { testCase.fs = HDHOUSEHOLD; }

	// Create variable to store how many boxes checked for standard deduction.
	int boxes_checked(0);

	// Add 1 to boxes_checked for every checkbox that is checked.
	if (over65->Checked) { boxes_checked += 1; }
	if (blind->Checked) { boxes_checked += 1; }
	if (sover65->Checked) { boxes_checked += 1; }
	if (sblind->Checked) { boxes_checked += 1; }
	
	// Standard Deduction if single.
	if (testCase.fs == SINGLE)
	{
		switch (boxes_checked)
		{
		case 0: testCase.sd = 12000; break;
		case 1: testCase.sd = 13600; break;
		case 2: testCase.sd = 15200; break;
		}
	}
	// Standard Deduction if married.
	else
	{
		switch (boxes_checked)
		{
		case 0: testCase.sd = 24000; break;
		case 1: testCase.sd = 25300; break;
		case 2: testCase.sd = 26600; break;
		case 3: testCase.sd = 27900; break;
		case 4: testCase.sd = 29200; break;
		}
	}

	// Living Arrangement.
	switch (testCase.fs)
	{
	case SINGLE: case HDHOUSEHOLD: testCase.LA = 0; break;
	case MARRIED: testCase.LA = 1; break;
	case MARRIEDFS: testCase.LA = 2; break;
	case 6: testCase.LA = 3; break;
	}

	// Assign user textbox values to the struct elements.
	// TODO: Create a collection of textboxes and a parellel array of struct elements to iterate through them with a for loop.
	testCase.wages = validateField(wages);
	testCase.taxExmp = validateField(taxExmp);
	testCase.taxInt = validateField(taxInt);
	testCase.qualDiv = validateField(qualDiv);
	testCase.ordDiv = validateField(ordDiv);
	testCase.capGain = validateField(capGain);
	testCase.taxAmt = validateField(taxAmt);
	testCase.ssb = validateField(ssb);
	testCase.adj2inc = validateField(adj2inc);

	// Display the struct elements to ensure they were set correctly.
	MessageBox::Show
	(
		"Filing status: " + testCase.fs + "\n"
		"Standard deduction: " + testCase.sd + "\n"
		"Living Arrangement: " + testCase.LA +"\n"
		"Wages: " + testCase.wages + "\n"
		"Tax exempt interest: " + testCase.taxExmp + "\n"
		"Taxable interest: " + testCase.taxInt + "\n"
		"Qualified dividends: " + testCase.qualDiv + "\n"
		"Ordinary dividends: " + testCase.ordDiv + "\n"
		"Capital gains distribution (or loss): " + testCase.capGain + "\n"
		"Taxable amount: " + testCase.taxAmt + "\n"
		"Social security benefits: " + testCase.ssb + "\n"
		"Adjustments to income: " + testCase.adj2inc
	);
}
private: System::Void single_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	// Disable spouse deduction checkbox if single.
	if (single->Checked)
	{
		this->sover65->Checked = false;
		this->sblind->Checked = false;
		this->sover65->Enabled = false;
		this->sblind->Enabled = false;
		
	}
	// Enable spouse deduction checkbox if not single.
	else
	{
		this->sover65->Enabled = true;
		this->sblind->Enabled = true;
	}
}
private: System::Void wages_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
		// Accept only digits and the Backspace character.
		if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08)
			e->Handled = true;
}
private: System::Void importFileToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	// Set initial browse directory and show only txt files.
	// TODO: Make path relative.
	openFileDialog1->InitialDirectory = "A:\\xampp\\htdocs\\C++\\IncomeTaxCalculator\\IncomeTaxCalculator";
	openFileDialog1->Filter = "txt files (*.txt)|*.txt";
	openFileDialog1->FilterIndex = 2;
	openFileDialog1->RestoreDirectory = true;
	
	// Prompt the user to select file to use.
	openFileDialog1->ShowDialog();

	// Convert file name system::string^ to std::string to pass in as an InputData_BO argument.
	std::string inpath = msclr::interop::marshal_as<std::string>(openFileDialog1->SafeFileName);
	string infile = inpath;

	// Create a struct object from values in a text file using the struct constructor.
	InputData_BO testCase(infile);

	// Set textbox fields to struct values.
	wages->Text = testCase.wages.ToString();
	taxExmp->Text = testCase.taxExmp.ToString();
	taxInt->Text = testCase.taxInt.ToString();
	qualDiv->Text = testCase.qualDiv.ToString();
	ordDiv->Text = testCase.ordDiv.ToString();
	capGain->Text = testCase.capGain.ToString();
	taxAmt->Text = testCase.taxAmt.ToString();
	ssb->Text = testCase.ssb.ToString();
	adj2inc->Text = testCase.adj2inc.ToString();

	// Set Form 1040 filing status to struct value.
	switch (testCase.fs)
	{
	case SINGLE: single->Checked = true; break;
	case MARRIED: married->Checked = true; break;
	case MARRIEDFS: marriedfs->Checked = true; break;
	case WIDOW: widow->Checked = true; break;
	case HDHOUSEHOLD: hdhousehold->Checked = true; break;
	}
}
private: System::Void exportDataToFileToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	// Open save file dialog and filter by txt files.
	saveFileDialog1->Filter = "txt files (*.txt)|*.txt";
	saveFileDialog1->OverwritePrompt;
	saveFileDialog1->ShowDialog();
	saveFileDialog1->Title = "Save a text file";

	// Get the file path.
	std::string outpath = msclr::interop::marshal_as<std::string>(saveFileDialog1->FileName);
	string ofile = outpath;

	// Splice file name from file path.
	string outfile = SplitFilename(ofile);

	// 
	ofstream textfile;

	// Create the textfile.
	textfile.open(outfile);

	//*Export data to txt file.
	// Filing Status.
	int fs(0);
	if (single->Checked) { fs = SINGLE; }
	else if (married->Checked) { fs = MARRIED; }
	else if (marriedfs->Checked) { fs = MARRIEDFS; }
	else if (widow->Checked) { fs = WIDOW; }
	else if (hdhousehold->Checked) { fs = HDHOUSEHOLD; }

	// Create variable to store how many boxes checked for standard deduction.
	int boxes_checked(0);

	// Add 1 to boxes_checked for every checkbox that is checked.
	if (over65->Checked) { boxes_checked += 1; }
	if (blind->Checked) { boxes_checked += 1; }
	if (sover65->Checked) { boxes_checked += 1; }
	if (sblind->Checked) { boxes_checked += 1; }

	// Living Arrangement.
	int LA(0);
	switch (fs)
	{
	case SINGLE: case HDHOUSEHOLD: LA = 0; break;
	case MARRIED: LA = 1; break;
	case MARRIEDFS: LA = 2; break;
	case 6: LA = 3; break;
	}

	// Write to textfile.
	textfile << outfile << endl <<
	fs << endl <<
	boxes_checked << endl <<
	LA << endl <<
	validateField(wages) << endl <<
	validateField(wages) << endl <<
	validateField(taxExmp) << endl <<
	validateField(taxInt) << endl <<
	validateField(qualDiv) << endl <<
	validateField(ordDiv) << endl <<
	validateField(capGain) << endl <<
	validateField(taxAmt) << endl <<
	validateField(ssb) << endl <<
	validateField(adj2inc) << endl;
}
};
}