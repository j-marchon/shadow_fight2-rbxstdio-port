// IBCHOCDIMIP$$.ctor @ RVA 0x32DDB4C

void IBCHOCDIMIP___ctor(IBCHOCDIMIP_o *__this,MethodInfo *method)

{
  JMIFGHKOLCL_o *pJVar1;
  JMIFGHKOLCL_o **ppJVar2;
  MethodInfo *extraout_x1;
  
  if ((DAT_045675d7 & 1) == 0) {
    FUN_01bab630(&JMIFGHKOLCL_TypeInfo);
    DAT_045675d7 = 1;
    method = extraout_x1;
  }
  pJVar1 = (JMIFGHKOLCL_o *)thunk_FUN_01bda818(JMIFGHKOLCL_TypeInfo,method);
  JMIFGHKOLCL___ctor(pJVar1,(MethodInfo *)0x0);
  (__this->fields).OMJKJPDFDBF = pJVar1;
  thunk_FUN_01c20e04(&__this->fields,pJVar1);
  pJVar1 = (JMIFGHKOLCL_o *)thunk_FUN_01bda818(JMIFGHKOLCL_TypeInfo);
  JMIFGHKOLCL___ctor(pJVar1,(MethodInfo *)0x0);
  ppJVar2 = &(__this->fields).AKNFNACBAHE;
  *ppJVar2 = pJVar1;
  thunk_FUN_01c20e04(ppJVar2,pJVar1);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

