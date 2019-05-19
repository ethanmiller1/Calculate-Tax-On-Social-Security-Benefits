#pragma once

#include "InputData_BO.h"

namespace IncomeTaxCalculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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






	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

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
			this->toolStripSplitButton1->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripSplitButton1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->importFileToolStripMenuItem,
					this->exportDataToFileToolStripMenuItem
			});
			this->toolStripSplitButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripSplitButton1.Image")));
			this->toolStripSplitButton1->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripSplitButton1->Name = L"toolStripSplitButton1";
			this->toolStripSplitButton1->Size = System::Drawing::Size(32, 22);
			this->toolStripSplitButton1->Text = L"toolStripSplitButton1";
			// 
			// importFileToolStripMenuItem
			// 
			this->importFileToolStripMenuItem->Name = L"importFileToolStripMenuItem";
			this->importFileToolStripMenuItem->Size = System::Drawing::Size(189, 22);
			this->importFileToolStripMenuItem->Text = L"Import Data From File";
			// 
			// exportDataToFileToolStripMenuItem
			// 
			this->exportDataToFileToolStripMenuItem->Name = L"exportDataToFileToolStripMenuItem";
			this->exportDataToFileToolStripMenuItem->Size = System::Drawing::Size(189, 22);
			this->exportDataToFileToolStripMenuItem->Text = L"Export Data To File";
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
	// Create an instance of the InputData_BO struct.
	InputData_BO testCase("testCase1.txt");

	// Check filing status.
	if (single->Checked) { testCase.fs = SINGLE; }
	else if (married->Checked) { testCase.fs = MARRIED; }
	else if (marriedfs->Checked) { testCase.fs = MARRIEDFS; }
	else if (widow->Checked) { testCase.fs = WIDOW; }
	else if (hdhousehold->Checked) { testCase.fs = HDHOUSEHOLD; }

	// Create variable to store how boxes checked for standard deduction.
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

	// Assign the form values to the struct elements.
	testCase.wages = Convert::ToInt32(wages->Text);
	testCase.taxExmp = Convert::ToInt32(taxExmp->Text);
	testCase.taxInt = Convert::ToInt32(taxInt->Text);
	testCase.qualDiv = Convert::ToInt32(qualDiv->Text);
	testCase.ordDiv = Convert::ToInt32(ordDiv->Text);
	testCase.capGain = Convert::ToInt32(capGain->Text);
	testCase.taxAmt = Convert::ToInt32(taxAmt->Text);
	testCase.ssb = Convert::ToInt32(ssb->Text);
	testCase.adj2inc = Convert::ToInt32(adj2inc->Text);

	MessageBox::Show
	(
		"Filing status: " + testCase.fs + "\n"
		"Standard deduction: " + testCase.sd + "\n"
		"Living Arrangement: " + "\n"
		"Wages: " + testCase.wages + 
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
};
}