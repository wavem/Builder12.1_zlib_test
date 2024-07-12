//---------------------------------------------------------------------------

#ifndef MainH
#define MainH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TFormMain : public TForm
{
__published:	// IDE-managed Components
	TPanel *___pnBase;
	TGroupBox *gb_Compress;
	TGroupBox *gb_UnCompress;
	TEdit *ed_Compress_Target_Path;
	TLabel *Label1;
	TLabel *Label2;
	TLabel *Label3;
	TLabel *Label4;
	TEdit *ed_Compress_GZ_Path;
	TEdit *ed_UnCompress_Target_Path;
	TEdit *ed_UnCompress_GZ_Path;
	TButton *btn_Compress;
	TButton *btn_UnCompress;
	TGroupBox *gb_Log;
	TMemo *memo;
	void __fastcall btn_CompressClick(TObject *Sender);
	void __fastcall btn_UnCompressClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TFormMain(TComponent* Owner);

public: // DEFAULT MEMBERS
    void __fastcall PrintMsg(UnicodeString _str);
};
//---------------------------------------------------------------------------
extern PACKAGE TFormMain *FormMain;
//---------------------------------------------------------------------------
#endif
