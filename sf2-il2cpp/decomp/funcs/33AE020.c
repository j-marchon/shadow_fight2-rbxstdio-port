// Nekki.SF2.GUI.Dialogs.BaseDialog$$BHIPAGACGFO @ RVA 0x33AE020

UnityEngine_RectTransform_o *
Nekki_SF2_GUI_Dialogs_BaseDialog__BHIPAGACGFO
          (Nekki_SF2_GUI_Dialogs_BaseDialog_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_RectTransform_o *pUVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04567d3c & 1) == 0) {
    FUN_01bab630(&UnityEngine_RectTransform_TypeInfo);
    DAT_04567d3c = 1;
    method = extraout_x1;
  }
  __this_00 = (__this->fields)._content;
  if (__this_00 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(0,method);
  }
  pUVar1 = (UnityEngine_RectTransform_o *)
           UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
  if ((pUVar1 != (UnityEngine_RectTransform_o *)0x0) &&
     (pUVar1->klass != UnityEngine_RectTransform_TypeInfo)) {
    pUVar1 = (UnityEngine_RectTransform_o *)0x0;
  }
  return pUVar1;
}

