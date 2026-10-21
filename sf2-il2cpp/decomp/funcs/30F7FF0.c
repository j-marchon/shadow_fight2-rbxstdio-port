// Nekki.SF2.GUI.Dialogs.NotificationsGame$$BEDNMMNONLC @ RVA 0x30F7FF0

void Nekki_SF2_GUI_Dialogs_NotificationsGame__BEDNMMNONLC
               (Nekki_SF2_GUI_Dialogs_NotificationsGame_o *__this,MethodInfo *method)

{
  BackKeyManager_o *__this_00;
  UnityEngine_RectTransform_o *__this_01;
  UnityEngine_GameObject_o *__this_02;
  Nekki_SF2_GUI_Menu_MenuScroll_o *__this_03;
  
  __this_00 = BackKeyManager__get_Instance((MethodInfo *)0x0);
  if (__this_00 != (BackKeyManager_o *)0x0) {
    BackKeyManager__AddBackKeyController(__this_00,(HAFLPBGEGCI_o *)__this,(MethodInfo *)0x0);
    __this_01 = (__this->fields)._renderRoot;
    if ((__this_01 != (UnityEngine_RectTransform_o *)0x0) &&
       (__this_02 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0),
       __this_02 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(__this_02,true,(MethodInfo *)0x0);
      __this_03 = (__this->fields)._scroll;
      if (__this_03 != (Nekki_SF2_GUI_Menu_MenuScroll_o *)0x0) {
        Nekki_SF2_GUI_Menu_MenuScroll__Expand(__this_03,0.5,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

