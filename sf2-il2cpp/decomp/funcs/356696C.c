// Nekki.SF2.GUI.Dialogs.BaseRewardCell$$IBPGLHOKFFM @ RVA 0x356696C

/* WARNING: Removing unreachable block (ram,0x03667400) */

void Nekki_SF2_GUI_Dialogs_BaseRewardCell__IBPGLHOKFFM
               (Nekki_SF2_GUI_Dialogs_BaseRewardCell_o *__this,OCOEAJMJEOP_o *AKOOAFJLOFD,
               MethodInfo *method)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  undefined4 uVar4;
  Il2CppObject *pIVar5;
  bool bVar6;
  int32_t startIndex;
  DOPEEDABNEK_o *__this_00;
  HOOAAGABMBL_o *pHVar7;
  JMDPBFOCHHP_o *pJVar8;
  System_String_o *pSVar9;
  Nekki_SF2_GUI_LabelAlias_o *pNVar10;
  UnityEngine_GameObject_o *pUVar11;
  UnityEngine_Transform_o *pUVar12;
  System_Collections_IEnumerator_o *pSVar13;
  VirtualInvokeData *pVVar14;
  UnityEngine_Component_o *__this_01;
  long *plVar15;
  undefined8 *puVar16;
  System_Collections_Generic_List_PKKLIJLIKGF__o *__this_02;
  FOKJBDHLIMG_o *__this_03;
  HEFOANCOHDC_o *EIKFGOCCOIE;
  Nekki_SF2_GUI_ResolutionImage_o *__this_04;
  System_String_array *values;
  MGNPHCAAEIO_HLAKGGFFNAO_o *__this_05;
  HBNENINHPGF_o *pHVar17;
  JMDPBFOCHHP_ODJJOAOCFKO_o *pJVar18;
  System_Exception_o *__this_06;
  undefined8 uVar19;
  MethodInfo *pMVar20;
  BCOICIIDFPD_o *pBVar21;
  System_Collections_IEnumerator_c *pSVar22;
  long lVar23;
  UnityEngine_Vector3_StaticFields *pUVar24;
  ulong uVar25;
  Il2CppMethodPointer pIVar26;
  int32_t *piVar27;
  int *piVar28;
  System_String_o *pSVar29;
  UnityEngine_Vector3_array *x;
  uint uVar30;
  UnityEngine_Vector3_o value;
  System_Collections_Generic_List_Enumerator_T__o local_a8;
  System_Collections_Generic_List_Enumerator_T__o local_90;
  int32_t local_64;
  
  if ((DAT_04568bfc & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PKKLIJLIKGF>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PKKLIJLIKGF>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PKKLIJLIKGF>_get_Current__);
    FUN_01bab630(&Method_UnityEngine_GameObject_AddComponent<ResolutionImage>__);
    FUN_01bab630(&UnityEngine_GameObject_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&KKCBGIBKOCP_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<PKKLIJLIKGF>_GetEnumerator__);
    FUN_01bab630(&MGENAMAJALB_TypeInfo);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&string_TypeInfo);
    FUN_01bab630(&UnityEngine_Transform_TypeInfo);
    FUN_01bab630(&StringLiteral_3106);
    FUN_01bab630(&StringLiteral_6544);
    FUN_01bab630(&StringLiteral_5705);
    FUN_01bab630(&StringLiteral_3406);
    FUN_01bab630(&StringLiteral_10831);
    FUN_01bab630(&StringLiteral_372);
    FUN_01bab630(&StringLiteral_14092);
    FUN_01bab630(&StringLiteral_1);
    FUN_01bab630(&StringLiteral_18943);
    FUN_01bab630(&StringLiteral_423);
    FUN_01bab630(&StringLiteral_1377);
    DAT_04568bfc = 1;
  }
  local_64 = 0;
  local_90.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_90.fields._index = 0;
  local_90.fields._version = 0;
  local_90.fields._current = (Il2CppObject *)0x0;
  if (AKOOAFJLOFD == (OCOEAJMJEOP_o *)0x0) {
    thunk_FUN_01bb9178(&System_Exception_TypeInfo);
    __this_06 = (System_Exception_o *)thunk_FUN_01bda818();
    pSVar29 = (System_String_o *)thunk_FUN_01bb9178(&StringLiteral_5946);
    System_Exception___ctor(__this_06,pSVar29,(MethodInfo *)0x0);
    uVar19 = thunk_FUN_01bb9178(&Method_Nekki_SF2_GUI_Dialogs_BaseRewardCell_IBPGLHOKFFM__);
                    /* WARNING: Subroutine does not return */
    FUN_01bab798(__this_06,uVar19);
  }
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
  pBVar21 = (__this->fields).RewardData;
  if ((pBVar21 == (BCOICIIDFPD_o *)0x0) ||
     (__this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField,
     __this_00 == (DOPEEDABNEK_o *)0x0)) goto LAB_03667388;
  pHVar7 = DOPEEDABNEK__CKKIPBAIEMN
                     (__this_00,(pBVar21->fields)._IANGGJCONIH_k__BackingField,(MethodInfo *)0x0);
  if (pHVar7 == (HOOAAGABMBL_o *)0x0) {
    pBVar21 = (__this->fields).RewardData;
    if (pBVar21 == (BCOICIIDFPD_o *)0x0) goto LAB_03667388;
    System_String__Concat
              (StringLiteral_18943,(pBVar21->fields)._IANGGJCONIH_k__BackingField,(MethodInfo *)0x0)
    ;
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pJVar8 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
    if (pJVar8 == (JMDPBFOCHHP_o *)0x0) goto LAB_03667388;
    pHVar7 = (HOOAAGABMBL_o *)
             JMDPBFOCHHP__DIFLKMKBENA
                       (pJVar8,(AKOOAFJLOFD->fields).JIJLBFGKNJK,false,(MethodInfo *)0x0);
    pSVar29 = StringLiteral_1;
    if (pHVar7 != (HOOAAGABMBL_o *)0x0) goto LAB_03666bdc;
    pSVar9 = (AKOOAFJLOFD->fields).JIJLBFGKNJK;
    if (pSVar9 == (System_String_o *)0x0) goto LAB_03667388;
    bVar6 = System_String__StartsWith(pSVar9,StringLiteral_6544,(MethodInfo *)0x0);
    if (bVar6) {
      pBVar21 = (__this->fields).RewardData;
      if ((pBVar21 == (BCOICIIDFPD_o *)0x0) ||
         (pSVar9 = (pBVar21->fields)._IANGGJCONIH_k__BackingField, pSVar9 == (System_String_o *)0x0)
         ) goto LAB_03667388;
      startIndex = System_String__IndexOf(pSVar9,StringLiteral_1377,(MethodInfo *)0x0);
      pSVar9 = System_String__Substring(pSVar9,startIndex,(MethodInfo *)0x0);
      pSVar9 = System_String__Concat(StringLiteral_10831,pSVar9,(MethodInfo *)0x0);
      uVar30 = 0;
      pIVar26 = (__this->klass->vtable)._5_ENEJJGDDBGI.methodPtr;
      pMVar20 = (__this->klass->vtable)._5_ENEJJGDDBGI.method;
LAB_03667328:
      uVar19 = 1;
    }
    else {
      pSVar9 = (AKOOAFJLOFD->fields).JIJLBFGKNJK;
      if (pSVar9 == (System_String_o *)0x0) goto LAB_03667388;
      bVar6 = System_String__StartsWith(pSVar9,StringLiteral_3106,(MethodInfo *)0x0);
      if (!bVar6) {
        if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pJVar8 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
        if (pJVar8 == (JMDPBFOCHHP_o *)0x0) goto LAB_03667388;
        pJVar18 = JMDPBFOCHHP__DOKLIOAMCCO
                            (pJVar8,(AKOOAFJLOFD->fields).JIJLBFGKNJK,(MethodInfo *)0x0);
        if (pJVar18 != (JMDPBFOCHHP_ODJJOAOCFKO_o *)0x0) {
          pSVar9 = (pJVar18->fields).KPDPJONADPJ;
          pIVar26 = (__this->klass->vtable)._5_ENEJJGDDBGI.methodPtr;
          pMVar20 = (__this->klass->vtable)._5_ENEJJGDDBGI.method;
          uVar30 = 0x3f0ccccd;
          goto LAB_03667328;
        }
        pBVar21 = (__this->fields).RewardData;
        if (pBVar21 == (BCOICIIDFPD_o *)0x0) goto LAB_03667388;
        (*(__this->klass->vtable)._5_ENEJJGDDBGI.methodPtr)
                  (0x3f0ccccd,__this,string_TypeInfo->static_fields->Empty,
                   (pBVar21->fields)._IANGGJCONIH_k__BackingField,1,
                   (__this->klass->vtable)._5_ENEJJGDDBGI.method);
        goto LAB_03666be0;
      }
      if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_05 = MGNPHCAAEIO_TypeInfo->static_fields->BHAAICEFMBC;
      if ((__this_05 == (MGNPHCAAEIO_HLAKGGFFNAO_o *)0x0) ||
         (pHVar17 = MGNPHCAAEIO_HLAKGGFFNAO__BHJOLIJDBLO
                              (__this_05,(AKOOAFJLOFD->fields).JIJLBFGKNJK,(MethodInfo *)0x0),
         pHVar17 == (HBNENINHPGF_o *)0x0)) goto LAB_03667388;
      pSVar9 = (pHVar17->fields)._PGCEKJLODEJ_k__BackingField;
      uVar30 = 0;
      pIVar26 = (__this->klass->vtable)._5_ENEJJGDDBGI.methodPtr;
      pMVar20 = (__this->klass->vtable)._5_ENEJJGDDBGI.method;
      uVar19 = 0;
    }
    (*pIVar26)((ulong)uVar30,__this,StringLiteral_1,pSVar9,uVar19,pMVar20);
  }
  else {
LAB_03666bdc:
    pSVar29 = (pHVar7->fields)._GPEFIOMJHNN_k__BackingField;
  }
