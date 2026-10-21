// Nekki.SF2.GUI.GeneralMenu.GeneralMenuScene$$CKOHHLKDFPJ @ RVA 0x324D674

/* WARNING: Removing unreachable block (ram,0x0334df6c) */

void Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene__CKOHHLKDFPJ
               (Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  bool bVar5;
  uint8_t uVar6;
  UnityEngine_Events_UnityAction_T0__o *pUVar7;
  Il2CppObject *pIVar8;
  VirtualInvokeData *pVVar9;
  long *plVar10;
  undefined8 *puVar11;
  System_String_o *pSVar12;
  Nekki_SF2_GUI_GeneralMenu_MenuItemList_o *pNVar13;
  System_Collections_Generic_List_string__o *pSVar14;
  Il2CppClass *pIVar15;
  long lVar16;
  System_String_array *pSVar17;
  ulong uVar18;
  int *piVar19;
  int32_t *piVar20;
  Nekki_SF2_GUI_GeneralMenu_MenuItemSlider_o *pNVar21;
  UnityEngine_Events_UnityEvent_float__o *pUVar22;
  UnityEngine_Events_UnityEvent_int__o *pUVar23;
  float fVar24;
  System_Enum_o local_b0;
  undefined1 local_a0;
  System_Enum_o local_98;
  undefined1 local_88;
  System_Enum_o local_80;
  undefined1 local_70;
  System_Enum_o local_68;
  undefined1 local_58;
  
  if ((DAT_0456710a & 1) == 0) {
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_EHAJCBIIBKB__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_IBFINJEFBBJ__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_JMKOPHMLNFF__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_NMDPFAGECON__);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerable<DBNEEHGBCJD>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerator<DBNEEHGBCJD>_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Clear__);
    FUN_01bab630(&MJAIOOLPAMI_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityAction<int>_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityAction<float>_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<float>_AddListener__);
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<int>_AddListener__);
    FUN_01bab630(&StringLiteral_11975);
    DAT_0456710a = 1;
  }
  pNVar21 = (__this->fields)._soundSlider;
  bVar5 = MFIKGMIDDIG__PPGIBBCLJMO((MethodInfo *)0x0);
  fVar24 = 0.0;
  if (!bVar5) {
    fVar24 = MFIKGMIDDIG__IBNHGIOPFNP((MethodInfo *)0x0);
  }
  if (pNVar21 != (Nekki_SF2_GUI_GeneralMenu_MenuItemSlider_o *)0x0) {
    Nekki_SF2_GUI_GeneralMenu_MenuItemSlider__set_value(pNVar21,fVar24,(MethodInfo *)0x0);
    pNVar21 = (__this->fields)._soundSlider;
    if (pNVar21 != (Nekki_SF2_GUI_GeneralMenu_MenuItemSlider_o *)0x0) {
      pUVar22 = (UnityEngine_Events_UnityEvent_float__o *)(pNVar21->fields)._OnValueChanged;
      pUVar7 = (UnityEngine_Events_UnityAction_T0__o *)
               thunk_FUN_01bda818(UnityEngine_Events_UnityAction<float>_TypeInfo);
      UnityEngine_Events_UnityAction<float>___ctor();
      if (pUVar22 != (UnityEngine_Events_UnityEvent_float__o *)0x0) {
        UnityEngine_Events_UnityEvent<float>__AddListener
                  (pUVar22,pUVar7,Method_UnityEngine_Events_UnityEvent<float>_AddListener__);
        pNVar21 = (__this->fields)._musicSlider;
        bVar5 = MFIKGMIDDIG__OAIKLELIHCD((MethodInfo *)0x0);
        fVar24 = 0.0;
        if (!bVar5) {
          fVar24 = MFIKGMIDDIG__IEONOAEPPCN((MethodInfo *)0x0);
        }
        if (pNVar21 != (Nekki_SF2_GUI_GeneralMenu_MenuItemSlider_o *)0x0) {
          Nekki_SF2_GUI_GeneralMenu_MenuItemSlider__set_value(pNVar21,fVar24,(MethodInfo *)0x0);
          pNVar21 = (__this->fields)._musicSlider;
          if (pNVar21 != (Nekki_SF2_GUI_GeneralMenu_MenuItemSlider_o *)0x0) {
            pUVar22 = (UnityEngine_Events_UnityEvent_float__o *)(pNVar21->fields)._OnValueChanged;
            pUVar7 = (UnityEngine_Events_UnityAction_T0__o *)
                     thunk_FUN_01bda818(UnityEngine_Events_UnityAction<float>_TypeInfo);
            UnityEngine_Events_UnityAction<float>___ctor();
            if (pUVar22 != (UnityEngine_Events_UnityEvent_float__o *)0x0) {
              UnityEngine_Events_UnityEvent<float>__AddListener
                        (pUVar22,pUVar7,Method_UnityEngine_Events_UnityEvent<float>_AddListener__);
              pNVar13 = (__this->fields)._languageList;
              if ((pNVar13 != (Nekki_SF2_GUI_GeneralMenu_MenuItemList_o *)0x0) &&
                 (pSVar14 = (pNVar13->fields)._list,
                 pSVar14 != (System_Collections_Generic_List_string__o *)0x0)) {
                iVar1 = (pSVar14->fields)._size;
                (pSVar14->fields)._size = 0;
                (pSVar14->fields)._version = (pSVar14->fields)._version + 1;
                if (0 < iVar1) {
                  System_Array__Clear((System_Array_o *)(pSVar14->fields)._items,0,iVar1,
                                      (MethodInfo *)0x0);
                }
                pIVar8 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                                   (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
                if (pIVar8 != (Il2CppObject *)0x0) {
                  pIVar15 = pIVar8->klass;
                  uVar2._0_1_ = (pIVar15->_2).rank;
                  uVar2._1_1_ = (pIVar15->_2).minimumAlignment;
                  uVar18 = (ulong)uVar2;
                  if (uVar18 != 0) {
                    piVar20 = &((pIVar15->_1).interfaceOffsets)->offset;
                    do {
                      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar20 + -2))->interfaceType ==
                          (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
                        pVVar9 = pIVar15->vtable + (*piVar20 + 10);
                        goto LAB_0334d910;
                      }
                      uVar18 = uVar18 - 1;
                      piVar20 = piVar20 + 4;
                    } while (uVar18 != 0);
                  }
                  pVVar9 = (VirtualInvokeData *)FUN_01b81914(pIVar8,BLEFOFGCKEF_TypeInfo,10);
LAB_0334d910:
                  plVar10 = (long *)(*pVVar9->methodPtr)(pIVar8,pVVar9->method);
                  if (plVar10 != (long *)0x0) {
                    lVar16 = *plVar10;
                    uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
                    if (uVar18 != 0) {
                      piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                      do {
                        if (*(System_Collections_Generic_IEnumerable_DBNEEHGBCJD__c **)
                             (piVar19 + -2) ==
                            System_Collections_Generic_IEnumerable<DBNEEHGBCJD>_TypeInfo) {
                          puVar11 = (undefined8 *)(lVar16 + (long)*piVar19 * 0x10 + 0x138);
                          goto LAB_0334d978;
                        }
                        uVar18 = uVar18 - 1;
                        piVar19 = piVar19 + 4;
                      } while (uVar18 != 0);
                    }
                    puVar11 = (undefined8 *)
                              FUN_01b81914(plVar10,
                                           System_Collections_Generic_IEnumerable<DBNEEHGBCJD>_TypeInfo
                                           ,0);
LAB_0334d978:
                    plVar10 = (long *)(*(code *)*puVar11)(plVar10,puVar11[1]);
                    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01bab8c8();
                    }
                    do {
                      lVar16 = *plVar10;
                      uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
                      if (uVar18 != 0) {
                        piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                        do {
                          if (*(System_Collections_IEnumerator_c **)(piVar19 + -2) ==
                              System_Collections_IEnumerator_TypeInfo) {
                            puVar11 = (undefined8 *)(lVar16 + (long)*piVar19 * 0x10 + 0x138);
                            goto LAB_0334d9f8;
                          }
                          uVar18 = uVar18 - 1;
                          piVar19 = piVar19 + 4;
                        } while (uVar18 != 0);
                      }
                      puVar11 = (undefined8 *)
                                FUN_01b81914(plVar10,System_Collections_IEnumerator_TypeInfo,0);
LAB_0334d9f8:
                      uVar18 = (*(code *)*puVar11)(plVar10,puVar11[1]);
                      if ((uVar18 & 1) == 0) {
                        if (plVar10 == (long *)0x0) goto LAB_0334db40;
                        lVar16 = *plVar10;
                        uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
                        if (uVar18 == 0) goto LAB_0334db18;
                        piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                        goto LAB_0334db00;
                      }
                      lVar16 = *plVar10;
                      uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
                      if (uVar18 != 0) {
                        piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                        do {
                          if (*(System_Collections_Generic_IEnumerator_DBNEEHGBCJD__c **)
                               (piVar19 + -2) ==
                              System_Collections_Generic_IEnumerator<DBNEEHGBCJD>_TypeInfo) {
                            puVar11 = (undefined8 *)(lVar16 + (long)*piVar19 * 0x10 + 0x138);
                            goto LAB_0334da54;
                          }
                          uVar18 = uVar18 - 1;
                          piVar19 = piVar19 + 4;
                        } while (uVar18 != 0);
                      }
                      puVar11 = (undefined8 *)
                                FUN_01b81914(plVar10,
                                             System_Collections_Generic_IEnumerator<DBNEEHGBCJD>_TypeInfo
                                             ,0);
LAB_0334da54:
                      lVar16 = (*(code *)*puVar11)(plVar10,puVar11[1]);
                      pNVar13 = (__this->fields)._languageList;
                      if (pNVar13 == (Nekki_SF2_GUI_GeneralMenu_MenuItemList_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01bab8c8();
                      }
                      if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01bab8c8();
                      }
                      if (*(System_String_o **)(lVar16 + 0x10) == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01bab8c8();
                      }
                      pSVar14 = (pNVar13->fields)._list;
                      pSVar12 = System_String__ToUpper
                                          (*(System_String_o **)(lVar16 + 0x10),(MethodInfo *)0x0);
                      lVar16 = Method_System_Collections_Generic_List<string>_Add__;
                      if (pSVar14 == (System_Collections_Generic_List_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01bab8c8();
                      }
                      pSVar17 = (pSVar14->fields)._items;
                      (pSVar14->fields)._version = (pSVar14->fields)._version + 1;
                      if (pSVar17 == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01bab8c8();
                      }
                      uVar4 = (pSVar14->fields)._size;
                      if (uVar4 < (uint)pSVar17->max_length) {
                        (pSVar14->fields)._size = uVar4 + 1;
                        pSVar17->m_Items[(int)uVar4] = pSVar12;
                        thunk_FUN_01c20e04();
                      }
                      else {
                        System_Collections_Generic_List<object>__AddWithResize
                                  ((System_Collections_Generic_List_object__o *)pSVar14,
                                   (Il2CppObject *)pSVar12,
                                   *(MethodInfo_26E4DAC **)
                                    (*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
                      }
                    } while( true );
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  goto LAB_0334df50;
  while( true ) {
    uVar18 = uVar18 - 1;
    piVar19 = piVar19 + 4;
    if (uVar18 == 0) break;
LAB_0334db00:
    if (*(System_IDisposable_c **)(piVar19 + -2) == System_IDisposable_TypeInfo) {
      puVar11 = (undefined8 *)(lVar16 + (long)*piVar19 * 0x10 + 0x138);
      goto LAB_0334db34;
    }
  }
LAB_0334db18:
  puVar11 = (undefined8 *)FUN_01b81914(plVar10,System_IDisposable_TypeInfo,0);
LAB_0334db34:
  (*(code *)*puVar11)(plVar10,puVar11[1]);
LAB_0334db40:
  pNVar13 = (__this->fields)._languageList;
  pIVar8 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                     (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
  if (pIVar8 != (Il2CppObject *)0x0) {
    pIVar15 = pIVar8->klass;
    uVar3._0_1_ = (pIVar15->_2).rank;
    uVar3._1_1_ = (pIVar15->_2).minimumAlignment;
    uVar18 = (ulong)uVar3;
    if (uVar18 != 0) {
      piVar20 = &((pIVar15->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar20 + -2))->interfaceType ==
            (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
          pVVar9 = pIVar15->vtable + (*piVar20 + 6);
          goto LAB_0334dba8;
        }
        uVar18 = uVar18 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar18 != 0);
    }
    pVVar9 = (VirtualInvokeData *)FUN_01b81914(pIVar8,BLEFOFGCKEF_TypeInfo,6);
LAB_0334dba8:
    lVar16 = (*pVVar9->methodPtr)(pIVar8,pVVar9->method);
    if ((lVar16 != 0) && (pNVar13 != (Nekki_SF2_GUI_GeneralMenu_MenuItemList_o *)0x0)) {
      Nekki_SF2_GUI_GeneralMenu_MenuItemList__ChangeListIndex
                (pNVar13,*(int32_t *)(lVar16 + 0x40),(MethodInfo *)0x0);
      pNVar13 = (__this->fields)._languageList;
      if (pNVar13 != (Nekki_SF2_GUI_GeneralMenu_MenuItemList_o *)0x0) {
        pUVar23 = (UnityEngine_Events_UnityEvent_int__o *)(pNVar13->fields)._OnValueChanged;
        pUVar7 = (UnityEngine_Events_UnityAction_T0__o *)
                 thunk_FUN_01bda818(UnityEngine_Events_UnityAction<int>_TypeInfo);
        UnityEngine_Events_UnityAction<int>___ctor();
        if (pUVar23 != (UnityEngine_Events_UnityEvent_int__o *)0x0) {
          UnityEngine_Events_UnityEvent<int>__AddListener
                    (pUVar23,pUVar7,Method_UnityEngine_Events_UnityEvent<int>_AddListener__);
          pNVar13 = (__this->fields)._vibrationStrengthList;
          if ((pNVar13 != (Nekki_SF2_GUI_GeneralMenu_MenuItemList_o *)0x0) &&
             (pSVar14 = (pNVar13->fields)._list,
             pSVar14 != (System_Collections_Generic_List_string__o *)0x0)) {
            iVar1 = (pSVar14->fields)._size;
            (pSVar14->fields)._size = 0;
            (pSVar14->fields)._version = (pSVar14->fields)._version + 1;
            if (0 < iVar1) {
              System_Array__Clear((System_Array_o *)(pSVar14->fields)._items,0,iVar1,
                                  (MethodInfo *)0x0);
              pNVar13 = (__this->fields)._vibrationStrengthList;
              if (pNVar13 == (Nekki_SF2_GUI_GeneralMenu_MenuItemList_o *)0x0) goto LAB_0334df50;
            }
            local_68.klass = (System_Enum_c *)MJAIOOLPAMI_TypeInfo;
            pSVar14 = (pNVar13->fields)._list;
            local_68.monitor = (void *)0xffffffffffffffff;
            local_58 = 0;
            pSVar12 = System_Enum__ToString(&local_68,(MethodInfo *)0x0);
            pSVar12 = System_String__Concat(StringLiteral_11975,pSVar12,(MethodInfo *)0x0);
            lVar16 = Method_System_Collections_Generic_List<string>_Add__;
            if (pSVar14 != (System_Collections_Generic_List_string__o *)0x0) {
              pSVar17 = (pSVar14->fields)._items;
              (pSVar14->fields)._version = (pSVar14->fields)._version + 1;
              if (pSVar17 != (System_String_array *)0x0) {
                uVar4 = (pSVar14->fields)._size;
                if (uVar4 < (uint)pSVar17->max_length) {
                  (pSVar14->fields)._size = uVar4 + 1;
                  pSVar17->m_Items[(int)uVar4] = pSVar12;
                  thunk_FUN_01c20e04();
                }
                else {
                  System_Collections_Generic_List<object>__AddWithResize
                            ((System_Collections_Generic_List_object__o *)pSVar14,
                             (Il2CppObject *)pSVar12,
                             *(MethodInfo_26E4DAC **)
                              (*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
                }
                pNVar13 = (__this->fields)._vibrationStrengthList;
                if (pNVar13 != (Nekki_SF2_GUI_GeneralMenu_MenuItemList_o *)0x0) {
                  local_80.klass = (System_Enum_c *)MJAIOOLPAMI_TypeInfo;
                  pSVar14 = (pNVar13->fields)._list;
                  local_80.monitor = (void *)0xffffffffffffffff;
                  local_70 = 1;
                  pSVar12 = System_Enum__ToString(&local_80,(MethodInfo *)0x0);
                  pSVar12 = System_String__Concat(StringLiteral_11975,pSVar12,(MethodInfo *)0x0);
                  lVar16 = Method_System_Collections_Generic_List<string>_Add__;
                  if (pSVar14 != (System_Collections_Generic_List_string__o *)0x0) {
                    pSVar17 = (pSVar14->fields)._items;
                    (pSVar14->fields)._version = (pSVar14->fields)._version + 1;
                    if (pSVar17 != (System_String_array *)0x0) {
                      uVar4 = (pSVar14->fields)._size;
                      if (uVar4 < (uint)pSVar17->max_length) {
                        (pSVar14->fields)._size = uVar4 + 1;
                        pSVar17->m_Items[(int)uVar4] = pSVar12;
                        thunk_FUN_01c20e04();
                      }
                      else {
                        System_Collections_Generic_List<object>__AddWithResize
                                  ((System_Collections_Generic_List_object__o *)pSVar14,
                                   (Il2CppObject *)pSVar12,
                                   *(MethodInfo_26E4DAC **)
                                    (*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
                      }
                      pNVar13 = (__this->fields)._vibrationStrengthList;
                      if (pNVar13 != (Nekki_SF2_GUI_GeneralMenu_MenuItemList_o *)0x0) {
                        local_98.klass = (System_Enum_c *)MJAIOOLPAMI_TypeInfo;
                        pSVar14 = (pNVar13->fields)._list;
                        local_98.monitor = (void *)0xffffffffffffffff;
                        local_88 = 2;
                        pSVar12 = System_Enum__ToString(&local_98,(MethodInfo *)0x0);
                        pSVar12 = System_String__Concat
                                            (StringLiteral_11975,pSVar12,(MethodInfo *)0x0);
                        lVar16 = Method_System_Collections_Generic_List<string>_Add__;
                        if (pSVar14 != (System_Collections_Generic_List_string__o *)0x0) {
                          pSVar17 = (pSVar14->fields)._items;
                          (pSVar14->fields)._version = (pSVar14->fields)._version + 1;
                          if (pSVar17 != (System_String_array *)0x0) {
                            uVar4 = (pSVar14->fields)._size;
                            if (uVar4 < (uint)pSVar17->max_length) {
                              (pSVar14->fields)._size = uVar4 + 1;
                              pSVar17->m_Items[(int)uVar4] = pSVar12;
                              thunk_FUN_01c20e04();
                            }
                            else {
                              System_Collections_Generic_List<object>__AddWithResize
                                        ((System_Collections_Generic_List_object__o *)pSVar14,
                                         (Il2CppObject *)pSVar12,
                                         *(MethodInfo_26E4DAC **)
                                          (*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
                            }
                            pNVar13 = (__this->fields)._vibrationStrengthList;
                            if (pNVar13 != (Nekki_SF2_GUI_GeneralMenu_MenuItemList_o *)0x0) {
                              local_b0.klass = (System_Enum_c *)MJAIOOLPAMI_TypeInfo;
                              pSVar14 = (pNVar13->fields)._list;
                              local_b0.monitor = (void *)0xffffffffffffffff;
                              local_a0 = 3;
                              pSVar12 = System_Enum__ToString(&local_b0,(MethodInfo *)0x0);
                              pSVar12 = System_String__Concat
                                                  (StringLiteral_11975,pSVar12,(MethodInfo *)0x0);
                              lVar16 = Method_System_Collections_Generic_List<string>_Add__;
                              if (pSVar14 != (System_Collections_Generic_List_string__o *)0x0) {
                                pSVar17 = (pSVar14->fields)._items;
                                (pSVar14->fields)._version = (pSVar14->fields)._version + 1;
                                if (pSVar17 != (System_String_array *)0x0) {
                                  uVar4 = (pSVar14->fields)._size;
                                  if (uVar4 < (uint)pSVar17->max_length) {
                                    (pSVar14->fields)._size = uVar4 + 1;
                                    pSVar17->m_Items[(int)uVar4] = pSVar12;
                                    thunk_FUN_01c20e04();
                                  }
                                  else {
                                    System_Collections_Generic_List<object>__AddWithResize
                                              ((System_Collections_Generic_List_object__o *)pSVar14,
                                               (Il2CppObject *)pSVar12,
                                               *(MethodInfo_26E4DAC **)
                                                (*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70))
                                    ;
                                  }
                                  pNVar13 = (__this->fields)._vibrationStrengthList;
                                  uVar6 = HFNDCHDFFKO__LLJLCLHCDDO((MethodInfo *)0x0);
                                  if (pNVar13 != (Nekki_SF2_GUI_GeneralMenu_MenuItemList_o *)0x0) {
                                    Nekki_SF2_GUI_GeneralMenu_MenuItemList__ChangeListIndex
                                              (pNVar13,(uint)uVar6,(MethodInfo *)0x0);
                                    pNVar13 = (__this->fields)._vibrationStrengthList;
                                    if (pNVar13 != (Nekki_SF2_GUI_GeneralMenu_MenuItemList_o *)0x0)
                                    {
                                      pUVar23 = (UnityEngine_Events_UnityEvent_int__o *)
                                                (pNVar13->fields)._OnValueChanged;
                                      pUVar7 = (UnityEngine_Events_UnityAction_T0__o *)
                                               thunk_FUN_01bda818(
                                                  UnityEngine_Events_UnityAction<int>_TypeInfo);
                                      UnityEngine_Events_UnityAction<int>___ctor();
                                      if (pUVar23 != (UnityEngine_Events_UnityEvent_int__o *)0x0) {
                                        UnityEngine_Events_UnityEvent<int>__AddListener
                                                  (pUVar23,pUVar7,
                                                                                                      
                                                  Method_UnityEngine_Events_UnityEvent<int>_AddListener__
                                                  );
                                        return;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_0334df50:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

