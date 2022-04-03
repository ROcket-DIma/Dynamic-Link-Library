// DynCons.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#pragma comment(lib, "C:\\Users\\admin\\Desktop\\LR1_Ivanov\\VisualStudio\\VS_DynCons\\x64\\Debug\\DLL.lib") //автоматически залинкует библиотеку
#include <iostream>
#include "windows.h"
#include <tchar.h>

typedef int (*libn)();
typedef void (*libf)();

int main()
{   
    HINSTANCE hLib;
    libn n;
    libf f;
        
    hLib = LoadLibrary(L"C:\\Users\\admin\\Desktop\\LR1_Ivanov\\VisualStudio\\VS_DynCons\\x64\\Debug\\DLL.dll");
    if (hLib == NULL)
    {
        printf("Unable to load the library 'DLL.dll'!\n");
        return 0;
    }

    n = (libn)GetProcAddress(hLib, "number");
    if (!n) printf("Unable to find the function 'number'!\n\n");
    f = (libf)GetProcAddress(hLib, "fio");
    if (!n) printf("Unable to find the function 'fio'!\n\n");

    setlocale(LC_ALL, "rus");
    std::cout << "Лабораторная работа номер 1:\nработа с динамическими библиотеками DLL\nВыполнил следующий студент:\n";
    std::cout << "Номер группы: " << n() << "\n";
    std::cout << "ФИО: ";
    f();
    system("pause");
    FreeLibrary(hLib);
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
