// Nekki.SF2.GUI.Menu.MenuEnergyPanel$$UpdateView @ RVA 0x344EDF4

void Nekki_SF2_GUI_Menu_MenuEnergyPanel__UpdateView
               (Nekki_SF2_GUI_Menu_MenuEnergyPanel_o *__this,MethodInfo *method)

{
  bool_conflict bVar1;
  UnityEngine_UI_Image_o *pUVar2;
  UnityEngine_GameObject_o *pUVar3;
  StepBar_o *pSVar4;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  MethodInfo *method_00;
  ACHLOMELAJE_o *pAVar5;
  
  if ((DAT_04568294 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04568294 = 1;
    method = extraout_x1;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
    method = extraout_x1_00;
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
    method = extraout_x1_01;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
    method = extraout_x1_02;
  }
  if (NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField != (ACHLOMELAJE_o *)0x0) {
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
    }
    if (DAT_04565b7d == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b7d = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pAVar5 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if ((pAVar5 != (ACHLOMELAJE_o *)0x0) &&
       (pUVar2 = (__this->fields)._icon, pUVar2 != (UnityEngine_UI_Image_o *)0x0)) {
      bVar1 = (pAVar5->fields).MMOJIJHAJJL;
      pUVar3 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0);
      if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
        if (bVar1 == false) {
          UnityEngine_GameObject__SetActive(pUVar3,true,(MethodInfo *)0x0);
          pSVar4 = (__this->fields)._bar;
          if ((pSVar4 != (StepBar_o *)0x0) &&
             (pUVar3 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)pSVar4,(MethodInfo *)0x0),
             pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
            UnityEngine_GameObject__SetActive(pUVar3,true,(MethodInfo *)0x0);
            pUVar2 = (__this->fields)._iconMax;
            if ((pUVar2 != (UnityEngine_UI_Image_o *)0x0) &&
               (pUVar3 = UnityEngine_Component__get_gameObject
                                   ((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0),
               pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
              UnityEngine_GameObject__SetActive(pUVar3,false,(MethodInfo *)0x0);
              Nekki_SF2_GUI_Menu_MenuEnergyPanel__UpdateBar(__this,method_00);
              return;
            }
          }
        }
        else {
          UnityEngine_GameObject__SetActive(pUVar3,false,(MethodInfo *)0x0);
          pSVar4 = (__this->fields)._bar;
          if ((pSVar4 != (StepBar_o *)0x0) &&
             (pUVar3 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)pSVar4,(MethodInfo *)0x0),
             pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
            UnityEngine_GameObject__SetActive(pUVar3,false,(MethodInfo *)0x0);
            pUVar2 = (__this->fields)._iconMax;
            if ((pUVar2 != (UnityEngine_UI_Image_o *)0x0) &&
               (pUVar3 = UnityEngine_Component__get_gameObject
                                   ((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0),
               pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
              UnityEngine_GameObject__SetActive(pUVar3,true,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

