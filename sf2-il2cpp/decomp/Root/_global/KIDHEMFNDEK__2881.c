// TypeDefIndex 2881
// Namespace: 
// public class KIDHEMFNDEK
// Fields:
//   public Action<object> LAALDDOEANK; // 0x10
//   public CAKCKIAJAFO JAICMIMBIOA; // 0x18
//   public TradeDialog.KEHKALMFNHN EDOEMIDBEGO; // 0x1C
//   public long HFNGDECGHOL; // 0x20
//   public long GCIAGFJBDGM; // 0x28
//   public string NFCHNBLCHGK; // 0x30
//   public bool FGDJAHKMPEL; // 0x38

// ===== public void .ctor(TradeDialog.KEHKALMFNHN OFJCBIEADON, CAKCKIAJAFO PCNEDMAJMOJ = 0, long HEAAKDMBNKB = 0, Action<object> DNPHBCPFMPB, long BHBEFOMAGCC = 0, string GMILEGDKKPL, bool KGEDEAGBKGB = False)  [RVA 0x343E8C8]
// KIDHEMFNDEK$$.ctor @ RVA 0x343E8C8

void KIDHEMFNDEK___ctor(KIDHEMFNDEK_o *__this,int32_t OFJCBIEADON,int32_t PCNEDMAJMOJ,
                       int64_t HEAAKDMBNKB,System_Action_object__o *DNPHBCPFMPB,int64_t BHBEFOMAGCC,
                       System_String_o *GMILEGDKKPL,bool KGEDEAGBKGB,MethodInfo *method)

{
  System_String_o **ppSVar1;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).JAICMIMBIOA = PCNEDMAJMOJ;
  (__this->fields).EDOEMIDBEGO = OFJCBIEADON;
  (__this->fields).HFNGDECGHOL = HEAAKDMBNKB;
  (__this->fields).LAALDDOEANK = DNPHBCPFMPB;
  thunk_FUN_01c20e04(&__this->fields,DNPHBCPFMPB);
  ppSVar1 = &(__this->fields).NFCHNBLCHGK;
  *ppSVar1 = GMILEGDKKPL;
  (__this->fields).GCIAGFJBDGM = BHBEFOMAGCC;
  thunk_FUN_01c20e04(ppSVar1,GMILEGDKKPL);
  (__this->fields).FGDJAHKMPEL = KGEDEAGBKGB;
  return;
}

