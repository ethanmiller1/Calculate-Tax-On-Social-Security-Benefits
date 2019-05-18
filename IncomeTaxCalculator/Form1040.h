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
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::ToolStripSplitButton^  toolStripSplitButton1;
	private: System::Windows::Forms::ToolStripMenuItem^  importFileToolStripMenuItem;


	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::Label^  label10;

	private: System::Windows::Forms::RadioButton^  radioButton3;
	private: System::Windows::Forms::RadioButton^  radioButton4;
	private: System::Windows::Forms::RadioButton^  radioButton5;

	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::CheckBox^  checkBox2;
	private: System::Windows::Forms::CheckBox^  checkBox3;
	private: System::Windows::Forms::CheckBox^  checkBox4;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::ToolStripMenuItem^  exportDataToFileToolStripMenuItem;



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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			this->toolStrip1->SuspendLayout();
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
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(282, 72);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 3;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(282, 98);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 5;
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
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(282, 124);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 7;
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
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(282, 150);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 9;
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
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(282, 176);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 20);
			this->textBox5->TabIndex = 11;
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
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(282, 202);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 20);
			this->textBox6->TabIndex = 13;
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
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(282, 228);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(100, 20);
			this->textBox7->TabIndex = 15;
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
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(282, 254);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(100, 20);
			this->textBox8->TabIndex = 17;
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
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(282, 280);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(100, 20);
			this->textBox9->TabIndex = 19;
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
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->button1->ForeColor = System::Drawing::Color::Snow;
			this->button1->Location = System::Drawing::Point(282, 525);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 33);
			this->button1->TabIndex = 20;
			this->button1->Text = L"OK";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form1040::button1_Click);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(243, 321);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(60, 17);
			this->radioButton1->TabIndex = 21;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Married";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(183, 321);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(54, 17);
			this->radioButton2->TabIndex = 22;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Single";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(97, 323);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(67, 13);
			this->label10->TabIndex = 23;
			this->label10->Text = L"Filing Status:";
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(183, 344);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(146, 17);
			this->radioButton3->TabIndex = 25;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"Married (Filing Separately)";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Location = System::Drawing::Point(309, 321);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(73, 17);
			this->radioButton4->TabIndex = 24;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"Widow(er)";
			this->radioButton4->UseVisualStyleBackColor = true;
			// 
			// radioButton5
			// 
			this->radioButton5->AutoSize = true;
			this->radioButton5->Location = System::Drawing::Point(183, 367);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(210, 17);
			this->radioButton5->TabIndex = 26;
			this->radioButton5->TabStop = true;
			this->radioButton5->Text = L"Head of Household (e.g. Single Parent)";
			this->radioButton5->UseVisualStyleBackColor = true;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(96, 422);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(207, 17);
			this->checkBox1->TabIndex = 28;
			this->checkBox1->Text = L"You were born before January 2, 1954";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(96, 445);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(88, 17);
			this->checkBox2->TabIndex = 29;
			this->checkBox2->Text = L"You are blind";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Location = System::Drawing::Point(96, 491);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(97, 17);
			this->checkBox3->TabIndex = 31;
			this->checkBox3->Text = L"Spouse is blind";
			this->checkBox3->UseVisualStyleBackColor = true;
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->Location = System::Drawing::Point(96, 468);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(220, 17);
			this->checkBox4->TabIndex = 30;
			this->checkBox4->Text = L"Spouse was born before January 2, 1954";
			this->checkBox4->UseVisualStyleBackColor = true;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(97, 396);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(105, 13);
			this->label11->TabIndex = 32;
			this->label11->Text = L"Standard Deduction:";
			// 
			// Form1040
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(443, 587);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->checkBox3);
			this->Controls->Add(this->checkBox4);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->radioButton5);
			this->Controls->Add(this->radioButton3);
			this->Controls->Add(this->radioButton4);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
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
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	String ^ firstName = textBox1->Text;
	String ^ lastName = textBox2->Text;
	MessageBox::Show("Hello " + firstName + " " + lastName + "! How are you?");
}
};
}
