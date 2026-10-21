// Nekki.SF2.GUI.Dialogs.Raids.Clans.CreateClanRaidDialog$$ILPJLGPGNMC @ RVA 0x3175C70

void Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanRaidDialog__ILPJLGPGNMC
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanRaidDialog_o *__this,
               Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidCell_o *IMMNELPBGIF,MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidCell_o **ppNVar1;
  bool_conflict bVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  bool bVar6;
  int32_t iVar7;
  AFFHKININGD_o *__this_00;
  Il2CppObject *pIVar8;
  long lVar9;
  VirtualInvokeData *pVVar10;
  System_String_o *pSVar11;
  System_Collections_Generic_List_object__o *__this_01;
  MGNPHCAAEIO_HLAKGGFFNAO_o *__this_02;
  HBNENINHPGF_o *pHVar12;
  EEGDOGKBLNG_o *__this_03;
  Nekki_SF2_GUI_LabelAlias_o *pNVar13;
  UnityEngine_GameObject_o *pUVar14;
  undefined8 uVar15;
  int64_t NFBEBOIDJLL;
  MethodInfo *method_00;
  long lVar16;
  Il2CppClass *pIVar17;
  ulong uVar18;
  int32_t *piVar19;
  Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidCell_o *pNVar20;
  OHDDKGHEEPA_o *__this_04;
  undefined8 uVar21;
  System_String_o *KGLJICLJHEL;
  LabelButton_o *pLVar22;
  System_String_o *str1;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o __this_05;
  UnityEngine_Color_o UVar27;
  undefined8 local_80;
  undefined8 uStack_78;
  int32_t local_68;
  int iStack_64;
  
  if ((DAT_04566954 & 1) == 0) {
    FUN_01bab630(&Method_System_Array_Empty<string>__);
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&Method_DJNBJHPDKDP_PHPELPFMOII<PJKHAJKEHEL>__);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&FGKGKDEJCOG_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<NIAFDKHDBMA>_get_Item__);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_250);
    FUN_01bab630(&StringLiteral_2436);
    FUN_01bab630(&StringLiteral_16810);
    FUN_01bab630(&StringLiteral_2432);
    FUN_01bab630(&StringLiteral_2422);
    FUN_01bab630(&StringLiteral_5076);
    FUN_01bab630(&StringLiteral_4404);
    FUN_01bab630(&StringLiteral_2086);
    FUN_01bab630(&StringLiteral_17833);
    FUN_01bab630(&StringLiteral_2438);
    FUN_01bab630(&StringLiteral_1);
    DAT_04566954 = 1;
  }
  ppNVar1 = &(__this->fields).IOOHHPDCNCM;
  local_68 = 0;
  iStack_64 = 0;
  local_80 = 0;
  uStack_78 = 0;
  (__this->fields).IOOHHPDCNCM = IMMNELPBGIF;
  thunk_FUN_01c20e04(ppNVar1,IMMNELPBGIF);
  pNVar20 = (__this->fields).IOOHHPDCNCM;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar6 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pNVar20,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar6) {
    return;
  }
  pNVar20 = *ppNVar1;
  if (pNVar20 != (Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidCell_o *)0x0) {
    __this_04 = (pNVar20->fields)._battle;
    __this_00 = Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidCell__GetFight
                          (pNVar20,(MethodInfo *)0x0);
    if (__this_04 == (OHDDKGHEEPA_o *)0x0) {
      return;
    }
    if (__this_00 == (AFFHKININGD_o *)0x0) {
      return;
    }
    pIVar8 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                       (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    lVar9 = Method_System_Array_Empty<string>__;
    lVar16 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
    if (lVar16 == 0) {
      FUN_01b8167c(Method_System_Array_Empty<string>__);
      lVar16 = *(long *)(lVar9 + 0x38);
    }
    lVar16 = *(long *)(lVar16 + 0x10);
    if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
      lVar16 = FUN_01b81620();
    }
    if (*(int *)(lVar16 + 0xe0) == 0) {
      thunk_FUN_01ba7564();
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_01b81620();
    }
    uVar15 = StringLiteral_17833;
    if (pIVar8 == (Il2CppObject *)0x0) goto LAB_032764e8;
    pIVar17 = pIVar8->klass;
    uVar21 = **(undefined8 **)(lVar9 + 0xb8);
    uVar3._0_1_ = (pIVar17->_2).rank;
    uVar3._1_1_ = (pIVar17->_2).minimumAlignment;
    uVar18 = (ulong)uVar3;
    if (uVar18 != 0) {
      piVar19 = &((pIVar17->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar19 + -2))->interfaceType ==
            (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
          pVVar10 = pIVar17->vtable + (*piVar19 + 0xc);
          goto LAB_03275ee4;
        }
        uVar18 = uVar18 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar18 != 0);
    }
    pVVar10 = (VirtualInvokeData *)FUN_01b81914(pIVar8,BLEFOFGCKEF_TypeInfo,0xc);
