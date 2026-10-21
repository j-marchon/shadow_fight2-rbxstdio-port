// TypeDefIndex 1442
// Namespace: 
// private class BEPJMNAHCAD.HKFNKBEOOHP
// Fields:
//   public CNDPAJOLKFN EKEMKOCPHPO; // 0x10
//   public CNDPAJOLKFN MJNAHMEKOLE; // 0x18
//   public int DFIBGGDJPLM; // 0x20
//   public bool OPNIEBGMEPI; // 0x24

// ===== public void .ctor()  [RVA 0x3189F30]
// BEPJMNAHCAD.HKFNKBEOOHP$$.ctor @ RVA 0x3189F30

void BEPJMNAHCAD_HKFNKBEOOHP___ctor(BEPJMNAHCAD_HKFNKBEOOHP_o *__this,MethodInfo *method)

{
  CNDPAJOLKFN_o *pCVar1;
  CNDPAJOLKFN_o **ppCVar2;
  MethodInfo *extraout_x1;
  
                    /* try { // try from 03289f38 to 03389f43 has its CatchHandler @ 0328a08c */
  if ((DAT_04566a09 & 1) == 0) {
    FUN_01bab630(&CNDPAJOLKFN_TypeInfo);
    DAT_04566a09 = 1;
    method = extraout_x1;
  }
                    /* try { // try from 03289f64 to 03389f6b has its CatchHandler @ 0328a078 */
  pCVar1 = (CNDPAJOLKFN_o *)thunk_FUN_01bda818(CNDPAJOLKFN_TypeInfo,method);
  CNDPAJOLKFN___ctor(pCVar1,(MethodInfo *)0x0);
  (__this->fields).EKEMKOCPHPO = pCVar1;
  thunk_FUN_01c20e04(&__this->fields,pCVar1);
  pCVar1 = (CNDPAJOLKFN_o *)thunk_FUN_01bda818(CNDPAJOLKFN_TypeInfo);
  CNDPAJOLKFN___ctor(pCVar1,(MethodInfo *)0x0);
  ppCVar2 = &(__this->fields).MJNAHMEKOLE;
  *ppCVar2 = pCVar1;
  thunk_FUN_01c20e04(ppCVar2,pCVar1);
                    /* try { // try from 03289fac to 03389fcf has its CatchHandler @ 0328a080 */
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

