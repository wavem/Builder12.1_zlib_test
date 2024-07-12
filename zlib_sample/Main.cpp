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
	// Common
	AnsiString t_FilePath = ed_Compress_Target_Path->Text;
	AnsiString t_GZPath = ed_Compress_GZ_Path->Text;

	// Pre-Return
	if(t_FilePath == "" || t_GZPath == "") {
		PrintMsg(L"Please Input File Path");
		return;
	}





	PrintMsg(L"Compress Complete");
}
//---------------------------------------------------------------------------

void __fastcall TFormMain::btn_UnCompressClick(TObject *Sender)
{
	// Common
	AnsiString t_FilePath = ed_Compress_Target_Path->Text;
	AnsiString t_GZPath = ed_Compress_GZ_Path->Text;

	// Pre-Return
	if(t_FilePath == "" || t_GZPath == "") {
		PrintMsg(L"Please Input File Path");
		return;
	}

	PrintMsg(L"Un-Compress Complete");
}
//---------------------------------------------------------------------------
