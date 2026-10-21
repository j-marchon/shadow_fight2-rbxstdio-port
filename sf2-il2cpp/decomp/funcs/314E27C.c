// Nekki.SF2.GUI.ModuleHolder$$get_Canvas @ RVA 0x314E27C

UnityEngine_Canvas_o *
Nekki_SF2_GUI_ModuleHolder__get_Canvas(Nekki_SF2_GUI_ModuleHolder_o *__this,MethodInfo *method)

{
  UnityEngine_Canvas_o *pUVar1;
  
  if ((DAT_045667e4 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<Canvas>__);
    DAT_045667e4 = 1;
  }
  pUVar1 = (UnityEngine_Canvas_o *)
           UnityEngine_Component__GetComponent<object>
                     ((UnityEngine_Component_o *)__this,
                      Method_UnityEngine_Component_GetComponent<Canvas>__);
  return pUVar1;
}

