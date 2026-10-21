// PMFNDKKBEKN$$IPAAGPCOKKK @ RVA 0x35AB444

void PMFNDKKBEKN__IPAAGPCOKKK(PMFNDKKBEKN_o *__this,MethodInfo *method)

{
  int32_t length;
  bool_conflict bVar1;
  uint uVar2;
  long lVar3;
  Il2CppObject *JMCEAKJCJLH;
  bool bVar4;
  uint32_t PKLFFPEBBDA;
  System_Collections_Generic_List_PJKHAJKEHEL__o *pSVar5;
  NLPJLHOEAOE_o *pNVar6;
  System_Collections_Generic_List_PJKHAJKEHEL__o *__this_00;
  PJKHAJKEHEL_o *item;
  MethodInfo *extraout_x1;
  OLKPEJMEBPJ_o *pOVar7;
  System_Collections_Generic_List_List_PJKHAJKEHEL___o *pSVar8;
  System_Collections_Generic_List_PJKHAJKEHEL__array *pSVar9;
  PJKHAJKEHEL_array *pPVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  System_Collections_Generic_List_Enumerator_T__o local_98;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  if ((DAT_04568e53 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PJKHAJKEHEL>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PJKHAJKEHEL>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PJKHAJKEHEL>_get_Current__);
    FUN_01bab630(&LIIFLGALGNK_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<List<PJKHAJKEHEL>>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PJKHAJKEHEL>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<List<PJKHAJKEHEL>>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PJKHAJKEHEL>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PJKHAJKEHEL>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PJKHAJKEHEL>_get_Item__);
    FUN_01bab630(&System_Collections_Generic_List<PJKHAJKEHEL>_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04568e53 = 1;
    method = extraout_x1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  pOVar7 = (__this->fields).super.LFJPDELEIHG;
  if (pOVar7 == (OLKPEJMEBPJ_o *)0x0) {
    if ((LIIFLGALGNK_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(LIIFLGALGNK_TypeInfo,method);
    }
    PKLFFPEBBDA = LIIFLGALGNK__ACJKHFAFBCP(0,0xffffffff,(MethodInfo *)0x0);
  }
  else {
    PKLFFPEBBDA = (uint32_t)(pOVar7->fields).IKGEDJDFCBA;
  }
  if ((LIIFLGALGNK_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  LIIFLGALGNK__DHPFKHMDEDG(PKLFFPEBBDA,(MethodInfo *)0x0);
  pSVar8 = (__this->fields).PLIMKHBGKED;
  if (pSVar8 != (System_Collections_Generic_List_List_PJKHAJKEHEL___o *)0x0) {
    length = (pSVar8->fields)._size;
    (pSVar8->fields)._size = 0;
    (pSVar8->fields)._version = (pSVar8->fields)._version + 1;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(pSVar8->fields)._items,0,length,(MethodInfo *)0x0);
    }
    pSVar5 = (__this->fields).PKBACCIJGGD;
    if (pSVar5 != (System_Collections_Generic_List_PJKHAJKEHEL__o *)0x0) {
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_98,(System_Collections_Generic_List_object__o *)pSVar5,
                 Method_System_Collections_Generic_List<PJKHAJKEHEL>_GetEnumerator__);
      local_80.fields._index = local_98.fields._index;
      local_80.fields._version = local_98.fields._version;
      local_80.fields._list = local_98.fields._list;
      local_80.fields._current = local_98.fields._current;
      while( true ) {
        bVar4 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_80,
                           Method_System_Collections_Generic_List_Enumerator<PJKHAJKEHEL>_MoveNext__
                          );
        JMCEAKJCJLH = local_80.fields._current;
        if (!bVar4) {
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (&local_80,
                     Method_System_Collections_Generic_List_Enumerator<PJKHAJKEHEL>_Dispose__);
          return;
        }
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pNVar6 = NLPJLHOEAOE__AIHNLLGNBLC((MethodInfo *)0x0);
        if (pNVar6 == (NLPJLHOEAOE_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        bVar1 = (pNVar6->fields).PJLHMJHKJOA;
        pNVar6 = NLPJLHOEAOE__AIHNLLGNBLC((MethodInfo *)0x0);
        if (pNVar6 == (NLPJLHOEAOE_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        (pNVar6->fields).PJLHMJHKJOA = false;
        pNVar6 = NLPJLHOEAOE__AIHNLLGNBLC((MethodInfo *)0x0);
        if ((PJKHAJKEHEL_o *)JMCEAKJCJLH == (PJKHAJKEHEL_o *)0x0) break;
        if (pNVar6 == (NLPJLHOEAOE_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar5 = NLPJLHOEAOE__GINBGECFLHA
                           (pNVar6,(PJKHAJKEHEL_o *)JMCEAKJCJLH,
                            ((PJKHAJKEHEL_Fields *)((long)JMCEAKJCJLH + 0x10))->MGDHGEHGKBA *
                            (uint)(__this->fields).super.KIHDFNGKPGN,(MethodInfo *)0x0);
        pNVar6 = NLPJLHOEAOE__AIHNLLGNBLC((MethodInfo *)0x0);
        if (pNVar6 == (NLPJLHOEAOE_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        (pNVar6->fields).PJLHMJHKJOA = bVar1;
        if ((__this->fields).super.KIHDFNGKPGN != 0) {
          iVar12 = 0;
          uVar11 = 0;
          do {
            __this_00 = (System_Collections_Generic_List_PJKHAJKEHEL__o *)
                        thunk_FUN_01bda818(System_Collections_Generic_List<PJKHAJKEHEL>_TypeInfo);
            System_Collections_Generic_List<object>___ctor
                      ((System_Collections_Generic_List_object__o *)__this_00,
                       Method_System_Collections_Generic_List<PJKHAJKEHEL>__ctor__);
            lVar3 = Method_System_Collections_Generic_List<List<PJKHAJKEHEL>>_Add__;
            pSVar8 = (__this->fields).PLIMKHBGKED;
            if (pSVar8 == (System_Collections_Generic_List_List_PJKHAJKEHEL___o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pSVar9 = (pSVar8->fields)._items;
            (pSVar8->fields)._version = (pSVar8->fields)._version + 1;
            if (pSVar9 == (System_Collections_Generic_List_PJKHAJKEHEL__array *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            uVar2 = (pSVar8->fields)._size;
            if (uVar2 < (uint)pSVar9->max_length) {
              (pSVar8->fields)._size = uVar2 + 1;
              pSVar9->m_Items[(int)uVar2] = __this_00;
              thunk_FUN_01c20e04(pSVar9->m_Items + (int)uVar2,__this_00);
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        ((System_Collections_Generic_List_object__o *)pSVar8,
                         (Il2CppObject *)__this_00,
                         *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70))
              ;
            }
            if (0 < ((PJKHAJKEHEL_Fields *)((long)JMCEAKJCJLH + 0x10))->MGDHGEHGKBA) {
              iVar13 = 0;
              do {
                if (pSVar5 == (System_Collections_Generic_List_PJKHAJKEHEL__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                item = (PJKHAJKEHEL_o *)
                       System_Collections_Generic_List<object>__get_Item
                                 ((System_Collections_Generic_List_object__o *)pSVar5,
                                  iVar12 + iVar13,
                                  Method_System_Collections_Generic_List<PJKHAJKEHEL>_get_Item__);
                lVar3 = Method_System_Collections_Generic_List<PJKHAJKEHEL>_Add__;
                if (__this_00 == (System_Collections_Generic_List_PJKHAJKEHEL__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                pPVar10 = (__this_00->fields)._items;
                (__this_00->fields)._version = (__this_00->fields)._version + 1;
                if (pPVar10 == (PJKHAJKEHEL_array *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                uVar2 = (__this_00->fields)._size;
                if (uVar2 < (uint)pPVar10->max_length) {
                  (__this_00->fields)._size = uVar2 + 1;
                  pPVar10->m_Items[(int)uVar2] = item;
                  thunk_FUN_01c20e04();
                }
                else {
                  System_Collections_Generic_List<object>__AddWithResize
                            ((System_Collections_Generic_List_object__o *)__this_00,
                             (Il2CppObject *)item,
                             *(MethodInfo_26E4DAC **)
                              (*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
                }
                iVar13 = iVar13 + 1;
              } while (iVar13 < ((PJKHAJKEHEL_Fields *)((long)JMCEAKJCJLH + 0x10))->MGDHGEHGKBA);
              iVar12 = iVar12 + iVar13;
            }
            uVar11 = uVar11 + 1;
          } while (uVar11 < (__this->fields).super.KIHDFNGKPGN);
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

