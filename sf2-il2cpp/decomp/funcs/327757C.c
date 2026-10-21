// OCMLPCKBHPN$$CCCOGGIBFNI @ RVA 0x327757C

void OCMLPCKBHPN__CCCOGGIBFNI(bool FGKAODDNPLK,MethodInfo *method)

{
  OCMLPCKBHPN_c *pOVar1;
  MethodInfo *extraout_x1;
  System_Collections_Generic_List_int__o *pSVar2;
  
  if ((DAT_04567256 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<int>_Clear__);
    FUN_01bab630(&OCMLPCKBHPN_TypeInfo);
    DAT_04567256 = 1;
    method = extraout_x1;
  }
  if (FGKAODDNPLK) {
    pOVar1 = OCMLPCKBHPN_TypeInfo;
    if ((OCMLPCKBHPN_TypeInfo->_2).cctor_finished == 0) {
      pOVar1 = (OCMLPCKBHPN_c *)thunk_FUN_01ba7564(OCMLPCKBHPN_TypeInfo,method);
    }
    OCMLPCKBHPN__HPGKPPILFKI((MethodInfo *)pOVar1);
  }
  if ((OCMLPCKBHPN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pOVar1 = OCMLPCKBHPN_TypeInfo;
  pSVar2 = OCMLPCKBHPN_TypeInfo->static_fields->BPDGEPIJFDK;
  if (pSVar2 != (System_Collections_Generic_List_int__o *)0x0) {
    (pSVar2->fields)._size = 0;
    (pSVar2->fields)._version = (pSVar2->fields)._version + 1;
    OCMLPCKBHPN__GDIFONIDCIH((MethodInfo *)pOVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

