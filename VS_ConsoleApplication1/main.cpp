//Выполнил студент группы РИ-571227 Иванов Роман

#pragma comment(lib, "C:\\Users\\admin\\Desktop\\LR1_Ivanov\\VisualStudio\\VS_DLL\\x64\\Debug\\DLL\\Dll.lib") //автоматически залинкует библиотеку
#include <iostream>
#include <locale.h>
#include "DLL.h"

int main()
{
    setlocale(LC_ALL, "rus");
    std::cout << "Лабораторная работа номер 1:\nработа с динамическими библиотеками DLL\nВыполнил следующий студент:\n";
    std::cout << "Номер группы: " << number() << "\n";
    std::cout << "ФИО: ";
    fio();
    system("pause");
}