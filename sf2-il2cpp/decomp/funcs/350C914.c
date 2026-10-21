// Nekki.SF2.GUI.Dialogs.NewsDialog$$CFPJAFNAAME @ RVA 0x350C914

void Nekki_SF2_GUI_Dialogs_NewsDialog__CFPJAFNAAME
               (Nekki_SF2_GUI_Dialogs_NewsDialog_o *__this,MethodInfo *method)

{
  int32_t length;
  int iVar1;
  uint uVar2;
  long lVar3;
  bool bVar4;
  System_Collections_Generic_List_BCGLDKLKKDA__o *__this_00;
  Il2CppObject *pIVar5;
  Nekki_SF2_GUI_InfoButton_o *pNVar6;
  UnityEngine_GameObject_o *pUVar7;
  LabelButton_o *pLVar8;
  System_Action_object__o *pSVar9;
  UnityEngine_Transform_o *pUVar10;
  KKLJIDJBFEI_o *pKVar11;
  JMDPBFOCHHP_o *__this_01;
  JMDPBFOCHHP_ENBCJNLAHAC_o *item;
  System_Collections_Generic_List_JMDPBFOCHHP_ENBCJNLAHAC__o *pSVar12;
  JMDPBFOCHHP_ENBCJNLAHAC_array *pJVar13;
  Il2CppClass *__this_02;
  AHOEIGAOKEL_o *pAVar14;
  float fVar15;
  float ECCPLAMGAKE;
  UnityEngine_Vector3_o UVar16;
  System_Collections_Generic_List_Enumerator_T__o local_88;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  
  if ((DAT_045688d4 & 1) == 0) {
    FUN_01bab630(&System_Action<object>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<FLCGGKEODNC>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<FLCGGKEODNC>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<FLCGGKEODNC>_get_Current__);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<JMDPBFOCHHP_ENBCJNLAHAC>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<JMDPBFOCHHP_ENBCJNLAHAC>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<FLCGGKEODNC>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BCGLDKLKKDA>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<FLCGGKEODNC>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<JMDPBFOCHHP_ENBCJNLAHAC>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BCGLDKLKKDA>_get_Item__);
    DAT_045688d4 = 1;
  }
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).HAGOPBBNBGE;
  if (__this_00 != (System_Collections_Generic_List_BCGLDKLKKDA__o *)0x0) {
    if ((__this_00->fields)._size == 0) {
      return;
    }
    pIVar5 = System_Collections_Generic_List<object>__get_Item
                       ((System_Collections_Generic_List_object__o *)__this_00,0,
                        Method_System_Collections_Generic_List<BCGLDKLKKDA>_get_Item__);
    if (((pIVar5 != (Il2CppObject *)0x0) &&
        (__this_02 = pIVar5[6].klass, __this_02 != (Il2CppClass *)0x0)) &&
       (pNVar6 = (__this->fields)._infoButton, pNVar6 != (Nekki_SF2_GUI_InfoButton_o *)0x0)) {
      iVar1 = *(int *)&(__this_02->_1).namespaze;
      pUVar7 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pNVar6,(MethodInfo *)0x0);
      if (pUVar7 != (UnityEngine_GameObject_o *)0x0) {
        UnityEngine_GameObject__SetActive(pUVar7,false,(MethodInfo *)0x0);
        pLVar8 = (__this->fields).super._btnOK;
        if ((pLVar8 != (LabelButton_o *)0x0) &&
           (pUVar7 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pLVar8,(MethodInfo *)0x0),
           pUVar7 != (UnityEngine_GameObject_o *)0x0)) {
          UnityEngine_GameObject__SetActive(pUVar7,true,(MethodInfo *)0x0);
          pLVar8 = (__this->fields).super._btnOK;
          if (pLVar8 != (LabelButton_o *)0x0) {
            SFButton__RemoveAllEventListener((SFButton_o *)pLVar8,(MethodInfo *)0x0);
            pLVar8 = (__this->fields).super._btnOK;
            pSVar9 = (System_Action_object__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
            System_Action<object>___ctor();
            if (pLVar8 != (LabelButton_o *)0x0) {
              SFButton__AddEventListener((SFButton_o *)pLVar8,2,pSVar9,(MethodInfo *)0x0);
              pLVar8 = (__this->fields).super._btnOK;
              if (pLVar8 != (LabelButton_o *)0x0) {
                pUVar10 = UnityEngine_Component__get_transform
                                    ((UnityEngine_Component_o *)pLVar8,(MethodInfo *)0x0);
                UnityEngine_TransformExtensions__SetLocalPositionY(pUVar10,-500.0,(MethodInfo *)0x0)
                ;
                if (iVar1 < 1) {
                  return;
                }
                pLVar8 = (__this->fields).super._btnOK;
                if ((pLVar8 != (LabelButton_o *)0x0) &&
                   (pUVar7 = UnityEngine_Component__get_gameObject
                                       ((UnityEngine_Component_o *)pLVar8,(MethodInfo *)0x0),
                   pUVar7 != (UnityEngine_GameObject_o *)0x0)) {
                  UnityEngine_GameObject__SetActive(pUVar7,false,(MethodInfo *)0x0);
                  fVar15 = (float)(iVar1 * 100 + (iVar1 + 1) * 0x1e0);
                  ECCPLAMGAKE = fVar15 / (float)(iVar1 + 1);
                  if (iVar1 == 1) {
                    pLVar8 = (__this->fields).super._btnOK;
                    if ((pLVar8 == (LabelButton_o *)0x0) ||
                       (pUVar10 = UnityEngine_Component__get_transform
                                            ((UnityEngine_Component_o *)pLVar8,(MethodInfo *)0x0),
                       pUVar10 == (UnityEngine_Transform_o *)0x0)) goto LAB_0360cdc0;
                    UVar16 = UnityEngine_Transform__get_localPosition(pUVar10,(MethodInfo *)0x0);
                    fVar15 = UVar16.fields.x;
                  }
                  else {
                    fVar15 = ECCPLAMGAKE + fVar15 * -0.5;
                  }
                  pAVar14 = (__this->fields).LLBENMDKHBK;
                  pUVar7 = UnityEngine_Component__get_gameObject
                                     ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                  pSVar9 = (System_Action_object__o *)
                           thunk_FUN_01bda818(System_Action<object>_TypeInfo);
                  System_Action<object>___ctor();
                  if (pAVar14 != (AHOEIGAOKEL_o *)0x0) {
                    AHOEIGAOKEL__GIENGNEGHPJ
                              (pAVar14,fVar15,-500.0,ECCPLAMGAKE,pUVar7,pSVar9,__this,
                               (MethodInfo *)0x0);
                    pSVar12 = (__this->fields).MIALFHDFIKJ;
                    if (pSVar12 != (System_Collections_Generic_List_JMDPBFOCHHP_ENBCJNLAHAC__o *)0x0
                       ) {
                      length = (pSVar12->fields)._size;
                      (pSVar12->fields)._size = 0;
                      (pSVar12->fields)._version = (pSVar12->fields)._version + 1;
                      if (0 < length) {
                        System_Array__Clear((System_Array_o *)(pSVar12->fields)._items,0,length,
                                            (MethodInfo *)0x0);
                      }
                      System_Collections_Generic_List<object>__GetEnumerator
                                (&local_88,(System_Collections_Generic_List_object__o *)__this_02,
                                 Method_System_Collections_Generic_List<FLCGGKEODNC>_GetEnumerator__
                                );
                      local_70.fields._index = local_88.fields._index;
                      local_70.fields._version = local_88.fields._version;
                      local_70.fields._list = local_88.fields._list;
                      local_70.fields._current = local_88.fields._current;
                      fVar15 = 0.0;
                      while (bVar4 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                               (&local_70,
                                                Method_System_Collections_Generic_List_Enumerator<FLCGGKEODNC>_MoveNext__
                                               ), pIVar5 = local_70.fields._current, bVar4) {
                        if ((FLCGGKEODNC_o *)local_70.fields._current == (FLCGGKEODNC_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                          FUN_01bab8c8();
                        }
                        if (((FLCGGKEODNC_Fields *)((long)local_70.fields._current + 0x10))->
                            HPPDIEDAKEC == 8) {
                          pKVar11 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
                          if (pKVar11 == (KKLJIDJBFEI_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                            FUN_01bab8c8();
                          }
                          if ((pKVar11->fields).super._KKNAFGJEFJG_k__BackingField == false) {
                            ((FLCGGKEODNC_Fields *)((long)pIVar5 + 0x10))->KMJPPCLIEDG = false;
                          }
                        }
                        if (((FLCGGKEODNC_Fields *)((long)pIVar5 + 0x10))->KMJPPCLIEDG == false) {
                          bVar4 = PCOEHCPGBBG__BDLEIEHBFAD
                                            (((FLCGGKEODNC_Fields *)((long)pIVar5 + 0x10))->
                                             DMMDLLBOHNP,(MethodInfo *)0x0);
                          if (!bVar4) {
                            fVar15 = fVar15 + 0.5;
                          }
                        }
                        else {
                          fVar15 = fVar15 + 1.0;
                          if (((FLCGGKEODNC_Fields *)((long)pIVar5 + 0x10))->HPPDIEDAKEC == 8) {
                            if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
                              thunk_FUN_01ba7564();
                            }
                            __this_01 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
                            if (__this_01 == (JMDPBFOCHHP_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                              FUN_01bab8c8();
                            }
                            item = JMDPBFOCHHP__DIFLKMKBENA
                                             (__this_01,
                                              ((FLCGGKEODNC_Fields *)((long)pIVar5 + 0x10))->
                                              DMMDLLBOHNP,false,(MethodInfo *)0x0);
                            lVar3 = 
                            Method_System_Collections_Generic_List<JMDPBFOCHHP_ENBCJNLAHAC>_Add__;
                            if (item == (JMDPBFOCHHP_ENBCJNLAHAC_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                              FUN_01bab8c8();
                            }
                            if ((item->fields).NIHFMGMHLBN != false) {
                              pSVar12 = (__this->fields).MIALFHDFIKJ;
                              if (pSVar12 ==
                                  (System_Collections_Generic_List_JMDPBFOCHHP_ENBCJNLAHAC__o *)0x0)
                              {
                    /* WARNING: Subroutine does not return */
                                FUN_01bab8c8();
                              }
                              pJVar13 = (pSVar12->fields)._items;
                              (pSVar12->fields)._version = (pSVar12->fields)._version + 1;
                              if (pJVar13 == (JMDPBFOCHHP_ENBCJNLAHAC_array *)0x0) {
                    /* WARNING: Subroutine does not return */
                                FUN_01bab8c8();
                              }
                              uVar2 = (pSVar12->fields)._size;
                              if (uVar2 < (uint)pJVar13->max_length) {
                                (pSVar12->fields)._size = uVar2 + 1;
                                pJVar13->m_Items[(int)uVar2] = item;
                                thunk_FUN_01c20e04(pJVar13->m_Items + (int)uVar2);
                              }
                              else {
                                System_Collections_Generic_List<object>__AddWithResize
                                          ((System_Collections_Generic_List_object__o *)pSVar12,
                                           (Il2CppObject *)item,
                                           *(MethodInfo_26E4DAC **)
                                            (*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
                              }
                            }
                          }
                        }
                        pAVar14 = (__this->fields).LLBENMDKHBK;
                        if (pAVar14 == (AHOEIGAOKEL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                          FUN_01bab8c8();
                        }
                        AHOEIGAOKEL__BPHHDPIFBOO(pAVar14,(FLCGGKEODNC_o *)pIVar5,(MethodInfo *)0x0);
                      }
                      System_Collections_Generic_List_Enumerator<object>__Dispose
                                (&local_70,
                                 Method_System_Collections_Generic_List_Enumerator<FLCGGKEODNC>_Dispose__
                                );
                      pNVar6 = (__this->fields)._infoButton;
                      (__this->fields).CloseOnBuy = fVar15 <= 1.0;
                      if (pNVar6 != (Nekki_SF2_GUI_InfoButton_o *)0x0) {
                        pUVar7 = UnityEngine_Component__get_gameObject
                                           ((UnityEngine_Component_o *)pNVar6,(MethodInfo *)0x0);
                        pSVar12 = (__this->fields).MIALFHDFIKJ;
                        if ((pSVar12 !=
                             (System_Collections_Generic_List_JMDPBFOCHHP_ENBCJNLAHAC__o *)0x0) &&
                           (pUVar7 != (UnityEngine_GameObject_o *)0x0)) {
                          UnityEngine_GameObject__SetActive
                                    (pUVar7,0 < (pSVar12->fields)._size,(MethodInfo *)0x0);
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
LAB_0360cdc0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

