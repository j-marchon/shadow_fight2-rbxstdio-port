// Nekki.SF2.GUI.Dialogs.SettingsDialog$$JOHIFADKBLJ @ RVA 0x34836B4

void Nekki_SF2_GUI_Dialogs_SettingsDialog__JOHIFADKBLJ
               (Nekki_SF2_GUI_Dialogs_SettingsDialog_o *__this,MethodInfo *method)

{
  float value;
  bool bVar1;
  Nekki_SF2_GUI_LabelAlias_o *__this_00;
  UnityEngine_GameObject_o *pUVar2;
  UnityEngine_Transform_o *transform;
  
  __this_00 = (__this->fields).lblUserId;
  if ((__this_00 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
     (pUVar2 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
     pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
    bVar1 = UnityEngine_GameObject__get_activeSelf(pUVar2,(MethodInfo *)0x0);
    pUVar2 = (__this->fields).super._content;
    if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
      value = 137.0;
      if (!bVar1) {
        value = 100.0;
      }
      transform = UnityEngine_GameObject__get_transform(pUVar2,(MethodInfo *)0x0);
      UnityEngine_TransformExtensions__SetLocalPositionY(transform,value,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

