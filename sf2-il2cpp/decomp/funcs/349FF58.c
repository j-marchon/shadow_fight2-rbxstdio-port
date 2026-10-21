// Nekki.SF2.GUI.Common.Indicator$$get_RectTransform @ RVA 0x349FF58

UnityEngine_RectTransform_o *
Nekki_SF2_GUI_Common_Indicator__get_RectTransform
          (Nekki_SF2_GUI_Common_Indicator_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  UnityEngine_RectTransform_o **ppUVar2;
  UnityEngine_RectTransform_o *pUVar3;
  
  if ((DAT_04568490 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<RectTransform>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568490 = 1;
    method = extraout_x1;
  }
  ppUVar2 = &(__this->fields).AOBAKMPHNKF;
  pUVar3 = *ppUVar2;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pUVar3 = (UnityEngine_RectTransform_o *)
             UnityEngine_Component__GetComponent<object>
                       ((UnityEngine_Component_o *)__this,
                        Method_UnityEngine_Component_GetComponent<RectTransform>__);
    (__this->fields).AOBAKMPHNKF = pUVar3;
    thunk_FUN_01c20e04(ppUVar2,pUVar3);
  }
  return *ppUVar2;
}

