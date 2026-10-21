// Nekki.SF2.GUI.SFScrollRect$$INLENKAOOPD @ RVA 0x323D178

UnityEngine_RectTransform_o *
Nekki_SF2_GUI_SFScrollRect__INLENKAOOPD(Nekki_SF2_GUI_SFScrollRect_o *__this,MethodInfo *method)

{
  UnityEngine_RectTransform_o **ppUVar1;
  bool bVar2;
  MethodInfo *extraout_x1;
  UnityEngine_RectTransform_o *pUVar3;
  
  if ((DAT_0456707a & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<RectTransform>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_0456707a = 1;
    method = extraout_x1;
  }
  pUVar3 = (__this->fields).JCHDAHFOCOL;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  ppUVar1 = &(__this->fields).JCHDAHFOCOL;
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pUVar3 = (UnityEngine_RectTransform_o *)
             UnityEngine_Component__GetComponent<object>
                       ((UnityEngine_Component_o *)__this,
                        Method_UnityEngine_Component_GetComponent<RectTransform>__);
    (__this->fields).JCHDAHFOCOL = pUVar3;
    thunk_FUN_01c20e04(ppUVar1,pUVar3);
  }
  return *ppUVar1;
}

