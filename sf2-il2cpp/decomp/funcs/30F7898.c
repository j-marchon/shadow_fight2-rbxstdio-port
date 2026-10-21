// Nekki.SF2.GUI.Dialogs.NotificationsGame$$NBKJLHGEDLH @ RVA 0x30F7898

void Nekki_SF2_GUI_Dialogs_NotificationsGame__NBKJLHGEDLH
               (Nekki_SF2_GUI_Dialogs_NotificationsGame_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Menu_MenuScroll_o *pNVar1;
  System_Action_bool__o *CJNHFNHJHPE;
  System_Action_o *CJNHFNHJHPE_00;
  UnityEngine_UI_Button_o *__this_00;
  
  if ((DAT_04566471 & 1) == 0) {
    FUN_01bab630(&System_Action<bool>_TypeInfo);
    FUN_01bab630(&System_Action_TypeInfo);
                    /* try { // try from 031f78d4 to 032f799f has its CatchHandler @ 031f78d4
                       catch() { ... } // from try @ 031f78d4 with catch @ 031f78d4
                       catch() { ... } // from try @ 031f79c8 with catch @ 031f78d4
                       catch() { ... } // from try @ 031f7a48 with catch @ 031f78d4
                       catch() { ... } // from try @ 031f7a70 with catch @ 031f78d4
                       catch() { ... } // from try @ 031f7ab8 with catch @ 031f78d4 */
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_NotificationsGame_GKFNLJGEFOE__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_NotificationsGame_LIJIBDHAMDM__);
    DAT_04566471 = 1;
  }
  pNVar1 = (__this->fields)._scroll;
  if (pNVar1 != (Nekki_SF2_GUI_Menu_MenuScroll_o *)0x0) {
    Nekki_SF2_GUI_Menu_MenuScroll__Init(pNVar1,0,(MethodInfo *)0x0);
    pNVar1 = (__this->fields)._scroll;
    if (pNVar1 != (Nekki_SF2_GUI_Menu_MenuScroll_o *)0x0) {
      (pNVar1->fields).KFCLIPMOFFN = false;
      Nekki_SF2_GUI_Menu_MenuScroll__Collapse(pNVar1,0.0,(MethodInfo *)0x0);
      pNVar1 = (__this->fields)._scroll;
      CJNHFNHJHPE = (System_Action_bool__o *)thunk_FUN_01bda818(System_Action<bool>_TypeInfo);
      System_Action<bool>___ctor();
      if (pNVar1 != (Nekki_SF2_GUI_Menu_MenuScroll_o *)0x0) {
        Nekki_SF2_GUI_Menu_MenuScroll__add_OnChanging(pNVar1,CJNHFNHJHPE,(MethodInfo *)0x0);
        pNVar1 = (__this->fields)._scroll;
        CJNHFNHJHPE_00 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
        System_Action___ctor();
        if (pNVar1 != (Nekki_SF2_GUI_Menu_MenuScroll_o *)0x0) {
          Nekki_SF2_GUI_Menu_MenuScroll__add_OnClose(pNVar1,CJNHFNHJHPE_00,(MethodInfo *)0x0);
                    /* try { // try from 031f79a0 to 032f79a7 has its CatchHandler @ 031f7a54 */
          pNVar1 = (__this->fields)._scroll;
          if ((pNVar1 != (Nekki_SF2_GUI_Menu_MenuScroll_o *)0x0) &&
             (__this_00 = (pNVar1->fields)._wheel, __this_00 != (UnityEngine_UI_Button_o *)0x0)) {
                    /* try { // try from 031f79bc to 032f79c7 has its CatchHandler @ 031f7a4c */
            UnityEngine_UI_Selectable__set_interactable
                      ((UnityEngine_UI_Selectable_o *)__this_00,false,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 031f79c8 to 032f7a43 has its CatchHandler @ 031f78d4 */
  FUN_01bab8c8();
}

