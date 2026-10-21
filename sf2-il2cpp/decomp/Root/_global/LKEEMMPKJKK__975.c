// TypeDefIndex 975
// Namespace: 
// public class LKEEMMPKJKK
// Fields:
//   public string JACHHEFFPGD; // 0x10
//   public bool CKMCCGLPKJB; // 0x18
//   public string ABCHAOKFLGL; // 0x20
//   public bool DFMACEOAJOC; // 0x28
//   public BaseDialog.OFBBBIDKKOD LKMIFPMMFCO; // 0x2C
//   public string FFBFCDFHOAJ; // 0x30
//   public bool DMGKDKHHFCE; // 0x38
//   public string JBOFCJGLMAL; // 0x40
//   public bool CHKHLNEMKJC; // 0x48
//   public LabelButton.MANJLBPDELA OENNHCIHICN; // 0x4C
//   public LabelButton.MANJLBPDELA LGBEBCFPBJK; // 0x50
//   public bool FGDJAHKMPEL; // 0x54
//   public bool NANOPALPCAJ; // 0x55
//   public string PDOMDAFNOCJ; // 0x58
//   public Action<object> LAALDDOEANK; // 0x60

// ===== public void .ctor(string PCPECHHMLEC, string EHNFGMGKCHO, BaseDialog.OFBBBIDKKOD DNBBBGEENMM, string KCFLBKINDFM, string KHPLLCKLJKO, LabelButton.MANJLBPDELA ACLFJCOLFMD, LabelButton.MANJLBPDELA LGJADIDEGHK, bool AJJPMOMMIGJ, bool NNKNJCADLGF, string IDGIFNHOBPI, Action<object> IELDNEAAPBE)  [RVA 0x30B4214]
// LKEEMMPKJKK$$.ctor @ RVA 0x30B4214

void LKEEMMPKJKK___ctor(LKEEMMPKJKK_o *__this,System_String_o *PCPECHHMLEC,
                       System_String_o *EHNFGMGKCHO,int32_t DNBBBGEENMM,System_String_o *KCFLBKINDFM
                       ,System_String_o *KHPLLCKLJKO,int32_t ACLFJCOLFMD,int32_t LGJADIDEGHK,
                       bool AJJPMOMMIGJ,bool NNKNJCADLGF,System_String_o *IDGIFNHOBPI,
                       System_Action_object__o *IELDNEAAPBE,MethodInfo *method)

{
  System_String_o **ppSVar1;
  System_Action_object__o **ppSVar2;
  System_String_o **ppSVar3;
  System_String_o **ppSVar4;
  System_String_o **ppSVar5;
  LKEEMMPKJKK_Fields *pLVar6;
  
  if ((DAT_045661f3 & 1) == 0) {
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_045661f3 = 1;
  }
  pLVar6 = &__this->fields;
  pLVar6->JACHHEFFPGD = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04(pLVar6);
  (__this->fields).CKMCCGLPKJB = true;
  ppSVar3 = &(__this->fields).ABCHAOKFLGL;
  *ppSVar3 = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04(ppSVar3);
  (__this->fields).DFMACEOAJOC = true;
  ppSVar4 = &(__this->fields).FFBFCDFHOAJ;
  *ppSVar4 = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04(ppSVar4);
  (__this->fields).DMGKDKHHFCE = true;
  ppSVar5 = &(__this->fields).JBOFCJGLMAL;
  *ppSVar5 = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04(ppSVar5);
  (__this->fields).CHKHLNEMKJC = true;
  (__this->fields).OENNHCIHICN = 1;
  ppSVar1 = &(__this->fields).PDOMDAFNOCJ;
  *ppSVar1 = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04(ppSVar1);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  pLVar6->JACHHEFFPGD = PCPECHHMLEC;
  thunk_FUN_01c20e04(pLVar6,PCPECHHMLEC);
  *ppSVar3 = EHNFGMGKCHO;
  thunk_FUN_01c20e04(ppSVar3,EHNFGMGKCHO);
  (__this->fields).LKMIFPMMFCO = DNBBBGEENMM;
  *ppSVar4 = KCFLBKINDFM;
  thunk_FUN_01c20e04(ppSVar4,KCFLBKINDFM);
  *ppSVar5 = KHPLLCKLJKO;
  thunk_FUN_01c20e04(ppSVar5,KHPLLCKLJKO);
  (__this->fields).OENNHCIHICN = ACLFJCOLFMD;
  (__this->fields).LGBEBCFPBJK = LGJADIDEGHK;
  (__this->fields).FGDJAHKMPEL = AJJPMOMMIGJ;
  (__this->fields).NANOPALPCAJ = NNKNJCADLGF;
  *ppSVar1 = IDGIFNHOBPI;
  thunk_FUN_01c20e04(ppSVar1);
  ppSVar2 = &(__this->fields).LAALDDOEANK;
  *ppSVar2 = IELDNEAAPBE;
  thunk_FUN_01c20e04(ppSVar2);
  return;
}

