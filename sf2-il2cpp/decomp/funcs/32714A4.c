// Nekki.SF2.GUI.StrikeThroughTextLine$$ComputePositions @ RVA 0x32714A4

void Nekki_SF2_GUI_StrikeThroughTextLine__ComputePositions
               (Nekki_SF2_GUI_StrikeThroughTextLine_o *__this,
               Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_o *MMEECJEKHGB,MethodInfo *method)

{
  uint uVar1;
  int iVar2;
  int32_t FEDCJPALCBN;
  long lVar3;
  bool bVar4;
  int32_t iVar5;
  int32_t index;
  UnityEngine_Vector3_array *pUVar6;
  Il2CppObject *pIVar7;
  Nekki_SF2_GUI_TextPic_AGJBBBFDHCF_o *__this_00;
  System_Collections_Generic_List_TextPic_OFKFGMDCIJP__o *pSVar8;
  Il2CppObject *pIVar9;
  Nekki_SF2_GUI_StrikeThroughTextLine_NLGMBKIAOPD_o *pNVar10;
  System_Array_o *array;
  MethodInfo *method_00;
  MethodInfo *in_x3;
  System_Collections_Generic_List_StrikeThroughTextLine_NLGMBKIAOPD__o *pSVar11;
  System_Collections_Generic_List_IHIFNKAMALG__o *pSVar12;
  Nekki_SF2_GUI_StrikeThroughTextLine_NLGMBKIAOPD_array *pNVar13;
  int iVar14;
  System_Collections_Generic_List_TextPic_AGJBBBFDHCF__o *__this_01;
  int iVar15;
  System_Collections_Generic_List_Enumerator_T__o local_98;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  if ((DAT_0456722b & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<StrikeThroughTextLine_NLGMBKIAOPD>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<StrikeThroughTextLine_NLGMBKIAOPD>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<StrikeThroughTextLine_NLGMBKIAOPD>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<StrikeThroughTextLine_NLGMBKIAOPD>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<StrikeThroughTextLine_NLGMBKIAOPD>_Clear__)
    ;
    FUN_01bab630(&
                 Method_System_Collections_Generic_List<StrikeThroughTextLine_NLGMBKIAOPD>_GetEnumerator__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<IHIFNKAMALG>_get_Count__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_List<StrikeThroughTextLine_NLGMBKIAOPD>_get_Count__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<TextPic_OFKFGMDCIJP>_get_Item__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_List<StrikeThroughTextLine_NLGMBKIAOPD>_get_Item__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<TextPic_AGJBBBFDHCF>_get_Item__);
    DAT_0456722b = 1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  pSVar11 = (__this->fields)._KHPCAICPJCK_k__BackingField;
  *(undefined1 *)&(__this->fields)._IAGANEPIJNF_k__BackingField = 1;
  if (pSVar11 != (System_Collections_Generic_List_StrikeThroughTextLine_NLGMBKIAOPD__o *)0x0) {
    uVar1 = (pSVar11->fields)._size;
    method_00 = (MethodInfo *)(ulong)uVar1;
    (pSVar11->fields)._size = 0;
    (pSVar11->fields)._version = (pSVar11->fields)._version + 1;
    if (0 < (int)uVar1) {
      in_x3 = (MethodInfo *)0x0;
      System_Array__Clear((System_Array_o *)(pSVar11->fields)._items,0,uVar1,(MethodInfo *)0x0);
    }
    if (((MMEECJEKHGB != (Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_o *)0x0) &&
        (pSVar12 = (MMEECJEKHGB->fields)._CODCAPKKACN_k__BackingField,
        pSVar12 != (System_Collections_Generic_List_IHIFNKAMALG__o *)0x0)) &&
       (pUVar6 = (__this->fields).super.m_Corners, pUVar6 != (UnityEngine_Vector3_array *)0x0)) {
      if ((pSVar12->fields)._size < 4) {
        iVar15 = (int)pUVar6->max_length;
        iVar14 = *(int *)((long)&pUVar6->max_length + 4);
        *(undefined4 *)&pUVar6->max_length = 0;
        *(int *)((long)&pUVar6->max_length + 4) = iVar14 + 1;
        if (0 < iVar15) {
          array = (System_Array_o *)pUVar6->bounds;
LAB_0337193c:
          System_Array__Clear(array,0,iVar15,(MethodInfo *)0x0);
        }
      }
      else {
        iVar15 = (int)pUVar6->max_length;
        if (0 < iVar15) {
          iVar14 = 0;
          do {
            if (pUVar6 == (UnityEngine_Vector3_array *)0x0) goto LAB_03371a18;
            __this_01 = (MMEECJEKHGB->fields)._FEKFGIIMCOE_k__BackingField;
            pIVar7 = System_Collections_Generic_List<object>__get_Item
                               ((System_Collections_Generic_List_object__o *)pUVar6,iVar14,
                                Method_System_Collections_Generic_List<StrikeThroughTextLine_NLGMBKIAOPD>_get_Item__
                               );
            if (((pIVar7 == (Il2CppObject *)0x0) ||
                (__this_01 == (System_Collections_Generic_List_TextPic_AGJBBBFDHCF__o *)0x0)) ||
               (method_00 = Method_System_Collections_Generic_List<TextPic_AGJBBBFDHCF>_get_Item__,
               __this_00 = (Nekki_SF2_GUI_TextPic_AGJBBBFDHCF_o *)
                           System_Collections_Generic_List<object>__get_Item
                                     ((System_Collections_Generic_List_object__o *)__this_01,
                                      *(int32_t *)((long)&pIVar7[1].klass + 4),
                                      (MethodInfo_26E4ADC *)
                                      Method_System_Collections_Generic_List<TextPic_AGJBBBFDHCF>_get_Item__
                                     ), __this_00 == (Nekki_SF2_GUI_TextPic_AGJBBBFDHCF_o *)0x0))
            goto LAB_03371a18;
            bVar4 = Nekki_SF2_GUI_TextPic_AGJBBBFDHCF__GAAAPCIKPKL(__this_00,(MethodInfo *)0x0);
            if (bVar4) {
              pSVar12 = (MMEECJEKHGB->fields)._CODCAPKKACN_k__BackingField;
              if (pSVar12 == (System_Collections_Generic_List_IHIFNKAMALG__o *)0x0)
              goto LAB_03371a18;
              iVar2 = (pSVar12->fields)._size;
              iVar5 = Nekki_SF2_GUI_TextPic_AGJBBBFDHCF__OGEMDBCBONL(__this_00,(MethodInfo *)0x0);
              if (iVar2 <= iVar5) {
                pUVar6 = (__this->fields).super.m_Corners;
                if (pUVar6 == (UnityEngine_Vector3_array *)0x0) goto LAB_03371a18;
                iVar15 = (int)pUVar6->max_length;
                iVar14 = *(int *)((long)&pUVar6->max_length + 4);
                *(undefined4 *)&pUVar6->max_length = 0;
                *(int *)((long)&pUVar6->max_length + 4) = iVar14 + 1;
                if (iVar15 < 1) {
                  return;
                }
                array = (System_Array_o *)pUVar6->bounds;
                goto LAB_0337193c;
              }
            }
            pUVar6 = (__this->fields).super.m_Corners;
            iVar14 = iVar14 + 1;
          } while (iVar15 != iVar14);
          if (pUVar6 == (UnityEngine_Vector3_array *)0x0) goto LAB_03371a18;
        }
        System_Collections_Generic_List<object>__GetEnumerator
                  (&local_98,(System_Collections_Generic_List_object__o *)pUVar6,
                   Method_System_Collections_Generic_List<StrikeThroughTextLine_NLGMBKIAOPD>_GetEnumerator__
                  );
        local_80.fields._index = local_98.fields._index;
        local_80.fields._version = local_98.fields._version;
        local_80.fields._list = local_98.fields._list;
        local_80.fields._current = local_98.fields._current;
        while (bVar4 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                 (&local_80,
                                  Method_System_Collections_Generic_List_Enumerator<StrikeThroughTextLine_NLGMBKIAOPD>_MoveNext__
                                 ), pIVar7 = local_80.fields._current, bVar4) {
          if ((Nekki_SF2_GUI_StrikeThroughTextLine_NLGMBKIAOPD_o *)local_80.fields._current ==
              (Nekki_SF2_GUI_StrikeThroughTextLine_NLGMBKIAOPD_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          iVar5 = OMANDMDCGMF__CCDHGNJODKP
                            ((MMEECJEKHGB->fields)._NNFPEOCIPFE_k__BackingField,
                             ((Nekki_SF2_GUI_StrikeThroughTextLine_NLGMBKIAOPD_Fields *)
                             ((long)local_80.fields._current + 0x10))->BGPIAJBHFEM,(MethodInfo *)0x0
                            );
          method_00 = (MethodInfo *)0x0;
          index = OMANDMDCGMF__CCDHGNJODKP
                            ((MMEECJEKHGB->fields)._NNFPEOCIPFE_k__BackingField,
                             ((Nekki_SF2_GUI_StrikeThroughTextLine_NLGMBKIAOPD_Fields *)
                             ((long)pIVar7 + 0x10))->CFGIDIGNIOL,(MethodInfo *)0x0);
          lVar3 = Method_System_Collections_Generic_List<StrikeThroughTextLine_NLGMBKIAOPD>_Add__;
          if (iVar5 == index) {
            pSVar11 = (__this->fields)._KHPCAICPJCK_k__BackingField;
            if (pSVar11 ==
                (System_Collections_Generic_List_StrikeThroughTextLine_NLGMBKIAOPD__o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pNVar13 = (pSVar11->fields)._items;
            (pSVar11->fields)._version = (pSVar11->fields)._version + 1;
            if (pNVar13 == (Nekki_SF2_GUI_StrikeThroughTextLine_NLGMBKIAOPD_array *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            uVar1 = (pSVar11->fields)._size;
            if (uVar1 < (uint)pNVar13->max_length) {
              (pSVar11->fields)._size = uVar1 + 1;
              pNVar13->m_Items[(int)uVar1] =
                   (Nekki_SF2_GUI_StrikeThroughTextLine_NLGMBKIAOPD_o *)pIVar7;
              thunk_FUN_01c20e04(pNVar13->m_Items + (int)uVar1,pIVar7);
            }
            else {
              method_00 = *(MethodInfo **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70);
              System_Collections_Generic_List<object>__AddWithResize
                        ((System_Collections_Generic_List_object__o *)pSVar11,pIVar7,
                         (MethodInfo_26E4DAC *)method_00);
            }
          }
          else {
            pSVar8 = (MMEECJEKHGB->fields)._NNFPEOCIPFE_k__BackingField;
            if (pSVar8 == (System_Collections_Generic_List_TextPic_OFKFGMDCIJP__o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            FEDCJPALCBN = ((Nekki_SF2_GUI_StrikeThroughTextLine_NLGMBKIAOPD_Fields *)
                          ((long)pIVar7 + 0x10))->BGPIAJBHFEM;
            pIVar9 = System_Collections_Generic_List<object>__get_Item
                               ((System_Collections_Generic_List_object__o *)pSVar8,iVar5,
                                Method_System_Collections_Generic_List<TextPic_OFKFGMDCIJP>_get_Item__
                               );
            if (pIVar9 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pNVar10 = Nekki_SF2_GUI_StrikeThroughTextLine_NLGMBKIAOPD__MOKLOIFMABD
                                ((Nekki_SF2_GUI_StrikeThroughTextLine_NLGMBKIAOPD_o *)pIVar7,
                                 FEDCJPALCBN,*(int32_t *)((long)&pIVar9[1].klass + 4),in_x3);
            lVar3 = Method_System_Collections_Generic_List<StrikeThroughTextLine_NLGMBKIAOPD>_Add__;
            pSVar11 = (__this->fields)._KHPCAICPJCK_k__BackingField;
            if (pSVar11 ==
                (System_Collections_Generic_List_StrikeThroughTextLine_NLGMBKIAOPD__o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pNVar13 = (pSVar11->fields)._items;
            (pSVar11->fields)._version = (pSVar11->fields)._version + 1;
            if (pNVar13 == (Nekki_SF2_GUI_StrikeThroughTextLine_NLGMBKIAOPD_array *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            uVar1 = (pSVar11->fields)._size;
            if (uVar1 < (uint)pNVar13->max_length) {
              (pSVar11->fields)._size = uVar1 + 1;
              pNVar13->m_Items[(int)uVar1] = pNVar10;
              thunk_FUN_01c20e04(pNVar13->m_Items + (int)uVar1);
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        ((System_Collections_Generic_List_object__o *)pSVar11,
                         (Il2CppObject *)pNVar10,
                         *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70))
              ;
            }
            pSVar8 = (MMEECJEKHGB->fields)._NNFPEOCIPFE_k__BackingField;
            iVar15 = iVar5 + 1;
            bVar4 = pSVar8 == (System_Collections_Generic_List_TextPic_OFKFGMDCIJP__o *)0x0;
            if (iVar15 < index) {
              do {
                if (bVar4) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                pIVar9 = System_Collections_Generic_List<object>__get_Item
                                   ((System_Collections_Generic_List_object__o *)pSVar8,iVar15,
                                    Method_System_Collections_Generic_List<TextPic_OFKFGMDCIJP>_get_Item__
                                   );
                if (pIVar9 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                pSVar8 = (MMEECJEKHGB->fields)._NNFPEOCIPFE_k__BackingField;
                if (pSVar8 == (System_Collections_Generic_List_TextPic_OFKFGMDCIJP__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                iVar5 = *(int32_t *)&pIVar9[1].klass;
                pIVar9 = System_Collections_Generic_List<object>__get_Item
                                   ((System_Collections_Generic_List_object__o *)pSVar8,iVar15,
                                    Method_System_Collections_Generic_List<TextPic_OFKFGMDCIJP>_get_Item__
                                   );
                if (pIVar9 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                pNVar10 = Nekki_SF2_GUI_StrikeThroughTextLine_NLGMBKIAOPD__MOKLOIFMABD
                                    ((Nekki_SF2_GUI_StrikeThroughTextLine_NLGMBKIAOPD_o *)pIVar7,
                                     iVar5,*(int32_t *)((long)&pIVar9[1].klass + 4),in_x3);
                lVar3 = 
                Method_System_Collections_Generic_List<StrikeThroughTextLine_NLGMBKIAOPD>_Add__;
                pSVar11 = (__this->fields)._KHPCAICPJCK_k__BackingField;
                if (pSVar11 ==
                    (System_Collections_Generic_List_StrikeThroughTextLine_NLGMBKIAOPD__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                pNVar13 = (pSVar11->fields)._items;
                (pSVar11->fields)._version = (pSVar11->fields)._version + 1;
                if (pNVar13 == (Nekki_SF2_GUI_StrikeThroughTextLine_NLGMBKIAOPD_array *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                uVar1 = (pSVar11->fields)._size;
                if (uVar1 < (uint)pNVar13->max_length) {
                  (pSVar11->fields)._size = uVar1 + 1;
                  pNVar13->m_Items[(int)uVar1] = pNVar10;
                  thunk_FUN_01c20e04(pNVar13->m_Items + (int)uVar1);
                }
                else {
                  System_Collections_Generic_List<object>__AddWithResize
                            ((System_Collections_Generic_List_object__o *)pSVar11,
                             (Il2CppObject *)pNVar10,
                             *(MethodInfo_26E4DAC **)
                              (*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
                }
                pSVar8 = (MMEECJEKHGB->fields)._NNFPEOCIPFE_k__BackingField;
                iVar15 = iVar15 + 1;
                bVar4 = pSVar8 == (System_Collections_Generic_List_TextPic_OFKFGMDCIJP__o *)0x0;
              } while (index != iVar15);
            }
            if (bVar4) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pIVar9 = System_Collections_Generic_List<object>__get_Item
                               ((System_Collections_Generic_List_object__o *)pSVar8,index,
                                Method_System_Collections_Generic_List<TextPic_OFKFGMDCIJP>_get_Item__
                               );
            if (pIVar9 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            uVar1 = ((Nekki_SF2_GUI_StrikeThroughTextLine_NLGMBKIAOPD_Fields *)((long)pIVar7 + 0x10)
                    )->CFGIDIGNIOL;
            method_00 = (MethodInfo *)(ulong)uVar1;
            pNVar10 = Nekki_SF2_GUI_StrikeThroughTextLine_NLGMBKIAOPD__MOKLOIFMABD
                                ((Nekki_SF2_GUI_StrikeThroughTextLine_NLGMBKIAOPD_o *)pIVar7,
                                 *(int32_t *)&pIVar9[1].klass,uVar1,in_x3);
            lVar3 = Method_System_Collections_Generic_List<StrikeThroughTextLine_NLGMBKIAOPD>_Add__;
            pSVar11 = (__this->fields)._KHPCAICPJCK_k__BackingField;
            if (pSVar11 ==
                (System_Collections_Generic_List_StrikeThroughTextLine_NLGMBKIAOPD__o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pNVar13 = (pSVar11->fields)._items;
            (pSVar11->fields)._version = (pSVar11->fields)._version + 1;
            if (pNVar13 == (Nekki_SF2_GUI_StrikeThroughTextLine_NLGMBKIAOPD_array *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            uVar1 = (pSVar11->fields)._size;
            if (uVar1 < (uint)pNVar13->max_length) {
              (pSVar11->fields)._size = uVar1 + 1;
              pNVar13->m_Items[(int)uVar1] = pNVar10;
              thunk_FUN_01c20e04(pNVar13->m_Items + (int)uVar1);
            }
            else {
              method_00 = *(MethodInfo **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70);
              System_Collections_Generic_List<object>__AddWithResize
                        ((System_Collections_Generic_List_object__o *)pSVar11,
                         (Il2CppObject *)pNVar10,(MethodInfo_26E4DAC *)method_00);
            }
          }
        }
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_80,
                   Method_System_Collections_Generic_List_Enumerator<StrikeThroughTextLine_NLGMBKIAOPD>_Dispose__
                  );
        pSVar11 = (__this->fields)._KHPCAICPJCK_k__BackingField;
        if (pSVar11 == (System_Collections_Generic_List_StrikeThroughTextLine_NLGMBKIAOPD__o *)0x0)
        goto LAB_03371a18;
        System_Collections_Generic_List<object>__GetEnumerator
                  (&local_98,(System_Collections_Generic_List_object__o *)pSVar11,
                   Method_System_Collections_Generic_List<StrikeThroughTextLine_NLGMBKIAOPD>_GetEnumerator__
                  );
        local_80.fields._index = local_98.fields._index;
        local_80.fields._version = local_98.fields._version;
        local_80.fields._list = local_98.fields._list;
        local_80.fields._current = local_98.fields._current;
        while (bVar4 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                 (&local_80,
                                  Method_System_Collections_Generic_List_Enumerator<StrikeThroughTextLine_NLGMBKIAOPD>_MoveNext__
                                 ), bVar4) {
          if ((Nekki_SF2_GUI_StrikeThroughTextLine_NLGMBKIAOPD_o *)local_80.fields._current ==
              (Nekki_SF2_GUI_StrikeThroughTextLine_NLGMBKIAOPD_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          Nekki_SF2_GUI_StrikeThroughTextLine_NLGMBKIAOPD__LHPFLCMLFMF
                    ((Nekki_SF2_GUI_StrikeThroughTextLine_NLGMBKIAOPD_o *)local_80.fields._current,
                     MMEECJEKHGB,method_00);
        }
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_80,
                   Method_System_Collections_Generic_List_Enumerator<StrikeThroughTextLine_NLGMBKIAOPD>_Dispose__
                  );
      }
      return;
    }
  }
LAB_03371a18:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

