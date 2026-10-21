// MCIBPLJEFLJ.KHCGONNHOMM$$.ctor @ RVA 0x3050504

void MCIBPLJEFLJ_KHCGONNHOMM___ctor(MCIBPLJEFLJ_KHCGONNHOMM_o *__this,MethodInfo *method)

{
  CNDPAJOLKFN_o *pCVar1;
  CNDPAJOLKFN_o **ppCVar2;
  MethodInfo *extraout_x1;
  
  if ((DAT_04565e47 & 1) == 0) {
    FUN_01bab630(&CNDPAJOLKFN_TypeInfo);
    DAT_04565e47 = 1;
    method = extraout_x1;
  }
  pCVar1 = (CNDPAJOLKFN_o *)thunk_FUN_01bda818(CNDPAJOLKFN_TypeInfo,method);
  CNDPAJOLKFN___ctor(pCVar1,(MethodInfo *)0x0);
  ppCVar2 = &(__this->fields).BPILADHMHBB;
  *ppCVar2 = pCVar1;
  thunk_FUN_01c20e04(ppCVar2,pCVar1);
  pCVar1 = (CNDPAJOLKFN_o *)thunk_FUN_01bda818(CNDPAJOLKFN_TypeInfo);
  CNDPAJOLKFN___ctor(pCVar1,(MethodInfo *)0x0);
  ppCVar2 = &(__this->fields).HNNCKGOBKLK;
  *ppCVar2 = pCVar1;
  thunk_FUN_01c20e04(ppCVar2,pCVar1);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

