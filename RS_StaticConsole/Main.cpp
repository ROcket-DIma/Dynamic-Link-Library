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
#include "ConsolePCH1.h"
#include "DLL.cpp"

int _tmain(int argc, _TCHAR* argv[])
{
	int a;
	system("chcp 1251");
	std::system("cls");

	std::cout << "������������ ������ �1 - ������������ ���������� DLL\n";
	std::cout << "����� �������� ������ � ������ ��������, ������������ ������ ������������ ������, ���������� ������ ��������� ������:\n";
	std::cout << "2 + 2 * 2 = ";
	std::cin >> a;
	if (a==6)
	{
		std::cout << "������: ";
		number();

		std::cout << "���: ";
		fio();

		std::system("pause");
	}
	else
	{
		std::cout << "�������� �����! ���������� ��� ���.\n";
        std::system("pause");
	}


	return 0;
}