LAB_03666be0:
  bVar6 = PCOEHCPGBBG__BDLEIEHBFAD(pSVar29,(MethodInfo *)0x0);
  if (!bVar6) {
    if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar9 = MGENAMAJALB__AAHKIHMHJDP((MethodInfo *)0x0);
    (*(__this->klass->vtable)._5_ENEJJGDDBGI.methodPtr)
              (0,__this,pSVar9,pSVar29,1,(__this->klass->vtable)._5_ENEJJGDDBGI.method);
  }
  pBVar21 = (__this->fields).RewardData;
  if (pBVar21 != (BCOICIIDFPD_o *)0x0) {
    if ((pBVar21->fields)._HFPMLGFDOKC_k__BackingField < 1) {
      pUVar12 = (__this->fields).PerkContainer;
      if (pUVar12 != (UnityEngine_Transform_o *)0x0) {
        pSVar13 = UnityEngine_Transform__GetEnumerator(pUVar12,(MethodInfo *)0x0);
        if (pSVar13 == (System_Collections_IEnumerator_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        do {
          pSVar22 = pSVar13->klass;
          uVar2._0_1_ = (pSVar22->_2).rank;
          uVar2._1_1_ = (pSVar22->_2).minimumAlignment;
          uVar25 = (ulong)uVar2;
          if (uVar25 != 0) {
            piVar27 = &((pSVar22->_1).interfaceOffsets)->offset;
            do {
              if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar27 + -2))->interfaceType ==
                  (Il2CppClass *)System_Collections_IEnumerator_TypeInfo) {
                pVVar14 = pSVar22->vtable + *piVar27;
                goto LAB_03666d30;
              }
              uVar25 = uVar25 - 1;
              piVar27 = piVar27 + 4;
            } while (uVar25 != 0);
          }
          pVVar14 = (VirtualInvokeData *)
                    FUN_01b81914(pSVar13,System_Collections_IEnumerator_TypeInfo,0);
LAB_03666d30:
          uVar25 = (*pVVar14->methodPtr)(pSVar13,pVVar14->method);
          if ((uVar25 & 1) == 0) {
            plVar15 = (long *)thunk_FUN_01bda71c(pSVar13,System_IDisposable_TypeInfo);
            if (plVar15 == (long *)0x0) goto LAB_03666ef4;
            lVar23 = *plVar15;
            uVar25 = (ulong)*(ushort *)(lVar23 + 0x12e);
            if (uVar25 == 0) goto LAB_03666e34;
            piVar28 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
            goto LAB_03666e1c;
          }
          pSVar22 = pSVar13->klass;
          uVar3._0_1_ = (pSVar22->_2).rank;
          uVar3._1_1_ = (pSVar22->_2).minimumAlignment;
          uVar25 = (ulong)uVar3;
          if (uVar25 != 0) {
            piVar27 = &((pSVar22->_1).interfaceOffsets)->offset;
            do {
              if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar27 + -2))->interfaceType ==
                  (Il2CppClass *)System_Collections_IEnumerator_TypeInfo) {
                pVVar14 = pSVar22->vtable + (*piVar27 + 1);
                goto LAB_03666d90;
              }
              uVar25 = uVar25 - 1;
              piVar27 = piVar27 + 4;
            } while (uVar25 != 0);
          }
          pVVar14 = (VirtualInvokeData *)
                    FUN_01b81914(pSVar13,System_Collections_IEnumerator_TypeInfo,1);
