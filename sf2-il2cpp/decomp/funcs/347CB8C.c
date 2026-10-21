// Nekki.SF2.GUI.Dialogs.ItemSetDialog.<>c$$NDHMHFKKIEH @ RVA 0x347CB8C

void Nekki_SF2_GUI_Dialogs_ItemSetDialog_<>c__NDHMHFKKIEH
               (Nekki_SF2_GUI_Dialogs_ItemSetDialog___c_o *__this,UnityEngine_UI_Button_o *btn,
               MethodInfo *method)

{
  UnityEngine_UI_Button_ButtonClickedEvent_o *__this_00;
  
  if ((btn != (UnityEngine_UI_Button_o *)0x0) &&
     (__this_00 = (btn->fields).m_OnClick, __this = (Nekki_SF2_GUI_Dialogs_ItemSetDialog___c_o *)0x0
     , __this_00 != (UnityEngine_UI_Button_ButtonClickedEvent_o *)0x0)) {
                    /* try { // try from 0357cb9c to 0367cba3 has its CatchHandler @ 0357cd48 */
    UnityEngine_Events_UnityEventBase__RemoveAllListeners
              ((UnityEngine_Events_UnityEventBase_o *)__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0357cba8 to 0367cbaf has its CatchHandler @ 0357cd78 */
  FUN_01bab8c8(__this);
}

