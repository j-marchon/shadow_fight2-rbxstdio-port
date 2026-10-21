// Nekki.SF2.GUI.Map.MapButtonsPanel$$AddRouletteButton @ RVA 0x3593218

void Nekki_SF2_GUI_Map_MapButtonsPanel__AddRouletteButton
               (Nekki_SF2_GUI_Map_MapButtonsPanel_o *__this,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  int32_t iVar3;
  int32_t iVar4;
  NCNJEIBHGBH_o *__this_00;
  Nekki_SF2_GUI_Map_MapButton_o *pNVar5;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_GameObject_o *__this_02;
  MethodInfo *extraout_x1;
  ACHLOMELAJE_o *pAVar6;
  FKNCNNOOOIO_o *pFVar7;
  Nekki_SF2_GUI_Map_MapButton_o **ppNVar8;
  UnityEngine_Transform_o *pUVar9;
  float fVar10;
  
  if ((DAT_04568d89 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568d89 = 1;
    method = extraout_x1;
  }
  Nekki_SF2_GUI_Map_MapButtonsPanel__DMHJMHAKAGA(__this,method);
  iVar3 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
  iVar4 = UnityEngine_Screen__get_width((MethodInfo *)0x0);
  fVar10 = (float)iVar4 * 3.0 * 0.25;
  iVar1 = -0x80000000;
  if (fVar10 != INFINITY) {
    iVar1 = (int)fVar10;
  }
  if (iVar3 == iVar1) {
    return;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pAVar6 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (pAVar6 == (ACHLOMELAJE_o *)0x0) {
    return;
  }
  if ((pAVar6->fields).FCEBIJCGJOL == false) {
    return;
  }
  __this_00 = NCNJEIBHGBH__AIHNLLGNBLC((MethodInfo *)0x0);
  if (__this_00 == (NCNJEIBHGBH_o *)0x0) goto LAB_03693444;
  pNVar5 = NCNJEIBHGBH__PMGKLOAHCJE(__this_00,(__this->fields)._MapButtonPrefab,(MethodInfo *)0x0);
  ppNVar8 = &(__this->fields).LGOMKFIEBEH;
  *ppNVar8 = pNVar5;
  thunk_FUN_01c20e04(ppNVar8,pNVar5);
  pNVar5 = *ppNVar8;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    return;
  }
  pNVar5 = *ppNVar8;
  if ((pNVar5 == (Nekki_SF2_GUI_Map_MapButton_o *)0x0) ||
     (pFVar7 = (pNVar5->fields).AEPNEAIEKOL, pFVar7 == (FKNCNNOOOIO_o *)0x0)) goto LAB_03693444;
  if ((pFVar7->fields).OEFBIKEMBOF == false) {
LAB_036933d4:
    __this_01 = UnityEngine_Component__get_transform
                          ((UnityEngine_Component_o *)pNVar5,(MethodInfo *)0x0);
    pUVar9 = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (__this_01 == (UnityEngine_Transform_o *)0x0) goto LAB_03693444;
  }
  else {
    pUVar9 = (__this->fields)._ActionsPanel;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    pNVar5 = *ppNVar8;
    if (!bVar2) {
      if (pNVar5 == (Nekki_SF2_GUI_Map_MapButton_o *)0x0) goto LAB_03693444;
      goto LAB_036933d4;
    }
    if ((pNVar5 == (Nekki_SF2_GUI_Map_MapButton_o *)0x0) ||
       (__this_01 = UnityEngine_Component__get_transform
                              ((UnityEngine_Component_o *)pNVar5,(MethodInfo *)0x0),
       __this_01 == (UnityEngine_Transform_o *)0x0)) goto LAB_03693444;
    pUVar9 = (__this->fields)._ActionsPanel;
  }
  UnityEngine_Transform__SetParent(__this_01,pUVar9,false,(MethodInfo *)0x0);
  if (*ppNVar8 != (Nekki_SF2_GUI_Map_MapButton_o *)0x0) {
    Nekki_SF2_GUI_Map_MapButton__Refresh(*ppNVar8,(MethodInfo *)0x0);
    if ((*ppNVar8 != (Nekki_SF2_GUI_Map_MapButton_o *)0x0) &&
       (__this_02 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)*ppNVar8,(MethodInfo *)0x0),
       __this_02 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(__this_02,true,(MethodInfo *)0x0);
      return;
    }
  }
LAB_03693444:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