LAB_03666d90:
          __this_01 = (UnityEngine_Component_o *)(*pVVar14->methodPtr)(pSVar13,pVVar14->method);
          if (__this_01 == (UnityEngine_Component_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          bVar1 = (UnityEngine_Transform_TypeInfo->_2).naturalAligment;
          if (((__this_01->klass->_2).naturalAligment < bVar1) ||
             ((__this_01->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
              (Il2CppClass *)UnityEngine_Transform_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
            FUN_01babc64();
          }
          pUVar11 = UnityEngine_Component__get_gameObject(__this_01,(MethodInfo *)0x0);
          Util__JODGPLBHHIA(pUVar11,false,(MethodInfo *)0x0);
        } while( true );
      }
    }
    else {
      pNVar10 = (__this->fields).SlotCount;
      if ((pNVar10 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
         (pUVar11 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pNVar10,(MethodInfo *)0x0),
         pUVar11 != (UnityEngine_GameObject_o *)0x0)) {
        UnityEngine_GameObject__SetActive(pUVar11,true,(MethodInfo *)0x0);
        pBVar21 = (__this->fields).RewardData;
        if (pBVar21 != (BCOICIIDFPD_o *)0x0) {
          local_64 = (pBVar21->fields)._HFPMLGFDOKC_k__BackingField;
          pNVar10 = (__this->fields).SlotCount;
          pSVar29 = System_Int32__ToString((int32_t)&local_64,(MethodInfo *)0x0);
          if (pNVar10 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
            (*(pNVar10->klass->vtable)._75_set_text.methodPtr)
                      (pNVar10,pSVar29,(pNVar10->klass->vtable)._75_set_text.method);
            pUVar12 = (__this->fields).PerkContainer;
            if ((pUVar12 != (UnityEngine_Transform_o *)0x0) &&
               (pUVar11 = UnityEngine_Component__get_gameObject
                                    ((UnityEngine_Component_o *)pUVar12,(MethodInfo *)0x0),
               pUVar11 != (UnityEngine_GameObject_o *)0x0)) {
              bVar6 = false;
LAB_03667240:
              UnityEngine_GameObject__SetActive(pUVar11,bVar6,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
LAB_03667388:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
  while( true ) {
    uVar25 = uVar25 - 1;
    piVar28 = piVar28 + 4;
    if (uVar25 == 0) break;
LAB_03666e1c:
    if (*(System_IDisposable_c **)(piVar28 + -2) == System_IDisposable_TypeInfo) {
      puVar16 = (undefined8 *)(lVar23 + (long)*piVar28 * 0x10 + 0x138);
      goto LAB_03666ee8;
    }
  }
LAB_03666e34:
  puVar16 = (undefined8 *)FUN_01b81914(plVar15,System_IDisposable_TypeInfo,0);
LAB_03666ee8:
  (*(code *)*puVar16)(plVar15,puVar16[1]);
LAB_03666ef4:
  __this_02 = (AKOOAFJLOFD->fields).BJNEIDNIMHI;
  if (__this_02 != (System_Collections_Generic_List_PKKLIJLIKGF__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_a8,(System_Collections_Generic_List_object__o *)__this_02,
               Method_System_Collections_Generic_List<PKKLIJLIKGF>_GetEnumerator__);
    local_90.fields._index = local_a8.fields._index;
    local_90.fields._version = local_a8.fields._version;
    local_90.fields._list = local_a8.fields._list;
    local_90.fields._current = local_a8.fields._current;
    while (bVar6 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_90,
                              Method_System_Collections_Generic_List_Enumerator<PKKLIJLIKGF>_MoveNext__
                             ), pIVar5 = local_90.fields._current, bVar6) {
      if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (pIVar5 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      __this_03 = MGNPHCAAEIO_TypeInfo->static_fields->DDMMFEDBMCC;
      if (__this_03 == (FOKJBDHLIMG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      EIKFGOCCOIE = FOKJBDHLIMG__JMMDGEOBMOC
                              (__this_03,(System_String_o *)pIVar5[1].klass,(MethodInfo *)0x0);
      if (EIKFGOCCOIE != (HEFOANCOHDC_o *)0x0) {
        pUVar11 = (UnityEngine_GameObject_o *)thunk_FUN_01bda818(UnityEngine_GameObject_TypeInfo);
        UnityEngine_GameObject___ctor(pUVar11,(MethodInfo *)0x0);
        if (pUVar11 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        __this_04 = (Nekki_SF2_GUI_ResolutionImage_o *)
                    UnityEngine_GameObject__AddComponent<object>
                              (pUVar11,Method_UnityEngine_GameObject_AddComponent<ResolutionImage>__
                              );
        if (__this_04 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        (*(__this_04->klass->vtable)._25_set_raycastTarget.methodPtr)
                  (__this_04,0,(__this_04->klass->vtable)._25_set_raycastTarget.method);
        pUVar12 = UnityEngine_Component__get_transform
                            ((UnityEngine_Component_o *)__this_04,(MethodInfo *)0x0);
        if (pUVar12 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        UnityEngine_Transform__SetParent(pUVar12,(__this->fields).PerkContainer,(MethodInfo *)0x0);
        uVar4 = StringLiteral_14092._4_4_;
        (__this_04->fields).super.m_PixelsPerUnitMultiplier = (float)(undefined4)StringLiteral_14092
        ;
        (__this_04->fields).super.m_CachedReferencePixelsPerUnit = (float)uVar4;
        thunk_FUN_01c20e04(&(__this_04->fields).super.m_PixelsPerUnitMultiplier);
        if ((KKCBGIBKOCP_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pSVar29 = KKCBGIBKOCP__LFEHBAMJCMH(EIKFGOCCOIE,(MethodInfo *)0x0);
        Nekki_SF2_GUI_ResolutionImage__set_SpriteName(__this_04,pSVar29,(MethodInfo *)0x0);
        x = (__this_04->fields).super.super.m_Corners;
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        bVar6 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar6) {
          values = (System_String_array *)FUN_01bab718(string___TypeInfo,5);
          if (values == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          if ((int)values->max_length == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8d0();
          }
          values->m_Items[0] = StringLiteral_3406;
          thunk_FUN_01c20e04();
          if ((uint)values->max_length < 2) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8d0();
          }
          values->m_Items[1] = (EIKFGOCCOIE->fields).KPDPJONADPJ;
          thunk_FUN_01c20e04();
          if ((uint)values->max_length < 3) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8d0();
          }
          values->m_Items[2] = StringLiteral_423;
          thunk_FUN_01c20e04();
          if ((uint)values->max_length < 4) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8d0();
          }
          values->m_Items[3] = (__this_04->fields)._TexturePath;
          thunk_FUN_01c20e04();
          if ((uint)values->max_length < 5) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8d0();
          }
          values->m_Items[4] = StringLiteral_372;
          thunk_FUN_01c20e04();
          pSVar29 = System_String__Concat(values,(MethodInfo *)0x0);
          if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          UnityEngine_Debug__LogError((Il2CppObject *)pSVar29,(MethodInfo *)0x0);
          Nekki_SF2_GUI_ResolutionImage__set_SpriteName
                    (__this_04,StringLiteral_5705,(MethodInfo *)0x0);
        }
        pUVar12 = UnityEngine_Component__get_transform
                            ((UnityEngine_Component_o *)__this_04,(MethodInfo *)0x0);
        if (DAT_0455fa7f == '\0') {
          FUN_01bab630(&UnityEngine_Vector3_TypeInfo);
          DAT_0455fa7f = '\x01';
        }
        if (pUVar12 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pUVar24 = UnityEngine_Vector3_TypeInfo->static_fields;
        value.fields.z = (pUVar24->oneVector).fields.z * 0.85;
        value.fields.y = (pUVar24->oneVector).fields.y * 0.85;
        value.fields.x = (pUVar24->oneVector).fields.x * 0.85;
        UnityEngine_Transform__set_localScale(pUVar12,value,(MethodInfo *)0x0);
        (*(__this_04->klass->vtable)._45_SetNativeSize.methodPtr)
                  (__this_04,(__this_04->klass->vtable)._45_SetNativeSize.method);
      }
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_90,Method_System_Collections_Generic_List_Enumerator<PKKLIJLIKGF>_Dispose__);
    pNVar10 = (__this->fields).SlotCount;
    if ((pNVar10 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) ||
       (pUVar11 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)pNVar10,(MethodInfo *)0x0),
       pUVar11 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03667388;
    UnityEngine_GameObject__SetActive(pUVar11,false,(MethodInfo *)0x0);
    pUVar12 = (__this->fields).PerkContainer;
    if ((pUVar12 == (UnityEngine_Transform_o *)0x0) ||
       (pUVar11 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)pUVar12,(MethodInfo *)0x0),
       pUVar11 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03667388;
    bVar6 = true;
    goto LAB_03667240;
  }
  goto LAB_03667388;
}

