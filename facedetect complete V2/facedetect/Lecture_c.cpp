#include "Lecture_c.h"

Lecture::Lecture()
{
this->venue = "Not-specifed";
time_t current = time(0);
tm* cur = localtime(&current);
this->date = std::to_string(cur->tm_mday) + "/" + std::to_string(cur->tm_mon) + "/" + std::to_string(cur->tm_year);
this->time_start = std::to_string(cur->tm_hour) + ":" + std::to_string(cur->tm_min) + ":" + std::to_string(cur->tm_sec);
this->time_end = "";
}

Lecture::Lecture(std::string venue)
{
	this->venue = venue;
	time_t current = time(0);
	tm* cur = localtime(&current);
	this->date = std::to_string(cur->tm_mday) + "/" + std::to_string(cur->tm_mon) + "/" + std::to_string(cur->tm_year);
	this->time_start = std::to_string(cur->tm_hour) + ":"+std::to_string(cur->tm_min) + ":" +std::to_string(cur->tm_sec) + ":";
	this->time_end = "";
}

Lecture::Lecture(std::string date, std::string venue, std::string time_start, std::string time_end)
{
	this->venue = venue;
	bool iscorrectdate = Verify_date(date);
	if (iscorrectdate == false)
	{
		time_t current = time(0);
		tm* cur = localtime(&current);
		this->date = std::to_string(cur->tm_mday) + "/" + std::to_string(cur->tm_mon) + "/" + std::to_string(cur->tm_year);
		std::cout << "Invalid date_date will be set to current date!" << std::endl;
	}
	else
	{
		this->date = date;
	}
	this->time_start = time_start;
	this->time_end = time_end;
}

void Lecture::update_student(std::vector<int> studentnum)
{
	
		std::vector<int> new_students;
		std::vector<int> student_present_photo(this->student_number.size());
		std::fill(student_present_photo.begin(), student_present_photo.begin(), 0);
		time_t cur = time(0);
		tm* curs = localtime(&cur);
		std::string slast;
		slast = std::to_string(curs->tm_hour) + ":" + std::to_string(curs->tm_min) + ":" + std::to_string(curs->tm_sec);
		for(int i=0;i< studentnum.size();i++)
		{
			int j=0;
			bool bflag = false;
			while ((bflag==false) && (j<this->student_number.size()))
			{
				if (studentnum[i]==this->student_number[j])
				{
					bflag = true;
					student_present_photo[j] = 1;
				}
				j++;
			}
			if (bflag == false)
			{
				new_students.push_back(studentnum[i]);
			}
		}
		// update time student left
		for (int i = 0; i < this->student_number.size(); i++)
		{
			if (student_present_photo[i] == 1)
			{
				std_time_dep[i]=slast;
		    }
		}
		for (int i = 0; i < new_students.size(); i++)
		{
			this->student_number.push_back(new_students[i]);
			this->std_time_arr.push_back(slast);
			this->std_time_dep.push_back(slast);
		}
	
}

std::vector<int> Lecture::getstudentnum()
{
	return student_number;
}
std::vector<std::string> Lecture::get_arrival()
{
	return std_time_arr;
}

std::vector<std::string> Lecture::get_dep()
{
	return std_time_dep;
}

void Lecture::set_end_time(std::string end_time)
{
	// do checking
	this->time_end = end_time;
}

void Lecture::set_venue(std::string venue)
{
	this->venue = venue;
}

void Lecture::set_start_time(std::string start_time)
{
	this->time_start = start_time;
}

bool Lecture:: Verify_date(std::string sdate)
{
	bool bflag = false;
	/* statandard format /*__/__/____*/
	if (sdate.length() <= 10)
	{
		sdate += "/";
		bool bcoin=false;
		int i = 0;
		int inumslash = 0;
		int num_items_before=0;
		while ((bcoin==false)&& (sdate[i]!='\0'))
		{
			int asciival = (int)sdate[i];
			if (asciival==47)
			{
				inumslash++;
				if (((inumslash)==1)||(inumslash==2))
				{
					if ((num_items_before<=2)&&(num_items_before>0))
					{
						num_items_before = 0;
				    }
					else
					{
						bcoin = true;
					}
				}
				else
				{
						if (inumslash==3)
						{
							if (num_items_before!=4)
							{
								bcoin =true;
						     }
						}
						else
						{
							bcoin = true; 
						}
				}
			}
			else
			{
				if ((asciival<47) ||(asciival>58))
				{
					bcoin = true;
				}
				else
				{
					num_items_before++;
				}
			}// end if_else
			i++;
		}// end while
		if (bcoin == false)
		{
			bflag = true;
		}
	}
	return bflag;
}

bool Lecture::Verfiy_time(std::string stime)
{
	bool bflag = false;
	/* statandard format /*__/__/____*/
	if (stime.length() <= 8)
	{
		stime += ":";
		bool bcoin = false;
		int i = 0;
		int inumslash = 0;
		int num_items_before = 0;
		while ((bcoin == false) && (stime[i] != '\0'))
		{
			int asciival = (int)stime[i];
			if (asciival == 58)
			{
				inumslash++;
				if ((inumslash==1))
				{
					
				}
				else
				{
					
				}
			}
			else
			{
				if ((asciival < 47) || (asciival > 58))
				{
					bcoin = true;
				}
				else
				{
					num_items_before++;
				}
			}// end if_else
			i++;
		}// end while
		if (bcoin == false)
		{
			bflag = true;
		}
	}
	return bflag;
}

std::string Lecture::getcurtime()
{
	time_t current = time(0);
	tm* cur = localtime(&current);
	return  std::to_string(cur->tm_hour) + ":" + std::to_string(cur->tm_min) + ":" + std::to_string(cur->tm_sec) ;
}

std::string Lecture::getdate()
{
	return this->date;
}

std::string Lecture::getstart()
{
	return this->time_start;
}

std::string Lecture::getend()
{
	return this->time_end;
}

std::string Lecture::getvenue()
{
	return this->venue;
}

// To do
// Vefiy time bounds! could be based of slash