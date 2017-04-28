#pragma once
#include <math.h>
#include <msclr\marshal_cppstd.h>

namespace Calculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  MainDisplay;
	private: System::Windows::Forms::Button^  ModulusButton;
	private: System::Windows::Forms::Button^  SquareRootButton;
	private: System::Windows::Forms::Button^  SquareButton;
	private: System::Windows::Forms::Button^  DivideX_Button;
	private: System::Windows::Forms::Button^  ClearEntryButton;
	private: System::Windows::Forms::Button^  ClearButton;
	private: System::Windows::Forms::Button^  BackSpaceButton;
	private: System::Windows::Forms::Button^  DivisionButton;
	private: System::Windows::Forms::Button^  SevenButton;
	private: System::Windows::Forms::Button^  EightButton;
	private: System::Windows::Forms::Button^  NineButton;
	private: System::Windows::Forms::Button^  MultiplyButton;

	private: System::Windows::Forms::Button^  FourButton;
	private: System::Windows::Forms::Button^  OneButton;
	private: System::Windows::Forms::Button^  NegationButton;
	private: System::Windows::Forms::Button^  FiveButton;
	private: System::Windows::Forms::Button^  SixButton;
	private: System::Windows::Forms::Button^  SubtractionButton;
	private: System::Windows::Forms::Button^  TwoButton;
	private: System::Windows::Forms::Button^  ThreeButton;
	private: System::Windows::Forms::Button^  ZeroButton;
	private: System::Windows::Forms::Button^  AdditionButton;
	private: System::Windows::Forms::Button^  DecimalButton;
	private: System::Windows::Forms::Button^  EqualsButton;

	private: double StoredValue;
	private: char Operator = '?';
	private: bool equalsPressed = false;

	protected:


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
			this->MainDisplay = (gcnew System::Windows::Forms::TextBox());
			this->ModulusButton = (gcnew System::Windows::Forms::Button());
			this->SquareRootButton = (gcnew System::Windows::Forms::Button());
			this->SquareButton = (gcnew System::Windows::Forms::Button());
			this->DivideX_Button = (gcnew System::Windows::Forms::Button());
			this->ClearEntryButton = (gcnew System::Windows::Forms::Button());
			this->ClearButton = (gcnew System::Windows::Forms::Button());
			this->BackSpaceButton = (gcnew System::Windows::Forms::Button());
			this->DivisionButton = (gcnew System::Windows::Forms::Button());
			this->SevenButton = (gcnew System::Windows::Forms::Button());
			this->EightButton = (gcnew System::Windows::Forms::Button());
			this->NineButton = (gcnew System::Windows::Forms::Button());
			this->MultiplyButton = (gcnew System::Windows::Forms::Button());
			this->FourButton = (gcnew System::Windows::Forms::Button());
			this->OneButton = (gcnew System::Windows::Forms::Button());
			this->NegationButton = (gcnew System::Windows::Forms::Button());
			this->FiveButton = (gcnew System::Windows::Forms::Button());
			this->SixButton = (gcnew System::Windows::Forms::Button());
			this->SubtractionButton = (gcnew System::Windows::Forms::Button());
			this->TwoButton = (gcnew System::Windows::Forms::Button());
			this->ThreeButton = (gcnew System::Windows::Forms::Button());
			this->ZeroButton = (gcnew System::Windows::Forms::Button());
			this->AdditionButton = (gcnew System::Windows::Forms::Button());
			this->DecimalButton = (gcnew System::Windows::Forms::Button());
			this->EqualsButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// MainDisplay
			// 
			this->MainDisplay->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->MainDisplay->Location = System::Drawing::Point(12, 12);
			this->MainDisplay->Name = L"MainDisplay";
			this->MainDisplay->ReadOnly = true;
			this->MainDisplay->Size = System::Drawing::Size(258, 38);
			this->MainDisplay->TabIndex = 0;
			this->MainDisplay->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// ModulusButton
			// 
			this->ModulusButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ModulusButton->Location = System::Drawing::Point(12, 56);
			this->ModulusButton->Name = L"ModulusButton";
			this->ModulusButton->Size = System::Drawing::Size(60, 42);
			this->ModulusButton->TabIndex = 1;
			this->ModulusButton->Text = L"%";
			this->ModulusButton->UseVisualStyleBackColor = true;
			this->ModulusButton->Click += gcnew System::EventHandler(this, &MyForm::OperatorButton_Click);
			// 
			// SquareRootButton
			// 
			this->SquareRootButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SquareRootButton->Location = System::Drawing::Point(78, 56);
			this->SquareRootButton->Name = L"SquareRootButton";
			this->SquareRootButton->Size = System::Drawing::Size(60, 42);
			this->SquareRootButton->TabIndex = 2;
			this->SquareRootButton->Text = L"SQR";
			this->SquareRootButton->UseVisualStyleBackColor = true;
			this->SquareRootButton->Click += gcnew System::EventHandler(this, &MyForm::SquareRootButton_Click);
			// 
			// SquareButton
			// 
			this->SquareButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SquareButton->Location = System::Drawing::Point(144, 56);
			this->SquareButton->Name = L"SquareButton";
			this->SquareButton->Size = System::Drawing::Size(60, 42);
			this->SquareButton->TabIndex = 3;
			this->SquareButton->Text = L"x^2";
			this->SquareButton->UseVisualStyleBackColor = true;
			this->SquareButton->Click += gcnew System::EventHandler(this, &MyForm::SquareButton_Click);
			// 
			// DivideX_Button
			// 
			this->DivideX_Button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DivideX_Button->Location = System::Drawing::Point(210, 56);
			this->DivideX_Button->Name = L"DivideX_Button";
			this->DivideX_Button->Size = System::Drawing::Size(60, 42);
			this->DivideX_Button->TabIndex = 4;
			this->DivideX_Button->Text = L"1/x";
			this->DivideX_Button->UseVisualStyleBackColor = true;
			this->DivideX_Button->Click += gcnew System::EventHandler(this, &MyForm::DivideX_Button_Click);
			// 
			// ClearEntryButton
			// 
			this->ClearEntryButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ClearEntryButton->Location = System::Drawing::Point(12, 104);
			this->ClearEntryButton->Name = L"ClearEntryButton";
			this->ClearEntryButton->Size = System::Drawing::Size(60, 42);
			this->ClearEntryButton->TabIndex = 5;
			this->ClearEntryButton->Text = L"CE";
			this->ClearEntryButton->UseVisualStyleBackColor = true;
			this->ClearEntryButton->Click += gcnew System::EventHandler(this, &MyForm::ClearEntryButton_Click);
			// 
			// ClearButton
			// 
			this->ClearButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ClearButton->Location = System::Drawing::Point(78, 104);
			this->ClearButton->Name = L"ClearButton";
			this->ClearButton->Size = System::Drawing::Size(60, 42);
			this->ClearButton->TabIndex = 6;
			this->ClearButton->Text = L"C";
			this->ClearButton->UseVisualStyleBackColor = true;
			this->ClearButton->Click += gcnew System::EventHandler(this, &MyForm::ClearButton_Click);
			// 
			// BackSpaceButton
			// 
			this->BackSpaceButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BackSpaceButton->Location = System::Drawing::Point(144, 104);
			this->BackSpaceButton->Name = L"BackSpaceButton";
			this->BackSpaceButton->Size = System::Drawing::Size(60, 42);
			this->BackSpaceButton->TabIndex = 7;
			this->BackSpaceButton->Text = L"<-";
			this->BackSpaceButton->UseVisualStyleBackColor = true;
			this->BackSpaceButton->Click += gcnew System::EventHandler(this, &MyForm::BackSpaceButton_Click);
			// 
			// DivisionButton
			// 
			this->DivisionButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DivisionButton->Location = System::Drawing::Point(210, 104);
			this->DivisionButton->Name = L"DivisionButton";
			this->DivisionButton->Size = System::Drawing::Size(60, 42);
			this->DivisionButton->TabIndex = 8;
			this->DivisionButton->Text = L"/";
			this->DivisionButton->UseVisualStyleBackColor = true;
			this->DivisionButton->Click += gcnew System::EventHandler(this, &MyForm::OperatorButton_Click);
			// 
			// SevenButton
			// 
			this->SevenButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SevenButton->Location = System::Drawing::Point(12, 152);
			this->SevenButton->Name = L"SevenButton";
			this->SevenButton->Size = System::Drawing::Size(60, 42);
			this->SevenButton->TabIndex = 9;
			this->SevenButton->Text = L"7";
			this->SevenButton->UseVisualStyleBackColor = true;
			this->SevenButton->Click += gcnew System::EventHandler(this, &MyForm::NumberButton_Click);
			// 
			// EightButton
			// 
			this->EightButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->EightButton->Location = System::Drawing::Point(78, 152);
			this->EightButton->Name = L"EightButton";
			this->EightButton->Size = System::Drawing::Size(60, 42);
			this->EightButton->TabIndex = 10;
			this->EightButton->Text = L"8";
			this->EightButton->UseVisualStyleBackColor = true;
			this->EightButton->Click += gcnew System::EventHandler(this, &MyForm::NumberButton_Click);
			// 
			// NineButton
			// 
			this->NineButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NineButton->Location = System::Drawing::Point(144, 152);
			this->NineButton->Name = L"NineButton";
			this->NineButton->Size = System::Drawing::Size(60, 42);
			this->NineButton->TabIndex = 11;
			this->NineButton->Text = L"9";
			this->NineButton->UseVisualStyleBackColor = true;
			this->NineButton->Click += gcnew System::EventHandler(this, &MyForm::NumberButton_Click);
			// 
			// MultiplyButton
			// 
			this->MultiplyButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->MultiplyButton->Location = System::Drawing::Point(210, 152);
			this->MultiplyButton->Name = L"MultiplyButton";
			this->MultiplyButton->Size = System::Drawing::Size(60, 42);
			this->MultiplyButton->TabIndex = 12;
			this->MultiplyButton->Text = L"X";
			this->MultiplyButton->UseVisualStyleBackColor = true;
			this->MultiplyButton->Click += gcnew System::EventHandler(this, &MyForm::OperatorButton_Click);
			// 
			// FourButton
			// 
			this->FourButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FourButton->Location = System::Drawing::Point(12, 200);
			this->FourButton->Name = L"FourButton";
			this->FourButton->Size = System::Drawing::Size(60, 42);
			this->FourButton->TabIndex = 13;
			this->FourButton->Text = L"4";
			this->FourButton->UseVisualStyleBackColor = true;
			this->FourButton->Click += gcnew System::EventHandler(this, &MyForm::NumberButton_Click);
			// 
			// OneButton
			// 
			this->OneButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->OneButton->Location = System::Drawing::Point(12, 248);
			this->OneButton->Name = L"OneButton";
			this->OneButton->Size = System::Drawing::Size(60, 42);
			this->OneButton->TabIndex = 14;
			this->OneButton->Text = L"1";
			this->OneButton->UseVisualStyleBackColor = true;
			this->OneButton->Click += gcnew System::EventHandler(this, &MyForm::NumberButton_Click);
			// 
			// NegationButton
			// 
			this->NegationButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NegationButton->Location = System::Drawing::Point(12, 296);
			this->NegationButton->Name = L"NegationButton";
			this->NegationButton->Size = System::Drawing::Size(60, 42);
			this->NegationButton->TabIndex = 15;
			this->NegationButton->Text = L"+ -";
			this->NegationButton->UseVisualStyleBackColor = true;
			this->NegationButton->Click += gcnew System::EventHandler(this, &MyForm::NegationButton_Click);
			// 
			// FiveButton
			// 
			this->FiveButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FiveButton->Location = System::Drawing::Point(78, 200);
			this->FiveButton->Name = L"FiveButton";
			this->FiveButton->Size = System::Drawing::Size(60, 42);
			this->FiveButton->TabIndex = 16;
			this->FiveButton->Text = L"5";
			this->FiveButton->UseVisualStyleBackColor = true;
			this->FiveButton->Click += gcnew System::EventHandler(this, &MyForm::NumberButton_Click);
			// 
			// SixButton
			// 
			this->SixButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SixButton->Location = System::Drawing::Point(144, 200);
			this->SixButton->Name = L"SixButton";
			this->SixButton->Size = System::Drawing::Size(60, 42);
			this->SixButton->TabIndex = 17;
			this->SixButton->Text = L"6";
			this->SixButton->UseVisualStyleBackColor = true;
			this->SixButton->Click += gcnew System::EventHandler(this, &MyForm::NumberButton_Click);
			// 
			// SubtractionButton
			// 
			this->SubtractionButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SubtractionButton->Location = System::Drawing::Point(210, 200);
			this->SubtractionButton->Name = L"SubtractionButton";
			this->SubtractionButton->Size = System::Drawing::Size(60, 42);
			this->SubtractionButton->TabIndex = 18;
			this->SubtractionButton->Text = L"-";
			this->SubtractionButton->UseVisualStyleBackColor = true;
			this->SubtractionButton->Click += gcnew System::EventHandler(this, &MyForm::OperatorButton_Click);
			// 
			// TwoButton
			// 
			this->TwoButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TwoButton->Location = System::Drawing::Point(78, 248);
			this->TwoButton->Name = L"TwoButton";
			this->TwoButton->Size = System::Drawing::Size(60, 42);
			this->TwoButton->TabIndex = 19;
			this->TwoButton->Text = L"2";
			this->TwoButton->UseVisualStyleBackColor = true;
			this->TwoButton->Click += gcnew System::EventHandler(this, &MyForm::NumberButton_Click);
			// 
			// ThreeButton
			// 
			this->ThreeButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ThreeButton->Location = System::Drawing::Point(144, 248);
			this->ThreeButton->Name = L"ThreeButton";
			this->ThreeButton->Size = System::Drawing::Size(60, 42);
			this->ThreeButton->TabIndex = 20;
			this->ThreeButton->Text = L"3";
			this->ThreeButton->UseVisualStyleBackColor = true;
			this->ThreeButton->Click += gcnew System::EventHandler(this, &MyForm::NumberButton_Click);
			// 
			// ZeroButton
			// 
			this->ZeroButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ZeroButton->Location = System::Drawing::Point(78, 296);
			this->ZeroButton->Name = L"ZeroButton";
			this->ZeroButton->Size = System::Drawing::Size(60, 42);
			this->ZeroButton->TabIndex = 21;
			this->ZeroButton->Text = L"0";
			this->ZeroButton->UseVisualStyleBackColor = true;
			this->ZeroButton->Click += gcnew System::EventHandler(this, &MyForm::NumberButton_Click);
			// 
			// AdditionButton
			// 
			this->AdditionButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AdditionButton->Location = System::Drawing::Point(210, 248);
			this->AdditionButton->Name = L"AdditionButton";
			this->AdditionButton->Size = System::Drawing::Size(60, 42);
			this->AdditionButton->TabIndex = 22;
			this->AdditionButton->Text = L"+";
			this->AdditionButton->UseVisualStyleBackColor = true;
			this->AdditionButton->Click += gcnew System::EventHandler(this, &MyForm::OperatorButton_Click);
			// 
			// DecimalButton
			// 
			this->DecimalButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DecimalButton->Location = System::Drawing::Point(144, 296);
			this->DecimalButton->Name = L"DecimalButton";
			this->DecimalButton->Size = System::Drawing::Size(60, 42);
			this->DecimalButton->TabIndex = 23;
			this->DecimalButton->Text = L".";
			this->DecimalButton->UseVisualStyleBackColor = true;
			this->DecimalButton->Click += gcnew System::EventHandler(this, &MyForm::DecimalButton_Click);
			// 
			// EqualsButton
			// 
			this->EqualsButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->EqualsButton->Location = System::Drawing::Point(210, 294);
			this->EqualsButton->Name = L"EqualsButton";
			this->EqualsButton->Size = System::Drawing::Size(60, 42);
			this->EqualsButton->TabIndex = 24;
			this->EqualsButton->Text = L"=";
			this->EqualsButton->UseVisualStyleBackColor = true;
			this->EqualsButton->Click += gcnew System::EventHandler(this, &MyForm::EqualsButton_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(282, 348);
			this->Controls->Add(this->EqualsButton);
			this->Controls->Add(this->DecimalButton);
			this->Controls->Add(this->AdditionButton);
			this->Controls->Add(this->ZeroButton);
			this->Controls->Add(this->ThreeButton);
			this->Controls->Add(this->TwoButton);
			this->Controls->Add(this->SubtractionButton);
			this->Controls->Add(this->SixButton);
			this->Controls->Add(this->FiveButton);
			this->Controls->Add(this->NegationButton);
			this->Controls->Add(this->OneButton);
			this->Controls->Add(this->FourButton);
			this->Controls->Add(this->MultiplyButton);
			this->Controls->Add(this->NineButton);
			this->Controls->Add(this->EightButton);
			this->Controls->Add(this->SevenButton);
			this->Controls->Add(this->DivisionButton);
			this->Controls->Add(this->BackSpaceButton);
			this->Controls->Add(this->ClearButton);
			this->Controls->Add(this->ClearEntryButton);
			this->Controls->Add(this->DivideX_Button);
			this->Controls->Add(this->SquareButton);
			this->Controls->Add(this->SquareRootButton);
			this->Controls->Add(this->ModulusButton);
			this->Controls->Add(this->MainDisplay);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Calculator";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) 
	{
		MainDisplay->Text = "0";
	}

	private: System::Void OperatorButton_Click(System::Object^  sender, System::EventArgs^  e)
	{
		CheckToClearDivideByZeroMessage();

		StoreDisplayValue();

		Operator = safe_cast<Button^>(sender)->Text[0];

		MainDisplay->Text = "0";

		equalsPressed = false;
	}

	private: System::Void SquareRootButton_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		CheckToClearDivideByZeroMessage();
		MainDisplay->Text = System::Convert::ToString(System::Math::Sqrt(System::Convert::ToDouble(MainDisplay->Text)));
		Operator = '?';

		equalsPressed = false;
	}

	private: System::Void SquareButton_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		CheckToClearDivideByZeroMessage();
		MainDisplay->Text = System::Convert::ToString(System::Math::Pow(System::Convert::ToDouble(MainDisplay->Text),2));
		Operator = '?';

		equalsPressed = false;
	}

	private: System::Void DivideX_Button_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		CheckToClearDivideByZeroMessage();
		if (MainDisplay->Text != "0")
		{
			MainDisplay->Text = System::Convert::ToString(1 / System::Convert::ToDouble(MainDisplay->Text));
		}
		else
		{
			MainDisplay->Text = "Cannot Divide by Zero";
		}
		Operator = '?';

		equalsPressed = false;
	}

	private: System::Void ClearEntryButton_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		MainDisplay->Text = "0";

		equalsPressed = false;
	}

	private: System::Void ClearButton_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		MainDisplay->Text = "0";
		Operator = '?';

		equalsPressed = false;
	}

	private: System::Void BackSpaceButton_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		CheckToClearDivideByZeroMessage();

		if (MainDisplay->Text != "0")
		{
			if (MainDisplay->Text->Length > 1)
			{
				MainDisplay->Text = MainDisplay->Text->Substring(0, MainDisplay->Text->Length - 1);
			}
			else
			{
				MainDisplay->Text = "0";
			}
		}

		equalsPressed = false;
	}

	private: System::Void NumberButton_Click(System::Object^  sender, System::EventArgs^  e)
	{
		CheckToClearDivideByZeroMessage();

		Button^ button = safe_cast<Button^>(sender);
		if (MainDisplay->Text != "0")
		{
			MainDisplay->Text = String::Concat(MainDisplay->Text, button->Text);
		}
		else
		{
			MainDisplay->Text = button->Text;
		}

		equalsPressed = false;
	}

	private: System::Void NegationButton_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		CheckToClearDivideByZeroMessage();

		if (MainDisplay->Text[0] == '-')
		{
			MainDisplay->Text = MainDisplay->Text->Substring(1);
		}
		else
		{
			MainDisplay->Text = String::Concat("-", MainDisplay->Text);
		}

		equalsPressed = false;
	}

	private: System::Void DecimalButton_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		CheckToClearDivideByZeroMessage();

		if (MainDisplay->Text != "0")
		{
			//Check of existing decimal
			bool existingDecimal = false;
			for (int i = 0; i < MainDisplay->Text->Length; i++)
			{
				if (MainDisplay->Text[i] == '.')
				{
					existingDecimal = true;
					break;
				}
			}

			if(!existingDecimal)
			{
				MainDisplay->Text = String::Concat(MainDisplay->Text, ".");
			}
		}
		else
		{
			MainDisplay->Text = "0.";
		}

		equalsPressed = false;
	}

	private: System::Void EqualsButton_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		CheckToClearDivideByZeroMessage();

		if (Operator != '?')
		{
			double currentValue = System::Convert::ToDouble(MainDisplay->Text);
			switch (Operator)
			{
				case '+':
				{
					MainDisplay->Text = System::Convert::ToString(StoredValue + currentValue);
					if (!equalsPressed)
					{
						equalsPressed = true;
						StoredValue = currentValue;
					}
					break;
				}
				case '-':
				{
					if (!equalsPressed)
					{
						equalsPressed = true;
						MainDisplay->Text = System::Convert::ToString(StoredValue - currentValue);
						StoredValue = currentValue;
					}
					else
					{
						MainDisplay->Text = System::Convert::ToString(currentValue - StoredValue);
					}			
					break;
				}
				case 'X':
				{
					MainDisplay->Text = System::Convert::ToString(StoredValue * currentValue);
					if (!equalsPressed)
					{
						equalsPressed = true;
						StoredValue = currentValue;
					}
					break;
				}
				case '/':
				{
					if (!equalsPressed)
					{
						equalsPressed = true;
						if (currentValue != 0)
						{
							MainDisplay->Text = System::Convert::ToString(StoredValue / currentValue);
						}
						else
						{
							MainDisplay->Text = "Cannot Divide by Zero";
						}
						StoredValue = currentValue;
					}
					else
					{
						if (currentValue != 0)
						{
							MainDisplay->Text = System::Convert::ToString(currentValue / StoredValue);
						}
						else
						{
							MainDisplay->Text = "Cannot Divide by Zero";
						}
					}
					break;
				}
				case '%':
				{
					if (!equalsPressed)
					{
						equalsPressed = true;
						MainDisplay->Text = System::Convert::ToString(fmod(currentValue, StoredValue));
						StoredValue = currentValue;
					}
					else
					{
						MainDisplay->Text = System::Convert::ToString(fmod(StoredValue, currentValue));
					}
					break;
				}
				default:
					break;
			}
		}
	}

	private: System::Void StoreDisplayValue()
	{
		StoredValue = System::Convert::ToDouble(MainDisplay->Text);
	}

	private: System::Void CheckToClearDivideByZeroMessage()
	{
		if (MainDisplay->Text == "Cannot Divide by Zero")
		{
			MainDisplay->Text = "0";
		}
	}
};
}
