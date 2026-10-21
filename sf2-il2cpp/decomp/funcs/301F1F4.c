// Nekki.SF2.GUI.CompositeImage$$get_RectTransform @ RVA 0x301F1F4

UnityEngine_RectTransform_o *
Nekki_SF2_GUI_CompositeImage__get_RectTransform
          (Nekki_SF2_GUI_CompositeImage_o *__this,MethodInfo *method)

{
  UnityEngine_RectTransform_o *pUVar1;
  UnityEngine_RectTransform_c *pUVar2;
  bool bVar3;
  MethodInfo *extraout_x1;
  UnityEngine_RectTransform_o **ppUVar4;
  UnityEngine_RectTransform_o *pUVar5;
  
  if ((DAT_04565c39 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&UnityEngine_RectTransform_TypeInfo);
    DAT_04565c39 = 1;
    method = extraout_x1;
  }
  ppUVar4 = &(__this->fields).EFGNJDHAIDC;
  pUVar5 = *ppUVar4;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar3 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pUVar5,(MethodInfo *)0x0);
  if (!bVar3) {
    pUVar5 = (UnityEngine_RectTransform_o *)
             UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    pUVar2 = UnityEngine_RectTransform_TypeInfo;
    if (pUVar5 == (UnityEngine_RectTransform_o *)0x0) {
      pUVar5 = (UnityEngine_RectTransform_o *)0x0;
      *ppUVar4 = (UnityEngine_RectTransform_o *)0x0;
    }
    else {
      pUVar1 = pUVar5;
      if (pUVar5->klass != UnityEngine_RectTransform_TypeInfo) {
        pUVar1 = (UnityEngine_RectTransform_o *)0x0;
      }
      *ppUVar4 = pUVar1;
      if (pUVar5->klass != pUVar2) {
        pUVar5 = (UnityEngine_RectTransform_o *)0x0;
      }
    }
    thunk_FUN_01c20e04(ppUVar4,pUVar5);
  }
  return *ppUVar4;
}

