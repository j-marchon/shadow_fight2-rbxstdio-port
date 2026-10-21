// CHDGOFBHAFI$$NKIFNICEBFF @ RVA 0x3246A08

void CHDGOFBHAFI__NKIFNICEBFF(CHDGOFBHAFI_o *__this,KEFHDOHHHML_o *IDCGLBOIAFJ,MethodInfo *method)

{
  AADKBCFCLKK_o *IIPPMAOIKHB;
  CHDGOFBHAFI_o *__this_00;
  EEOMEMBBGNA_o *pEVar1;
  CJFBGEEIPBA_o *__this_01;
  MethodInfo *method_00;
  MethodInfo *in_x3;
  
  if ((DAT_045670c3 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_KEFHDOHHHML_PFNEPJAFEDF<AADKBCFCLKK>__);
    DAT_045670c3 = 1;
  }
  if (IDCGLBOIAFJ != (KEFHDOHHHML_o *)0x0) {
    IIPPMAOIKHB = (AADKBCFCLKK_o *)
                  KEFHDOHHHML__PFNEPJAFEDF<object>
                            (IDCGLBOIAFJ,Method_KEFHDOHHHML_PFNEPJAFEDF<AADKBCFCLKK>__);
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo);
    }
    __this_00 = HJPEKDOPBHN__FKBPIBLMJEF((MethodInfo *)0x0);
    if (__this_00 != (CHDGOFBHAFI_o *)0x0) {
      method_00 = (MethodInfo *)0x0;
      CHDGOFBHAFI__BNPLDAHKIED(__this_00,IIPPMAOIKHB,(PGICCMFLDPI_o *)0x0,in_x3);
      CHDGOFBHAFI__FBCCHHDEPDJ(__this,false,method_00);
      pEVar1 = HJPEKDOPBHN__CEFGBPEHJJG((MethodInfo *)0x0);
      if ((pEVar1 != (EEOMEMBBGNA_o *)0x0) &&
         (__this_01 = (pEVar1->fields).GMNJEBCECDA, __this_01 != (CJFBGEEIPBA_o *)0x0)) {
        CJFBGEEIPBA__ODGGLKIMFCE(__this_01,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

