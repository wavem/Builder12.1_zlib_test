//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Main.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFormMain *FormMain;
//---------------------------------------------------------------------------
__fastcall TFormMain::TFormMain(TComponent* Owner)
	: TForm(Owner)
{
	PrintMsg(L"START");
}
//---------------------------------------------------------------------------

void __fastcall TFormMain::PrintMsg(UnicodeString _str) {
	UnicodeString tempStr = L"";
	TDateTime t_DateTime = Now();
	t_DateTime.FormatString(L"yyyy/mm/dd hh:nn:ss(zzz)");
	//tempStr.sprintf(L"[%s] %s", t_DateTime.DateTimeString().c_str(), _str.c_str());
	tempStr.sprintf(L"[%s] %s", t_DateTime.FormatString(L"yyyy/mm/dd hh:nn:ss(zzz)").c_str(), _str.c_str());
	memo->Lines->Add(tempStr);
}
//---------------------------------------------------------------------------

void __fastcall TFormMain::btn_CompressClick(TObject *Sender)
{
	PrintMsg(L"Compress Complete");
}
//---------------------------------------------------------------------------

void __fastcall TFormMain::btn_UnCompressClick(TObject *Sender)
{
	PrintMsg(L"Un-Compress Complete");
}
//---------------------------------------------------------------------------
