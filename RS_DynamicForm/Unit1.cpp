//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <Windows.h>
#include "DLLPCH1.h"
#include <string>

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
	typedef INT(CALLBACK* PCreateMessageNomer)();
	typedef wchar_t*(CALLBACK* PCreateMessageFIO)();
	HINSTANCE hDLL = NULL;

	PCreateMessageNomer CreateMessageNomer = NULL;
	PCreateMessageFIO CreateMessageFIO = NULL;
	hDLL = LoadLibraryW(L"DLL.dll");

	if (hDLL != NULL) {

		CreateMessageNomer = (PCreateMessageNomer)GetProcAddress(hDLL,"_number");
		CreateMessageFIO = (PCreateMessageFIO)GetProcAddress(hDLL,"_fio");

		if (CreateMessageNomer != NULL || CreateMessageFIO != NULL )
		{

			int chislo = CreateMessageNomer();
			Edit1->Text = chislo;

			wchar_t* fio = CreateMessageFIO();

			Edit2->Text = fio;
		}
		else
		{
			Edit1->Text = "Функции не найдены, измените характеристики программы.";
		}
	}
	else
	{
	   Edit1->Text = "Ошибка DLL, проверьте подключение динамической библиотеки.";
	}

   FreeLibrary(hDLL);
}

//---------------------------------------------------------------------------

void __fastcall TForm1::Button2Click(TObject *Sender)
{
	if (Edit3->Text == "Облако" || Edit3->Text == "Туча" || Edit3->Text == "облако"|| Edit3->Text == "туча")
	{
        Button1->Visible = True;
	}
}
//---------------------------------------------------------------------------

//---------------------------------------------------------------------------

