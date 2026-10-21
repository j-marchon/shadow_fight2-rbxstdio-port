// Nekki.SF2.GUI.Profile.ProfileBottomPanel$$GIENGNEGHPJ @ RVA 0x332DDAC

void Nekki_SF2_GUI_Profile_ProfileBottomPanel__GIENGNEGHPJ
               (Nekki_SF2_GUI_Profile_ProfileBottomPanel_o *__this,MethodInfo *method)

{
  bool bVar1;
  KKLJIDJBFEI_o *pKVar2;
  EGMONPGHHDP_o *__this_00;
  JMDPBFOCHHP_CKEMIAEPGKD_o *pJVar3;
  
  if ((DAT_045678ef & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Common_BottomPanel<EBGNICNEJFJ>_GIENGNEGHPJ__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Common_BottomPanel<EBGNICNEJFJ>_HideButton__);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
                    /* try { // try from 0342de00 to 0352de2b has its CatchHandler @ 0342e2a4 */
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_045678ef = 1;
  }
  Nekki_SF2_GUI_Common_BottomPanel<Int32Enum>__GIENGNEGHPJ
            ((Nekki_SF2_GUI_Common_BottomPanel_T__o *)__this,
             Method_Nekki_SF2_GUI_Common_BottomPanel<EBGNICNEJFJ>_GIENGNEGHPJ__);
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = MGNPHCAAEIO__PKNDHONBNIF((MethodInfo *)0x0);
  if (bVar1) {
    pKVar2 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
    if (pKVar2 == (KKLJIDJBFEI_o *)0x0) {
LAB_0342deb0:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if ((pKVar2->fields).super._MGGBEPKMPCF_k__BackingField != false) {
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
                    /* try { // try from 0342de68 to 0352dedb has its CatchHandler @ 0342e354 */
      __this_00 = HJPEKDOPBHN__IAALPCFKGEK((MethodInfo *)0x0);
      if (__this_00 == (EGMONPGHHDP_o *)0x0) goto LAB_0342deb0;
      pJVar3 = EGMONPGHHDP__OKBKFJKEAAG(__this_00,(MethodInfo *)0x0);
      if (pJVar3 == (JMDPBFOCHHP_CKEMIAEPGKD_o *)0x0) {
        Nekki_SF2_GUI_Common_BottomPanel<Int32Enum>__HideButton
                  ((Nekki_SF2_GUI_Common_BottomPanel_T__o *)__this,4,
                   Method_Nekki_SF2_GUI_Common_BottomPanel<EBGNICNEJFJ>_HideButton__);
        return;
      }
    }
  }
  return;
}

