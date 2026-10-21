// Nekki.SF2.GUI.Fight.ScreenFight$$Clear @ RVA 0x30A7CC0

void Nekki_SF2_GUI_Fight_ScreenFight__Clear
               (Nekki_SF2_GUI_Fight_ScreenFight_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *pUVar2;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Fight_EnemiesScreen_o **ppNVar3;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar4;
  Nekki_SF2_GUI_LabelAlias_o *pNVar5;
  Nekki_SF2_GUI_Fight_VsScreen_o **ppNVar6;
  Nekki_SF2_GUI_Fight_EnemiesScreen_o *x;
  Nekki_SF2_GUI_Fight_VsScreen_o *x_00;
  
  if ((DAT_04566182 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566182 = 1;
    method = extraout_x1;
  }
  pNVar4 = (__this->fields).image;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar4 = (__this->fields).image;
    if ((pNVar4 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) ||
       (pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0),
       pUVar2 == (UnityEngine_GameObject_o *)0x0)) goto LAB_031a77a0;
    UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
  }
  pNVar5 = (__this->fields).round;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar5 = (__this->fields).round;
    if ((pNVar5 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) ||
       (pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar5,(MethodInfo *)0x0),
       pUVar2 == (UnityEngine_GameObject_o *)0x0)) goto LAB_031a77a0;
    UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
  }
  pNVar5 = (__this->fields).ruleDescription;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar5 = (__this->fields).ruleDescription;
    if ((pNVar5 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) ||
       (pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar5,(MethodInfo *)0x0),
       pUVar2 == (UnityEngine_GameObject_o *)0x0)) goto LAB_031a77a0;
    UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
  }
  ppNVar6 = &(__this->fields).LJDENNBMCIG;
  x_00 = *ppNVar6;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (*ppNVar6 == (Nekki_SF2_GUI_Fight_VsScreen_o *)0x0) goto LAB_031a77a0;
    pUVar2 = UnityEngine_Component__get_gameObject
                       ((UnityEngine_Component_o *)*ppNVar6,(MethodInfo *)0x0);
    Util__JODGPLBHHIA(pUVar2,false,(MethodInfo *)0x0);
    *ppNVar6 = (Nekki_SF2_GUI_Fight_VsScreen_o *)0x0;
    thunk_FUN_01c20e04(ppNVar6,0);
  }
  ppNVar3 = &(__this->fields).MNMBNBKMJOF;
  x = *ppNVar3;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    return;
  }
  if (*ppNVar3 != (Nekki_SF2_GUI_Fight_EnemiesScreen_o *)0x0) {
    pUVar2 = UnityEngine_Component__get_gameObject
                       ((UnityEngine_Component_o *)*ppNVar3,(MethodInfo *)0x0);
    Util__JODGPLBHHIA(pUVar2,false,(MethodInfo *)0x0);
    *ppNVar3 = (Nekki_SF2_GUI_Fight_EnemiesScreen_o *)0x0;
    thunk_FUN_01c20e04(ppNVar3,0);
    return;
  }
LAB_031a77a0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