LAB_03275ee4:
    pSVar11 = (System_String_o *)(*pVVar10->methodPtr)(pIVar8,uVar15,uVar21,pVVar10->method);
    bVar6 = AFFHKININGD__PHEKFMPOHBK(__this_00,(MethodInfo *)0x0);
    if (bVar6) {
      __this_01 = (System_Collections_Generic_List_object__o *)
                  (*(__this_00->klass->vtable)._4_NIKCNPMKAFK.methodPtr)
                            (__this_00,(__this_00->klass->vtable)._4_NIKCNPMKAFK.method);
      if ((__this_01 == (System_Collections_Generic_List_object__o *)0x0) ||
         (pIVar8 = System_Collections_Generic_List<object>__get_Item
                             (__this_01,0,
                              Method_System_Collections_Generic_List<NIAFDKHDBMA>_get_Item__),
         pIVar8 == (Il2CppObject *)0x0)) goto LAB_032764e8;
      KGLJICLJHEL = pIVar8[5].monitor;
      if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_02 = MGNPHCAAEIO_TypeInfo->static_fields->BHAAICEFMBC;
      if ((__this_02 == (MGNPHCAAEIO_HLAKGGFFNAO_o *)0x0) ||
         (pHVar12 = MGNPHCAAEIO_HLAKGGFFNAO__BHJOLIJDBLO(__this_02,KGLJICLJHEL,(MethodInfo *)0x0),
         pHVar12 == (HBNENINHPGF_o *)0x0)) goto LAB_032764e8;
      str1 = (pHVar12->fields)._PGCEKJLODEJ_k__BackingField;
      pIVar8 = System_Collections_Generic_List<object>__get_Item
                         (__this_01,0,Method_System_Collections_Generic_List<NIAFDKHDBMA>_get_Item__
                         );
      if (pIVar8 == (Il2CppObject *)0x0) goto LAB_032764e8;
      iStack_64 = *(int *)&pIVar8[6].klass;
      if (iStack_64 != 0) {
        pIVar8 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                           (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
        lVar9 = FUN_01bab718(string___TypeInfo,2);
        pSVar11 = System_String__Concat(StringLiteral_2422,str1,StringLiteral_250,(MethodInfo *)0x0)
        ;
        if (lVar9 == 0) goto LAB_032764e8;
        if (*(int *)(lVar9 + 0x18) == 0) goto LAB_032764ec;
        *(undefined8 *)(lVar9 + 0x20) = pSVar11;
        thunk_FUN_01c20e04((undefined8 *)(lVar9 + 0x20),pSVar11);
        pSVar11 = System_Int32__ToString((int32_t)&iStack_64,(MethodInfo *)0x0);
        if (*(uint *)(lVar9 + 0x18) < 2) goto LAB_032764ec;
        *(System_String_o **)(lVar9 + 0x28) = pSVar11;
        thunk_FUN_01c20e04();
        uVar15 = StringLiteral_16810;
        if (pIVar8 == (Il2CppObject *)0x0) goto LAB_032764e8;
        pIVar17 = pIVar8->klass;
        uVar4._0_1_ = (pIVar17->_2).rank;
        uVar4._1_1_ = (pIVar17->_2).minimumAlignment;
        uVar18 = (ulong)uVar4;
        if (uVar18 != 0) {
          piVar19 = &((pIVar17->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar19 + -2))->interfaceType ==
                (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
              pVVar10 = pIVar17->vtable + (*piVar19 + 0xc);
              goto LAB_03276098;
            }
            uVar18 = uVar18 - 1;
            piVar19 = piVar19 + 4;
          } while (uVar18 != 0);
        }
        pVVar10 = (VirtualInvokeData *)FUN_01b81914(pIVar8,BLEFOFGCKEF_TypeInfo,0xc);
LAB_03276098:
        pSVar11 = (System_String_o *)(*pVVar10->methodPtr)(pIVar8,uVar15,lVar9,pVVar10->method);
        pLVar22 = (__this->fields).super.super.super._btnOK;
        if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo);
        }
        __this_03 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
        if (__this_03 == (EEGDOGKBLNG_o *)0x0) goto LAB_032764e8;
        iVar7 = EEGDOGKBLNG__APFFEAJBAEK(__this_03,KGLJICLJHEL,(MethodInfo *)0x0);
        if (iVar7 < iStack_64) {
          if ((FGKGKDEJCOG_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          UVar27 = FGKGKDEJCOG__IALPNFOEEBP((MethodInfo *)0x0);
          fVar26 = UVar27.fields.a;
          fVar25 = UVar27.fields.b;
          fVar24 = UVar27.fields.g;
          fVar23 = UVar27.fields.r;
        }
        else {
          fVar26 = 1.0;
          fVar23 = 0.0;
          fVar24 = 0.0;
          fVar25 = 0.0;
        }
        if (pLVar22 == (LabelButton_o *)0x0) goto LAB_032764e8;
        UVar27.fields.g = fVar24;
        UVar27.fields.r = fVar23;
        UVar27.fields.a = fVar26;
        UVar27.fields.b = fVar25;
        LabelButton__set_Color(pLVar22,UVar27,(MethodInfo *)0x0);
      }
    }
    if ((*ppNVar1 != (Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidCell_o *)0x0) &&
       (pLVar22 = (__this->fields).super.super.super._btnOK, pLVar22 != (LabelButton_o *)0x0)) {
      bVar2 = ((*ppNVar1)->fields).IBFFNCBFPGB;
      bVar6 = bVar2 == false;
      UnityEngine_UI_Selectable__set_interactable
                ((UnityEngine_UI_Selectable_o *)pLVar22,bVar6,(MethodInfo *)0x0);
      pLVar22 = (__this->fields).super.super.super._btnOK;
      if (pLVar22 != (LabelButton_o *)0x0) {
        LabelButton__set_Text(pLVar22,pSVar11,(MethodInfo *)0x0);
        pNVar13 = (__this->fields)._unknowLabel;
        if ((pNVar13 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
           (pUVar14 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pNVar13,(MethodInfo *)0x0),
           pUVar14 != (UnityEngine_GameObject_o *)0x0)) {
          UnityEngine_GameObject__SetActive(pUVar14,bVar2 != false,(MethodInfo *)0x0);
          pNVar13 = (__this->fields)._descriptionLabel;
          if (bVar2 == false) {
            if (pNVar13 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_032764e8;
            Nekki_SF2_GUI_LabelAlias__set_Alias(pNVar13,StringLiteral_4404,(MethodInfo *)0x0);
          }
          else {
            pIVar8 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                               (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
            lVar9 = FUN_01bab718(string___TypeInfo,1);
            local_68 = OHDDKGHEEPA__GOKIINPLKFL(__this_04,(MethodInfo *)0x0);
            pSVar11 = System_Int32__ToString((int32_t)&local_68,(MethodInfo *)0x0);
            if (lVar9 == 0) goto LAB_032764e8;
            if (*(int *)(lVar9 + 0x18) == 0) {
LAB_032764ec:
                    /* WARNING: Subroutine does not return */
              FUN_01bab8d0();
            }
            *(System_String_o **)(lVar9 + 0x20) = pSVar11;
            thunk_FUN_01c20e04();
            uVar15 = StringLiteral_5076;
            if (pIVar8 == (Il2CppObject *)0x0) goto LAB_032764e8;
            pIVar17 = pIVar8->klass;
            uVar5._0_1_ = (pIVar17->_2).rank;
            uVar5._1_1_ = (pIVar17->_2).minimumAlignment;
            uVar18 = (ulong)uVar5;
            if (uVar18 != 0) {
              piVar19 = &((pIVar17->_1).interfaceOffsets)->offset;
              do {
                if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar19 + -2))->interfaceType ==
                    (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
                    /* try { // try from 03276270 to 033763eb has its CatchHandler @ 03276270
                       catch() { ... } // from try @ 03276270 with catch @ 03276270
                       catch() { ... } // from try @ 03276594 with catch @ 03276270
                       catch() { ... } // from try @ 03276640 with catch @ 03276270
                       catch() { ... } // from try @ 03276648 with catch @ 03276270
                       catch() { ... } // from try @ 03276704 with catch @ 03276270 */
                  pVVar10 = pIVar17->vtable + (*piVar19 + 0xc);
                  goto LAB_03276280;
                }
                uVar18 = uVar18 - 1;
                piVar19 = piVar19 + 4;
              } while (uVar18 != 0);
            }
            pVVar10 = (VirtualInvokeData *)FUN_01b81914(pIVar8,BLEFOFGCKEF_TypeInfo,0xc);
LAB_03276280:
            uVar15 = (*pVVar10->methodPtr)(pIVar8,uVar15,lVar9,pVVar10->method);
            if (pNVar13 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_032764e8;
            (*(pNVar13->klass->vtable)._75_set_text.methodPtr)
                      (pNVar13,uVar15,(pNVar13->klass->vtable)._75_set_text.method);
          }
          iVar7 = AFFHKININGD__IKDFBAOFNPB(__this_00,(MethodInfo *)0x0);
          if ((bVar2 == false) && (0 < iVar7)) {
            pIVar8 = DJNBJHPDKDP__PHPELPFMOII<object>
                               ((System_Collections_Generic_List_T__o *)
                                (__this_00->fields).MECHOBPGHFJ,
                                Method_DJNBJHPDKDP_PHPELPFMOII<PJKHAJKEHEL>__);
            pNVar13 = (__this->fields)._shieldLabel;
            if ((pNVar13 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) ||
               (pUVar14 = UnityEngine_Component__get_gameObject
                                    ((UnityEngine_Component_o *)pNVar13,(MethodInfo *)0x0),
               pUVar14 == (UnityEngine_GameObject_o *)0x0)) goto LAB_032764e8;
            method_00 = (MethodInfo *)0x0;
            UnityEngine_GameObject__SetActive(pUVar14,true,(MethodInfo *)0x0);
            if (pIVar8 == (Il2CppObject *)0x0) goto LAB_032764e8;
            uStack_78 = *(undefined8 *)((long)&pIVar8[0x22].klass + 4);
            local_80 = *(undefined8 *)((long)&pIVar8[0x21].monitor + 4);
            pNVar13 = (__this->fields)._shieldLabel;
            __this_05.fields.fakeValue = 0;
            __this_05.fields.fakeValueActive = false;
            __this_05.fields.inited = false;
            __this_05.fields._14_2_ = 0;
            __this_05.fields._0_8_ = &local_80;
            pSVar11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(__this_05,method_00);
            pSVar11 = System_String__Concat(StringLiteral_2438,pSVar11,(MethodInfo *)0x0);
            if (pNVar13 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_032764e8;
            (*(pNVar13->klass->vtable)._75_set_text.methodPtr)
                      (pNVar13,pSVar11,(pNVar13->klass->vtable)._75_set_text.method);
          }
          else {
            pNVar13 = (__this->fields)._shieldLabel;
            if ((pNVar13 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) ||
               (pUVar14 = UnityEngine_Component__get_gameObject
                                    ((UnityEngine_Component_o *)pNVar13,(MethodInfo *)0x0),
               pUVar14 == (UnityEngine_GameObject_o *)0x0)) goto LAB_032764e8;
            UnityEngine_GameObject__SetActive(pUVar14,false,(MethodInfo *)0x0);
          }
          pNVar13 = (__this->fields)._timeLabel;
          if ((pNVar13 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
             (pUVar14 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)pNVar13,(MethodInfo *)0x0),
             pUVar14 != (UnityEngine_GameObject_o *)0x0)) {
            UnityEngine_GameObject__SetActive(pUVar14,bVar6,(MethodInfo *)0x0);
            if (bVar2 == false) {
              NFBEBOIDJLL = OHDDKGHEEPA__BKDPJMOCMOI(__this_04,(MethodInfo *)0x0);
                    /* try { // try from 032763ec to 03376413 has its CatchHandler @ 03276668 */
              pSVar11 = Nekki_SF2_GUI_TimerLabel__GetTimeString
                                  (NFBEBOIDJLL,true,true,true,false,false,true,StringLiteral_2086,
                                   StringLiteral_1,true,true,true,true,true,StringLiteral_1,
                                   StringLiteral_1,StringLiteral_1,3,(MethodInfo *)0x0);
              pNVar13 = (__this->fields)._timeLabel;
              pSVar11 = System_String__Concat(StringLiteral_2432,pSVar11,(MethodInfo *)0x0);
              if (pNVar13 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_032764e8;
                    /* try { // try from 03276448 to 03376473 has its CatchHandler @ 03276664 */
              (*(pNVar13->klass->vtable)._75_set_text.methodPtr)
                        (pNVar13,pSVar11,(pNVar13->klass->vtable)._75_set_text.method);
              pNVar13 = (__this->fields)._countMemberLabel;
              local_68 = OHDDKGHEEPA__NLMMJCACKPC(__this_04,(MethodInfo *)0x0);
              pSVar11 = System_Int32__ToString((int32_t)&local_68,(MethodInfo *)0x0);
              pSVar11 = System_String__Concat(StringLiteral_2436,pSVar11,(MethodInfo *)0x0);
              if (pNVar13 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_032764e8;
              (*(pNVar13->klass->vtable)._75_set_text.methodPtr)
                        (pNVar13,pSVar11,(pNVar13->klass->vtable)._75_set_text.method);
            }
            pNVar13 = (__this->fields)._countMemberLabel;
                    /* try { // try from 032764b0 to 03376523 has its CatchHandler @ 03276670 */
            if ((pNVar13 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
               (pUVar14 = UnityEngine_Component__get_gameObject
                                    ((UnityEngine_Component_o *)pNVar13,(MethodInfo *)0x0),
               pUVar14 != (UnityEngine_GameObject_o *)0x0)) {
              UnityEngine_GameObject__SetActive(pUVar14,bVar6,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
LAB_032764e8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

