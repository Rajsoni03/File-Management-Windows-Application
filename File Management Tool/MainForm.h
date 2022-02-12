#pragma once

namespace FileManagementTool {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Diagnostics;
	using namespace System::IO;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
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
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ directoryName;





	private: System::Windows::Forms::Label^ Result;
	private: System::Windows::Forms::Button^ selectBtn;


	private: System::Windows::Forms::Label^ duplicates;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::Button^ showBtn;
	private: System::Windows::Forms::ListBox^ listBox;






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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->directoryName = (gcnew System::Windows::Forms::TextBox());
			this->Result = (gcnew System::Windows::Forms::Label());
			this->selectBtn = (gcnew System::Windows::Forms::Button());
			this->duplicates = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->showBtn = (gcnew System::Windows::Forms::Button());
			this->listBox = (gcnew System::Windows::Forms::ListBox());
			this->tableLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(102, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Select Directory ";
			// 
			// directoryName
			// 
			this->directoryName->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->directoryName->Location = System::Drawing::Point(3, 3);
			this->directoryName->Multiline = true;
			this->directoryName->Name = L"directoryName";
			this->directoryName->Size = System::Drawing::Size(446, 19);
			this->directoryName->TabIndex = 1;
			// 
			// Result
			// 
			this->Result->AutoSize = true;
			this->Result->Location = System::Drawing::Point(12, 90);
			this->Result->Name = L"Result";
			this->Result->Size = System::Drawing::Size(42, 13);
			this->Result->TabIndex = 2;
			this->Result->Text = L"Results";
			// 
			// selectBtn
			// 
			this->selectBtn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->selectBtn->Location = System::Drawing::Point(455, 3);
			this->selectBtn->Name = L"selectBtn";
			this->selectBtn->Size = System::Drawing::Size(108, 19);
			this->selectBtn->TabIndex = 4;
			this->selectBtn->Text = L"Select Folder";
			this->selectBtn->UseVisualStyleBackColor = true;
			this->selectBtn->Click += gcnew System::EventHandler(this, &MainForm::searchBtn_Click);
			// 
			// duplicates
			// 
			this->duplicates->AutoSize = true;
			this->duplicates->Location = System::Drawing::Point(12, 112);
			this->duplicates->Name = L"duplicates";
			this->duplicates->Size = System::Drawing::Size(55, 13);
			this->duplicates->TabIndex = 0;
			this->duplicates->Text = L"duplicates";
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel1->ColumnCount = 2;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				79.96795F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				20.03205F)));
			this->tableLayoutPanel1->Controls->Add(this->directoryName, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->selectBtn, 1, 0);
			this->tableLayoutPanel1->Location = System::Drawing::Point(15, 25);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 1;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(566, 25);
			this->tableLayoutPanel1->TabIndex = 5;
			// 
			// showBtn
			// 
			this->showBtn->Location = System::Drawing::Point(15, 57);
			this->showBtn->Name = L"showBtn";
			this->showBtn->Size = System::Drawing::Size(130, 23);
			this->showBtn->TabIndex = 6;
			this->showBtn->Text = L"Show Files";
			this->showBtn->UseVisualStyleBackColor = true;
			this->showBtn->Click += gcnew System::EventHandler(this, &MainForm::showBtn_Click);
			// 
			// listBox
			// 
			this->listBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->listBox->FormattingEnabled = true;
			this->listBox->Location = System::Drawing::Point(15, 137);
			this->listBox->Name = L"listBox";
			this->listBox->Size = System::Drawing::Size(566, 173);
			this->listBox->TabIndex = 7;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(593, 333);
			this->Controls->Add(this->listBox);
			this->Controls->Add(this->showBtn);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->duplicates);
			this->Controls->Add(this->Result);
			this->Controls->Add(this->label1);
			this->MinimumSize = System::Drawing::Size(298, 243);
			this->Name = L"MainForm";
			this->Text = L"File Management Tool";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void searchBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		FolderBrowserDialog^ folderBroswserDialog = gcnew FolderBrowserDialog;
		folderBroswserDialog->ShowDialog();
		String^ dirPath = folderBroswserDialog->SelectedPath;
		this->directoryName->Text = dirPath;
	}
	private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {
		this->duplicates->Text = "";
	}
	private: System::Void showBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		listBox->Items->Clear();
		String^ dirPath = this->directoryName->Text;
		//try {
			auto files = Directory::GetFiles(dirPath);
			int numFiles = files->Length;
			this->duplicates->Text = "No. of files : " + Convert::ToString(numFiles);

			for (int i = 0; i < numFiles; i++)
			{
				this->listBox->Items->Add(files[i]);
			}
		
		//}
		//catch (Exception e) {
		//	this->duplicates->Text = e;
		//}
	}
};
}
