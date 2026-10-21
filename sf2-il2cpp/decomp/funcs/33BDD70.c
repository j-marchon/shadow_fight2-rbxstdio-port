// CUDLR.Server$$OHDFFFNDEFC @ RVA 0x33BDD70

void CUDLR_Server__OHDFFFNDEFC
               (CUDLR_Server_o *__this,System_String_o *IMCONGDFJME,MethodInfo *method)

{
  System_Net_HttpListener_o **ppSVar1;
  
  CUDLR_Server__CEOHKHGKEKL(__this,(MethodInfo *)IMCONGDFJME);
  ppSVar1 = &(__this->fields).PDALMPAOAFM;
  if (*ppSVar1 != (System_Net_HttpListener_o *)0x0) {
    System_Net_HttpListener__Abort(*ppSVar1,(MethodInfo *)0x0);
    *ppSVar1 = (System_Net_HttpListener_o *)0x0;
    thunk_FUN_01c20e04(ppSVar1,0);
    return;
  }
  return;
}

