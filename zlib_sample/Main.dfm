object FormMain: TFormMain
  Left = 0
  Top = 0
  Caption = 'ZLIB TEST'
  ClientHeight = 547
  ClientWidth = 624
  Color = clBtnFace
  DoubleBuffered = True
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  Position = poScreenCenter
  TextHeight = 15
  object ___pnBase: TPanel
    Left = 0
    Top = 0
    Width = 624
    Height = 547
    Align = alClient
    BevelOuter = bvNone
    Color = 3947580
    ParentBackground = False
    TabOrder = 0
    ExplicitLeft = 216
    ExplicitTop = 120
    ExplicitWidth = 185
    ExplicitHeight = 41
    object gb_Compress: TGroupBox
      Left = 24
      Top = 24
      Width = 577
      Height = 137
      Caption = 'gb_Compress'
      Color = 3947580
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWhite
      Font.Height = -12
      Font.Name = 'Segoe UI'
      Font.Style = []
      ParentBackground = False
      ParentColor = False
      ParentFont = False
      TabOrder = 0
      StyleName = 'Windows'
      object Label1: TLabel
        Left = 32
        Top = 43
        Width = 80
        Height = 15
        Caption = 'Target File Path'
      end
      object Label2: TLabel
        Left = 32
        Top = 83
        Width = 60
        Height = 15
        Caption = 'gz File Path'
      end
      object ed_Compress_Target_Path: TEdit
        Left = 128
        Top = 40
        Width = 281
        Height = 23
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clBlack
        Font.Height = -12
        Font.Name = 'Segoe UI'
        Font.Style = []
        ParentFont = False
        TabOrder = 0
      end
      object ed_Compress_GZ_Path: TEdit
        Left = 128
        Top = 80
        Width = 281
        Height = 23
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clBlack
        Font.Height = -12
        Font.Name = 'Segoe UI'
        Font.Style = []
        ParentFont = False
        TabOrder = 1
      end
      object btn_Compress: TButton
        Left = 471
        Top = 97
        Width = 90
        Height = 25
        Caption = 'Compress'
        TabOrder = 2
        OnClick = btn_CompressClick
      end
    end
    object gb_UnCompress: TGroupBox
      Left = 24
      Top = 176
      Width = 577
      Height = 137
      Caption = 'UnCompress'
      Color = 3947580
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWhite
      Font.Height = -12
      Font.Name = 'Segoe UI'
      Font.Style = []
      ParentBackground = False
      ParentColor = False
      ParentFont = False
      TabOrder = 1
      StyleName = 'Windows'
      object Label3: TLabel
        Left = 32
        Top = 43
        Width = 80
        Height = 15
        Caption = 'Target File Path'
      end
      object Label4: TLabel
        Left = 32
        Top = 83
        Width = 60
        Height = 15
        Caption = 'gz File Path'
      end
      object ed_UnCompress_Target_Path: TEdit
        Left = 128
        Top = 40
        Width = 281
        Height = 23
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clBlack
        Font.Height = -12
        Font.Name = 'Segoe UI'
        Font.Style = []
        ParentFont = False
        TabOrder = 0
      end
      object ed_UnCompress_GZ_Path: TEdit
        Left = 128
        Top = 80
        Width = 281
        Height = 23
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clBlack
        Font.Height = -12
        Font.Name = 'Segoe UI'
        Font.Style = []
        ParentFont = False
        TabOrder = 1
      end
      object btn_UnCompress: TButton
        Left = 471
        Top = 97
        Width = 90
        Height = 25
        Caption = 'UnCompress'
        TabOrder = 2
        OnClick = btn_UnCompressClick
      end
    end
    object gb_Log: TGroupBox
      Left = 24
      Top = 336
      Width = 577
      Height = 185
      Caption = 'Log'
      Color = 3947580
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWhite
      Font.Height = -12
      Font.Name = 'Segoe UI'
      Font.Style = []
      ParentBackground = False
      ParentColor = False
      ParentFont = False
      TabOrder = 2
      StyleName = 'Windows'
      object memo: TMemo
        Left = 32
        Top = 32
        Width = 513
        Height = 129
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clBlack
        Font.Height = -12
        Font.Name = 'Segoe UI'
        Font.Style = []
        ParentFont = False
        ReadOnly = True
        TabOrder = 0
      end
    end
  end
end
