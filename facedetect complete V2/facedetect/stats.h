#pragma once
#include <string>
#include<sstream>
#include <msclr\marshal_cppstd.h>

namespace facedetect {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::OleDb;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class stats : public System::Windows::Forms::Form
	{
	public:
		stats(void)
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
		~stats()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lblHeading;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ tbAveClassAtt;
	private: System::Windows::Forms::ComboBox^ cmbAveClassAtt;
	private: System::Windows::Forms::ComboBox^ cmbAveStudentAtt;
	private: System::Windows::Forms::TextBox^ tbAveStudentAtt;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ComboBox^ cmbStudenTime;
	private: System::Windows::Forms::TextBox^ tbStudentTime;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::ComboBox^ cmbTimeClassAtt;
	private: System::Windows::Forms::TextBox^ tbClassTimeAtt;
	private: System::Windows::Forms::Label^ label4;


	protected:


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;
		int iTotalStudents = 0, itotallectures;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->lblHeading = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tbAveClassAtt = (gcnew System::Windows::Forms::TextBox());
			this->cmbAveClassAtt = (gcnew System::Windows::Forms::ComboBox());
			this->cmbAveStudentAtt = (gcnew System::Windows::Forms::ComboBox());
			this->tbAveStudentAtt = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->cmbStudenTime = (gcnew System::Windows::Forms::ComboBox());
			this->tbStudentTime = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->cmbTimeClassAtt = (gcnew System::Windows::Forms::ComboBox());
			this->tbClassTimeAtt = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// lblHeading
			// 
			this->lblHeading->AutoSize = true;
			this->lblHeading->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->lblHeading->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblHeading->Location = System::Drawing::Point(256, 33);
			this->lblHeading->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblHeading->Name = L"lblHeading";
			this->lblHeading->Size = System::Drawing::Size(274, 48);
			this->lblHeading->TabIndex = 0;
			this->lblHeading->Text = L"STATISTICS";
			this->lblHeading->Click += gcnew System::EventHandler(this, &stats::lblHeading_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label1->Location = System::Drawing::Point(16, 117);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(277, 25);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Average Class Attendance:";
			// 
			// tbAveClassAtt
			// 
			this->tbAveClassAtt->Location = System::Drawing::Point(21, 190);
			this->tbAveClassAtt->Margin = System::Windows::Forms::Padding(4);
			this->tbAveClassAtt->Name = L"tbAveClassAtt";
			this->tbAveClassAtt->ReadOnly = true;
			this->tbAveClassAtt->Size = System::Drawing::Size(161, 22);
			this->tbAveClassAtt->TabIndex = 2;
			this->tbAveClassAtt->TextChanged += gcnew System::EventHandler(this, &stats::tbAveClassAtt_TextChanged);
			// 
			// cmbAveClassAtt
			// 
			this->cmbAveClassAtt->FormattingEnabled = true;
			this->cmbAveClassAtt->Location = System::Drawing::Point(21, 156);
			this->cmbAveClassAtt->Margin = System::Windows::Forms::Padding(4);
			this->cmbAveClassAtt->Name = L"cmbAveClassAtt";
			this->cmbAveClassAtt->Size = System::Drawing::Size(161, 24);
			this->cmbAveClassAtt->TabIndex = 3;
			this->cmbAveClassAtt->SelectedIndexChanged += gcnew System::EventHandler(this, &stats::comboBox1_SelectedIndexChanged);
			// 
			// cmbAveStudentAtt
			// 
			this->cmbAveStudentAtt->FormattingEnabled = true;
			this->cmbAveStudentAtt->Location = System::Drawing::Point(21, 287);
			this->cmbAveStudentAtt->Margin = System::Windows::Forms::Padding(4);
			this->cmbAveStudentAtt->Name = L"cmbAveStudentAtt";
			this->cmbAveStudentAtt->Size = System::Drawing::Size(161, 24);
			this->cmbAveStudentAtt->TabIndex = 6;
			this->cmbAveStudentAtt->Text = L"Select Student";
			this->cmbAveStudentAtt->SelectedIndexChanged += gcnew System::EventHandler(this, &stats::cmbAveStudentAtt_SelectedIndexChanged);
			// 
			// tbAveStudentAtt
			// 
			this->tbAveStudentAtt->Location = System::Drawing::Point(21, 320);
			this->tbAveStudentAtt->Margin = System::Windows::Forms::Padding(4);
			this->tbAveStudentAtt->Name = L"tbAveStudentAtt";
			this->tbAveStudentAtt->ReadOnly = true;
			this->tbAveStudentAtt->Size = System::Drawing::Size(161, 22);
			this->tbAveStudentAtt->TabIndex = 5;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label2->Location = System::Drawing::Point(16, 247);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(297, 25);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Average Student Attendance:";
			// 
			// cmbStudenTime
			// 
			this->cmbStudenTime->FormattingEnabled = true;
			this->cmbStudenTime->Location = System::Drawing::Point(396, 287);
			this->cmbStudenTime->Margin = System::Windows::Forms::Padding(4);
			this->cmbStudenTime->Name = L"cmbStudenTime";
			this->cmbStudenTime->Size = System::Drawing::Size(161, 24);
			this->cmbStudenTime->TabIndex = 12;
			this->cmbStudenTime->Text = L"Select Student";
			this->cmbStudenTime->SelectedIndexChanged += gcnew System::EventHandler(this, &stats::cmbStudenTime_SelectedIndexChanged);
			// 
			// tbStudentTime
			// 
			this->tbStudentTime->Location = System::Drawing::Point(396, 320);
			this->tbStudentTime->Margin = System::Windows::Forms::Padding(4);
			this->tbStudentTime->Name = L"tbStudentTime";
			this->tbStudentTime->ReadOnly = true;
			this->tbStudentTime->Size = System::Drawing::Size(161, 22);
			this->tbStudentTime->TabIndex = 11;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label3->Location = System::Drawing::Point(391, 247);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(351, 25);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Average Time Student Attendance:";
			// 
			// cmbTimeClassAtt
			// 
			this->cmbTimeClassAtt->FormattingEnabled = true;
			this->cmbTimeClassAtt->Location = System::Drawing::Point(396, 156);
			this->cmbTimeClassAtt->Margin = System::Windows::Forms::Padding(4);
			this->cmbTimeClassAtt->Name = L"cmbTimeClassAtt";
			this->cmbTimeClassAtt->Size = System::Drawing::Size(161, 24);
			this->cmbTimeClassAtt->TabIndex = 9;
			this->cmbTimeClassAtt->Text = L"Select Lecture";
			this->cmbTimeClassAtt->SelectedIndexChanged += gcnew System::EventHandler(this, &stats::cmbTimeClassAtt_SelectedIndexChanged);
			// 
			// tbClassTimeAtt
			// 
			this->tbClassTimeAtt->Location = System::Drawing::Point(396, 190);
			this->tbClassTimeAtt->Margin = System::Windows::Forms::Padding(4);
			this->tbClassTimeAtt->Name = L"tbClassTimeAtt";
			this->tbClassTimeAtt->ReadOnly = true;
			this->tbClassTimeAtt->Size = System::Drawing::Size(161, 22);
			this->tbClassTimeAtt->TabIndex = 8;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label4->Location = System::Drawing::Point(391, 117);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(308, 25);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Average Time Class Attended:";
			// 
			// stats
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->ClientSize = System::Drawing::Size(779, 421);
			this->Controls->Add(this->cmbStudenTime);
			this->Controls->Add(this->tbStudentTime);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->cmbTimeClassAtt);
			this->Controls->Add(this->tbClassTimeAtt);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->cmbAveStudentAtt);
			this->Controls->Add(this->tbAveStudentAtt);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->cmbAveClassAtt);
			this->Controls->Add(this->tbAveClassAtt);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->lblHeading);
			this->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"stats";
			this->Text = L"stats";
			this->Load += gcnew System::EventHandler(this, &stats::stats_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		int iStudentAttendance = 0;
		String^ sAttStudentID;


		OleDbConnection^ conn = gcnew OleDbConnection("Provider=Microsoft.ACE.OLEDB.12.0;Data Source=Software_Eng.accdb");

		try {
			conn->Open();
			OleDbCommand^ cmd = conn->CreateCommand();
			cmd->CommandType = CommandType::Text;
			cmd->CommandText = "Select COUNT(*) as count_std from Attendance WHERE LectureID=" + "\"" + cmbAveClassAtt->Text + "\"";
			OleDbDataReader^ r = cmd->ExecuteReader();
			// get number of studets who attended
			r->Read();
			int inum = int::Parse(r["count_std"]->ToString());
			float fnum = (double)(inum);
			fnum = (fnum / (double)iTotalStudents) * 100.00;
			std::stringstream stream;
			// Set precision level to 3
			stream.precision(3);
			stream << std::fixed;
			stream << fnum;
			tbAveClassAtt->Text = (gcnew String(stream.str().c_str())) + " %";
			r->Close();
			conn->Close();
		}

		catch (Exception^ ex) {
			MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}


	private: System::Void stats_Load(System::Object^ sender, System::EventArgs^ e) {
		std::string StudentItem;

		OleDbConnection^ conn = gcnew OleDbConnection("Provider=Microsoft.ACE.OLEDB.12.0;Data Source=Software_Eng.accdb");

		try {
			conn->Open();

			OleDbCommand^ cmd = conn->CreateCommand();
			cmd->CommandType = CommandType::Text;
			cmd->CommandText = "Select * from Students";
			OleDbDataReader^ r = cmd->ExecuteReader();
			while (r->Read()) {
				cmbAveStudentAtt->Items->Add(r["StudentID"]->ToString());
				cmbStudenTime->Items->Add(r["StudentID"]->ToString());
				iTotalStudents++;
			}

			OleDbCommand^ cmd1 = conn->CreateCommand();
			cmd1->CommandType = CommandType::Text;
			cmd1->CommandText = "Select * from Lectures";
			OleDbDataReader^ l = cmd1->ExecuteReader();
			while (l->Read()) {
				itotallectures++;
				cmbAveClassAtt->Items->Add(l["LectureID"]->ToString());
				cmbTimeClassAtt->Items->Add(l["LectureID"]->ToString());
			}

			conn->Close();
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message, "C++ database connector", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}



	private: System::Void lblHeading_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void cmbTimeClassAtt_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		OleDbConnection^ conn = gcnew OleDbConnection("Provider=Microsoft.ACE.OLEDB.12.0;Data Source=Software_Eng.accdb");
		conn->Open();
		OleDbCommand^ cmd = conn->CreateCommand();
		cmd->CommandType = CommandType::Text;
		cmd->CommandText = "Select COUNT(*) as count_std from Attendance WHERE LectureID=" + "\"" + cmbTimeClassAtt->Text + "\"";
		OleDbDataReader^ r = cmd->ExecuteReader();
		// get number of studets who attended
		r->Read();
		int inumstudents = int::Parse(r["count_std"]->ToString());
		r->Close();
		int totaltime = 0;
		cmd->CommandText = "Select Arrival,Leaving From Attendance WHERE LectureID=" + "\"" + cmbTimeClassAtt->Text + "\"";
		r = cmd->ExecuteReader();
		while (r->Read())
		{
			int itimeleave, itimearr, itime_diffrence;
			std::string stime;
			MarshalString(r["Arrival"]->ToString(), stime);
			itimearr = gettimeseconds(stime);
			MarshalString(r["Leaving"]->ToString(), stime);
			itimeleave = gettimeseconds(stime);
			itime_diffrence = itimeleave - itimearr;
			totaltime += itime_diffrence;
		}
		int avgtime = totaltime / inumstudents;
		std::string smin = gettime(avgtime);
		tbClassTimeAtt->Text = (gcnew String(smin.c_str())) + " min";
		r->Close();
		conn->Close();
	}
	private: System::Void tbAveClassAtt_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void cmbAveStudentAtt_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		int iStudentAttendance = 0;
		String^ sAttStudentID;


		OleDbConnection^ conn = gcnew OleDbConnection("Provider=Microsoft.ACE.OLEDB.12.0;Data Source=Software_Eng.accdb");

		try {
			conn->Open();
			OleDbCommand^ cmd = conn->CreateCommand();
			cmd->CommandType = CommandType::Text;
			cmd->CommandText = "Select COUNT(*) as count_std from Attendance WHERE StudentID=" + "\"" + cmbAveStudentAtt->Text + "\"";
			OleDbDataReader^ r = cmd->ExecuteReader();
			// get number of studets who attended
			r->Read();
			int inum = int::Parse(r["count_std"]->ToString());
			float fnum = (double)(inum);
			fnum = fnum / (double)(itotallectures) * 100.00;
			std::stringstream stream;
			// Set precision level to 3
			stream.precision(3);
			stream << std::fixed;
			stream << fnum;
			tbAveStudentAtt->Text = (gcnew String(stream.str().c_str())) + " %";
			r->Close();
			conn->Close();
		}

		catch (Exception^ ex) {
			MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
		   int gettimeseconds(std::string stime)
		   {
			   int itime, hours, minutes, seconds;
			   hours = std::stoi(stime.substr(0, stime.find(':'))) * 60 * 60;
			   stime = stime.substr(stime.find(':') + 1, stime.length() - stime.find(':'));
			   minutes = std::stoi(stime.substr(0, stime.find(':'))) * 60;
			   stime = stime.substr(stime.find(':') + 1, stime.length() - stime.find(':'));
			   seconds = std::stoi(stime);
			   itime = seconds + minutes + hours;
			   return itime;
		   }

		   std::string gettime(int itotal)
		   {
			   return std::to_string(itotal / 60);
		   }

		   void MarshalString(String^ s, std::string& os) {
			   using namespace Runtime::InteropServices;
			   const char* chars =
				   (const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
			   os = chars;
			   Marshal::FreeHGlobal(IntPtr((void*)chars));
		   }
	private: System::Void cmbStudenTime_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {

		OleDbConnection^ conn = gcnew OleDbConnection("Provider=Microsoft.ACE.OLEDB.12.0;Data Source=Software_Eng.accdb");
		conn->Open();
		OleDbCommand^ cmd = conn->CreateCommand();
		cmd->CommandType = CommandType::Text;
		cmd->CommandText = "Select COUNT(*) as count_std from Attendance WHERE StudentID=" + "\"" + cmbStudenTime->Text + "\"";
		OleDbDataReader^ r = cmd->ExecuteReader();
		// get number of studets who attended
		r->Read();
		int inumtimes = int::Parse(r["count_std"]->ToString());
		r->Close();
		cmd->CommandText = "Select Arrival,Leaving from Attendance WHERE StudentID=" + "\"" + cmbStudenTime->Text + "\"";
		r = cmd->ExecuteReader();
		int totaltime = 0;
		while (r->Read())
		{
			int itimeleave, itimearr, itime_diffrence;
			std::string stime;
			MarshalString(r["Arrival"]->ToString(), stime);
			itimearr = gettimeseconds(stime);
			MarshalString(r["Leaving"]->ToString(), stime);
			itimeleave = gettimeseconds(stime);
			itime_diffrence = itimeleave - itimearr;
			totaltime += itime_diffrence;
		}
		int avgtime = totaltime / inumtimes;
		std::string smin = gettime(avgtime);
		tbStudentTime->Text = (gcnew String(smin.c_str())) + " min";
		r->Close();
		conn->Close();
	}
	};
}
