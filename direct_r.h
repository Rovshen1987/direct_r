
#pragma once
#include <iostream>
#include <string>
#include <direct.h>
#include <fstream>
#include <System.hpp>


using string = std::string;

class direct_r
{

   public:
		 direct_r();
		 ~direct_r();

   string get_path();
   char get_drive();

   template<class T>
   std::string operator=(const T& value)
   {
	std::string s = value.c_str();
    return s;
   };

   bool check_file(std::string& value);
   bool check_file(std::string&& value);
   bool check_file(AnsiString&& value);


   private:

};