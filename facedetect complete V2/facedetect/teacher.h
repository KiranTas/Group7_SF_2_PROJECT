#pragma once
#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include "detectionscreen.h"
#include "FaceRec.h"
#include "Lecture_c.h"
#include "stats.h"

#include<opencv2\objdetect\objdetect.hpp>
#include<opencv2\imgproc\imgproc.hpp>
#include<opencv2\highgui\highgui.hpp>
#include "opencv2\core.hpp"
#include <opencv2\core\core.hpp>
#include <opencv2\opencv.hpp>
#include "opencv2\face.hpp"
#include <fstream>
#include <sstream>

namespace facedetect {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::OleDb;

	/// <summary>
	/// Summary for teacher
	/// </summary>
	public ref class teacher : public System::Windows::Forms::Form
	{
	public:
		teacher(void)
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
		~teacher()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::Button^ button1;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(teacher::typeid));
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::HotTrack;
			this->button2->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button2->Location = System::Drawing::Point(45, 241);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(427, 64);
			this->button2->TabIndex = 11;
			this->button2->Text = L"Start new session";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &teacher::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Impact", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label1.Image")));
			this->label1->Location = System::Drawing::Point(190, 57);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(151, 96);
			this->label1->TabIndex = 12;
			this->label1->Text = L"Teacher\r\nPage\r\n";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::HotTrack;
			this->button1->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button1->Location = System::Drawing::Point(45, 324);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(427, 64);
			this->button1->TabIndex = 14;
			this->button1->Text = L"View Statistics";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &teacher::button1_Click);
			// 
			// teacher
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(536, 449);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::SizableToolWindow;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"teacher";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Teacher";
			this->Load += gcnew System::EventHandler(this, &teacher::teacher_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		Lecture lnew;
		MessageBox::Show("Lecture is about to commence...\n to end lecture press any key", "Lecture", MessageBoxButtons::YesNo, MessageBoxIcon::Information);
		lnew=FaceRecognition();
		MessageBox::Show("Class Ended", "Lecture", MessageBoxButtons::YesNo, MessageBoxIcon::Information);
		std::vector<std::string> arr;
		arr = lnew.get_arrival();
		std::vector<std::string> dep;
		std::vector<int> stdnum;
		stdnum = lnew.getstudentnum();
		dep = lnew.get_dep();
		//Connect db
		OleDbConnection^ conn = gcnew OleDbConnection("Provider=Microsoft.ACE.OLEDB.12.0;Data Source=Software_Eng.accdb");
		conn->Open();
		OleDbCommand^ cmd = conn->CreateCommand();
		cmd->CommandType = CommandType::Text;
		cmd->CommandText = "Select * from Lectures ORDER BY LectureID DESC ";
		OleDbDataReader^ r = cmd->ExecuteReader();
		r->Read();
		std::string lectureID;
		MarshalString(r["LectureID"]->ToString(), lectureID);
		lectureID = lectureID.substr(2, lectureID.length() - 2);
		int lecid = std::stoi(lectureID);
		lecid++;
		lectureID = "le" + std::to_string(lecid);
		r->Close();
		//Write to lectures table
		cmd->CommandText = "insert into Lectures (LectureID,LectureDate,LectureStart,LectureEnd,Venue)values('" +

			(gcnew String(lectureID.c_str())) + "','" +
			(gcnew String(lnew.getdate().c_str())) + "','" +
			(gcnew String(lnew.getstart().c_str())) + "','" +
			(gcnew String(lnew.getend().c_str())) + "','" +
			(gcnew String(lnew.getvenue().c_str()))+
			"')";
		cmd->ExecuteNonQuery();
		for (int i = 0; i < stdnum.size(); i++)
		{
         //check if studet is present in the database
			std::string stemp = "Select * from Students WHERE  StudentID =\"" + std::to_string(stdnum[i])+"\"";
			cmd->CommandText = gcnew String(stemp.c_str());
			r = cmd->ExecuteReader();
			if (r->HasRows)
			{
				r->Close();
				//write to attendance
				cmd->CommandText = "insert into Attendance (LectureID,StudentID,Arrival,Leaving)values('" +

					(gcnew String(lectureID.c_str())) + "','" +
					(gcnew String(std::to_string(stdnum[i]).c_str())) + "','" +
					(gcnew String(arr[i].c_str())) + "','" +
					(gcnew String(dep[i].c_str())) +

					"')";
				cmd->ExecuteNonQuery();
			}
			else
			{
				r->Close();
			}
		}
		conn->Close();
		MessageBox::Show("Attendacne has been recorded!", "Lecture", MessageBoxButtons::YesNo, MessageBoxIcon::Information);
	}
	private: System::Void teacher_Load(System::Object^ sender, System::EventArgs^ e) {
	}
		   void MarshalString(String^ s, std::string& os) {
			   using namespace Runtime::InteropServices;
			   const char* chars =
				   (const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
			   os = chars;
			   Marshal::FreeHGlobal(IntPtr((void*)chars));
		   }
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		stats^ ff = gcnew stats();
		ff->Show();

	}
};
}
