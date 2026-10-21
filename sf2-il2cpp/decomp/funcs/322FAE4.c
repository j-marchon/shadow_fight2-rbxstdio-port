// BGFHIINOIFE$$IKDPMKOIDMP @ RVA 0x322FAE4

void BGFHIINOIFE__IKDPMKOIDMP(BGFHIINOIFE_o *__this,MethodInfo *method)

{
  bool bVar1;
  CHDGOFBHAFI_o *pCVar2;
  AADKBCFCLKK_o *IIPPMAOIKHB;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  
  if ((DAT_04566fc8 & 1) == 0) {
                    /* try { // try from 0332fb0c to 0342fbaf has its CatchHandler @ 0332fb0c
                       catch() { ... } // from try @ 0332fb0c with catch @ 0332fb0c
                       catch() { ... } // from try @ 0332fc20 with catch @ 0332fb0c
                       catch() { ... } // from try @ 0332fc58 with catch @ 0332fb0c
                       catch() { ... } // from try @ 0332fc84 with catch @ 0332fb0c
                       catch() { ... } // from try @ 0332fcb4 with catch @ 0332fb0c */
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_04566fc8 = 1;
    method = extraout_x1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
  }
  pCVar2 = HJPEKDOPBHN__FKBPIBLMJEF((MethodInfo *)0x0);
  if (pCVar2 != (CHDGOFBHAFI_o *)0x0) {
    IIPPMAOIKHB = (pCVar2->fields).AABMLCNHHPN;
    if ((IIPPMAOIKHB != (AADKBCFCLKK_o *)0x0) &&
       (bVar1 = OOBBAGLCFPF__IFFNMNFGOII(IIPPMAOIKHB,(MethodInfo *)0x0), !bVar1)) {
      BGFHIINOIFE__PDGKHEFBKIO(__this,method_00);
      return;
    }
    OHPOFOPJIMB__FGNINNOOCCL((OHPOFOPJIMB_o *)__this,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

