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


int _tmain(int argc, _TCHAR* argv[])
{
	std::string s;
	direct_r r;
	s = r.get_path();
	std::cout << s << std::endl;

		SetConsoleCP(1251);
		SetConsoleOutputCP(1251);


    std::system("pause");
	return 0;
}
