// LJNJDFEAIOH$$ELDPIJPEGIL @ RVA 0x303913C

void LJNJDFEAIOH__ELDPIJPEGIL(LJNJDFEAIOH_o *__this,KEFHDOHHHML_o *IDCGLBOIAFJ,MethodInfo *method)

{
  int32_t MOLGLNLBAIB;
  bool bVar1;
  NDPMLPGANCI_o *__this_00;
  CHDGOFBHAFI_o *__this_01;
  CNLGMNIEGFG_o *FBFPLEFCDOK;
  CPNHNIKFGFB_o *__this_02;
  Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *__this_03;
  MethodInfo *method_00;
  AADKBCFCLKK_o *DKMMBMBMJBO;
  
  if ((DAT_04565d78 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&LJNJDFEAIOH_TypeInfo);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_04565d78 = 1;
  }
  (__this->fields).NAJFBIBIHDM = false;
  if (IDCGLBOIAFJ != (KEFHDOHHHML_o *)0x0) {
    bVar1 = KEFHDOHHHML__BOJJBGPIKDP(IDCGLBOIAFJ,(MethodInfo *)0x0);
    if (bVar1) {
      __this_00 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
      if (__this_00 != (NDPMLPGANCI_o *)0x0) {
        NDPMLPGANCI__KJGGEPNHOBK(__this_00,(MethodInfo *)0x0);
        if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        __this_01 = HJPEKDOPBHN__FKBPIBLMJEF((MethodInfo *)0x0);
        if (__this_01 != (CHDGOFBHAFI_o *)0x0) {
          method_00 = (MethodInfo *)0x0;
          CHDGOFBHAFI__PNLACGIDHPI(__this_01,2,(MethodInfo *)0x0);
          DKMMBMBMJBO = (__this->fields).IHODMKCBNKJ;
          MOLGLNLBAIB = (__this->fields).EIMPNFFLONC;
          if ((LJNJDFEAIOH_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          FBFPLEFCDOK = LJNJDFEAIOH__APFDLGPHDBN(DKMMBMBMJBO,MOLGLNLBAIB,method_00);
          if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo);
          }
          MGNPHCAAEIO__EEGOPNGLBMJ
                    ((AFFHKININGD_o *)FBFPLEFCDOK,false,(OOMHDDBCBJP_o *)0x0,true,true,false,
                     (MethodInfo *)0x0);
          return;
        }
      }
    }
    else {
      __this_02 = CPNHNIKFGFB__AIHNLLGNBLC((MethodInfo *)0x0);
      if (__this_02 != (CPNHNIKFGFB_o *)0x0) {
        CPNHNIKFGFB__DIGPCFKCCBK(__this_02,0x29c8,(MethodInfo *)0x0);
        __this_03 = (__this->fields).PDEAGAFHDFI;
        if (__this_03 != (Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *)0x0) {
          Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer__SetButtonsEnabled
                    (__this_03,true,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

