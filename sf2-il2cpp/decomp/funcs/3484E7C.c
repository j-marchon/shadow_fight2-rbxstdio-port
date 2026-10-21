// Nekki.SF2.GUI.Dialogs.SettingsDialog$$DAPCBANDBDC @ RVA 0x3484E7C

void Nekki_SF2_GUI_Dialogs_SettingsDialog__DAPCBANDBDC
               (Nekki_SF2_GUI_Dialogs_SettingsDialog_o *__this,Il2CppObject *IMMNELPBGIF,
               MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_BaseDialog_o **ppNVar1;
  bool bVar2;
  Il2CppObject *extraout_x1;
  Nekki_SF2_GUI_Dialogs_BaseDialog_o *x;
  
  if ((DAT_045683a1 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_SFMonoBehaviour<object>_RemoveAllEventListener__);
    DAT_045683a1 = 1;
    IMMNELPBGIF = extraout_x1;
  }
  x = (__this->fields).CPLHJKBAHOF;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,IMMNELPBGIF);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    ppNVar1 = &(__this->fields).CPLHJKBAHOF;
    if (*ppNVar1 != (Nekki_SF2_GUI_Dialogs_BaseDialog_o *)0x0) {
      Nekki_SF2_GUI_SFMonoBehaviour<object>__RemoveAllEventListener
                ((Nekki_SF2_GUI_SFMonoBehaviour_object__o *)*ppNVar1,
                 Method_Nekki_SF2_GUI_SFMonoBehaviour<object>_RemoveAllEventListener__);
      *ppNVar1 = (Nekki_SF2_GUI_Dialogs_BaseDialog_o *)0x0;
      thunk_FUN_01c20e04(ppNVar1,0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

