// GALMANBEDCE$$FAAJFKFKBOL @ RVA 0x3270560

void GALMANBEDCE__FAAJFKFKBOL
               (System_Action_o *PJDPEGNLFHH,System_Action_o *IECMGNKMACB,
               System_Action_int__int__o *HLBLIDOPBJJ,MethodInfo *method)

{
  System_Action_o **ppSVar1;
  System_Action_int__int__o **ppSVar2;
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  if ((DAT_04567296 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&GALMANBEDCE_TypeInfo);
    FUN_01bab630(&StringLiteral_15569);
    DAT_04567296 = 1;
  }
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  UnityEngine_Debug__Log(StringLiteral_15569,(MethodInfo *)0x0);
  GALMANBEDCE_TypeInfo->static_fields->OBDBCPILHKI = PJDPEGNLFHH;
  thunk_FUN_01c20e04(GALMANBEDCE_TypeInfo->static_fields,PJDPEGNLFHH);
  ppSVar1 = &GALMANBEDCE_TypeInfo->static_fields->AEDKMCHPODL;
  *ppSVar1 = IECMGNKMACB;
  thunk_FUN_01c20e04(ppSVar1,IECMGNKMACB);
  ppSVar2 = &GALMANBEDCE_TypeInfo->static_fields->HILLNHJFECF;
  *ppSVar2 = HLBLIDOPBJJ;
  method_00 = (MethodInfo *)thunk_FUN_01c20e04(ppSVar2,HLBLIDOPBJJ);
  GALMANBEDCE__LJGJPNGHGGM(method_00);
  GALMANBEDCE__POBKBKBKBEM(method_01);
  return;
}

