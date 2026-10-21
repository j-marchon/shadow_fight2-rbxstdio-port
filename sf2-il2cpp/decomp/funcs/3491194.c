// Nekki.SF2.GUI.UIModule$$get_RectTransform @ RVA 0x3491194

UnityEngine_RectTransform_o *
Nekki_SF2_GUI_UIModule__get_RectTransform(Nekki_SF2_GUI_UIModule_o *__this,MethodInfo *method)

{
  UnityEngine_RectTransform_o *pUVar1;
  
  if ((DAT_0456841b & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<RectTransform>__);
    DAT_0456841b = 1;
  }
  pUVar1 = (UnityEngine_RectTransform_o *)
           UnityEngine_Component__GetComponent<object>
                     ((UnityEngine_Component_o *)__this,
                      Method_UnityEngine_Component_GetComponent<RectTransform>__);
  return pUVar1;
}

