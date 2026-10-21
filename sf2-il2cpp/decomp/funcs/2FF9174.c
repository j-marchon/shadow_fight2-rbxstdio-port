// JMDPBFOCHHP$$GIENGNEGHPJ @ RVA 0x2FF9174

void JMDPBFOCHHP__GIENGNEGHPJ(JMDPBFOCHHP_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *method_00;
  
  if ((DAT_04565ab8 & 1) == 0) {
    FUN_01bab630(&MGENAMAJALB_TypeInfo);
    DAT_04565ab8 = 1;
    method = extraout_x1;
  }
  if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MGENAMAJALB_TypeInfo,method);
  }
  pSVar2 = MGENAMAJALB__GAFKBFMBPKO((MethodInfo *)0x0);
  bVar1 = System_IO_Directory__Exists(pSVar2,(MethodInfo *)0x0);
  method_00 = extraout_x1_00;
  if (!bVar1) {
    if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar2 = MGENAMAJALB__GAFKBFMBPKO((MethodInfo *)0x0);
    System_IO_Directory__CreateDirectory(pSVar2,(MethodInfo *)0x0);
    method_00 = extraout_x1_01;
  }
  JMDPBFOCHHP__ECPPCMKAGNG(__this,method_00);
  return;
}

