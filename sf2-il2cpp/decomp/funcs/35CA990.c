// Nekki.SF2.GUI.PressButton$$LLCHPOHDNEK @ RVA 0x35CA990

UnityEngine_RectTransform_o *
Nekki_SF2_GUI_PressButton__LLCHPOHDNEK(Nekki_SF2_GUI_PressButton_o *__this,MethodInfo *method)

{
  UnityEngine_RectTransform_o **ppUVar1;
  UnityEngine_RectTransform_c *pUVar2;
  bool bVar3;
  MethodInfo *extraout_x1;
  UnityEngine_RectTransform_o *pUVar4;
  
  if ((DAT_04568f9b & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&UnityEngine_RectTransform_TypeInfo);
    DAT_04568f9b = 1;
    method = extraout_x1;
  }
  pUVar4 = (__this->fields).DFAOPAGGKAG;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  ppUVar1 = &(__this->fields).DFAOPAGGKAG;
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    pUVar4 = (UnityEngine_RectTransform_o *)
             UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    pUVar2 = UnityEngine_RectTransform_TypeInfo;
    if (pUVar4 == (UnityEngine_RectTransform_o *)0x0) {
      *ppUVar1 = (UnityEngine_RectTransform_o *)0x0;
    }
    else if ((pUVar4->klass != UnityEngine_RectTransform_TypeInfo) ||
            (*ppUVar1 = pUVar4, pUVar4->klass != pUVar2)) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(pUVar4);
    }
    thunk_FUN_01c20e04(ppUVar1,pUVar4);
  }
  return *ppUVar1;
}

