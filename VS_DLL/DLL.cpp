#include "pch.h"
#include "DLL.h"
#include <locale.h>
#include "iostream"

int __stdcall number()
{
	static int n = 571227;
	return n;
}

void __stdcall fio()
{
	setlocale(LC_ALL, "rus");
	const char* a = "Иванов Роман Сергеевич";
	std::cout << a;
}