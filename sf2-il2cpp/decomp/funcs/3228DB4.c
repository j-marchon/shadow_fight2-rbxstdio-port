// LPGPNBGHDBD$$IILILGFMCPJ @ RVA 0x3228DB4

int32_t LPGPNBGHDBD__IILILGFMCPJ(System_String_o *GJFGFNAGPEO,MethodInfo *method)

{
  int32_t GKBCJOEFFCP;
  int32_t iVar1;
  MGNDHCBAPEN_int__int__o *pMVar2;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  
  if ((DAT_04566f89 & 1) == 0) {
    FUN_01bab630(&LIIFLGALGNK_TypeInfo);
    FUN_01bab630(&LPGPNBGHDBD_TypeInfo);
    DAT_04566f89 = 1;
    method = extraout_x1;
  }
  if ((LPGPNBGHDBD_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    method = extraout_x1_00;
  }
  pMVar2 = LPGPNBGHDBD__BLPHGLNELMC(GJFGFNAGPEO,method);
  if (pMVar2 != (MGNDHCBAPEN_int__int__o *)0x0) {
    iVar1 = (pMVar2->fields).PHPELPFMOII;
    GKBCJOEFFCP = (pMVar2->fields).DOKHHBGJICA;
    if ((LIIFLGALGNK_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(LIIFLGALGNK_TypeInfo);
    }
    iVar1 = LIIFLGALGNK__HLMBDJOGONJ(iVar1,GKBCJOEFFCP,(MethodInfo *)0x0);
    return iVar1;
  }
  return 0;
}

