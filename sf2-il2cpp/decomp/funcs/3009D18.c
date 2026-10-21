// Nekki.SF2.GUI.Shop.InfoPanelContent$$DJKPEGLONEE @ RVA 0x3009D18

void Nekki_SF2_GUI_Shop_InfoPanelContent__DJKPEGLONEE
               (Nekki_SF2_GUI_Shop_InfoPanelContent_o *__this,Il2CppObject *IMMNELPBGIF,
               MethodInfo *method)

{
  int iVar1;
  byte bVar2;
  ushort uVar3;
  bool bVar4;
  int32_t iVar5;
  Nekki_SF2_Core_Quests_QuestsManager_o *pNVar6;
  System_Object_array *args;
  undefined4 *puVar7;
  System_String_o *pSVar8;
  long lVar9;
  IGFGDDANEPE_o *pIVar10;
  KKEKKPIDGBK_o *pKVar11;
  VirtualInvokeData *pVVar12;
  HOOAAGABMBL_o *pHVar13;
  int64_t iVar14;
  System_Collections_Generic_List_object__o *__this_00;
  Il2CppObject *pIVar15;
  EEGDOGKBLNG_o *__this_01;
  System_Action_object__o *pSVar16;
  undefined8 uVar17;
  MethodInfo *method_00;
  MethodInfo *method_01;
  int64_t OHLGEMOFODG;
  MethodInfo *in_x5;
  KKEKKPIDGBK_c *pKVar18;
  ulong uVar19;
  int32_t *piVar20;
  UnityEngine_Object_o *x;
  Nekki_SF2_GUI_Common_PaymentUI_o *__this_02;
  undefined1 auVar21 [16];
  MethodInfo *in_stack_ffffffffffffff40;
  System_Enum_c *local_b0;
  void *pvStack_a8;
  int64_t iStack_a0;
  int64_t iStack_98;
  bool_conflict local_90;
  bool_conflict bStack_8f;
  undefined6 uStack_8e;
  System_Nullable_ObscuredLong__o local_80;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_50;
  
  if ((DAT_04565b5c & 1) == 0) {
    FUN_01bab630(&System_Action<object>_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&FAIJGJCCKJC_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Shop_InfoPanelContent_ABCDOFCJLOG__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Shop_InfoPanelContent_FKFCOAPPDJK__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Shop_InfoPanelContent_HKFCEOLDACN__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Shop_InfoPanelContent_OCEFNAOJJPH__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Shop_InfoPanelContent_OLICMLPMDDF__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Shop_InfoPanelContent_PCEIMHFPFDH__);
    FUN_01bab630(&KGNNFOHIBBD_TypeInfo);
    FUN_01bab630(&KKEKKPIDGBK_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_int>>_get_Item__);
    FUN_01bab630(&MKFAKELPPAC_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&Method_System_Nullable<ObscuredLong>__ctor__);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_UIModule_GetModule<PaymentUI>__);
    FUN_01bab630(&Nekki_SF2_GUI_UIModule_TypeInfo);
    FUN_01bab630(&StringLiteral_14559);
    FUN_01bab630(&StringLiteral_12834);
    FUN_01bab630(&StringLiteral_14785);
    DAT_04565b5c = 1;
  }
  if (IMMNELPBGIF == (Il2CppObject *)0x0) goto LAB_0310a5b4;
  if ((IMMNELPBGIF->klass->_1).element_class != (KGNNFOHIBBD_TypeInfo->_1).element_class) {
LAB_0310a5bc:
                    /* WARNING: Subroutine does not return */
    FUN_01babc64(IMMNELPBGIF);
  }
  auVar21 = thunk_FUN_01bda96c(IMMNELPBGIF);
  iVar1 = *auVar21._0_8_;
  if (iVar1 == 4) {
    Nekki_SF2_GUI_Shop_InfoPanelContent__DLDIPMHEPGG(__this,auVar21._8_8_);
    return;
  }
  pNVar6 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
  if (pNVar6 == (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) goto LAB_0310a5b4;
  bVar4 = Nekki_SF2_GUI_Shop_InfoPanelContent__OJCGBHPFEOJ
                    (__this,(pNVar6->fields).QuestParameters,method);
  if (bVar4) {
    return;
  }
  switch(iVar1) {
  case 1:
    pHVar13 = (__this->fields).BBODGCMLKFP;
    if (pHVar13 != (HOOAAGABMBL_o *)0x0) {
      iVar14 = HOOAAGABMBL__ICMFLAFFOFM(pHVar13,(MethodInfo *)0x0);
      pSVar16 = (System_Action_object__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
      System_Action<object>___ctor();
      pHVar13 = (__this->fields).BBODGCMLKFP;
      if (pHVar13 != (HOOAAGABMBL_o *)0x0) {
        OHLGEMOFODG = (pHVar13->fields)._LAOFJOMPFDL_k__BackingField;
        iVar5 = 0;
LAB_0310a198:
        Nekki_SF2_GUI_Shop_InfoPanelContent__NEKPFCFDNEJ
                  (__this,iVar5,iVar14,pSVar16,OHLGEMOFODG,in_x5);
        return;
      }
    }
    break;
  case 2:
    pHVar13 = (__this->fields).BBODGCMLKFP;
    if (pHVar13 == (HOOAAGABMBL_o *)0x0) break;
    iVar14 = HOOAAGABMBL__MNKCHHFDEGH(pHVar13,(MethodInfo *)0x0);
    pSVar16 = (System_Action_object__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
    goto LAB_0310a338;
  case 3:
    lVar9 = *(long *)(Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__ + 0x20);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_01b81620();
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x10);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_01b81620();
    }
    x = (UnityEngine_Object_o *)**(undefined8 **)(lVar9 + 0xb8);
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    bVar4 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar4) {
      lVar9 = *(long *)(Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__ + 0x20);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_01b81620();
      }
      lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x10);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_01b81620();
      }
      if (**(long **)(lVar9 + 0xb8) == 0) break;
      __this_02 = *(Nekki_SF2_GUI_Common_PaymentUI_o **)(**(long **)(lVar9 + 0xb8) + 0x1a8);
    }
    else {
      if ((Nekki_SF2_GUI_UIModule_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_02 = (Nekki_SF2_GUI_Common_PaymentUI_o *)
                  Nekki_SF2_GUI_UIModule__GetModule<object>
                            (Method_Nekki_SF2_GUI_UIModule_GetModule<PaymentUI>__);
    }
    pHVar13 = (__this->fields).BBODGCMLKFP;
    local_80.fields.value.fields.fakeValueActive = false;
    local_80.fields.value.fields.inited = false;
    local_80.fields.value.fields._26_6_ = 0;
    local_80.fields.value.fields.currentCryptoKey = 0;
    local_80.fields._0_8_ = (System_Enum_c *)0x0;
    local_80.fields.value.fields.fakeValue = 0;
    local_80.fields.value.fields.hiddenValue = 0;
    local_50.fields.hiddenValue = (__this->fields).IKDBOANBHLG.fields.hiddenValue;
    local_50.fields.currentCryptoKey = (__this->fields).IKDBOANBHLG.fields.currentCryptoKey;
    local_50.fields.fakeValueActive = (__this->fields).IKDBOANBHLG.fields.fakeValueActive;
    local_50.fields.inited = (__this->fields).IKDBOANBHLG.fields.inited;
    local_50.fields._26_6_ = *(undefined6 *)&(__this->fields).IKDBOANBHLG.fields.field_0x1a;
    local_50.fields.fakeValue = (__this->fields).IKDBOANBHLG.fields.fakeValue;
    System_Nullable<ObscuredLong>___ctor
              (&local_80,&local_50,Method_System_Nullable<ObscuredLong>__ctor__);
    if (__this_02 != (Nekki_SF2_GUI_Common_PaymentUI_o *)0x0) {
      pvStack_a8 = (void *)local_80.fields.value.fields.currentCryptoKey;
      local_b0 = (System_Enum_c *)local_80.fields._0_8_;
      iStack_98 = local_80.fields.value.fields.fakeValue;
      iStack_a0 = local_80.fields.value.fields.hiddenValue;
      local_90 = local_80.fields.value.fields.fakeValueActive;
      bStack_8f = local_80.fields.value.fields.inited;
      uStack_8e = local_80.fields.value.fields._26_6_;
      Nekki_SF2_GUI_Common_PaymentUI__MakePurchase
                (__this_02,pHVar13,(System_Nullable_ObscuredLong__o *)&local_b0,(MethodInfo *)0x0);
      return;
    }
    break;
  default:
    args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
    if ((IMMNELPBGIF->klass->_1).element_class != (KGNNFOHIBBD_TypeInfo->_1).element_class)
    goto LAB_0310a5bc;
    puVar7 = (undefined4 *)thunk_FUN_01bda96c(IMMNELPBGIF);
    local_80.fields._0_8_ = KGNNFOHIBBD_TypeInfo;
    local_80.fields.value.fields.currentCryptoKey = -1;
    local_80.fields.value.fields.hiddenValue =
         CONCAT44(local_80.fields.value.fields.hiddenValue._4_4_,*puVar7);
    pSVar8 = System_Enum__ToString((System_Enum_o *)&local_80,(MethodInfo *)0x0);
    if (args != (System_Object_array *)0x0) {
      if ((pSVar8 != (System_String_o *)0x0) &&
         (lVar9 = thunk_FUN_01bda71c(pSVar8,(((args->obj).klass)->_1).element_class), lVar9 == 0)) {
        uVar17 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
        FUN_01bab798(uVar17,0);
      }
      if ((int)args->max_length != 0) {
        args->m_Items[0] = (Il2CppObject *)pSVar8;
        thunk_FUN_01c20e04(args->m_Items,pSVar8);
        if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        UnityEngine_Debug__LogErrorFormat(StringLiteral_14559,args,(MethodInfo *)0x0);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    break;
  case 8:
    pHVar13 = (__this->fields).BBODGCMLKFP;
    if (pHVar13 != (HOOAAGABMBL_o *)0x0) {
      pSVar8 = (pHVar13->fields)._COIPKAKHDFP_k__BackingField;
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pIVar10 = NLPJLHOEAOE__JNFIBDBHNOA(pSVar8,(MethodInfo *)0x0);
      if ((pIVar10 != (IGFGDDANEPE_o *)0x0) &&
         (pHVar13 = (pIVar10->fields).LFPOIAJDMBK, pHVar13 != (HOOAAGABMBL_o *)0x0)) {
        iVar14 = HOOAAGABMBL__ICMFLAFFOFM(pHVar13,(MethodInfo *)0x0);
        pSVar16 = (System_Action_object__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
        System_Action<object>___ctor();
        OHLGEMOFODG = (pHVar13->fields)._LAOFJOMPFDL_k__BackingField;
        iVar5 = 1;
        goto LAB_0310a198;
      }
    }
    break;
  case 9:
    pHVar13 = (__this->fields).BBODGCMLKFP;
    if (pHVar13 == (HOOAAGABMBL_o *)0x0) break;
    pSVar8 = (pHVar13->fields)._COIPKAKHDFP_k__BackingField;
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pIVar10 = NLPJLHOEAOE__JNFIBDBHNOA(pSVar8,(MethodInfo *)0x0);
    if ((pIVar10 == (IGFGDDANEPE_o *)0x0) ||
       (pHVar13 = (pIVar10->fields).LFPOIAJDMBK, pHVar13 == (HOOAAGABMBL_o *)0x0)) break;
    iVar14 = HOOAAGABMBL__MNKCHHFDEGH(pHVar13,(MethodInfo *)0x0);
    pSVar16 = (System_Action_object__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
    System_Action<object>___ctor();
    iVar5 = 1;
    goto LAB_0310a354;
  case 0xb:
    Nekki_SF2_GUI_Shop_InfoPanelContent__GOBCLPJNCJP(__this,method_00);
    return;
  case 0xc:
    (__this->fields).KJBDDCNKNNE = (__this->fields).BBODGCMLKFP;
    thunk_FUN_01c20e04();
    Nekki_SF2_GUI_Shop_InfoPanelContent__GJGOBMPLAFA(__this,method_01);
    return;
  case 0xe:
    pHVar13 = (__this->fields).BBODGCMLKFP;
    if (pHVar13 != (HOOAAGABMBL_o *)0x0) {
      pSVar8 = (pHVar13->fields)._DKODBGOHKGH_k__BackingField;
      bVar4 = System_String__op_Equality(pSVar8,StringLiteral_12834,(MethodInfo *)0x0);
      if (bVar4) {
        if ((MKFAKELPPAC_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pKVar11 = MKFAKELPPAC__AIHNLLGNBLC((MethodInfo *)0x0);
        if (pKVar11 != (KKEKKPIDGBK_o *)0x0) {
          pKVar18 = pKVar11->klass;
          uVar3._0_1_ = (pKVar18->_2).rank;
          uVar3._1_1_ = (pKVar18->_2).minimumAlignment;
          uVar19 = (ulong)uVar3;
          if (uVar19 != 0) {
            piVar20 = &((pKVar18->_1).interfaceOffsets)->offset;
            do {
              if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar20 + -2))->interfaceType ==
                  (Il2CppClass *)KKEKKPIDGBK_TypeInfo) {
                pVVar12 = pKVar18->vtable + (*piVar20 + 4);
                goto LAB_0310a58c;
              }
              uVar19 = uVar19 - 1;
              piVar20 = piVar20 + 4;
            } while (uVar19 != 0);
          }
          pVVar12 = (VirtualInvokeData *)FUN_01b81914(pKVar11,KKEKKPIDGBK_TypeInfo,4);
LAB_0310a58c:
                    /* WARNING: Could not recover jumptable at 0x0310a5b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pVVar12->methodPtr)(pKVar11,1,1,1,pVVar12->method);
          return;
        }
      }
      else {
        bVar4 = System_String__op_Equality(pSVar8,StringLiteral_14785,(MethodInfo *)0x0);
        if (!bVar4) {
          return;
        }
        lVar9 = *(long *)(Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__ + 0x20);
        if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
          lVar9 = FUN_01b81620();
        }
        lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x10);
        if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
          lVar9 = FUN_01b81620();
        }
        if ((Nekki_SF2_GUI_Shop_ShopScene_o *)**(undefined8 **)(lVar9 + 0xb8) !=
            (Nekki_SF2_GUI_Shop_ShopScene_o *)0x0) {
          Nekki_SF2_GUI_Shop_ShopScene__RemoveAdVideoNotificator
                    ((Nekki_SF2_GUI_Shop_ShopScene_o *)**(undefined8 **)(lVar9 + 0xb8),
                     (MethodInfo *)0x0);
          pNVar6 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
          if (pNVar6 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
            Nekki_SF2_Core_Quests_QuestsManager__ScheduleAndRunQuests(pNVar6,0x2b,(MethodInfo *)0x0)
            ;
            return;
          }
        }
      }
    }
    break;
  case 0x13:
    pHVar13 = (__this->fields).BBODGCMLKFP;
    if (pHVar13 == (HOOAAGABMBL_o *)0x0) break;
    iVar14 = HOOAAGABMBL__MNKCHHFDEGH(pHVar13,(MethodInfo *)0x0);
    pSVar16 = (System_Action_object__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
LAB_0310a338:
    System_Action<object>___ctor();
    iVar5 = 0;
LAB_0310a354:
    Nekki_SF2_GUI_Shop_InfoPanelContent__GGPMAGBKBFA(__this,iVar5,iVar14,pSVar16,0,in_x5);
    return;
  case 0x14:
    IMMNELPBGIF = (Il2CppObject *)(__this->fields).BBODGCMLKFP;
    if ((HOOAAGABMBL_o *)IMMNELPBGIF != (HOOAAGABMBL_o *)0x0) {
      bVar2 = (FAIJGJCCKJC_TypeInfo->_2).naturalAligment;
      if (((((HOOAAGABMBL_o *)IMMNELPBGIF)->klass->_2).naturalAligment < bVar2) ||
         ((((HOOAAGABMBL_o *)IMMNELPBGIF)->klass->_2).typeHierarchy[(ulong)bVar2 - 1] !=
          (Il2CppClass *)FAIJGJCCKJC_TypeInfo)) goto LAB_0310a5bc;
      if ((((HOOAAGABMBL_o *)((long)IMMNELPBGIF + 0x330))->klass != (HOOAAGABMBL_c *)0x0) &&
         ((__this_00 = (System_Collections_Generic_List_object__o *)
                       (((HOOAAGABMBL_o *)((long)IMMNELPBGIF + 0x330))->klass->_1).
                       implementedInterfaces,
          __this_00 != (System_Collections_Generic_List_object__o *)0x0 &&
          (pIVar15 = System_Collections_Generic_List<object>__get_Item
                               (__this_00,0,
                                Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_int>>_get_Item__
                               ), pIVar15 != (Il2CppObject *)0x0)))) {
        iVar1 = *(int *)&pIVar15[1].monitor;
        if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        __this_01 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
        if (__this_01 != (EEGDOGKBLNG_o *)0x0) {
          iVar5 = EEGDOGKBLNG__APFFEAJBAEK
                            (__this_01,(System_String_o *)pIVar15[1].klass,(MethodInfo *)0x0);
          pSVar16 = (System_Action_object__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
          System_Action<object>___ctor();
          Nekki_SF2_GUI_Shop_InfoPanelContent__KGKJDFLBLNM
                    (__this,0,3,(long)iVar1,(long)iVar5,pSVar16,6,0,in_stack_ffffffffffffff40);
          return;
        }
      }
    }
  }
LAB_0310a5b4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

