// Nekki.SF2.GUI.Dialogs.Raids.MoveableChatSF$$GJBIHHLINEG @ RVA 0x325656C

void Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__GJBIHHLINEG
               (Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *__this,MethodInfo *method)

{
  UnityEngine_RectTransform_o *JNPCENEINON;
  
  if ((DAT_04567168 & 1) == 0) {
    FUN_01bab630(&UnityEngine_RectTransform_TypeInfo);
    FUN_01bab630(&WideScreenController_TypeInfo);
    DAT_04567168 = 1;
  }
  JNPCENEINON = (UnityEngine_RectTransform_o *)
                UnityEngine_Component__get_transform
                          ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if ((WideScreenController_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(WideScreenController_TypeInfo);
  }
  if (JNPCENEINON == (UnityEngine_RectTransform_o *)0x0) {
    JNPCENEINON = (UnityEngine_RectTransform_o *)0x0;
  }
  else if (JNPCENEINON->klass != UnityEngine_RectTransform_TypeInfo) {
    JNPCENEINON = (UnityEngine_RectTransform_o *)0x0;
  }
  WideScreenController__RunCustom(JNPCENEINON,(MethodInfo *)0x0);
  return;
}

