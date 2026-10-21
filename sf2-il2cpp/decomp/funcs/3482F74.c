// Nekki.SF2.GUI.Dialogs.SettingsDialog$$EJHAPHAHMHG @ RVA 0x3482F74

void Nekki_SF2_GUI_Dialogs_SettingsDialog__EJHAPHAHMHG
               (Nekki_SF2_GUI_Dialogs_SettingsDialog_o *__this,System_String_o *EHNFGMGKCHO,
               MethodInfo *method)

{
  Nekki_SF2_GUI_ResolutionImage_o *__this_00;
  UnityEngine_Transform_o *pUVar1;
  Nekki_SF2_GUI_LabelAlias_o *__this_01;
  UnityEngine_Vector3_o UVar2;
  
  Nekki_SF2_GUI_Dialogs_BaseDialog__EJHAPHAHMHG
            ((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)__this,EHNFGMGKCHO,(MethodInfo *)0x0);
  __this_00 = (__this->fields).super._topStripe;
  if ((__this_00 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
     (pUVar1 = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
     pUVar1 != (UnityEngine_Transform_o *)0x0)) {
    UVar2 = UnityEngine_Transform__get_localPosition(pUVar1,(MethodInfo *)0x0);
    __this_01 = (__this->fields).super._header;
    if (__this_01 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
      pUVar1 = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
      UnityEngine_TransformExtensions__SetLocalPositionY
                (pUVar1,UVar2.fields.y + -110.0,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

