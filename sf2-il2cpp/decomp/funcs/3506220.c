// FDEOKGMPLBK$$FAAJFKFKBOL @ RVA 0x3506220

void FDEOKGMPLBK__FAAJFKFKBOL
               (System_Action_o *PJDPEGNLFHH,System_Action_int__int__o *HLBLIDOPBJJ,
               MethodInfo *method)

{
  System_Action_int__int__o **ppSVar1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  if ((DAT_0456889b & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&FDEOKGMPLBK_TypeInfo);
    FUN_01bab630(&StringLiteral_15548);
    DAT_0456889b = 1;
  }
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  UnityEngine_Debug__Log(StringLiteral_15548,(MethodInfo *)0x0);
  FDEOKGMPLBK_TypeInfo->static_fields->OBDBCPILHKI = PJDPEGNLFHH;
  thunk_FUN_01c20e04(FDEOKGMPLBK_TypeInfo->static_fields,PJDPEGNLFHH);
  ppSVar1 = &FDEOKGMPLBK_TypeInfo->static_fields->HILLNHJFECF;
  *ppSVar1 = HLBLIDOPBJJ;
  method_00 = (MethodInfo *)thunk_FUN_01c20e04(ppSVar1,HLBLIDOPBJJ);
  FDEOKGMPLBK__LJGJPNGHGGM(method_00);
  FDEOKGMPLBK__POBKBKBKBEM(method_01);
  return;
}

