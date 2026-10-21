// Nekki.SF2.GUI.Dialogs.Raids.ChatSFViewController$$Show @ RVA 0x30340BC

void Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController__Show
               (Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Dialogs_Raids_ChatSFTabButton_o *pNVar2;
  
  if ((DAT_04565d20 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04565d20 = 1;
  }
  TabView__Show((TabView_o *)__this,(MethodInfo *)0x0);
  pNVar2 = (__this->fields)._tabButton;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar2 = (__this->fields)._tabButton;
    if (pNVar2 != (Nekki_SF2_GUI_Dialogs_Raids_ChatSFTabButton_o *)0x0) {
      UnityEngine_UI_Selectable__set_interactable
                ((UnityEngine_UI_Selectable_o *)pNVar2,false,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

