// Nekki.SF2.GUI.Profile.ProfileScene$$JAJMCAAJCDE @ RVA 0x3395504

void Nekki_SF2_GUI_Profile_ProfileScene__JAJMCAAJCDE
               (Nekki_SF2_GUI_Profile_ProfileScene_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Profile_UserPerksPanel_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  
  if ((DAT_04567c4c & 1) == 0) {
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Profile_SubItem_TypeInfo);
    DAT_04567c4c = 1;
  }
  (__this->fields).KPIIFJBPODO = (DG_Tweening_Tween_o *)0x0;
  thunk_FUN_01c20e04(&(__this->fields).KPIIFJBPODO,0);
  __this_00 = (__this->fields)._LeftPanel;
  if ((__this_00 != (Nekki_SF2_GUI_Profile_UserPerksPanel_o *)0x0) &&
     (__this_01 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
     __this_01 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(__this_01,true,(MethodInfo *)0x0);
    if ((Nekki_SF2_GUI_Profile_SubItem_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04567c94 == '\0') {
      FUN_01bab630(&Nekki_SF2_GUI_Profile_SubItem_TypeInfo);
      DAT_04567c94 = '\x01';
    }
    if ((Nekki_SF2_GUI_Profile_SubItem_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    Nekki_SF2_GUI_Profile_SubItem_TypeInfo->static_fields->EEDBEBPEPJL = true;
    if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
                    /* try { // try from 034955e8 to 03595677 has its CatchHandler @ 034955e8
                       catch() { ... } // from try @ 034955e8 with catch @ 034955e8
                       catch() { ... } // from try @ 034956ec with catch @ 034955e8
                       catch() { ... } // from try @ 03495738 with catch @ 034955e8
                       catch() { ... } // from try @ 034957b8 with catch @ 034955e8 */
    MGNPHCAAEIO__MHNCGDFKIJN((MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

