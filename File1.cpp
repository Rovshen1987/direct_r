#pragma hdrstop
#pragma argsused

#ifdef _WIN32
#include <tchar.h>
#else
  typedef char _TCHAR;
  #define _tmain main
#endif

#include <stdio.h>
#include <iostream>
#include "direct_r.h"
#include <string>
#include <windows.h>
#include <IniFiles.hpp>


int _tmain(int argc, _TCHAR* argv[])
{
		SetConsoleCP(1251);
		SetConsoleOutputCP(1251);

   //     std::string s = "D:\workshop\consol\ini_parser\Win32\Debug\config";

//	std::string s;
//	direct_r r;
//	s = r.get_path();
//	std::cout << s << std::endl;

	std::string s = "D:\\workshop\\consol\\ini_parser\\Win32\\Debug\\config.ini";
	direct_r r1;

	std::cout << std::boolalpha<<r1.check_file(s)<<std::endl;


    std::system("pause");
	return 0;
}
