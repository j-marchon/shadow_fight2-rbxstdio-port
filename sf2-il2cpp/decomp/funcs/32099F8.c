// Util$$JPFMDIGLLHB @ RVA 0x32099F8

int32_t Util__JPFMDIGLLHB(int64_t ELACKBJPMNB,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  ulong uVar2;
  int iVar3;
  
  if ((DAT_04566e67 & 1) == 0) {
    FUN_01bab630(&System_Math_TypeInfo);
    DAT_04566e67 = 1;
    method = extraout_x1;
  }
  iVar3 = 1;
  if (ELACKBJPMNB < 0) {
    iVar3 = 2;
  }
  if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(System_Math_TypeInfo,method);
  }
  uVar2 = -ELACKBJPMNB;
  if (-1 < ELACKBJPMNB) {
    uVar2 = ELACKBJPMNB;
  }
  if (9 < uVar2) {
    do {
      iVar3 = iVar3 + 1;
      bVar1 = 99 < uVar2;
      uVar2 = uVar2 / 10;
    } while (bVar1);
  }
  return iVar3;
}

