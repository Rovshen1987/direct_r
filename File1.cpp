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
//#include <string>
#include <windows.h>
//#include <vcl.h>
//#include <filesystem>





namespace fs = std::filesystem;
int _tmain(int argc, _TCHAR* argv[])
{
		SetConsoleCP(1251);
		SetConsoleOutputCP(1251);

   //     std::string s = "D:\workshop\consol\ini_parser\Win32\Debug\config";

//	std::string s = "D:\\Picture.bmp";
//	direct_r r;
//	s = r.get_path();
////    s = r.check_file("D:\\Picture.bmp");
//	std::cout << s << std::endl;


//  fs::create_directory("D:/Alpha");
//
//	std::string s ="D:/Book/програмирование";

//  if (fs::is_directory(s))
//  {
//  std::cout << "Dogry\n";
//  }
//  else
//  {
//  std::cout << "Yalnys\n";
//  }

//	std::cout << ser << std::endl;

//   std::string s = "Picture";
//   direct_r r;
//   r.create_folder_in_prog(s);
//   std::cout << s1 << std::endl;

    std::system("pause");
	return 0;
}
