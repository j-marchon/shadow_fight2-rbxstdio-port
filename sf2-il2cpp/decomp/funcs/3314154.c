// Nekki.SF2.GUI.Common.PageSwitchPanel$$BEBGOPNMHON @ RVA 0x3314154

void Nekki_SF2_GUI_Common_PageSwitchPanel__BEBGOPNMHON
               (Nekki_SF2_GUI_Common_PageSwitchPanel_o *__this,int32_t NAIJBCMHBFK,
               int32_t OPHMGAKOJLP,int32_t AAJGEHHPMGH,MethodInfo *method)

{
  bool bVar1;
  SFButton_o *__this_00;
  
  if (AAJGEHHPMGH == 0x14) {
    bVar1 = AKJJAPEHKCG__MNKFDLHJPAA
                      ((UnityEngine_UI_Selectable_o *)(__this->fields)._NextPageButton,
                       (MethodInfo *)0x0);
    if (bVar1) {
      return;
    }
    __this_00 = (__this->fields)._NextPageButton;
  }
  else {
    if ((AAJGEHHPMGH != 0x12) ||
       (bVar1 = AKJJAPEHKCG__MNKFDLHJPAA
                          ((UnityEngine_UI_Selectable_o *)(__this->fields)._PrevPageButton,
                           (MethodInfo *)0x0), bVar1)) {
      return;
    }
    __this_00 = (__this->fields)._PrevPageButton;
  }
  if (__this_00 != (SFButton_o *)0x0) {
    SFButton__SetStatePressed(__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

