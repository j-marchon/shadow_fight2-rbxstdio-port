// Nekki.SF2.GUI.Dialogs.SettingsDialog$$GIJLHPDBFEK @ RVA 0x34845D4

void Nekki_SF2_GUI_Dialogs_SettingsDialog__GIJLHPDBFEK
               (Nekki_SF2_GUI_Dialogs_SettingsDialog_o *__this,
               Nekki_SF2_GUI_ResolutionButton_o *LGHOMHOPNEP,System_String_o *IEPAILIKIEM,
               float KEFILECBPMF,float BHOOMCEABGH,int32_t OGPGLGPMEPD,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Vector3_o value;
  
  if ((DAT_04568399 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568399 = 1;
  }
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)LGHOMHOPNEP,(MethodInfo *)0x0);
  if (bVar1) {
    Nekki_SF2_GUI_Dialogs_SettingsDialog__GIJLHPDBFEK
              (__this,LGHOMHOPNEP,IEPAILIKIEM,OGPGLGPMEPD,method);
    if ((LGHOMHOPNEP != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) &&
       (__this_00 = UnityEngine_Component__get_transform
                              ((UnityEngine_Component_o *)LGHOMHOPNEP,(MethodInfo *)0x0),
       __this_00 != (UnityEngine_Transform_o *)0x0)) {
      value.fields.y = BHOOMCEABGH;
      value.fields.x = KEFILECBPMF;
      value.fields.z = 0.0;
      UnityEngine_Transform__set_localPosition(__this_00,value,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

