// TypeDefIndex 3072
// Namespace: 
// public class DPIEIFJBFHE
// Fields:
//   public string JIJLBFGKNJK; // 0x10
//   public string INLGJADOPFA; // 0x18
//   public bool IPDNNDFCGBK; // 0x20

// ===== public void .ctor(string KGLJICLJHEL, string DGMHNKGDAIL, bool AAHDALLELJN)  [RVA 0x34C5470]
// DPIEIFJBFHE$$.ctor @ RVA 0x34C5470

void DPIEIFJBFHE___ctor(DPIEIFJBFHE_o *__this,System_String_o *KGLJICLJHEL,
                       System_String_o *DGMHNKGDAIL,bool AAHDALLELJN,MethodInfo *method)

{
  System_String_o **ppSVar1;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).JIJLBFGKNJK = KGLJICLJHEL;
  thunk_FUN_01c20e04(&__this->fields,KGLJICLJHEL);
  ppSVar1 = &(__this->fields).INLGJADOPFA;
  *ppSVar1 = DGMHNKGDAIL;
  thunk_FUN_01c20e04(ppSVar1,DGMHNKGDAIL);
  (__this->fields).IPDNNDFCGBK = AAHDALLELJN;
  return;
}

