// OLKKAIFGGAK$$AHNAGGGOLBK @ RVA 0x34E9D80

void OLKKAIFGGAK__AHNAGGGOLBK(OLKKAIFGGAK_o *__this,JDIJBAPLFOK_o *CPECAEHDDDB,MethodInfo *method)

{
  bool bVar1;
  System_String_o *POOAFIMEKMF;
  FCJBEKHDLAF_o *__this_00;
  OLKKAIFGGAK_JHKGLPOINCO_o *pOVar2;
  System_String_o **ppSVar3;
  float NKLEIAMJEMN;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_60;
  
  if ((DAT_04568780 & 1) == 0) {
    FUN_01bab630(&FCJBEKHDLAF_TypeInfo);
    FUN_01bab630(&string_TypeInfo);
    FUN_01bab630(&StringLiteral_21468);
    DAT_04568780 = 1;
  }
  pOVar2 = (__this->fields).KIAPMHMCDMO;
  if (pOVar2 == (OLKKAIFGGAK_JHKGLPOINCO_o *)0x0) {
LAB_035e9f3c:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if ((pOVar2->fields).BCNIPIPMOIK != false) {
                    /* try { // try from 035e9df0 to 036e9df7 has its CatchHandler @ 035e9fa8 */
    if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04565b7f == '\0') {
                    /* try { // try from 035e9e08 to 036e9e17 has its CatchHandler @ 035e9fa4 */
      FUN_01bab630(&FCJBEKHDLAF_TypeInfo);
                    /* try { // try from 035e9e18 to 036e9f97 has its CatchHandler @ 035e9ce0 */
      DAT_04565b7f = '\x01';
    }
    if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (FCJBEKHDLAF_TypeInfo->static_fields->IGABFCCGLCO != (FCJBEKHDLAF_o *)0x0) {
      if (CPECAEHDDDB != (JDIJBAPLFOK_o *)0x0) {
        ppSVar3 = &(CPECAEHDDDB->fields).CKLHLDKAKCD;
        bVar1 = System_String__op_Inequality
                          (*ppSVar3,string_TypeInfo->static_fields->Empty,(MethodInfo *)0x0);
        if (!bVar1) {
          ppSVar3 = (System_String_o **)&StringLiteral_21468;
        }
        POOAFIMEKMF = System_String__Concat
                                (*ppSVar3,(CPECAEHDDDB->fields).LEALNKKFNLH,(MethodInfo *)0x0);
        NKLEIAMJEMN = (CPECAEHDDDB->fields).BMFNFEOIGLA;
        if (NKLEIAMJEMN <= 0.0) {
          local_60.fakeValueActive = (__this->fields).JKONPGMKOIM.fields.fakeValueActive;
          local_60.inited = (__this->fields).JKONPGMKOIM.fields.inited;
          local_60._18_2_ = *(undefined2 *)&(__this->fields).JKONPGMKOIM.fields.field_0x12;
          local_60.hiddenValueOldByte4.fields =
               (__this->fields).JKONPGMKOIM.fields.hiddenValueOldByte4.fields;
          local_60.fakeValue = (__this->fields).JKONPGMKOIM.fields.fakeValue;
          local_60.currentCryptoKey = (__this->fields).JKONPGMKOIM.fields.currentCryptoKey;
          local_60.hiddenValue = (__this->fields).JKONPGMKOIM.fields.hiddenValue;
          NKLEIAMJEMN = CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                                  ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_60,
                                   (MethodInfo *)0x0);
        }
        if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        if (DAT_04565b7f == '\0') {
          FUN_01bab630(&FCJBEKHDLAF_TypeInfo);
          DAT_04565b7f = '\x01';
        }
        if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pOVar2 = (__this->fields).KIAPMHMCDMO;
        if ((pOVar2 != (OLKKAIFGGAK_JHKGLPOINCO_o *)0x0) &&
           (__this_00 = FCJBEKHDLAF_TypeInfo->static_fields->IGABFCCGLCO,
           __this_00 != (FCJBEKHDLAF_o *)0x0)) {
          FCJBEKHDLAF__HEBGKKNPOFG
                    (__this_00,(pOVar2->fields).GKLKOCOKMDB,(pOVar2->fields).GDPIIGNJCLE,
                     (pOVar2->fields).JAODINPKJLN,POOAFIMEKMF,NKLEIAMJEMN,
                     (CPECAEHDDDB->fields).KAFBIPKCHDE,(MethodInfo *)0x0);
          return;
        }
      }
      goto LAB_035e9f3c;
    }
  }
  return;
}

