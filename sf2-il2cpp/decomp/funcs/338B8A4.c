// Nekki.SF2.GUI.Menu.MenuScroll$$get_RectTransform @ RVA 0x338B8A4

UnityEngine_RectTransform_o *
Nekki_SF2_GUI_Menu_MenuScroll__get_RectTransform
          (Nekki_SF2_GUI_Menu_MenuScroll_o *__this,MethodInfo *method)

{
  UnityEngine_RectTransform_o *pUVar1;
  
  if ((DAT_04567bdc & 1) == 0) {
    FUN_01bab630(&UnityEngine_RectTransform_TypeInfo);
    DAT_04567bdc = 1;
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

