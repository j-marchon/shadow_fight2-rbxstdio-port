// Nekki.SF2.GUI.Map.MapScene$$COLOEPLHHMJ @ RVA 0x3586D08

void Nekki_SF2_GUI_Map_MapScene__COLOEPLHHMJ
               (Nekki_SF2_GUI_Map_MapScene_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Button_o *pUVar1;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_UI_Button_ButtonClickedEvent_o *__this_01;
  UnityEngine_Events_UnityAction_o *call;
  Nekki_SF2_GUI_RaidMapUIModule_o *pNVar2;
  UnityEngine_Events_UnityEvent_o *__this_02;
  
                    /* try { // try from 03686d08 to 03786d0b has its CatchHandler @ 03686d24 */
                    /* try { // try from 03686d0c to 03786d0f has its CatchHandler @ 03686b64 */
                    /* try { // try from 03686d10 to 03786d13 has its CatchHandler @ 03686d18 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03686cb8 with catch @ 03686d14
                       try { // try from 03686d14 to 03786d43 has its CatchHandler @ 03686b64 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03686d10 with catch @ 03686d18
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03686cd0 with catch @ 03686d1c
                        */
  if ((DAT_04568cfe & 1) == 0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03686c7c with catch @ 03686d20
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03686d08 with catch @ 03686d24
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03686d04 with catch @ 03686d28
                        */
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_MapScene_IEJPFOFGJLN__);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03686c54 with catch @ 03686d2c
                        */
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    DAT_04568cfe = 1;
  }
  pNVar2 = (__this->fields).FMIFNIIJJNK;
                    /* try { // try from 03686d44 to 03786d47 has its CatchHandler @ 03686d68 */
                    /* try { // try from 03686d48 to 03786d6f has its CatchHandler @ 03686b64 */
  if ((pNVar2 != (Nekki_SF2_GUI_RaidMapUIModule_o *)0x0) &&
     (pUVar1 = (pNVar2->fields).RaidMapScrollButton, pUVar1 != (UnityEngine_UI_Button_o *)0x0)) {
    UnityEngine_UI_Selectable__set_interactable
              ((UnityEngine_UI_Selectable_o *)pUVar1,true,(MethodInfo *)0x0);
    pNVar2 = (__this->fields).FMIFNIIJJNK;
                    /* catch() { ... } // from try @ 03686d44 with catch @ 03686d68 */
                    /* try { // try from 03686d70 to 03786d77 has its CatchHandler @ 03686d8c */
    if ((pNVar2 != (Nekki_SF2_GUI_RaidMapUIModule_o *)0x0) &&
       ((pUVar1 = (pNVar2->fields).RaidMapScrollButton, pUVar1 != (UnityEngine_UI_Button_o *)0x0 &&
        (__this_00 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0),
        __this_00 != (UnityEngine_GameObject_o *)0x0)))) {
                    /* try { // try from 03686d78 to 03786d83 has its CatchHandler @ 03686b64 */
      UnityEngine_GameObject__SetActive(__this_00,true,(MethodInfo *)0x0);
                    /* try { // try from 03686d84 to 03786d8b has its CatchHandler @ 03686d8c */
      pNVar2 = (__this->fields).FMIFNIIJJNK;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03686d70 with catch @ 03686d8c
                       catch(type#2 @ 00000000) { ... } // from try @ 03686d84 with catch @ 03686d8c
                        */
      if ((pNVar2 != (Nekki_SF2_GUI_RaidMapUIModule_o *)0x0) &&
         ((pUVar1 = (pNVar2->fields).RaidMapScrollButton, pUVar1 != (UnityEngine_UI_Button_o *)0x0
          && (__this_01 = (pUVar1->fields).m_OnClick,
             __this_01 != (UnityEngine_UI_Button_ButtonClickedEvent_o *)0x0)))) {
        UnityEngine_Events_UnityEventBase__RemoveAllListeners
                  ((UnityEngine_Events_UnityEventBase_o *)__this_01,(MethodInfo *)0x0);
        pNVar2 = (__this->fields).FMIFNIIJJNK;
        if ((pNVar2 != (Nekki_SF2_GUI_RaidMapUIModule_o *)0x0) &&
           (pUVar1 = (pNVar2->fields).RaidMapScrollButton, pUVar1 != (UnityEngine_UI_Button_o *)0x0)
           ) {
          __this_02 = (UnityEngine_Events_UnityEvent_o *)(pUVar1->fields).m_OnClick;
          call = (UnityEngine_Events_UnityAction_o *)
                 thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
          UnityEngine_Events_UnityAction___ctor();
          if (__this_02 != (UnityEngine_Events_UnityEvent_o *)0x0) {
            UnityEngine_Events_UnityEvent__AddListener(__this_02,call,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

