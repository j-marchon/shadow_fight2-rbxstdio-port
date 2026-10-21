// Nekki.SF2.GUI.Fight.EndPvpFightContent$$GPCOJMMLMLG @ RVA 0x31303C0

void Nekki_SF2_GUI_Fight_EndPvpFightContent__GPCOJMMLMLG
               (Nekki_SF2_GUI_Fight_EndPvpFightContent_o *__this,MethodInfo *method)

{
  ushort uVar1;
  uint uVar2;
  long lVar3;
  bool bVar4;
  UnityEngine_GameObject_o *pUVar5;
  IGPDCHBJAPD_o *pIVar6;
  Il2CppObject *pIVar7;
  MethodInfo *pMVar8;
  Nekki_SF2_GUI_Fight_EndPvpFightContent_o *__this_00;
  System_String_o *pSVar9;
  System_String_o *pSVar10;
  VirtualInvokeData *pVVar11;
  UnityEngine_Events_UnityAction_o *pUVar12;
  UnityEngine_Transform_o *__this_01;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *in_x5;
  System_Object_array *pSVar13;
  Il2CppClass *pIVar14;
  LabelButton_o *pLVar15;
  ulong uVar16;
  int32_t *piVar17;
  UnityEngine_UI_Button_o *pUVar18;
  UnityEngine_Object_o *pUVar19;
  UnityEngine_Events_UnityEvent_o *pUVar20;
  System_Collections_Generic_List_object__o *pSVar21;
  long lVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  float fVar25;
  Il2CppType **local_150;
  _union_13 _Stack_148;
  float local_140;
  Il2CppType **local_130;
  _union_13 _Stack_128;
  float local_120;
  Il2CppType **local_110;
  _union_13 _Stack_108;
  float local_100;
  Il2CppType **local_f0;
  _union_13 _Stack_e8;
  float local_e0;
  undefined1 local_d0 [24];
  System_Enum_o local_b8;
  uint local_a8;
  Il2CppType **local_a0;
  _union_13 _Stack_98;
  _union_14 local_90;
  uint32_t local_88;
  int32_t local_84;
  Il2CppType **local_80;
  _union_13 _Stack_78;
  float local_70;
  System_TimeSpan_Fields local_58;
  
  if ((DAT_045666c9 & 1) == 0) {
    FUN_01bab630(&Method_System_Array_Empty<string>__);
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&EFOCOMJHEAJ_TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<MCNGELCOMNG>_Add__);
    FUN_01bab630(&Method_System_Nullable<Color>_ToString__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&System_TimeSpan_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent_Invoke__);
    FUN_01bab630(&StringLiteral_167);
    FUN_01bab630(&StringLiteral_22268);
    FUN_01bab630(&StringLiteral_1);
    DAT_045666c9 = 1;
    method = extraout_x1;
  }
  local_58._ticks = 0;
  local_80 = (Il2CppType **)0x0;
  _Stack_78.rgctx_data = (Il2CppRGCTXData *)0x0;
  local_70 = 0.0;
  pUVar18 = (__this->fields).HMJLEBNKJMH;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar18,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    pUVar18 = (__this->fields).HMJLEBNKJMH;
    if ((pUVar18 == (UnityEngine_UI_Button_o *)0x0) ||
       (pUVar5 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pUVar18,(MethodInfo *)0x0),
       pUVar5 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03230b7c;
    UnityEngine_GameObject__SetActive(pUVar5,true,(MethodInfo *)0x0);
  }
  pUVar19 = (UnityEngine_Object_o *)(__this->fields)._textLinePrefab;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar4 = UnityEngine_Object__op_Inequality(pUVar19,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    pUVar19 = (UnityEngine_Object_o *)(__this->fields)._valueLinePrefab;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar4 = UnityEngine_Object__op_Inequality(pUVar19,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (bVar4) {
      pIVar6 = (__this->fields).CIKGADOJJMG;
      if (pIVar6 == (IGPDCHBJAPD_o *)0x0) goto LAB_03230b7c;
      bVar4 = IGPDCHBJAPD__DONKDCJLBPN(pIVar6,(MethodInfo *)0x0);
      pIVar6 = (__this->fields).CIKGADOJJMG;
      if (pIVar6 == (IGPDCHBJAPD_o *)0x0) goto LAB_03230b7c;
      fVar25 = (pIVar6->fields).OIBIEIEEJFE;
      if ((System_TimeSpan_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(System_TimeSpan_TypeInfo);
      }
      local_58._ticks = (int64_t)System_TimeSpan__FromSeconds((double)fVar25,(MethodInfo *)0x0);
      local_84 = System_TimeSpan__get_Minutes((System_TimeSpan_o)&local_58,(MethodInfo *)0x0);
      pIVar7 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_84);
      local_88 = System_TimeSpan__get_Seconds((System_TimeSpan_o)&local_58,(MethodInfo *)0x0);
      pMVar8 = (MethodInfo *)thunk_FUN_01bda448(int_TypeInfo,&local_88);
      __this_00 = (Nekki_SF2_GUI_Fight_EndPvpFightContent_o *)
                  System_String__Format
                            (StringLiteral_22268,pIVar7,(Il2CppObject *)pMVar8,(MethodInfo *)0x0);
      Nekki_SF2_GUI_Fight_EndPvpFightContent__NPLHLODNNCJ
                ((System_Nullable_Color__o *)&local_a0,__this_00,~(uint)bVar4 & 1,pMVar8);
      local_b8.klass = (System_Enum_c *)EFOCOMJHEAJ_TypeInfo;
      _Stack_78 = _Stack_98;
      local_80 = local_a0;
      local_70 = (float)local_90._0_4_;
      local_b8.monitor = (Il2CppClass *)0xffffffffffffffff;
      local_a8 = ~(uint)bVar4 & 1;
      pSVar9 = System_Enum__ToString(&local_b8,(MethodInfo *)0x0);
      pSVar10 = System_Nullable<Color>__ToString
                          ((System_Nullable_Color__o *)&local_80,
                           Method_System_Nullable<Color>_ToString__);
      pSVar9 = System_String__Concat(pSVar9,StringLiteral_167,pSVar10,(MethodInfo *)0x0);
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
      }
      UnityEngine_Debug__Log((Il2CppObject *)pSVar9,(MethodInfo *)0x0);
      pSVar21 = (System_Collections_Generic_List_object__o *)(__this->fields).NDEECPOPNFM;
      pMVar8 = (MethodInfo *)local_d0;
      local_d0._8_8_ = _Stack_78;
      local_d0._0_8_ = local_80;
      local_d0._16_4_ = local_70;
      pIVar7 = (Il2CppObject *)
               Nekki_SF2_GUI_Fight_EndPvpFightContent__CreateLine
                         (__this,(__this->fields).fightTimeAlias,(System_String_o *)__this_00,
                          StringLiteral_1,(System_Nullable_Color__o *)pMVar8,in_x5);
      lVar22 = Method_System_Collections_Generic_List<MCNGELCOMNG>_Add__;
      if (pSVar21 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_03230b7c;
      pSVar13 = (pSVar21->fields)._items;
      (pSVar21->fields)._version = (pSVar21->fields)._version + 1;
      if (pSVar13 == (System_Object_array *)0x0) goto LAB_03230b7c;
      uVar2 = (pSVar21->fields)._size;
      if (uVar2 < (uint)pSVar13->max_length) {
        (pSVar21->fields)._size = uVar2 + 1;
        pSVar13->m_Items[(int)uVar2] = pIVar7;
        thunk_FUN_01c20e04();
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  (pSVar21,pIVar7,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x70));
      }
      pIVar6 = (__this->fields).CIKGADOJJMG;
      if (pIVar6 == (IGPDCHBJAPD_o *)0x0) goto LAB_03230b7c;
      bVar4 = IGPDCHBJAPD__DONKDCJLBPN(pIVar6,(MethodInfo *)0x0);
      pIVar6 = (__this->fields).CIKGADOJJMG;
      if (pIVar6 == (IGPDCHBJAPD_o *)0x0) goto LAB_03230b7c;
      lVar22 = 0x38;
      if (!bVar4) {
        lVar22 = 0x40;
      }
      lVar22 = *(long *)((long)&pIVar6->klass + lVar22);
      if (lVar22 == 0) goto LAB_03230b7c;
      pSVar21 = (System_Collections_Generic_List_object__o *)(__this->fields).NDEECPOPNFM;
      _Stack_e8 = _Stack_78;
      local_f0 = local_80;
      local_e0 = local_70;
      pIVar7 = (Il2CppObject *)
               Nekki_SF2_GUI_Fight_EndPvpFightContent__CreateLine
                         (__this,(__this->fields).headHitsAlias,(long)*(int *)(lVar22 + 0x30),
                          (System_Nullable_Color__o *)&local_f0,pMVar8);
      lVar3 = Method_System_Collections_Generic_List<MCNGELCOMNG>_Add__;
      if (pSVar21 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_03230b7c;
      pSVar13 = (pSVar21->fields)._items;
      (pSVar21->fields)._version = (pSVar21->fields)._version + 1;
      if (pSVar13 == (System_Object_array *)0x0) goto LAB_03230b7c;
      uVar2 = (pSVar21->fields)._size;
      if (uVar2 < (uint)pSVar13->max_length) {
        (pSVar21->fields)._size = uVar2 + 1;
        pSVar13->m_Items[(int)uVar2] = pIVar7;
        thunk_FUN_01c20e04();
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  (pSVar21,pIVar7,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
      }
      pSVar21 = (System_Collections_Generic_List_object__o *)(__this->fields).NDEECPOPNFM;
      _Stack_108 = _Stack_78;
      local_110 = local_80;
      local_100 = local_70;
      pIVar7 = (Il2CppObject *)
               Nekki_SF2_GUI_Fight_EndPvpFightContent__CreateLine
                         (__this,(__this->fields).criticalHitsAlias,(long)*(int *)(lVar22 + 0x28),
                          (System_Nullable_Color__o *)&local_110,pMVar8);
      lVar3 = Method_System_Collections_Generic_List<MCNGELCOMNG>_Add__;
      if (pSVar21 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_03230b7c;
      pSVar13 = (pSVar21->fields)._items;
      (pSVar21->fields)._version = (pSVar21->fields)._version + 1;
      if (pSVar13 == (System_Object_array *)0x0) goto LAB_03230b7c;
      uVar2 = (pSVar21->fields)._size;
      if (uVar2 < (uint)pSVar13->max_length) {
        (pSVar21->fields)._size = uVar2 + 1;
        pSVar13->m_Items[(int)uVar2] = pIVar7;
        thunk_FUN_01c20e04();
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  (pSVar21,pIVar7,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
      }
      pSVar21 = (System_Collections_Generic_List_object__o *)(__this->fields).NDEECPOPNFM;
      _Stack_128 = _Stack_78;
      local_130 = local_80;
      local_120 = local_70;
      pIVar7 = (Il2CppObject *)
               Nekki_SF2_GUI_Fight_EndPvpFightContent__CreateLine
                         (__this,(__this->fields).maxComboAlias,(long)*(int *)(lVar22 + 0x34),
                          (System_Nullable_Color__o *)&local_130,pMVar8);
      lVar3 = Method_System_Collections_Generic_List<MCNGELCOMNG>_Add__;
      if (pSVar21 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_03230b7c;
      pSVar13 = (pSVar21->fields)._items;
      (pSVar21->fields)._version = (pSVar21->fields)._version + 1;
      if (pSVar13 == (System_Object_array *)0x0) goto LAB_03230b7c;
      uVar2 = (pSVar21->fields)._size;
      if (uVar2 < (uint)pSVar13->max_length) {
        (pSVar21->fields)._size = uVar2 + 1;
        pSVar13->m_Items[(int)uVar2] = pIVar7;
        thunk_FUN_01c20e04();
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  (pSVar21,pIVar7,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
      }
      pSVar21 = (System_Collections_Generic_List_object__o *)(__this->fields).NDEECPOPNFM;
      pSVar9 = (__this->fields).styleAlias;
      pIVar7 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                         (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
      lVar3 = Method_System_Array_Empty<string>__;
      uVar23 = *(undefined8 *)(lVar22 + 0x18);
      lVar22 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
      if (lVar22 == 0) {
        FUN_01b8167c(Method_System_Array_Empty<string>__);
        lVar22 = *(long *)(lVar3 + 0x38);
      }
      lVar22 = *(long *)(lVar22 + 0x10);
      if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
        lVar22 = FUN_01b81620();
      }
      if (*(int *)(lVar22 + 0xe0) == 0) {
        thunk_FUN_01ba7564();
      }
      lVar22 = *(long *)(*(long *)(lVar3 + 0x38) + 0x10);
      if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
        lVar22 = FUN_01b81620();
      }
      if (pIVar7 == (Il2CppObject *)0x0) goto LAB_03230b7c;
      pIVar14 = pIVar7->klass;
      uVar24 = **(undefined8 **)(lVar22 + 0xb8);
      uVar1._0_1_ = (pIVar14->_2).rank;
      uVar1._1_1_ = (pIVar14->_2).minimumAlignment;
      uVar16 = (ulong)uVar1;
      if (uVar16 != 0) {
        piVar17 = &((pIVar14->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar17 + -2))->interfaceType ==
              (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
            pVVar11 = pIVar14->vtable + (*piVar17 + 0xc);
            goto LAB_032309dc;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      pVVar11 = (VirtualInvokeData *)FUN_01b81914(pIVar7,BLEFOFGCKEF_TypeInfo,0xc);
LAB_032309dc:
      pSVar10 = (System_String_o *)(*pVVar11->methodPtr)(pIVar7,uVar23,uVar24,pVVar11->method);
      _Stack_148 = _Stack_78;
      local_150 = local_80;
      local_140 = local_70;
      pIVar7 = (Il2CppObject *)
               Nekki_SF2_GUI_Fight_EndPvpFightContent__CreateLine
                         (__this,pSVar9,pSVar10,StringLiteral_1,
                          (System_Nullable_Color__o *)&local_150,in_x5);
      lVar22 = Method_System_Collections_Generic_List<MCNGELCOMNG>_Add__;
      if (pSVar21 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_03230b7c;
      pSVar13 = (pSVar21->fields)._items;
      (pSVar21->fields)._version = (pSVar21->fields)._version + 1;
      if (pSVar13 == (System_Object_array *)0x0) goto LAB_03230b7c;
      uVar2 = (pSVar21->fields)._size;
      if (uVar2 < (uint)pSVar13->max_length) {
        (pSVar21->fields)._size = uVar2 + 1;
        pSVar13->m_Items[(int)uVar2] = pIVar7;
        thunk_FUN_01c20e04();
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  (pSVar21,pIVar7,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x70));
      }
    }
  }
  pLVar15 = (__this->fields)._buttonExit;
  if (pLVar15 != (LabelButton_o *)0x0) {
    pUVar20 = (UnityEngine_Events_UnityEvent_o *)(pLVar15->fields).super.super.super.m_OnClick;
    pUVar12 = (UnityEngine_Events_UnityAction_o *)
              thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
    UnityEngine_Events_UnityAction___ctor();
    if (pUVar20 != (UnityEngine_Events_UnityEvent_o *)0x0) {
      UnityEngine_Events_UnityEvent__AddListener(pUVar20,pUVar12,(MethodInfo *)0x0);
      pLVar15 = (__this->fields)._buttonExit;
      if ((pLVar15 != (LabelButton_o *)0x0) &&
         (pUVar5 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pLVar15,(MethodInfo *)0x0),
         pUVar5 != (UnityEngine_GameObject_o *)0x0)) {
        UnityEngine_GameObject__SetActive(pUVar5,false,(MethodInfo *)0x0);
        pLVar15 = (__this->fields)._buttonReplay;
        if (pLVar15 != (LabelButton_o *)0x0) {
          pUVar20 = (UnityEngine_Events_UnityEvent_o *)(pLVar15->fields).super.super.super.m_OnClick
          ;
          pUVar12 = (UnityEngine_Events_UnityAction_o *)
                    thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
          UnityEngine_Events_UnityAction___ctor();
          if (pUVar20 != (UnityEngine_Events_UnityEvent_o *)0x0) {
            UnityEngine_Events_UnityEvent__AddListener(pUVar20,pUVar12,(MethodInfo *)0x0);
            pLVar15 = (__this->fields)._buttonReplay;
            if ((pLVar15 != (LabelButton_o *)0x0) &&
               (pUVar5 = UnityEngine_Component__get_gameObject
                                   ((UnityEngine_Component_o *)pLVar15,(MethodInfo *)0x0),
               pUVar5 != (UnityEngine_GameObject_o *)0x0)) {
              UnityEngine_GameObject__SetActive(pUVar5,false,(MethodInfo *)0x0);
              __this_01 = (__this->fields)._buttonPanel;
              if (__this_01 != (UnityEngine_Transform_o *)0x0) {
                UnityEngine_Transform__SetAsLastSibling(__this_01,(MethodInfo *)0x0);
                Nekki_SF2_GUI_Fight_EndPvpFightContent__IOOPGJBHPKK(__this,method_00);
                return;
              }
            }
          }
        }
      }
    }
  }
LAB_03230b7c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

