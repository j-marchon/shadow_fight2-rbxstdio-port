// BMMAPANJCEC$$.ctor @ RVA 0x30BD200

void BMMAPANJCEC___ctor(BMMAPANJCEC_o *__this,MethodInfo *method)

{
  GNJBJKEJEGC_o *pGVar1;
  GNJBJKEJEGC_o **ppGVar2;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566259 & 1) == 0) {
    FUN_01bab630(&GNJBJKEJEGC_TypeInfo);
    DAT_04566259 = 1;
    method = extraout_x1;
  }
  pGVar1 = (GNJBJKEJEGC_o *)thunk_FUN_01bda818(GNJBJKEJEGC_TypeInfo,method);
  GNJBJKEJEGC___ctor(pGVar1,0.0,(MethodInfo *)0x0);
  (__this->fields).EHENNILDPMD = pGVar1;
  thunk_FUN_01c20e04(&__this->fields,pGVar1);
  pGVar1 = (GNJBJKEJEGC_o *)thunk_FUN_01bda818(GNJBJKEJEGC_TypeInfo);
  GNJBJKEJEGC___ctor(pGVar1,0.0,(MethodInfo *)0x0);
  ppGVar2 = &(__this->fields).MEGGHJNADEN;
  *ppGVar2 = pGVar1;
  thunk_FUN_01c20e04(ppGVar2,pGVar1);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

