// Nekki.SF2.GUI.Menu.MenuAdvertisingButton$$BBFLOHNAIEH @ RVA 0x330BFE8

void Nekki_SF2_GUI_Menu_MenuAdvertisingButton__BBFLOHNAIEH
               (Nekki_SF2_GUI_Menu_MenuAdvertisingButton_o *__this,MethodInfo *method)

{
  bool bVar1;
  JMDPBFOCHHP_o *__this_00;
  JMDPBFOCHHP_ENBCJNLAHAC_o *IOOJAJAPMBM;
  NDPMLPGANCI_o *__this_01;
  FAIJGJCCKJC_o *__this_02;
  FFHKCJAOPLI_o *__this_03;
  MethodInfo *extraout_x1;
  CBLABOPKBKD_o *pCVar2;
  System_String_o *CJNHFNHJHPE;
  
  if ((DAT_0456778a & 1) == 0) {
    FUN_01bab630(&FAIJGJCCKJC_TypeInfo);
    FUN_01bab630(&FFHKCJAOPLI_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
                    /* try { // try from 0340c038 to 0350c03f has its CatchHandler @ 0340c304 */
    DAT_0456778a = 1;
    method = extraout_x1;
  }
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo,method);
  }
  bVar1 = MGNPHCAAEIO__HDEOLJBKIHJ(true,(MethodInfo *)0x0);
                    /* try { // try from 0340c05c to 0350c05f has its CatchHandler @ 0340c2bc */
  if (!bVar1) {
    return;
  }
  pCVar2 = (__this->fields)._FONGIJNHBLK_k__BackingField;
  if (pCVar2 != (CBLABOPKBKD_o *)0x0) {
                    /* try { // try from 0340c068 to 0350c087 has its CatchHandler @ 0340c2c0 */
    CJNHFNHJHPE = (pCVar2->fields).BMGMGAAPFGO;
    bVar1 = PCOEHCPGBBG__BDLEIEHBFAD(CJNHFNHJHPE,(MethodInfo *)0x0);
    if (bVar1) {
      return;
    }
                    /* try { // try from 0340c098 to 0350c0a3 has its CatchHandler @ 0340c300 */
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_00 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
    if (__this_00 != (JMDPBFOCHHP_o *)0x0) {
                    /* try { // try from 0340c0b4 to 0350c0c3 has its CatchHandler @ 0340c310 */
      IOOJAJAPMBM = JMDPBFOCHHP__DIFLKMKBENA(__this_00,CJNHFNHJHPE,false,(MethodInfo *)0x0);
      __this_01 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
                    /* try { // try from 0340c0c8 to 0350c0cf has its CatchHandler @ 0340c2e0 */
      __this_02 = (FAIJGJCCKJC_o *)thunk_FUN_01bda818(FAIJGJCCKJC_TypeInfo);
                    /* try { // try from 0340c0e0 to 0350c0e7 has its CatchHandler @ 0340c2f0 */
                    /* try { // try from 0340c0ec to 0350c0f3 has its CatchHandler @ 0340c2f8 */
      FAIJGJCCKJC___ctor(__this_02,IOOJAJAPMBM,(MethodInfo *)0x0);
      __this_03 = (FFHKCJAOPLI_o *)thunk_FUN_01bda818(FFHKCJAOPLI_TypeInfo);
                    /* try { // try from 0340c104 to 0350c10b has its CatchHandler @ 0340c2fc */
                    /* try { // try from 0340c10c to 0350c11b has its CatchHandler @ 0340c2d8 */
      FFHKCJAOPLI___ctor(__this_03,8,(HOOAAGABMBL_o *)__this_02,(System_String_o *)0x0,
                         (System_String_o *)0x0,(MethodInfo *)0x0);
      if (__this_01 != (NDPMLPGANCI_o *)0x0) {
                    /* try { // try from 0340c134 to 0350c137 has its CatchHandler @ 0340c2b8 */
                    /* try { // try from 0340c138 to 0350c15f has its CatchHandler @ 0340c308 */
        NDPMLPGANCI__EKPAFDJIAGI
                  (__this_01,4,(Il2CppObject *)__this_03,(System_Action_object__o *)0x0,false,
                   (MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

