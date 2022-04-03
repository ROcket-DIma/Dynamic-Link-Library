#ifdef _WIN32
#include <tchar.h>
#endif
#pragma once

extern "C" __declspec(dllexport) int number();
extern "C" __declspec(dllexport) void fio();

