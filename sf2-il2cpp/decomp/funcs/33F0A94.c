// FCJBEKHDLAF$$IPMGBOEPCHE @ RVA 0x33F0A94

void FCJBEKHDLAF__IPMGBOEPCHE(FCJBEKHDLAF_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  uint uVar2;
  long lVar3;
  Il2CppObject *item;
  bool bVar4;
  MMDDDDFHOLG_o *pMVar5;
  System_Collections_Generic_List_OLKKAIFGGAK__o *pSVar6;
  OLKKAIFGGAK_o *__this_00;
  IPPEHAJADOO_o *pIVar7;
  BEPJMNAHCAD_o *pBVar8;
  MNLIBPAOCLG_o *pMVar9;
  MethodInfo *pMVar10;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  MethodInfo *extraout_x1_03;
  MethodInfo *extraout_x1_04;
  MethodInfo *extraout_x1_05;
  MethodInfo *extraout_x1_06;
  MethodInfo *extraout_x1_07;
  MethodInfo *method_00;
  MethodInfo *in_x2;
  MethodInfo *in_x3;
  JIMKCICMMIL_o *pJVar11;
  OPNFCOGALLI_o *pOVar12;
  ECENNHNBAME_o *pEVar13;
  OLKKAIFGGAK_array *pOVar14;
  PJKHAJKEHEL_o *pPVar15;
  MGNPHCAAEIO_StaticFields *pMVar16;
  int iVar17;
  Nekki_SF2_GUI_Fight_PreFight_o *pNVar18;
  float fVar19;
  float fVar20;
  undefined1 auVar21 [16];
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_c0;
  System_Collections_Generic_List_Enumerator_T__o local_a8;
  System_Collections_Generic_List_Enumerator_T__o local_90;
  
  auVar21._8_8_ = method;
  auVar21._0_8_ = __this;
  if ((DAT_04567f0d & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OLKKAIFGGAK>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OLKKAIFGGAK>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OLKKAIFGGAK>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OLKKAIFGGAK>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OLKKAIFGGAK>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OLKKAIFGGAK>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OLKKAIFGGAK>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OLKKAIFGGAK>_get_Item__);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    auVar21 = FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04567f0d = 1;
  }
  local_90.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_90.fields._index = 0;
  local_90.fields._version = 0;
  local_90.fields._current = (Il2CppObject *)0x0;
  pJVar11 = (__this->fields).ODIAFMNGOLA;
  if (pJVar11 != (JIMKCICMMIL_o *)0x0) {
    if ((pJVar11->fields).BLGIPOEBHGA != false) {
      (__this->fields).LKIMJGEKPIG = (__this->fields).LKIMJGEKPIG + 1;
    }
    if ((__this->fields).FDMHAMJOCML != false) {
      FCJBEKHDLAF__AOJCHMAKCBE(auVar21._0_8_,auVar21._8_8_,in_x2);
      (__this->fields).FDMHAMJOCML = false;
    }
    pMVar5 = (__this->fields).POEGCOJFMDB;
    (__this->fields).OCFEMJAOIIH = false;
    if (pMVar5 != (MMDDDDFHOLG_o *)0x0) {
      MMDDDDFHOLG__BDHAMOEKNNK(pMVar5,(MethodInfo *)0x0);
      pSVar6 = (__this->fields).IILLHHPGGKA;
      if (pSVar6 != (System_Collections_Generic_List_OLKKAIFGGAK__o *)0x0) {
        iVar17 = 0;
        do {
          if ((pSVar6->fields)._size <= iVar17) {
            if ((__this->fields).OCFEMJAOIIH != false) {
              (__this->fields).HBPBBMNPNGH = (__this->fields).HBPBBMNPNGH + 1;
            }
            pMVar10 = (MethodInfo *)(__this->fields).NEHLIEOGFEK;
            if (pMVar10 == (MethodInfo *)0x0) break;
            if (1 < *(int *)&pMVar10->name) {
              FCJBEKHDLAF__KAEFPBLBKJH
                        (__this,(System_Collections_Generic_List_OLKKAIFGGAK__o *)pMVar10,in_x2);
              pMVar10 = (MethodInfo *)(__this->fields).NEHLIEOGFEK;
              if (pMVar10 == (MethodInfo *)0x0) break;
            }
            iVar1 = *(int32_t *)&pMVar10->name;
            iVar17 = *(int32_t *)((long)&pMVar10->name + 4);
            *(int32_t *)&pMVar10->name = 0;
            *(int *)((long)&pMVar10->name + 4) = iVar17 + 1;
            if (0 < iVar1) {
              in_x3 = (MethodInfo *)0x0;
              System_Array__Clear((System_Array_o *)
                                  ((System_Collections_Generic_List_OLKKAIFGGAK__Fields *)
                                  &pMVar10->invoker_method)->_items,0,iVar1,(MethodInfo *)0x0);
              pMVar10 = extraout_x1;
            }
            pSVar6 = (__this->fields).AGOBPAPPBEM;
            if (pSVar6 != (System_Collections_Generic_List_OLKKAIFGGAK__o *)0x0) {
              if ((pSVar6->fields)._size < 1) goto LAB_034f0df0;
              System_Collections_Generic_List<object>__GetEnumerator
                        (&local_a8,(System_Collections_Generic_List_object__o *)pSVar6,
                         Method_System_Collections_Generic_List<OLKKAIFGGAK>_GetEnumerator__);
              local_90.fields._index = local_a8.fields._index;
              local_90.fields._version = local_a8.fields._version;
              local_90.fields._list = local_a8.fields._list;
              local_90.fields._current = local_a8.fields._current;
              while (bVar4 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                       (&local_90,
                                        Method_System_Collections_Generic_List_Enumerator<OLKKAIFGGAK>_MoveNext__
                                       ), item = local_90.fields._current, bVar4) {
                if ((OLKKAIFGGAK_o *)local_90.fields._current == (OLKKAIFGGAK_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                OLKKAIFGGAK__BDHAMOEKNNK
                          ((OLKKAIFGGAK_o *)local_90.fields._current,(MethodInfo *)0x0);
                lVar3 = Method_System_Collections_Generic_List<OLKKAIFGGAK>_Add__;
                pSVar6 = (__this->fields).IILLHHPGGKA;
                if (pSVar6 == (System_Collections_Generic_List_OLKKAIFGGAK__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                pOVar14 = (pSVar6->fields)._items;
                (pSVar6->fields)._version = (pSVar6->fields)._version + 1;
                if (pOVar14 == (OLKKAIFGGAK_array *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                uVar2 = (pSVar6->fields)._size;
                if (uVar2 < (uint)pOVar14->max_length) {
                  (pSVar6->fields)._size = uVar2 + 1;
                  pOVar14->m_Items[(int)uVar2] = (OLKKAIFGGAK_o *)item;
                  thunk_FUN_01c20e04(pOVar14->m_Items + (int)uVar2,item);
                }
                else {
                  System_Collections_Generic_List<object>__AddWithResize
                            ((System_Collections_Generic_List_object__o *)pSVar6,item,
                             *(MethodInfo_26E4DAC **)
                              (*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
                }
              }
              System_Collections_Generic_List_Enumerator<object>__Dispose
                        (&local_90,
                         Method_System_Collections_Generic_List_Enumerator<OLKKAIFGGAK>_Dispose__);
              pSVar6 = (__this->fields).AGOBPAPPBEM;
              if (pSVar6 != (System_Collections_Generic_List_OLKKAIFGGAK__o *)0x0) {
                iVar1 = (pSVar6->fields)._size;
                (pSVar6->fields)._size = 0;
                (pSVar6->fields)._version = (pSVar6->fields)._version + 1;
                pMVar10 = extraout_x1_00;
                if (0 < iVar1) {
                  in_x3 = (MethodInfo *)0x0;
                  System_Array__Clear((System_Array_o *)(pSVar6->fields)._items,0,iVar1,
                                      (MethodInfo *)0x0);
                  pMVar10 = extraout_x1_01;
                }
LAB_034f0df0:
                if ((__this->fields).PLEACDNOHFC != false) {
                  FCJBEKHDLAF__EPLFGHIGEAH(__this,true,false,in_x3);
                  pMVar10 = extraout_x1_02;
                }
                pPVar15 = (__this->fields).KCHOEJOHIMM;
                if (pPVar15 != (PJKHAJKEHEL_o *)0x0) {
                  if ((pPVar15->fields).LMKHOJFOPEB == false) {
                    FCJBEKHDLAF__PGOBKICCDAG(__this,pMVar10);
                    pIVar7 = (__this->fields).JJPMCDACBFG;
                    if (pIVar7 == (IPPEHAJADOO_o *)0x0) break;
                    IPPEHAJADOO__CEACPADMPKJ(pIVar7,(MethodInfo *)0x0);
                    pSVar6 = (__this->fields).IILLHHPGGKA;
                    if (pSVar6 == (System_Collections_Generic_List_OLKKAIFGGAK__o *)0x0) break;
                    System_Collections_Generic_List<object>__GetEnumerator
                              (&local_a8,(System_Collections_Generic_List_object__o *)pSVar6,
                               Method_System_Collections_Generic_List<OLKKAIFGGAK>_GetEnumerator__);
                    local_90.fields._index = local_a8.fields._index;
                    local_90.fields._version = local_a8.fields._version;
                    local_90.fields._list = local_a8.fields._list;
                    local_90.fields._current = local_a8.fields._current;
                    while (bVar4 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                             (&local_90,
                                              Method_System_Collections_Generic_List_Enumerator<OLKKAIFGGAK>_MoveNext__
                                             ), bVar4) {
                      if ((OLKKAIFGGAK_o *)local_90.fields._current == (OLKKAIFGGAK_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01bab8c8();
                      }
                      OLKKAIFGGAK__FJKLMBLJPGA
                                ((OLKKAIFGGAK_o *)local_90.fields._current,(MethodInfo *)0x0);
                    }
                    System_Collections_Generic_List_Enumerator<object>__Dispose
                              (&local_90,
                               Method_System_Collections_Generic_List_Enumerator<OLKKAIFGGAK>_Dispose__
                              );
                  }
                  pIVar7 = (__this->fields).JJPMCDACBFG;
                  if (pIVar7 != (IPPEHAJADOO_o *)0x0) {
                    IPPEHAJADOO__BDHAMOEKNNK(pIVar7,(MethodInfo *)0x0);
                    pMVar5 = (__this->fields).POEGCOJFMDB;
                    if (pMVar5 != (MMDDDDFHOLG_o *)0x0) {
                      MMDDDDFHOLG__KJNFLGENAAB(pMVar5,(MethodInfo *)0x0);
                      pMVar10 = extraout_x1_03;
                      if ((__this->fields).HEGBKEFEJDD != false) {
                        FCJBEKHDLAF__CPPKPCGDCAJ(__this,1,3,in_x3);
                        pBVar8 = (__this->fields).FAJCMHDLBEJ;
                        if (pBVar8 == (BEPJMNAHCAD_o *)0x0) break;
                        BEPJMNAHCAD__EDKFALNMGAN(pBVar8,(MethodInfo *)0x0);
                        pBVar8 = (__this->fields).FAJCMHDLBEJ;
                        if (pBVar8 == (BEPJMNAHCAD_o *)0x0) break;
                        BEPJMNAHCAD__INCPDIIPMOC(pBVar8,(MethodInfo *)0x0);
                        pBVar8 = (__this->fields).FAJCMHDLBEJ;
                        if ((pBVar8 == (BEPJMNAHCAD_o *)0x0) ||
                           (pMVar9 = (pBVar8->fields).LIICCFBEOLC, pMVar9 == (MNLIBPAOCLG_o *)0x0))
                        break;
                        MNLIBPAOCLG__HFCJLBGBGPI(pMVar9,(MethodInfo *)0x0);
                        pBVar8 = (__this->fields).FAJCMHDLBEJ;
                        if ((pBVar8 == (BEPJMNAHCAD_o *)0x0) ||
                           (pMVar9 = (pBVar8->fields).LIICCFBEOLC, pMVar9 == (MNLIBPAOCLG_o *)0x0))
                        break;
                        MNLIBPAOCLG__GDKDCGFCBIH(pMVar9,(MethodInfo *)0x0);
                        pMVar10 = extraout_x1_04;
                      }
                      if ((__this->fields).FJCOCMFENFO != false) {
                        (__this->fields).FJCOCMFENFO = false;
                        FCJBEKHDLAF__KNLFICNFHBE(__this,pMVar10);
                        pMVar10 = extraout_x1_05;
                      }
                      FCJBEKHDLAF__DHKCOFBMIEL(__this,pMVar10);
                      pNVar18 = (__this->fields).HIBPKNAIPLH;
                      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                        thunk_FUN_01ba7564();
                      }
                      bVar4 = UnityEngine_Object__op_Inequality
                                        ((UnityEngine_Object_o *)pNVar18,(UnityEngine_Object_o *)0x0
                                         ,(MethodInfo *)0x0);
                      pMVar10 = extraout_x1_06;
                      if (bVar4) {
                        pNVar18 = (__this->fields).HIBPKNAIPLH;
                        if (pNVar18 == (Nekki_SF2_GUI_Fight_PreFight_o *)0x0) break;
                        Nekki_SF2_GUI_Fight_PreFight__Render(pNVar18,(MethodInfo *)0x0);
                        pMVar10 = extraout_x1_07;
                      }
                      FCJBEKHDLAF__PKCCGFBBOFM(__this,pMVar10);
                      FCJBEKHDLAF__AOFGLCEIIKN(__this,method_00);
                      if ((__this->fields).AHNAIKFDANF == false) {
                        (__this->fields).NAHKMNMHBAA = 0.0;
                      }
                      else {
                        fVar20 = (__this->fields).NAHKMNMHBAA + 0.016666668;
                        (__this->fields).NAHKMNMHBAA = fVar20;
                        if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
                          thunk_FUN_01ba7564();
                        }
                        pMVar16 = MGNPHCAAEIO_TypeInfo->static_fields;
                        local_c0.fakeValueActive = (pMVar16->AKPHDPKNMIC).fields.fakeValueActive;
                        local_c0.inited = (pMVar16->AKPHDPKNMIC).fields.inited;
                        local_c0._18_2_ = *(undefined2 *)&(pMVar16->AKPHDPKNMIC).fields.field_0x12;
                        local_c0.hiddenValueOldByte4.fields =
                             (pMVar16->AKPHDPKNMIC).fields.hiddenValueOldByte4.fields;
                        local_c0.fakeValue = (pMVar16->AKPHDPKNMIC).fields.fakeValue;
                        local_c0.currentCryptoKey = (pMVar16->AKPHDPKNMIC).fields.currentCryptoKey;
                        local_c0.hiddenValue = (pMVar16->AKPHDPKNMIC).fields.hiddenValue;
                        fVar19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                                           ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)
                                            &local_c0,(MethodInfo *)0x0);
                        if (fVar19 <= fVar20) {
                          FCJBEKHDLAF__EPLFGHIGEAH(__this,false,true,in_x3);
                        }
                      }
                      return;
                    }
                  }
                }
              }
            }
            break;
          }
          in_x2 = Method_System_Collections_Generic_List<OLKKAIFGGAK>_get_Item__;
          __this_00 = (OLKKAIFGGAK_o *)
                      System_Collections_Generic_List<object>__get_Item
                                ((System_Collections_Generic_List_object__o *)pSVar6,iVar17,
                                 (MethodInfo_26E4ADC *)
                                 Method_System_Collections_Generic_List<OLKKAIFGGAK>_get_Item__);
          if (__this_00 == (OLKKAIFGGAK_o *)0x0) break;
          bVar4 = OLKKAIFGGAK__FKONICCMMDK(__this_00,(MethodInfo *)0x0);
          OLKKAIFGGAK__BDHAMOEKNNK(__this_00,(MethodInfo *)0x0);
          lVar3 = Method_System_Collections_Generic_List<OLKKAIFGGAK>_Add__;
          if (bVar4) {
            pOVar12 = (__this_00->fields).OAKOFJJIOFF;
            if (pOVar12 == (OPNFCOGALLI_o *)0x0) break;
            pEVar13 = (pOVar12->fields).NDBPNFLAKDL;
            if ((pEVar13 != (ECENNHNBAME_o *)0x0) &&
               ((pEVar13->fields).NECLMKFFDCO == (__this->fields).PEELENPNLHJ)) {
              pSVar6 = (__this->fields).NEHLIEOGFEK;
              if (pSVar6 == (System_Collections_Generic_List_OLKKAIFGGAK__o *)0x0) break;
              pOVar14 = (pSVar6->fields)._items;
              (pSVar6->fields)._version = (pSVar6->fields)._version + 1;
              if (pOVar14 == (OLKKAIFGGAK_array *)0x0) break;
              uVar2 = (pSVar6->fields)._size;
              if (uVar2 < (uint)pOVar14->max_length) {
                (pSVar6->fields)._size = uVar2 + 1;
                pOVar14->m_Items[(int)uVar2] = __this_00;
                thunk_FUN_01c20e04(pOVar14->m_Items + (int)uVar2,__this_00);
              }
              else {
                in_x2 = *(MethodInfo **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70);
                System_Collections_Generic_List<object>__AddWithResize
                          ((System_Collections_Generic_List_object__o *)pSVar6,
                           (Il2CppObject *)__this_00,(MethodInfo_26E4DAC *)in_x2);
              }
            }
          }
          pSVar6 = (__this->fields).IILLHHPGGKA;
          iVar17 = iVar17 + 1;
        } while (pSVar6 != (System_Collections_Generic_List_OLKKAIFGGAK__o *)0x0);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

