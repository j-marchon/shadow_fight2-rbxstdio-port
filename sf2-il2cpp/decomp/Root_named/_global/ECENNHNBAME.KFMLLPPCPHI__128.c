// TypeDefIndex 128
// Namespace: 
// public class InfoAnimation.KFMLLPPCPHI
// Fields:
//   public InfoAnimation.EOGDIKKFFGE LBDADFDEMPE; // 0x10
//   public InfoAnimation.EOGDIKKFFGE LGNNMJOCKFL; // 0x14
//   public int HHLJNICBMDA; // 0x18
//   public int ADHOLLAMHDG; // 0x1C
//   public int AFHPNIKKMBM; // 0x20
//   public int DEDEEJDBALF; // 0x24
//   public InfoAnimation.LMMCLFNDAJL ONFAKNEMEGC; // 0x28
//   public bool LBOJHMPHLGC; // 0x2C
//   public bool FPPCPCFBFCL; // 0x2D
//   public bool ICPKNBPKPIF; // 0x2E
//   public string OBBONHJFLBG; // 0x30
//   public string CCFODMDLKFD; // 0x38
//   public string GOJLAPEHHAM; // 0x40
//   public LCAJGLLBBEC.ELJAALFNLIP HGPLMIHMEBA; // 0x48
//   public LCAJGLLBBEC.ELJAALFNLIP AIJIIAOLNNJ; // 0x4C
//   public ShiftValue IJILGOMOKCM; // 0x50
//   public ShiftValue MECKAKAENEM; // 0x58
//   public bool OKONAOJIODE; // 0x60

// ===== public void RandomizeObscuredVars()  [RVA 0x301AA3C]
// InfoAnimation.KFMLLPPCPHI$$RandomizeObscuredVars @ RVA 0x301AA3C

void InfoAnimation_KFMLLPPCPHI__RandomizeObscuredVars
               (InfoAnimation_KFMLLPPCPHI_o *__this,MethodInfo *method)

{
  ShiftValue_o *pFVar1;
  
  pFVar1 = (__this->fields).IJILGOMOKCM;
  if (pFVar1 != (ShiftValue_o *)0x0) {
    ShiftValue__GPJJDLBJOAL(pFVar1,(MethodInfo *)0x0);
  }
  pFVar1 = (__this->fields).MECKAKAENEM;
  if (pFVar1 != (ShiftValue_o *)0x0) {
    ShiftValue__GPJJDLBJOAL(pFVar1,(MethodInfo *)0x0);
    return;
  }
  return;
}


// ===== public void .ctor()  [RVA 0x3017C68]
// InfoAnimation.KFMLLPPCPHI$$.ctor @ RVA 0x3017C68

void InfoAnimation_KFMLLPPCPHI___ctor(InfoAnimation_KFMLLPPCPHI_o *__this,MethodInfo *method)

{
  if ((DAT_04565c01 & 1) == 0) {
    FUN_01bab630(&string_TypeInfo);
    DAT_04565c01 = 1;
  }
  (__this->fields).HHLJNICBMDA = -1;
  (__this->fields).ADHOLLAMHDG = -1;
  (__this->fields).AFHPNIKKMBM = -1;
  (__this->fields).DEDEEJDBALF = -1;
  (__this->fields).OBBONHJFLBG = string_TypeInfo->static_fields->Empty;
  thunk_FUN_01c20e04();
  (__this->fields).CCFODMDLKFD = string_TypeInfo->static_fields->Empty;
  thunk_FUN_01c20e04();
  (__this->fields).GOJLAPEHHAM = string_TypeInfo->static_fields->Empty;
  thunk_FUN_01c20e04();
  (__this->fields).HGPLMIHMEBA = 1;
  (__this->fields).AIJIIAOLNNJ = 1;
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

