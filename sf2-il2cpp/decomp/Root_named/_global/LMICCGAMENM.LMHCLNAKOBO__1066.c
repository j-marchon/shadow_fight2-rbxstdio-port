// TypeDefIndex 1066
// Namespace: 
// private class LMICCGAMENM.LMHCLNAKOBO
// Fields:
//   public EILGGBOIMGE.FMFDKGKCBBG DJELHJIIPLG; // 0x10
//   public EILGGBOIMGE.FMFDKGKCBBG LIDMBHDEIFP; // 0x18
//   public EILGGBOIMGE.FMFDKGKCBBG EOLKPCIKAFA; // 0x20

// ===== public void .ctor()  [RVA 0x30DBE10]
// LMICCGAMENM.LMHCLNAKOBO$$.ctor @ RVA 0x30DBE10

void LMICCGAMENM_LMHCLNAKOBO___ctor(LMICCGAMENM_LMHCLNAKOBO_o *__this,MethodInfo *method)

{
  EILGGBOIMGE_FMFDKGKCBBG_o *pEVar1;
  EILGGBOIMGE_FMFDKGKCBBG_o **ppEVar2;
  MethodInfo *extraout_x1;
  
  if ((DAT_0456635c & 1) == 0) {
    FUN_01bab630(&EILGGBOIMGE_FMFDKGKCBBG_TypeInfo);
    DAT_0456635c = 1;
    method = extraout_x1;
  }
  pEVar1 = (EILGGBOIMGE_FMFDKGKCBBG_o *)thunk_FUN_01bda818(EILGGBOIMGE_FMFDKGKCBBG_TypeInfo,method);
  EILGGBOIMGE_FMFDKGKCBBG___ctor(pEVar1,(MethodInfo *)0x0);
  (__this->fields).DJELHJIIPLG = pEVar1;
  thunk_FUN_01c20e04(&__this->fields,pEVar1);
  pEVar1 = (EILGGBOIMGE_FMFDKGKCBBG_o *)thunk_FUN_01bda818(EILGGBOIMGE_FMFDKGKCBBG_TypeInfo);
  EILGGBOIMGE_FMFDKGKCBBG___ctor(pEVar1,(MethodInfo *)0x0);
  ppEVar2 = &(__this->fields).LIDMBHDEIFP;
  *ppEVar2 = pEVar1;
  thunk_FUN_01c20e04(ppEVar2,pEVar1);
  pEVar1 = (EILGGBOIMGE_FMFDKGKCBBG_o *)thunk_FUN_01bda818(EILGGBOIMGE_FMFDKGKCBBG_TypeInfo);
  EILGGBOIMGE_FMFDKGKCBBG___ctor(pEVar1,(MethodInfo *)0x0);
  ppEVar2 = &(__this->fields).EOLKPCIKAFA;
  *ppEVar2 = pEVar1;
  thunk_FUN_01c20e04(ppEVar2,pEVar1);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

