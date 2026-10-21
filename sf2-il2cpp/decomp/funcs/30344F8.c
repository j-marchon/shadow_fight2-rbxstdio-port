// Nekki.SF2.GUI.Dialogs.Raids.ChatSFViewController$$SetEditBoxVisible @ RVA 0x30344F8

void Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController__SetEditBoxVisible
               (Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_o *__this,bool CJNHFNHJHPE,
               MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  Nekki_SF2_GUI_Dialogs_Raids_ChatMessageView_o *__this_00;
  MethodInfo *method_00;
  MethodInfo *extraout_x1;
  
  method_00 = (MethodInfo *)(ulong)CJNHFNHJHPE;
  if ((DAT_04565d26 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_ChatMessageView_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04565d26 = 1;
    method_00 = extraout_x1;
  }
  __this_00 = (Nekki_SF2_GUI_Dialogs_Raids_ChatMessageView_o *)
              Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController__OFBDOPOJDEH(__this,method_00);
  if (__this_00 != (Nekki_SF2_GUI_Dialogs_Raids_ChatMessageView_o *)0x0) {
    bVar1 = (Nekki_SF2_GUI_Dialogs_Raids_ChatMessageView_TypeInfo->_2).naturalAligment;
    if (bVar1 <= (__this_00->klass->_2).naturalAligment) {
      if ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)Nekki_SF2_GUI_Dialogs_Raids_ChatMessageView_TypeInfo) {
        __this_00 = (Nekki_SF2_GUI_Dialogs_Raids_ChatMessageView_o *)0x0;
      }
      goto LAB_03134584;
    }
  }
  __this_00 = (Nekki_SF2_GUI_Dialogs_Raids_ChatMessageView_o *)0x0;
LAB_03134584:
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                    );
  if (!bVar2) {
    return;
  }
  if (__this_00 == (Nekki_SF2_GUI_Dialogs_Raids_ChatMessageView_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  Nekki_SF2_GUI_Dialogs_Raids_ChatMessageView__SetEditBoxVisible
            (__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
  return;
}

