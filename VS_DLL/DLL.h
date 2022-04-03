#pragma once

#ifndef DLL_EXPORTS
#define DLL_API __declspec(dllexport)
#else
#define DLL_API __declspec(dllimport)
#endif


extern "C" DLL_API int __stdcall number();
extern "C" DLL_API void __stdcall fio();