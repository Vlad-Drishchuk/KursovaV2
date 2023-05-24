#pragma once
namespace KursovaV2 {

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

	protected:

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ LoginInput;
	private: System::Windows::Forms::TextBox^ PasswordInput;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label6;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->LoginInput = (gcnew System::Windows::Forms::TextBox());
			this->PasswordInput = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Ubuntu", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(165, 90);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(132, 60);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Вхід";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Ubuntu", 13.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(24, 206);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(122, 45);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Логін";
			// 
			// LoginInput
			// 
			this->LoginInput->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->LoginInput->Location = System::Drawing::Point(32, 254);
			this->LoginInput->Name = L"LoginInput";
			this->LoginInput->Size = System::Drawing::Size(391, 24);
			this->LoginInput->TabIndex = 4;
			// 
			// PasswordInput
			// 
			this->PasswordInput->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->PasswordInput->Location = System::Drawing::Point(32, 347);
			this->PasswordInput->Name = L"PasswordInput";
			this->PasswordInput->Size = System::Drawing::Size(391, 24);
			this->PasswordInput->TabIndex = 6;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Ubuntu", 13.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(24, 299);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(174, 45);
			this->label5->TabIndex = 5;
			this->label5->Text = L"Пароль*";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Ubuntu", 7.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(32, 389);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(71, 39);
			this->button1->TabIndex = 7;
			this->button1->Text = L"\?";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(118, 397);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(0, 25);
			this->label6->TabIndex = 8;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(231)),
				static_cast<System::Int32>(static_cast<System::Byte>(231)));
			this->ClientSize = System::Drawing::Size(487, 640);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->PasswordInput);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->LoginInput);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Testing form";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		
		if (label6->Text == L"Введіть пароль, якщо є") {
			label6->Text = " ";
		}
		else {
			label6->Text = L"Введіть пароль, якщо є";
		}
	}
};
}
