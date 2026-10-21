// Nekki.SF2.GUI.Dialogs.CheckTicketsDialog$$LCGFJKFJKJK @ RVA 0x33B9284

void Nekki_SF2_GUI_Dialogs_CheckTicketsDialog__LCGFJKFJKJK
               (Nekki_SF2_GUI_Dialogs_CheckTicketsDialog_o *__this,int32_t DNBBBGEENMM,
               MethodInfo *method)

{
  UnityEngine_Events_UnityAction_o *pUVar1;
  Il2CppObject *pIVar2;
  System_String_o *pSVar3;
  DOPEEDABNEK_o *__this_00;
  HOOAAGABMBL_o *pHVar4;
  Il2CppObject *arg1;
  LabelButton_o *pLVar5;
  UnityEngine_Events_UnityEvent_o *pUVar6;
  int64_t local_70;
  int64_t iStack_68;
  int64_t iStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  int32_t local_34;
  
  if ((DAT_04567d90 & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_CheckTicketsDialog_AJIKGMMOPBK__,DNBBBGEENMM);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_CheckTicketsDialog_ICPFKKMIELD__);
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    FUN_01bab630(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    FUN_01bab630(&StringLiteral_21201);
    FUN_01bab630(&StringLiteral_17794);
    FUN_01bab630(&StringLiteral_10075);
    DAT_04567d90 = 1;
  }
  pLVar5 = (__this->fields).BtnQuit;
  if (pLVar5 != (LabelButton_o *)0x0) {
    pUVar6 = (UnityEngine_Events_UnityEvent_o *)(pLVar5->fields).super.super.super.m_OnClick;
    pUVar1 = (UnityEngine_Events_UnityAction_o *)
             thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
    UnityEngine_Events_UnityAction___ctor();
    if (pUVar6 != (UnityEngine_Events_UnityEvent_o *)0x0) {
      UnityEngine_Events_UnityEvent__AddListener(pUVar6,pUVar1,(MethodInfo *)0x0);
      local_34 = (__this->fields).NGKGHJDHNCP;
      pLVar5 = (__this->fields).BtnFight;
      pIVar2 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_34);
      pSVar3 = System_String__Format(StringLiteral_21201,pIVar2,(MethodInfo *)0x0);
      if (pLVar5 != (LabelButton_o *)0x0) {
        LabelButton__set_Alias(pLVar5,pSVar3,(MethodInfo *)0x0);
        pLVar5 = (__this->fields).BtnFight;
        if (pLVar5 != (LabelButton_o *)0x0) {
          UnityEngine_UI_Selectable__set_interactable
                    ((UnityEngine_UI_Selectable_o *)pLVar5,
                     (__this->fields).NGKGHJDHNCP <= (__this->fields).MDNGKCEFAOI,(MethodInfo *)0x0)
          ;
          pLVar5 = (__this->fields).BtnFight;
          if (pLVar5 != (LabelButton_o *)0x0) {
            pUVar6 = (UnityEngine_Events_UnityEvent_o *)(pLVar5->fields).super.super.super.m_OnClick
            ;
            pUVar1 = (UnityEngine_Events_UnityAction_o *)
                     thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
            UnityEngine_Events_UnityAction___ctor();
            if (pUVar6 != (UnityEngine_Events_UnityEvent_o *)0x0) {
              UnityEngine_Events_UnityEvent__AddListener(pUVar6,pUVar1,(MethodInfo *)0x0);
              if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              if (DAT_04563eaa == '\0') {
                FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                DAT_04563eaa = '\x01';
              }
              if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
              if ((__this_00 != (DOPEEDABNEK_o *)0x0) &&
                 (pHVar4 = DOPEEDABNEK__CKKIPBAIEMN(__this_00,StringLiteral_10075,(MethodInfo *)0x0)
                 , pHVar4 != (HOOAAGABMBL_o *)0x0)) {
                local_50._0_4_ =
                     (pHVar4->fields)._OJGPBEFJPKN_k__BackingField.fields.currentCryptoKey;
                local_50._4_4_ = (pHVar4->fields)._OJGPBEFJPKN_k__BackingField.fields.hiddenValue;
                uStack_48._0_4_ = (pHVar4->fields)._OJGPBEFJPKN_k__BackingField.fields.fakeValue;
                uStack_48._4_1_ =
                     (pHVar4->fields)._OJGPBEFJPKN_k__BackingField.fields.fakeValueActive;
                uStack_48._5_1_ = (pHVar4->fields)._OJGPBEFJPKN_k__BackingField.fields.inited;
                uStack_48._6_2_ =
                     *(undefined2 *)&(pHVar4->fields)._OJGPBEFJPKN_k__BackingField.fields.field_0xe;
                pLVar5 = (__this->fields).BtnStore;
                pIVar2 = (Il2CppObject *)
                         thunk_FUN_01bda448(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                            &local_50);
                iStack_68 = (pHVar4->fields)._AHMCDBKNKAJ_k__BackingField.fields.hiddenValue;
                local_70 = (pHVar4->fields)._AHMCDBKNKAJ_k__BackingField.fields.currentCryptoKey;
                uStack_58._0_1_ =
                     (pHVar4->fields)._AHMCDBKNKAJ_k__BackingField.fields.fakeValueActive;
                uStack_58._1_1_ = (pHVar4->fields)._AHMCDBKNKAJ_k__BackingField.fields.inited;
                uStack_58._2_6_ =
                     *(undefined6 *)&(pHVar4->fields)._AHMCDBKNKAJ_k__BackingField.fields.field_0x1a
                ;
                iStack_60 = (pHVar4->fields)._AHMCDBKNKAJ_k__BackingField.fields.fakeValue;
                arg1 = (Il2CppObject *)
                       thunk_FUN_01bda448(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
                                          &local_70);
                pSVar3 = System_String__Format(StringLiteral_17794,pIVar2,arg1,(MethodInfo *)0x0);
                if (pLVar5 != (LabelButton_o *)0x0) {
                  LabelButton__set_Alias(pLVar5,pSVar3,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

