// Nekki.SF2.GUI.Map.BattlePrize$$Init @ RVA 0x3218358

void Nekki_SF2_GUI_Map_BattlePrize__Init
               (Nekki_SF2_GUI_Map_BattlePrize_o *__this,int64_t DCDLMCEEOCC,int64_t IPGOFHMGFOI,
               JHBHHHKEFOO_o *NNHNNAKKKPL,float LFLFLNNAHFN,float MECEHFOLHIG,int32_t NJBICBHLOMO,
               MethodInfo *method)

{
  int32_t length;
  Il2CppObject *pIVar1;
  bool bVar2;
  System_Collections_Generic_List_BattlePrizeElement__o *pSVar3;
  UnityEngine_GameObject_o *pUVar4;
  Nekki_SF2_GUI_ResolutionImage_o *__this_00;
  Nekki_SF2_GUI_Map_BattlePrizeElement_o *pNVar5;
  System_Collections_Generic_List_HFNLANEMDFI__o *__this_01;
  MGNPHCAAEIO_HLAKGGFFNAO_o *__this_02;
  HBNENINHPGF_o *pHVar6;
  MethodInfo *pMVar7;
  System_Collections_Generic_List_EFOFNLEFLNH__o *__this_03;
  MGNPHCAAEIO_MACDOBFPDPP_o *__this_04;
  HGLELMDNMMA_o *__this_05;
  System_String_o *pSVar8;
  System_Collections_Generic_List_OCOEAJMJEOP__o *__this_06;
  DOPEEDABNEK_o *__this_07;
  HOOAAGABMBL_o *IKKAMAMLIKA;
  GGHCLMEFIGO_o *__this_08;
  IGFGDDANEPE_o *pIVar9;
  MethodInfo *method_00;
  MethodInfo *method_01;
  ACHLOMELAJE_o *pAVar10;
  undefined4 in_register_00005004;
  System_Collections_Generic_List_Enumerator_T__o local_108;
  System_Collections_Generic_List_Enumerator_T__o local_f0;
  System_Collections_Generic_List_Enumerator_T__o local_d0;
  System_Collections_Generic_List_Enumerator_T__o local_b0;
  System_Collections_Generic_List_Enumerator_T__o local_90;
  
  pMVar7 = (MethodInfo *)IPGOFHMGFOI;
  if ((DAT_04566ee5 & 1) == 0) {
    FUN_01bab630(CONCAT44(in_register_00005004,LFLFLNNAHFN),
                 &Method_System_Collections_Generic_List_Enumerator<HFNLANEMDFI>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OCOEAJMJEOP>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<EFOFNLEFLNH>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BattlePrizeElement>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<EFOFNLEFLNH>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BattlePrizeElement>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HFNLANEMDFI>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OCOEAJMJEOP>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HFNLANEMDFI>_get_Current__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<BattlePrizeElement>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OCOEAJMJEOP>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<EFOFNLEFLNH>_get_Current__);
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<BattlePrizeElement>__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BattlePrizeElement>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<EFOFNLEFLNH>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BattlePrizeElement>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OCOEAJMJEOP>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HFNLANEMDFI>_GetEnumerator__);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<GameObject>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_9095);
    DAT_04566ee5 = 1;
  }
  local_90.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_90.fields._index = 0;
  local_90.fields._version = 0;
  local_90.fields._current = (Il2CppObject *)0x0;
  local_b0.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_b0.fields._index = 0;
  local_b0.fields._version = 0;
  local_b0.fields._current = (Il2CppObject *)0x0;
  local_d0.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_d0.fields._index = 0;
  local_d0.fields._version = 0;
  local_d0.fields._current = (Il2CppObject *)0x0;
  local_f0.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_f0.fields._index = 0;
  local_f0.fields._version = 0;
  local_f0.fields._current = (Il2CppObject *)0x0;
  pSVar3 = (__this->fields).JMAMFIMIIFA;
  if (pSVar3 != (System_Collections_Generic_List_BattlePrizeElement__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_108,(System_Collections_Generic_List_object__o *)pSVar3,
               Method_System_Collections_Generic_List<BattlePrizeElement>_GetEnumerator__);
    local_90.fields._index = local_108.fields._index;
    local_90.fields._version = local_108.fields._version;
    local_90.fields._list = local_108.fields._list;
    local_90.fields._current = local_108.fields._current;
    while (bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_90,
                              Method_System_Collections_Generic_List_Enumerator<BattlePrizeElement>_MoveNext__
                             ), bVar2) {
      if ((HFNLANEMDFI_o *)local_90.fields._current == (HFNLANEMDFI_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pUVar4 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)local_90.fields._current,(MethodInfo *)0x0);
      Util__JODGPLBHHIA(pUVar4,false,pMVar7);
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_90,
               Method_System_Collections_Generic_List_Enumerator<BattlePrizeElement>_Dispose__);
    pSVar3 = (__this->fields).JMAMFIMIIFA;
    if (pSVar3 != (System_Collections_Generic_List_BattlePrizeElement__o *)0x0) {
      length = (pSVar3->fields)._size;
      (pSVar3->fields)._size = 0;
      (pSVar3->fields)._version = (pSVar3->fields)._version + 1;
      if (0 < length) {
        System_Array__Clear((System_Array_o *)(pSVar3->fields)._items,0,length,(MethodInfo *)0x0);
      }
      __this_00 = (__this->fields)._itemIcon;
      if ((__this_00 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
         (pUVar4 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
         pUVar4 != (UnityEngine_GameObject_o *)0x0)) {
        UnityEngine_GameObject__SetActive(pUVar4,false,(MethodInfo *)0x0);
        (__this->fields).MOOOFNAMCME = MECEHFOLHIG;
        pSVar8 = StringLiteral_9095;
        (__this->fields).DKDLLBENAFE = 0.0;
        if (0 < DCDLMCEEOCC) {
          pUVar4 = (__this->fields)._prizeElemPrefab;
          if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          pUVar4 = (UnityEngine_GameObject_o *)
                   UnityEngine_Object__Instantiate<object>
                             ((Il2CppObject *)pUVar4,
                              Method_UnityEngine_Object_Instantiate<GameObject>__);
          if (pUVar4 == (UnityEngine_GameObject_o *)0x0) goto LAB_03318acc;
          pNVar5 = (Nekki_SF2_GUI_Map_BattlePrizeElement_o *)
                   UnityEngine_GameObject__GetComponent<object>
                             (pUVar4,
                              Method_UnityEngine_GameObject_GetComponent<BattlePrizeElement>__);
          if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo);
          }
          if (DAT_04565b7d == '\0') {
            FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
            DAT_04565b7d = '\x01';
          }
          if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          pAVar10 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
          if ((pAVar10 == (ACHLOMELAJE_o *)0x0) ||
             (pNVar5 == (Nekki_SF2_GUI_Map_BattlePrizeElement_o *)0x0)) goto LAB_03318acc;
          Nekki_SF2_GUI_Map_BattlePrizeElement__Init
                    (pNVar5,(pAVar10->fields).FAAJGHKHEBI,DCDLMCEEOCC,NJBICBHLOMO,1.0,
                     (MethodInfo *)0x0);
          Nekki_SF2_GUI_Map_BattlePrize__CCLACGABBDP(__this,pNVar5,(MethodInfo *)DCDLMCEEOCC);
        }
        if (0 < IPGOFHMGFOI) {
          pUVar4 = (__this->fields)._prizeElemPrefab;
          if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          pUVar4 = (UnityEngine_GameObject_o *)
                   UnityEngine_Object__Instantiate<object>
                             ((Il2CppObject *)pUVar4,
                              Method_UnityEngine_Object_Instantiate<GameObject>__);
          if ((pUVar4 == (UnityEngine_GameObject_o *)0x0) ||
             (pNVar5 = (Nekki_SF2_GUI_Map_BattlePrizeElement_o *)
                       UnityEngine_GameObject__GetComponent<object>
                                 (pUVar4,
                                  Method_UnityEngine_GameObject_GetComponent<BattlePrizeElement>__),
             pNVar5 == (Nekki_SF2_GUI_Map_BattlePrizeElement_o *)0x0)) goto LAB_03318acc;
          Nekki_SF2_GUI_Map_BattlePrizeElement__Init
                    (pNVar5,pSVar8,IPGOFHMGFOI,NJBICBHLOMO,1.0,(MethodInfo *)0x0);
          Nekki_SF2_GUI_Map_BattlePrize__CCLACGABBDP(__this,pNVar5,(MethodInfo *)IPGOFHMGFOI);
        }
        if ((NNHNNAKKKPL != (JHBHHHKEFOO_o *)0x0) &&
           (__this_01 = (NNHNNAKKKPL->fields).GMCEHJAIFBJ,
           __this_01 != (System_Collections_Generic_List_HFNLANEMDFI__o *)0x0)) {
          System_Collections_Generic_List<object>__GetEnumerator
                    (&local_108,(System_Collections_Generic_List_object__o *)__this_01,
                     Method_System_Collections_Generic_List<HFNLANEMDFI>_GetEnumerator__);
          local_b0.fields._index = local_108.fields._index;
          local_b0.fields._version = local_108.fields._version;
          local_b0.fields._list = local_108.fields._list;
          local_b0.fields._current = local_108.fields._current;
          while( true ) {
            bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                              (&local_b0,
                               Method_System_Collections_Generic_List_Enumerator<HFNLANEMDFI>_MoveNext__
                              );
            pIVar1 = local_b0.fields._current;
            if (!bVar2) break;
            if ((HFNLANEMDFI_o *)local_b0.fields._current == (HFNLANEMDFI_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            if ((((HFNLANEMDFI_Fields *)((long)local_b0.fields._current + 0x10))->super).JGPCHLGAPJD
                != false) {
              if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              __this_02 = MGNPHCAAEIO_TypeInfo->static_fields->BHAAICEFMBC;
              if (__this_02 == (MGNPHCAAEIO_HLAKGGFFNAO_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              pHVar6 = MGNPHCAAEIO_HLAKGGFFNAO__BHJOLIJDBLO
                                 (__this_02,
                                  ((HFNLANEMDFI_Fields *)((long)pIVar1 + 0x10))->JIJLBFGKNJK,
                                  (MethodInfo *)0x0);
              if (pHVar6 != (HBNENINHPGF_o *)0x0) {
                pMVar7 = (MethodInfo *)
                         HFNLANEMDFI__OKHNKAEHOHG((HFNLANEMDFI_o *)pIVar1,(MethodInfo *)0x0);
                pUVar4 = (__this->fields)._prizeElemPrefab;
                if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564();
                }
                pUVar4 = (UnityEngine_GameObject_o *)
                         UnityEngine_Object__Instantiate<object>
                                   ((Il2CppObject *)pUVar4,
                                    Method_UnityEngine_Object_Instantiate<GameObject>__);
                if (pUVar4 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                pNVar5 = (Nekki_SF2_GUI_Map_BattlePrizeElement_o *)
                         UnityEngine_GameObject__GetComponent<object>
                                   (pUVar4,
                                    Method_UnityEngine_GameObject_GetComponent<BattlePrizeElement>__
                                   );
                if (pNVar5 == (Nekki_SF2_GUI_Map_BattlePrizeElement_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                Nekki_SF2_GUI_Map_BattlePrizeElement__Init
                          (pNVar5,(pHVar6->fields)._PGCEKJLODEJ_k__BackingField,(int64_t)pMVar7,
                           NJBICBHLOMO,1.0,(MethodInfo *)0x0);
                Nekki_SF2_GUI_Map_BattlePrize__CCLACGABBDP(__this,pNVar5,pMVar7);
              }
            }
          }
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (&local_b0,
                     Method_System_Collections_Generic_List_Enumerator<HFNLANEMDFI>_Dispose__);
          __this_03 = (NNHNNAKKKPL->fields).OJFMFMHCPOA;
          if (__this_03 != (System_Collections_Generic_List_EFOFNLEFLNH__o *)0x0) {
            System_Collections_Generic_List<object>__GetEnumerator
                      (&local_108,(System_Collections_Generic_List_object__o *)__this_03,
                       Method_System_Collections_Generic_List<EFOFNLEFLNH>_GetEnumerator__);
            local_d0.fields._index = local_108.fields._index;
            local_d0.fields._version = local_108.fields._version;
            local_d0.fields._list = local_108.fields._list;
            local_d0.fields._current = local_108.fields._current;
            while( true ) {
              bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                (&local_d0,
                                 Method_System_Collections_Generic_List_Enumerator<EFOFNLEFLNH>_MoveNext__
                                );
              pIVar1 = local_d0.fields._current;
              if (!bVar2) break;
              if ((HFNLANEMDFI_o *)local_d0.fields._current == (HFNLANEMDFI_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              if ((((HFNLANEMDFI_Fields *)((long)local_d0.fields._current + 0x10))->super).
                  JGPCHLGAPJD != false) {
                if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564();
                }
                __this_04 = MGNPHCAAEIO_TypeInfo->static_fields->JIKLPLFKEDI;
                if (__this_04 == (MGNPHCAAEIO_MACDOBFPDPP_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                __this_05 = MGNPHCAAEIO_MACDOBFPDPP__HNCMGLINNDO
                                      (__this_04,
                                       ((HFNLANEMDFI_Fields *)((long)pIVar1 + 0x10))->JIJLBFGKNJK,
                                       (MethodInfo *)0x0);
                if (__this_05 != (HGLELMDNMMA_o *)0x0) {
                  pMVar7 = (MethodInfo *)
                           (long)(int)((HFNLANEMDFI_Fields *)((long)pIVar1 + 0x10))->AICMABLCDED;
                  pUVar4 = (__this->fields)._prizeElemPrefab;
                  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                    thunk_FUN_01ba7564();
                  }
                  pUVar4 = (UnityEngine_GameObject_o *)
                           UnityEngine_Object__Instantiate<object>
                                     ((Il2CppObject *)pUVar4,
                                      Method_UnityEngine_Object_Instantiate<GameObject>__);
                  if (pUVar4 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01bab8c8();
                  }
                  pNVar5 = (Nekki_SF2_GUI_Map_BattlePrizeElement_o *)
                           UnityEngine_GameObject__GetComponent<object>
                                     (pUVar4,
                                      Method_UnityEngine_GameObject_GetComponent<BattlePrizeElement>__
                                     );
                  pSVar8 = HGLELMDNMMA__IEOHBNIIMFL(__this_05,(MethodInfo *)0x0);
                  if (pNVar5 == (Nekki_SF2_GUI_Map_BattlePrizeElement_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01bab8c8();
                  }
                  Nekki_SF2_GUI_Map_BattlePrizeElement__Init
                            (pNVar5,pSVar8,(int64_t)pMVar7,NJBICBHLOMO,1.0,(MethodInfo *)0x0);
                  Nekki_SF2_GUI_Map_BattlePrize__CCLACGABBDP(__this,pNVar5,pMVar7);
                }
              }
            }
            System_Collections_Generic_List_Enumerator<object>__Dispose
                      (&local_d0,
                       Method_System_Collections_Generic_List_Enumerator<EFOFNLEFLNH>_Dispose__);
            Nekki_SF2_GUI_Map_BattlePrize__BIGGGNJDJMO(__this,method_00);
            Nekki_SF2_GUI_Map_BattlePrize__ODOKFKCAILG(__this,method_01);
            __this_06 = (NNHNNAKKKPL->fields).GHAAKPDHIJJ;
            if (__this_06 != (System_Collections_Generic_List_OCOEAJMJEOP__o *)0x0) {
              System_Collections_Generic_List<object>__GetEnumerator
                        (&local_108,(System_Collections_Generic_List_object__o *)__this_06,
                         Method_System_Collections_Generic_List<OCOEAJMJEOP>_GetEnumerator__);
              local_f0.fields._index = local_108.fields._index;
              local_f0.fields._version = local_108.fields._version;
              local_f0.fields._list = local_108.fields._list;
              local_f0.fields._current = local_108.fields._current;
              do {
                do {
                  bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                    (&local_f0,
                                     Method_System_Collections_Generic_List_Enumerator<OCOEAJMJEOP>_MoveNext__
                                    );
                  pIVar1 = local_f0.fields._current;
                  if (!bVar2) goto LAB_03318a60;
                  if ((HFNLANEMDFI_o *)local_f0.fields._current == (HFNLANEMDFI_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01bab8c8();
                  }
                } while ((((HFNLANEMDFI_Fields *)((long)local_f0.fields._current + 0x10))->super).
                         JGPCHLGAPJD == false);
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
                __this_07 = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
                if (__this_07 == (DOPEEDABNEK_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                IKKAMAMLIKA = DOPEEDABNEK__CKKIPBAIEMN
                                        (__this_07,
                                         ((HFNLANEMDFI_Fields *)((long)pIVar1 + 0x10))->JIJLBFGKNJK,
                                         (MethodInfo *)0x0);
                if (DAT_04565b7d == '\0') {
                  FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                  DAT_04565b7d = '\x01';
                }
                if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564();
                }
                pAVar10 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
                if (pAVar10 == (ACHLOMELAJE_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                __this_08 = (pAVar10->fields).OIDPLCLELEN;
                if (__this_08 == (GGHCLMEFIGO_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                pMVar7 = (MethodInfo *)0x0;
                pIVar9 = GGHCLMEFIGO__JNFIBDBHNOA(__this_08,IKKAMAMLIKA,(MethodInfo *)0x0);
              } while (pIVar9 != (IGFGDDANEPE_o *)0x0);
              Nekki_SF2_GUI_Map_BattlePrize__AddItem(__this,IKKAMAMLIKA,pMVar7);
LAB_03318a60:
              System_Collections_Generic_List_Enumerator<object>__Dispose
                        (&local_f0,
                         Method_System_Collections_Generic_List_Enumerator<OCOEAJMJEOP>_Dispose__);
              return;
            }
          }
        }
      }
    }
  }
LAB_03318acc:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

