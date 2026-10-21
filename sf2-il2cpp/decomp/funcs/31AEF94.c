// LHEANFBMAAI$$FAAJFKFKBOL @ RVA 0x31AEF94

void LHEANFBMAAI__FAAJFKFKBOL
               (System_Action_o *PJDPEGNLFHH,System_Action_o *IECMGNKMACB,
               System_Action_int__int__o *HLBLIDOPBJJ,MethodInfo *method)

{
  System_Action_o **ppSVar1;
  System_Action_int__int__o **ppSVar2;
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  if ((DAT_04566b6e & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&LHEANFBMAAI_TypeInfo);
    FUN_01bab630(&StringLiteral_15451);
    DAT_04566b6e = 1;
  }
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  UnityEngine_Debug__Log(StringLiteral_15451,(MethodInfo *)0x0);
  LHEANFBMAAI_TypeInfo->static_fields->OBDBCPILHKI = PJDPEGNLFHH;
  thunk_FUN_01c20e04(LHEANFBMAAI_TypeInfo->static_fields,PJDPEGNLFHH);
  ppSVar1 = &LHEANFBMAAI_TypeInfo->static_fields->AEDKMCHPODL;
  *ppSVar1 = IECMGNKMACB;
  thunk_FUN_01c20e04(ppSVar1,IECMGNKMACB);
  ppSVar2 = &LHEANFBMAAI_TypeInfo->static_fields->HILLNHJFECF;
  *ppSVar2 = HLBLIDOPBJJ;
  method_00 = (MethodInfo *)thunk_FUN_01c20e04(ppSVar2,HLBLIDOPBJJ);
  LHEANFBMAAI__LJGJPNGHGGM(method_00);
  LHEANFBMAAI__POBKBKBKBEM(method_01);
  return;
}

