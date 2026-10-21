// Util$$IHCIAJFBPHH @ RVA 0x3209F60

int32_t Util__IHCIAJFBPHH(int64_t ELACKBJPMNB,MethodInfo *method)

{
  int64_t ELACKBJPMNB_00;
  int32_t iVar1;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  
  if ((DAT_04566e6d & 1) == 0) {
    FUN_01bab630(&System_Math_TypeInfo);
    DAT_04566e6d = 1;
    method = extraout_x1;
  }
  if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    method = extraout_x1_00;
  }
  ELACKBJPMNB_00 = -ELACKBJPMNB;
  if (-1 < ELACKBJPMNB) {
    ELACKBJPMNB_00 = ELACKBJPMNB;
  }
  iVar1 = Util__JPFMDIGLLHB(ELACKBJPMNB_00,method);
  return iVar1;
}

