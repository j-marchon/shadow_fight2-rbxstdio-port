// JLHAELMHHJL$$PHNBAHHFBIE @ RVA 0x324A8BC

void JLHAELMHHJL__PHNBAHHFBIE(JLHAELMHHJL_o *__this,BKKPAKHJDKB_o *IMMNELPBGIF,MethodInfo *method)

{
  LCKCDEKNLOA_o *__this_00;
  ADJEBFOPFFF_o *__this_01;
  MAEAAOFOANA_o *__this_02;
  
  if ((DAT_045670ed & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&MAEAAOFOANA_TypeInfo);
    DAT_045670ed = 1;
  }
  if ((IMMNELPBGIF == (BKKPAKHJDKB_o *)0x0) || ((IMMNELPBGIF->fields).HHJIJKJCEOF != 0)) {
    __this_00 = (__this->fields).FNGNIKNIEMM;
  }
  else {
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_01 = HJPEKDOPBHN__EKIJCGJLILF((MethodInfo *)0x0);
    if (__this_01 == (ADJEBFOPFFF_o *)0x0) goto LAB_0334a9a4;
    ADJEBFOPFFF__AEADCLCKCEL(__this_01,(IMMNELPBGIF->fields).EBJBJCPBFLE,false,(MethodInfo *)0x0);
    if ((__this->fields).ANDGLMBKCKK != false) {
      __this_02 = (MAEAAOFOANA_o *)thunk_FUN_01bda818(MAEAAOFOANA_TypeInfo);
      MAEAAOFOANA___ctor(__this_02,(MethodInfo *)0x0);
      if (__this_02 == (MAEAAOFOANA_o *)0x0) goto LAB_0334a9a4;
      (__this_02->fields).EBBNAOLNKGD = (IMMNELPBGIF->fields).EBJBJCPBFLE;
      thunk_FUN_01c20e04();
      JJPNLEPEAFM__EFLNJLIDLEF(__this_02,(MethodInfo *)0x0);
    }
    __this_00 = (__this->fields).FNOJIPMNDPJ;
  }
  if (__this_00 != (LCKCDEKNLOA_o *)0x0) {
    LCKCDEKNLOA__MAHFCKJGBPP(__this_00,(__this->fields).super.IJOKKFKPBEP,(MethodInfo *)0x0);
    return;
  }
LAB_0334a9a4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

