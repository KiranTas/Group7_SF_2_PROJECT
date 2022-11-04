#pragma once
#include <iostream>
#include <ctime>
#include <vector>
#include <string>

class Lecture
{
public:
	Lecture();
	Lecture(std::string venue);
	Lecture(std::string date,std::string venue,std::string time_start,std::string time_end);
	void update_student(std::vector <int> studentnum);
	std::vector<int> getstudentnum();
	std::vector<std::string> get_arrival();
	std::vector<std::string> get_dep();
	void set_end_time(std::string end_time);
	void set_venue(std::string venue);
	void set_start_time(std::string start_time);
	bool Verify_date(std::string sdate);
	bool Verfiy_time(std::string stime);
	std::string getcurtime();
	std::string getdate();
	std::string getstart();
	std::string getend();
	std::string getvenue();

private:
	// data memebers
	std::string venue,date,time_start,time_end;
	std::vector<std::string> std_time_arr, std_time_dep;
	std::vector<int> student_number;
};

