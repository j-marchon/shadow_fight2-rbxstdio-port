// Nekki.SF2.GUI.Profile.ProfileScene$$KFLAHKONDBL @ RVA 0x3395A68

void Nekki_SF2_GUI_Profile_ProfileScene__KFLAHKONDBL
               (Nekki_SF2_GUI_Profile_ProfileScene_o *__this,MethodInfo *method)

{
  ushort uVar1;
  NFGLEDADCGL_o *__this_00;
  Nekki_SF2_GUI_Profile_PerksController_o *__this_01;
  Nekki_SF2_GUI_Profile_UserPerksPanel_o *__this_02;
  Nekki_SF2_GUI_Profile_InfoPanel_o *__this_03;
  Nekki_SF2_GUI_Profile_ProfileBottomPanel_o *__this_04;
  PBAKFOBIHEG_o *pPVar2;
  System_Collections_IEnumerator_o *pSVar3;
  VirtualInvokeData *pVVar4;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *method_00;
  ACHLOMELAJE_o *pAVar5;
  PBAKFOBIHEG_c *pPVar6;
  ulong uVar7;
  int32_t *piVar8;
  
  if ((DAT_04567c4f & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Common_BottomPanel<EBGNICNEJFJ>_UpdateIndicators__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    DAT_04567c4f = 1;
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
  }
  pAVar5 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if ((pAVar5 != (ACHLOMELAJE_o *)0x0) &&
     (__this_00 = (pAVar5->fields).CKJAGLDEMAE, __this_00 != (NFGLEDADCGL_o *)0x0)) {
    NFGLEDADCGL__JHJPKAJCJHF(__this_00,(MethodInfo *)0x0);
    __this_01 = (__this->fields)._PerksController;
    if (__this_01 != (Nekki_SF2_GUI_Profile_PerksController_o *)0x0) {
      Nekki_SF2_GUI_Profile_ItemsController__UpdateTable
                ((Nekki_SF2_GUI_Profile_ItemsController_o *)__this_01,(MethodInfo *)0x0);
      __this_02 = (__this->fields)._LeftPanel;
      if (__this_02 != (Nekki_SF2_GUI_Profile_UserPerksPanel_o *)0x0) {
        Nekki_SF2_GUI_Profile_UserPerksPanel__Clear(__this_02,(MethodInfo *)0x0);
        __this_03 = (__this->fields)._RightPanel;
        if (__this_03 != (Nekki_SF2_GUI_Profile_InfoPanel_o *)0x0) {
          Nekki_SF2_GUI_Profile_InfoPanel__Clear(__this_03,(MethodInfo *)0x0);
          __this_04 = (__this->fields).GJIPOBCNEPG;
          if (__this_04 != (Nekki_SF2_GUI_Profile_ProfileBottomPanel_o *)0x0) {
            Nekki_SF2_GUI_Common_BottomPanel<Int32Enum>__UpdateIndicators
                      ((Nekki_SF2_GUI_Common_BottomPanel_T__o *)__this_04,
                       Method_Nekki_SF2_GUI_Common_BottomPanel<EBGNICNEJFJ>_UpdateIndicators__);
            pPVar2 = CoroutineManager__get_Current((MethodInfo *)0x0);
            pSVar3 = Nekki_SF2_GUI_Profile_ProfileScene__DIGPCDFMFBD(__this,method_00);
            if (pPVar2 != (PBAKFOBIHEG_o *)0x0) {
              pPVar6 = pPVar2->klass;
              uVar1._0_1_ = (pPVar6->_2).rank;
              uVar1._1_1_ = (pPVar6->_2).minimumAlignment;
              uVar7 = (ulong)uVar1;
              if (uVar7 != 0) {
                piVar8 = &((pPVar6->_1).interfaceOffsets)->offset;
                do {
                  if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
                      (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
                    pVVar4 = pPVar6->vtable + *piVar8;
                    goto LAB_03495bcc;
                  }
                  uVar7 = uVar7 - 1;
                  piVar8 = piVar8 + 4;
                } while (uVar7 != 0);
              }
              pVVar4 = (VirtualInvokeData *)FUN_01b81914(pPVar2,PBAKFOBIHEG_TypeInfo,0);
LAB_03495bcc:
                    /* WARNING: Could not recover jumptable at 0x03495be4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*pVVar4->methodPtr)(pPVar2,pSVar3,1,pVVar4->method);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

