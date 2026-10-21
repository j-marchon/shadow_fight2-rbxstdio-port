// FCJBEKHDLAF$$DHGBNOEKGMF @ RVA 0x33F1878

void FCJBEKHDLAF__DHGBNOEKGMF(FCJBEKHDLAF_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  AFFHKININGD_o *FBFPLEFCDOK;
  OOMHDDBCBJP_o *BANHBMINMMP;
  
  if ((DAT_04567f13 & 1) == 0) {
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_04567f13 = 1;
    method = extraout_x1;
  }
  FCJBEKHDLAF__GHJKEOGGFBM(__this,method);
  FBFPLEFCDOK = (__this->fields).FBFPLEFCDOK;
  if (FBFPLEFCDOK != (AFFHKININGD_o *)0x0) {
    BANHBMINMMP = (FBFPLEFCDOK->fields).IFJLLGPGMHM;
    if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    MGNPHCAAEIO__EEGOPNGLBMJ(FBFPLEFCDOK,false,BANHBMINMMP,true,true,false,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

