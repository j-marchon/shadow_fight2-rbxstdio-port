// Nekki.SF2.GUI.Common.PageSwitchPanel$$GKHAKLDEIJI @ RVA 0x33141BC

void Nekki_SF2_GUI_Common_PageSwitchPanel__GKHAKLDEIJI
               (Nekki_SF2_GUI_Common_PageSwitchPanel_o *__this,int32_t NAIJBCMHBFK,
               int32_t OPHMGAKOJLP,int32_t AAJGEHHPMGH,MethodInfo *method)

{
  bool bVar1;
  SFButton_o *pSVar2;
  UnityEngine_Events_UnityEvent_int__o *__this_00;
  int32_t arg0;
  
  if ((DAT_045677cc & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<int>_Invoke__,NAIJBCMHBFK,OPHMGAKOJLP);
    DAT_045677cc = 1;
  }
  if (AAJGEHHPMGH == 0x14) {
    bVar1 = AKJJAPEHKCG__MNKFDLHJPAA
                      ((UnityEngine_UI_Selectable_o *)(__this->fields)._NextPageButton,
                       (MethodInfo *)0x0);
    if (bVar1) {
      return;
    }
    EDFDANKEBGF__KHJIBEJGONJ(0.85,(MethodInfo *)0x0);
    pSVar2 = (__this->fields)._NextPageButton;
    if (pSVar2 != (SFButton_o *)0x0) {
      SFButton__SetStateNormal(pSVar2,(MethodInfo *)0x0);
      __this_00 = (UnityEngine_Events_UnityEvent_int__o *)(__this->fields)._OnPageSwitched;
      if (__this_00 != (UnityEngine_Events_UnityEvent_int__o *)0x0) {
        arg0 = 1;
        goto LAB_03414294;
      }
    }
  }
  else {
    if ((AAJGEHHPMGH != 0x12) ||
       (bVar1 = AKJJAPEHKCG__MNKFDLHJPAA
                          ((UnityEngine_UI_Selectable_o *)(__this->fields)._PrevPageButton,
                           (MethodInfo *)0x0), bVar1)) {
      return;
    }
    EDFDANKEBGF__KHJIBEJGONJ(0.85,(MethodInfo *)0x0);
    pSVar2 = (__this->fields)._PrevPageButton;
    if (pSVar2 != (SFButton_o *)0x0) {
      SFButton__SetStateNormal(pSVar2,(MethodInfo *)0x0);
      __this_00 = (UnityEngine_Events_UnityEvent_int__o *)(__this->fields)._OnPageSwitched;
      if (__this_00 != (UnityEngine_Events_UnityEvent_int__o *)0x0) {
        arg0 = -1;
LAB_03414294:
        UnityEngine_Events_UnityEvent<int>__Invoke
                  (__this_00,arg0,Method_UnityEngine_Events_UnityEvent<int>_Invoke__);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

