// Nekki.SF2.GUI.BaseScrollContent$$get_RectTransform @ RVA 0x35CD640

UnityEngine_RectTransform_o *
Nekki_SF2_GUI_BaseScrollContent__get_RectTransform
          (Nekki_SF2_GUI_BaseScrollContent_o *__this,MethodInfo *method)

{
  UnityEngine_RectTransform_o *pUVar1;
  
  if ((DAT_04568fb4 & 1) == 0) {
    FUN_01bab630(&UnityEngine_RectTransform_TypeInfo);
    DAT_04568fb4 = 1;
  }
  pUVar1 = (UnityEngine_RectTransform_o *)
           UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
    if (pUVar1->klass != UnityEngine_RectTransform_TypeInfo) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64();
    }
  }
  return pUVar1;
}

