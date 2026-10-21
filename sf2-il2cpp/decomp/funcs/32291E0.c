// LPGPNBGHDBD$$DMBEBNELNNC @ RVA 0x32291E0

System_String_o * LPGPNBGHDBD__DMBEBNELNNC(System_String_o *GJFGFNAGPEO,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  MGNDHCBAPEN_int__int__o *pMVar3;
  System_String_o *pSVar4;
  System_String_o *str2;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  int32_t *piVar5;
  
  if ((DAT_04566f8b & 1) == 0) {
    FUN_01bab630(&LPGPNBGHDBD_TypeInfo);
    FUN_01bab630(&StringLiteral_235);
    FUN_01bab630(&StringLiteral_1);
    DAT_04566f8b = 1;
    method = extraout_x1;
  }
  if ((LPGPNBGHDBD_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    method = extraout_x1_00;
  }
  pMVar3 = LPGPNBGHDBD__BLPHGLNELMC(GJFGFNAGPEO,method);
  pSVar4 = StringLiteral_1;
  if (pMVar3 != (MGNDHCBAPEN_int__int__o *)0x0) {
    iVar1 = (pMVar3->fields).PHPELPFMOII;
    piVar5 = &(pMVar3->fields).DOKHHBGJICA;
    iVar2 = *piVar5;
    pSVar4 = System_Int32__ToString((int32_t)&pMVar3->fields,(MethodInfo *)0x0);
    if (iVar1 != iVar2) {
      str2 = System_Int32__ToString((int32_t)piVar5,(MethodInfo *)0x0);
      pSVar4 = System_String__Concat(pSVar4,StringLiteral_235,str2,(MethodInfo *)0x0);
      return pSVar4;
    }
  }
  return pSVar4;
}

