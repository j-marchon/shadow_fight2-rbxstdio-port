// Nekki.SF2.GUI.Common.Hints.HintList$$get_DescriptionActive @ RVA 0x3515410

bool Nekki_SF2_GUI_Common_Hints_HintList__get_DescriptionActive
               (Nekki_SF2_GUI_Common_Hints_HintList_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_GameObject_o *__this_00;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_LabelAlias_o *pNVar3;
  
  if ((DAT_0456891e & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_0456891e = 1;
    method = extraout_x1;
  }
  pNVar3 = (__this->fields)._Description;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar3 = (__this->fields)._Description;
    if ((((pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
         (pUVar2 = UnityEngine_Component__get_transform
                             ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0),
         pUVar2 != (UnityEngine_Transform_o *)0x0)) &&
        (pUVar2 = UnityEngine_Transform__get_parent(pUVar2,(MethodInfo *)0x0),
        pUVar2 != (UnityEngine_Transform_o *)0x0)) &&
       (__this_00 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0),
       __this_00 != (UnityEngine_GameObject_o *)0x0)) {
      bVar1 = UnityEngine_GameObject__get_activeSelf(__this_00,(MethodInfo *)0x0);
      return bVar1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return false;
}

