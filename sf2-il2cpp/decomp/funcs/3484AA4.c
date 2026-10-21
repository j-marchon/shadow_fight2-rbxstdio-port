// Nekki.SF2.GUI.Dialogs.SettingsDialog$$CHNHJAJGLLO @ RVA 0x3484AA4

void Nekki_SF2_GUI_Dialogs_SettingsDialog__CHNHJAJGLLO
               (Nekki_SF2_GUI_Dialogs_SettingsDialog_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_LabelAlias_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar2;
  UnityEngine_Transform_o *pUVar3;
  float fVar4;
  
  __this_00 = (__this->fields).lblUserId;
  if ((__this_00 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
     (__this_01 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
     __this_01 != (UnityEngine_GameObject_o *)0x0)) {
    bVar1 = UnityEngine_GameObject__get_activeSelf(__this_01,(MethodInfo *)0x0);
    pNVar2 = (__this->fields).super._topStripe;
    fVar4 = 37.0;
    if (!bVar1) {
      fVar4 = 0.0;
    }
    if (pNVar2 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
      pUVar3 = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0);
      UnityEngine_TransformExtensions__SetLocalPositionY(pUVar3,fVar4 + 600.0,(MethodInfo *)0x0);
      pNVar2 = (__this->fields).super._bottomStripe;
      if (pNVar2 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
        pUVar3 = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0);
        UnityEngine_TransformExtensions__SetLocalPositionY(pUVar3,-600.0 - fVar4,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

