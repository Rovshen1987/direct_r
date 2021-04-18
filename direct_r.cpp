
#include "direct_r.h"

direct_r::direct_r(){};
direct_r::~direct_r(){};

string direct_r::get_path()
{
   char current_work_dir[FILENAME_MAX];
   _getcwd(current_work_dir, sizeof(current_work_dir));
   return string(current_work_dir);

};

char direct_r::get_drive()
{
   char result;
   std::string temp = this->get_path();

   result = temp[0];
   return result;
};


bool direct_r::check_file(std::string& value)
{
  	std::string temp;
	bool result;


	temp = value.c_str();
	ifstream f(temp);

	if (f.is_open())
	{
	 result = true;
	}
	else
	{
	 result = false;
	};

	return result;

};

bool direct_r::check_file(std::string&& value)
{
  	std::string temp;
	bool result;


	temp = value.c_str();
	ifstream f(temp);

	if (f.is_open())
	{
	 result = true;
	}
	else
	{
	 result = false;
	};

	return result;

};

bool direct_r::check_file(AnsiString&& value)
{
  	std::string temp;
	bool result;


	temp = value.c_str();
	ifstream f(temp);

	if (f.is_open())
	{
	 result = true;
	}
	else
	{
	 result = false;
	};

	return result;

};
