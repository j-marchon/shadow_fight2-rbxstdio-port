// Nekki.SF2.GUI.Common.Hints.HintList$$set_DescriptionAlias @ RVA 0x3514DEC

void Nekki_SF2_GUI_Common_Hints_HintList__set_DescriptionAlias
               (Nekki_SF2_GUI_Common_Hints_HintList_o *__this,System_String_o *CJNHFNHJHPE,
               MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_GameObject_o *__this_00;
  Nekki_SF2_GUI_LabelAlias_o *pNVar3;
  
  if ((DAT_04568918 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568918 = 1;
  }
  pNVar3 = (__this->fields)._Description;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar3 = (__this->fields)._Description;
    if (pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
      Nekki_SF2_GUI_LabelAlias__set_Alias(pNVar3,CJNHFNHJHPE,(MethodInfo *)0x0);
      pNVar3 = (__this->fields)._Description;
      if (((pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
          (pUVar2 = UnityEngine_Component__get_transform
                              ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0),
          pUVar2 != (UnityEngine_Transform_o *)0x0)) &&
         (pUVar2 = UnityEngine_Transform__get_parent(pUVar2,(MethodInfo *)0x0),
         pUVar2 != (UnityEngine_Transform_o *)0x0)) {
        __this_00 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0);
        bVar1 = System_String__IsNullOrEmpty(CJNHFNHJHPE,(MethodInfo *)0x0);
        if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
          UnityEngine_GameObject__SetActive(__this_00,(bool)(~bVar1 & 1),(MethodInfo *)0x0);
          return;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

