// Nekki.SF2.GUI.BaseScrollContent$$RemoveItem @ RVA 0x35CC82C

void Nekki_SF2_GUI_BaseScrollContent__RemoveItem
               (Nekki_SF2_GUI_BaseScrollContent_o *__this,
               Nekki_SF2_GUI_BaseScrollItem_o *IKKAMAMLIKA,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_BaseScrollItem__o *__this_00;
  UnityEngine_UI_Button_ButtonClickedEvent_o *__this_01;
  
  if ((DAT_04568fae & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<BaseScrollItem>_Remove__);
    DAT_04568fae = 1;
  }
  __this_00 = (__this->fields)._Items;
  bVar1 = false;
  if (__this_00 != (System_Collections_Generic_List_BaseScrollItem__o *)0x0) {
    bVar1 = System_Collections_Generic_List<object>__Remove
                      ((System_Collections_Generic_List_object__o *)__this_00,
                       (Il2CppObject *)IKKAMAMLIKA,
                       Method_System_Collections_Generic_List<BaseScrollItem>_Remove__);
    if ((IKKAMAMLIKA != (Nekki_SF2_GUI_BaseScrollItem_o *)0x0) &&
       (__this_01 = (IKKAMAMLIKA->fields).super.m_OnClick, bVar1 = false,
       __this_01 != (UnityEngine_UI_Button_ButtonClickedEvent_o *)0x0)) {
      UnityEngine_Events_UnityEventBase__RemoveAllListeners
                ((UnityEngine_Events_UnityEventBase_o *)__this_01,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(bVar1);
}

