#ifdef _WIN32
#include <tchar.h>
#endif
#include <string>

extern "C" __declspec(dllexport) int number();
extern "C" __declspec(dllexport) wchar_t* fio();
