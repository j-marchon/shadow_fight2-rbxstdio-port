// Nekki.SF2.GUI.ModuleHolder$$get_RectTransform @ RVA 0x314E4B0

UnityEngine_RectTransform_o *
Nekki_SF2_GUI_ModuleHolder__get_RectTransform
          (Nekki_SF2_GUI_ModuleHolder_o *__this,MethodInfo *method)

{
  UnityEngine_RectTransform_o *pUVar1;
  
  if ((DAT_045667e8 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<RectTransform>__);
    DAT_045667e8 = 1;
  }
  pUVar1 = (UnityEngine_RectTransform_o *)
           UnityEngine_Component__GetComponent<object>
                     ((UnityEngine_Component_o *)__this,
                      Method_UnityEngine_Component_GetComponent<RectTransform>__);
  return pUVar1;
}

