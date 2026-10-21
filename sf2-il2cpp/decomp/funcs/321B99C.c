// Nekki.SF2.GUI.Dialogs.ShowLoot.LootCell$$SetMoney @ RVA 0x321B99C

void Nekki_SF2_GUI_Dialogs_ShowLoot_LootCell__SetMoney
               (Nekki_SF2_GUI_Dialogs_ShowLoot_LootCell_o *__this,int64_t GNDOPGAILNK,
               MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Transform_o *transform;
  Il2CppObject *arg0;
  System_String_o *pSVar2;
  UnityEngine_GameObject_o *pUVar3;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  ACHLOMELAJE_o *pAVar4;
  System_String_o **ppSVar5;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar6;
  Nekki_SF2_GUI_LabelAlias_o *pNVar7;
  int64_t local_38;
  
  method_00 = (MethodInfo *)GNDOPGAILNK;
  if ((DAT_04566f07 & 1) == 0) {
    FUN_01bab630(&long_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_18944);
    FUN_01bab630(&StringLiteral_22054);
    DAT_04566f07 = 1;
    method_00 = extraout_x1;
  }
  Nekki_SF2_GUI_Dialogs_ShowLoot_LootCell__MBKCJEFAPMO(__this,method_00);
  pNVar6 = (__this->fields)._icon;
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
  pAVar4 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (pAVar4 != (ACHLOMELAJE_o *)0x0) {
    bVar1 = PCOEHCPGBBG__EDHHJAMCOJH((pAVar4->fields).FAAJGHKHEBI,(MethodInfo *)0x0);
    if (bVar1) {
      ppSVar5 = (System_String_o **)&StringLiteral_18944;
    }
    else {
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
      pAVar4 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
      if (pAVar4 == (ACHLOMELAJE_o *)0x0) goto LAB_0331bba0;
      ppSVar5 = &(pAVar4->fields).FAAJGHKHEBI;
    }
    if (pNVar6 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
      Nekki_SF2_GUI_ResolutionImage__set_SpriteName(pNVar6,*ppSVar5,(MethodInfo *)0x0);
      pNVar6 = (__this->fields)._icon;
      if (pNVar6 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
        transform = UnityEngine_Component__get_transform
                              ((UnityEngine_Component_o *)pNVar6,(MethodInfo *)0x0);
        UnityEngine_TransformExtensions__SetLocalScale(transform,0.5,(MethodInfo *)0x0);
        pNVar7 = (__this->fields)._text;
        local_38 = GNDOPGAILNK;
        arg0 = (Il2CppObject *)thunk_FUN_01bda448(long_TypeInfo,&local_38);
        pSVar2 = System_String__Format(StringLiteral_22054,arg0,(MethodInfo *)0x0);
        if (pNVar7 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
          (*(pNVar7->klass->vtable)._75_set_text.methodPtr)
                    (pNVar7,pSVar2,(pNVar7->klass->vtable)._75_set_text.method);
          pNVar6 = (__this->fields)._icon;
          if ((pNVar6 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
             (pUVar3 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)pNVar6,(MethodInfo *)0x0),
             pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
            UnityEngine_GameObject__SetActive(pUVar3,true,(MethodInfo *)0x0);
            pNVar7 = (__this->fields)._text;
            if ((pNVar7 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
               (pUVar3 = UnityEngine_Component__get_gameObject
                                   ((UnityEngine_Component_o *)pNVar7,(MethodInfo *)0x0),
               pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
              UnityEngine_GameObject__SetActive(pUVar3,true,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
LAB_0331bba0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

