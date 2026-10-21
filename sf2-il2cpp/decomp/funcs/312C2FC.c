// ADGIHFGIFHO$$FLMPLCENDLB @ RVA 0x312C2FC

int32_t ADGIHFGIFHO__FLMPLCENDLB(ADGIHFGIFHO_o *__this,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  EEGDOGKBLNG_o *pEVar3;
  System_String_o *GJFGFNAGPEO;
  
  if ((DAT_0456669b & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&LPGPNBGHDBD_TypeInfo);
    DAT_0456669b = 1;
  }
  bVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__ALBJPLAPOBO
                    ((CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_o)
                     (__this->fields).super.HJPOJOPKEKI.fields,(MethodInfo *)0x0);
  if (!bVar1) {
    return 0;
  }
                    /* try { // try from 0322c354 to 0332c37b has its CatchHandler @ 0322c480 */
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pEVar3 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
  if (pEVar3 != (EEGDOGKBLNG_o *)0x0) {
    GJFGFNAGPEO = (pEVar3->fields).JHMMCCKCFFH;
    if ((LPGPNBGHDBD_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(LPGPNBGHDBD_TypeInfo);
    }
    iVar2 = LPGPNBGHDBD__IILILGFMCPJ(GJFGFNAGPEO,(MethodInfo *)0x0);
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0322c3b0 to 0332c3db has its CatchHandler @ 0322c47c */
  FUN_01bab8c8();
}

