// Nekki.SF2.GUI.Fight.ComboItem$$get_rectTransform @ RVA 0x34B358C

UnityEngine_RectTransform_o *
Nekki_SF2_GUI_Fight_ComboItem__get_rectTransform
          (Nekki_SF2_GUI_Fight_ComboItem_o *__this,MethodInfo *method)

{
  UnityEngine_RectTransform_o *pUVar1;
  
  if ((DAT_0456856b & 1) == 0) {
    FUN_01bab630(&UnityEngine_RectTransform_TypeInfo);
    DAT_0456856b = 1;
  }
  pUVar1 = (UnityEngine_RectTransform_o *)
           UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  if ((pUVar1 != (UnityEngine_RectTransform_o *)0x0) &&
     (pUVar1->klass != UnityEngine_RectTransform_TypeInfo)) {
    pUVar1 = (UnityEngine_RectTransform_o *)0x0;
  }
  return pUVar1;
}

