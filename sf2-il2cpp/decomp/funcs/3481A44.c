// Nekki.SF2.GUI.Dialogs.Raids.RaidPlayersRoll$$ALGBNCBBIHJ @ RVA 0x3481A44

int32_t Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll__ALGBNCBBIHJ
                  (IFFFKKMMKFO_o *INOIMHOFGBG,IFFFKKMMKFO_o *ACNOGKFFDEG,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  float *method_00;
  GKLPDMLELJF_o *pGVar3;
  System_DateTime_o SVar4;
  System_DateTime_o SVar5;
  float __this;
  float value;
  int64_t local_38;
  
                    /* try { // try from 03581a58 to 03681a63 has its CatchHandler @ 03582cdc */
                    /* try { // try from 03581a64 to 03681a83 has its CatchHandler @ 03582d24 */
  if ((DAT_04568384 & 1) == 0) {
    FUN_01bab630(&System_DateTime_TypeInfo);
    DAT_04568384 = 1;
  }
  if (INOIMHOFGBG == ACNOGKFFDEG) {
    iVar2 = 0;
  }
  else {
    if ((INOIMHOFGBG == (IFFFKKMMKFO_o *)0x0) || (ACNOGKFFDEG == (IFFFKKMMKFO_o *)0x0)) {
LAB_03581b50:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
                    /* try { // try from 03581a90 to 03681a97 has its CatchHandler @ 03582cc8 */
    __this = (INOIMHOFGBG->fields).JOAHABGBLEF;
    method_00 = &(ACNOGKFFDEG->fields).JOAHABGBLEF;
    value = *method_00;
    if (__this == value) {
                    /* try { // try from 03581aa0 to 03681aa7 has its CatchHandler @ 03582c58 */
      SVar4.fields._dateData =
           (System_DateTime_Fields)
           (INOIMHOFGBG->fields)._FAIHCFMGFBD_k__BackingField.fields._dateData;
      SVar5.fields._dateData =
           (System_DateTime_Fields)
           (ACNOGKFFDEG->fields)._FAIHCFMGFBD_k__BackingField.fields._dateData;
                    /* try { // try from 03581ab8 to 03681abf has its CatchHandler @ 03582c98 */
      if ((System_DateTime_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
                    /* try { // try from 03581ac4 to 03681acb has its CatchHandler @ 03582c60 */
      bVar1 = System_DateTime__op_Inequality(SVar4,SVar5,(MethodInfo *)0x0);
      if (!bVar1) {
        pGVar3 = (INOIMHOFGBG->fields)._IPNPNPOLCFO_k__BackingField;
        if (pGVar3 != (GKLPDMLELJF_o *)0x0) {
          local_38 = (pGVar3->fields).ANAJGHJEEOC;
          pGVar3 = (ACNOGKFFDEG->fields)._IPNPNPOLCFO_k__BackingField;
          if (pGVar3 != (GKLPDMLELJF_o *)0x0) {
                    /* try { // try from 03581b34 to 03681b3b has its CatchHandler @ 03582c7c */
            iVar2 = System_Int64__CompareTo
                              ((int64_t)&local_38,(pGVar3->fields).ANAJGHJEEOC,(MethodInfo *)0x0);
            return iVar2;
          }
        }
        goto LAB_03581b50;
      }
      SVar5.fields._dateData =
           (System_DateTime_Fields)
           (INOIMHOFGBG->fields)._FAIHCFMGFBD_k__BackingField.fields._dateData;
                    /* try { // try from 03581adc to 03681ae3 has its CatchHandler @ 03582cb8 */
      SVar4.fields._dateData =
           (System_DateTime_Fields)
           (ACNOGKFFDEG->fields)._FAIHCFMGFBD_k__BackingField.fields._dateData;
                    /* try { // try from 03581ae4 to 03681af7 has its CatchHandler @ 03582cbc */
      if ((System_DateTime_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      iVar2 = System_DateTime__Compare(SVar5,SVar4,(MethodInfo *)0x0);
                    /* try { // try from 03581afc to 03681b07 has its CatchHandler @ 03582c8c */
    }
    else {
                    /* try { // try from 03581b08 to 03681b27 has its CatchHandler @ 03582d1c */
      iVar2 = System_Single__CompareTo(__this,value,(MethodInfo *)method_00);
    }
  }
                    /* try { // try from 03581b44 to 03681b4b has its CatchHandler @ 03582c94 */
  return iVar2;
}

