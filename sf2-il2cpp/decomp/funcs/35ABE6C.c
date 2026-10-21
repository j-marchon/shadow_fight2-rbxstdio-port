// PMFNDKKBEKN$$CHAOFEIDGIE @ RVA 0x35ABE6C

void PMFNDKKBEKN__CHAOFEIDGIE(PMFNDKKBEKN_o *__this,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  long lVar3;
  Il2CppObject *pIVar4;
  bool bVar5;
  uint32_t PKLFFPEBBDA;
  int32_t iVar6;
  System_Collections_Generic_List_AJNNHGGLGIF__o *pSVar7;
  System_Collections_Generic_List_AJNNHGGLGIF__o *__this_00;
  MethodInfo *extraout_x1;
  AJNNHGGLGIF_o *item;
  OLKPEJMEBPJ_o *pOVar8;
  System_Collections_Generic_List_List_AJNNHGGLGIF___o *pSVar9;
  System_Collections_Generic_List_AJNNHGGLGIF__array *pSVar10;
  AJNNHGGLGIF_array *pAVar11;
  uint uVar12;
  System_Collections_Generic_List_Enumerator_T__o local_98;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  if ((DAT_04568e58 & 1) == 0) {
    FUN_01bab630(&AGCDKMOOJGI_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AJNNHGGLGIF>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AJNNHGGLGIF>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AJNNHGGLGIF>_get_Current__);
    FUN_01bab630(&LIIFLGALGNK_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<AJNNHGGLGIF>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<List<AJNNHGGLGIF>>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<List<AJNNHGGLGIF>>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<AJNNHGGLGIF>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<AJNNHGGLGIF>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<AJNNHGGLGIF>_TypeInfo);
    DAT_04568e58 = 1;
    method = extraout_x1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  pOVar8 = (__this->fields).super.LFJPDELEIHG;
  if (pOVar8 == (OLKPEJMEBPJ_o *)0x0) {
    if ((LIIFLGALGNK_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(LIIFLGALGNK_TypeInfo,method);
    }
    PKLFFPEBBDA = LIIFLGALGNK__ACJKHFAFBCP(0,0xffffffff,(MethodInfo *)0x0);
  }
  else {
    PKLFFPEBBDA = (uint32_t)(pOVar8->fields).KOANEAEMOOP;
  }
  if ((LIIFLGALGNK_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  LIIFLGALGNK__DHPFKHMDEDG(PKLFFPEBBDA,(MethodInfo *)0x0);
  pSVar7 = (__this->fields).LJNCACBBIBD;
  if (pSVar7 != (System_Collections_Generic_List_AJNNHGGLGIF__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_98,(System_Collections_Generic_List_object__o *)pSVar7,
               Method_System_Collections_Generic_List<AJNNHGGLGIF>_GetEnumerator__);
    local_80.fields._index = local_98.fields._index;
    local_80.fields._version = local_98.fields._version;
    local_80.fields._list = local_98.fields._list;
    local_80.fields._current = local_98.fields._current;
    while (bVar5 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_80,
                              Method_System_Collections_Generic_List_Enumerator<AJNNHGGLGIF>_MoveNext__
                             ), pIVar4 = local_80.fields._current, bVar5) {
      if ((AGCDKMOOJGI_o *)local_80.fields._current == (AGCDKMOOJGI_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      iVar6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                        ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                         (((AGCDKMOOJGI_Fields *)((long)local_80.fields._current + 0x10))->super).
                         JDNKKGPNHPB.fields,(MethodInfo *)0x0);
      if (iVar6 == 0x15) {
        bVar1 = (AGCDKMOOJGI_TypeInfo->_2).naturalAligment;
        if (((((AGCDKMOOJGI_c *)pIVar4->klass)->_2).naturalAligment < bVar1) ||
           ((((AGCDKMOOJGI_c *)pIVar4->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] !=
            (Il2CppClass *)AGCDKMOOJGI_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_01babc64(pIVar4);
        }
        AGCDKMOOJGI__EKFNBHMNHFA((AGCDKMOOJGI_o *)pIVar4,(MethodInfo *)0x0);
      }
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_80,Method_System_Collections_Generic_List_Enumerator<AJNNHGGLGIF>_Dispose__);
    pSVar9 = (__this->fields).CIDEKAHPIGK;
    if (pSVar9 != (System_Collections_Generic_List_List_AJNNHGGLGIF___o *)0x0) {
      iVar6 = (pSVar9->fields)._size;
      (pSVar9->fields)._size = 0;
      (pSVar9->fields)._version = (pSVar9->fields)._version + 1;
      if (0 < iVar6) {
        System_Array__Clear((System_Array_o *)(pSVar9->fields)._items,0,iVar6,(MethodInfo *)0x0);
      }
      if ((__this->fields).super.KIHDFNGKPGN != 0) {
        uVar12 = 0;
        do {
          pSVar7 = (System_Collections_Generic_List_AJNNHGGLGIF__o *)
                   thunk_FUN_01bda818(System_Collections_Generic_List<AJNNHGGLGIF>_TypeInfo);
          System_Collections_Generic_List<object>___ctor
                    ((System_Collections_Generic_List_object__o *)pSVar7,
                     Method_System_Collections_Generic_List<AJNNHGGLGIF>__ctor__);
          lVar3 = Method_System_Collections_Generic_List<List<AJNNHGGLGIF>>_Add__;
          pSVar9 = (__this->fields).CIDEKAHPIGK;
          if (pSVar9 == (System_Collections_Generic_List_List_AJNNHGGLGIF___o *)0x0)
          goto LAB_036ac334;
          pSVar10 = (pSVar9->fields)._items;
          (pSVar9->fields)._version = (pSVar9->fields)._version + 1;
          if (pSVar10 == (System_Collections_Generic_List_AJNNHGGLGIF__array *)0x0)
          goto LAB_036ac334;
          uVar2 = (pSVar9->fields)._size;
          if (uVar2 < (uint)pSVar10->max_length) {
            (pSVar9->fields)._size = uVar2 + 1;
            pSVar10->m_Items[(int)uVar2] = pSVar7;
            thunk_FUN_01c20e04(pSVar10->m_Items + (int)uVar2,pSVar7);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)pSVar9,(Il2CppObject *)pSVar7,
                       *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
          }
          __this_00 = (__this->fields).LJNCACBBIBD;
          if (__this_00 == (System_Collections_Generic_List_AJNNHGGLGIF__o *)0x0) goto LAB_036ac334;
          System_Collections_Generic_List<object>__GetEnumerator
                    (&local_98,(System_Collections_Generic_List_object__o *)__this_00,
                     Method_System_Collections_Generic_List<AJNNHGGLGIF>_GetEnumerator__);
          local_80.fields._index = local_98.fields._index;
          local_80.fields._version = local_98.fields._version;
          local_80.fields._list = local_98.fields._list;
          local_80.fields._current = local_98.fields._current;
          while (bVar5 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                   (&local_80,
                                    Method_System_Collections_Generic_List_Enumerator<AJNNHGGLGIF>_MoveNext__
                                   ), pIVar4 = local_80.fields._current, bVar5) {
            if ((AGCDKMOOJGI_o *)local_80.fields._current == (AGCDKMOOJGI_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            iVar6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                              ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                               (((AGCDKMOOJGI_Fields *)((long)local_80.fields._current + 0x10))->
                               super).JDNKKGPNHPB.fields,(MethodInfo *)0x0);
            lVar3 = Method_System_Collections_Generic_List<AJNNHGGLGIF>_Add__;
            if (iVar6 == 0x15) {
              bVar1 = (AGCDKMOOJGI_TypeInfo->_2).naturalAligment;
              if (((((AGCDKMOOJGI_c *)pIVar4->klass)->_2).naturalAligment < bVar1) ||
                 ((((AGCDKMOOJGI_c *)pIVar4->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] !=
                  (Il2CppClass *)AGCDKMOOJGI_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
                FUN_01babc64(pIVar4);
              }
              AGCDKMOOJGI__KACMDIEPEMF((AGCDKMOOJGI_o *)pIVar4,(MethodInfo *)0x0);
              item = ((AGCDKMOOJGI_Fields *)((long)pIVar4 + 0x10))->EOKBEEIMNAF;
              if (item == (AJNNHGGLGIF_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              (item->fields).KHKEGAKGNCN = false;
              lVar3 = Method_System_Collections_Generic_List<AJNNHGGLGIF>_Add__;
              if (pSVar7 == (System_Collections_Generic_List_AJNNHGGLGIF__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              pAVar11 = (pSVar7->fields)._items;
              (pSVar7->fields)._version = (pSVar7->fields)._version + 1;
              if (pAVar11 == (AJNNHGGLGIF_array *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              uVar2 = (pSVar7->fields)._size;
              if (uVar2 < (uint)pAVar11->max_length) {
                (pSVar7->fields)._size = uVar2 + 1;
                pAVar11->m_Items[(int)uVar2] = item;
                thunk_FUN_01c20e04();
              }
              else {
                System_Collections_Generic_List<object>__AddWithResize
                          ((System_Collections_Generic_List_object__o *)pSVar7,(Il2CppObject *)item,
                           *(MethodInfo_26E4DAC **)
                            (*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
              }
            }
            else {
              if (pSVar7 == (System_Collections_Generic_List_AJNNHGGLGIF__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              pAVar11 = (pSVar7->fields)._items;
              (pSVar7->fields)._version = (pSVar7->fields)._version + 1;
              if (pAVar11 == (AJNNHGGLGIF_array *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              uVar2 = (pSVar7->fields)._size;
              if (uVar2 < (uint)pAVar11->max_length) {
                (pSVar7->fields)._size = uVar2 + 1;
                pAVar11->m_Items[(int)uVar2] = (AJNNHGGLGIF_o *)pIVar4;
                thunk_FUN_01c20e04(pAVar11->m_Items + (int)uVar2,pIVar4);
              }
              else {
                System_Collections_Generic_List<object>__AddWithResize
                          ((System_Collections_Generic_List_object__o *)pSVar7,pIVar4,
                           *(MethodInfo_26E4DAC **)
                            (*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
              }
            }
          }
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (&local_80,
                     Method_System_Collections_Generic_List_Enumerator<AJNNHGGLGIF>_Dispose__);
          uVar12 = uVar12 + 1;
        } while (uVar12 < (__this->fields).super.KIHDFNGKPGN);
      }
      return;
    }
  }
LAB_036ac334:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

