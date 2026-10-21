// Nekki.SF2.GUI.Dialogs.NotificationsGame$$OHFPFJBPBAD @ RVA 0x30F7688

void Nekki_SF2_GUI_Dialogs_NotificationsGame__OHFPFJBPBAD
               (Nekki_SF2_GUI_Dialogs_NotificationsGame_o *__this,bool BHIOEPGLFIJ,
               MethodInfo *method)

{
  UnityEngine_Events_UnityAction_o *call;
  Nekki_SF2_GUI_Menu_MenuScroll_o *__this_00;
  UnityEngine_GameObject_o *pUVar1;
  MethodInfo *method_00;
  LabelButton_o *pLVar2;
  UnityEngine_Events_UnityEvent_o *__this_01;
  float PNEIGGOFIOA;
  
                    /* try { // try from 031f7690 to 032f76a7 has its CatchHandler @ 031f774c */
  if ((DAT_0456646b & 1) == 0) {
                    /* try { // try from 031f76b0 to 032f76b3 has its CatchHandler @ 031f7740 */
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_NotificationsGame_BCGEIDJJAHG__);
                    /* try { // try from 031f76b8 to 032f76c3 has its CatchHandler @ 031f773c */
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    DAT_0456646b = 1;
  }
  pLVar2 = (__this->fields)._button;
  if (pLVar2 != (LabelButton_o *)0x0) {
                    /* try { // try from 031f76d0 to 032f76db has its CatchHandler @ 031f7738 */
    __this_01 = (UnityEngine_Events_UnityEvent_o *)(pLVar2->fields).super.super.super.m_OnClick;
                    /* try { // try from 031f76e0 to 032f76eb has its CatchHandler @ 031f773c */
    call = (UnityEngine_Events_UnityAction_o *)
           thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
                    /* try { // try from 031f76f4 to 032f770f has its CatchHandler @ 031f7744 */
    UnityEngine_Events_UnityAction___ctor();
    if (__this_01 != (UnityEngine_Events_UnityEvent_o *)0x0) {
      method_00 = (MethodInfo *)0x0;
                    /* try { // try from 031f7710 to 032f7723 has its CatchHandler @ 031f7204 */
      UnityEngine_Events_UnityEvent__RemoveListener(__this_01,call,(MethodInfo *)0x0);
      if ((__this->fields).ONFGAANLDKH == false) {
                    /* try { // try from 031f7724 to 032f7733 has its CatchHandler @ 031f774c */
        Nekki_SF2_GUI_Dialogs_NotificationsGame__LFLEKGKEMDG(__this,false,method_00);
      }
      __this_00 = (__this->fields)._scroll;
      if (__this_00 != (Nekki_SF2_GUI_Menu_MenuScroll_o *)0x0) {
                    /* try { // try from 031f7734 to 032f7737 has its CatchHandler @ 031f7744 */
                    /* catch() { ... } // from try @ 031f76d0 with catch @ 031f7738 */
                    /* catch() { ... } // from try @ 031f76b8 with catch @ 031f773c
                       catch() { ... } // from try @ 031f76e0 with catch @ 031f773c */
        PNEIGGOFIOA = 0.0;
        if (!BHIOEPGLFIJ) {
          PNEIGGOFIOA = 0.5;
        }
                    /* catch() { ... } // from try @ 031f76b0 with catch @ 031f7740 */
                    /* catch() { ... } // from try @ 031f76f4 with catch @ 031f7744
                       catch() { ... } // from try @ 031f7734 with catch @ 031f7744 */
        Nekki_SF2_GUI_Menu_MenuScroll__Collapse(__this_00,PNEIGGOFIOA,(MethodInfo *)0x0);
        pUVar1 = (__this->fields)._inputBlocker;
                    /* catch() { ... } // from try @ 031f7690 with catch @ 031f774c
                       catch() { ... } // from try @ 031f7724 with catch @ 031f774c */
                    /* try { // try from 031f7754 to 032f7757 has its CatchHandler @ 031f77dc */
                    /* try { // try from 031f7758 to 032f7773 has its CatchHandler @ 031f7204 */
        if ((pUVar1 != (UnityEngine_GameObject_o *)0x0) &&
           (pUVar1 = UnityEngine_GameObject__get_gameObject(pUVar1,(MethodInfo *)0x0),
           pUVar1 != (UnityEngine_GameObject_o *)0x0)) {
          UnityEngine_GameObject__SetActive(pUVar1,false,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 031f7774 to 032f7777 has its CatchHandler @ 031f7784 */
  FUN_01bab8c8();
}

