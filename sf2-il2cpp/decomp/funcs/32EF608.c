// KBFGKFAKGPP$$JHNLKBALFBK @ RVA 0x32EF608

System_Collections_Generic_List_GLCAPECMBLM__o *
KBFGKFAKGPP__JHNLKBALFBK(KBFGKFAKGPP_o *__this,bool AHECABNOFFJ,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  Il2CppObject *item;
  bool bVar3;
  int32_t iVar4;
  OLKKAIFGGAK_o *pOVar5;
  System_Collections_Generic_List_GLCAPECMBLM__o *pSVar6;
  HDBPKHNKOGI_o *pHVar7;
  GLCAPECMBLM_array *pGVar8;
  System_Collections_Generic_List_Enumerator_T__o local_78;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  
  if ((DAT_04567665 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<GLCAPECMBLM>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<GLCAPECMBLM>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<GLCAPECMBLM>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<GLCAPECMBLM>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<GLCAPECMBLM>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<GLCAPECMBLM>_GetEnumerator__);
    DAT_04567665 = 1;
  }
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
  pSVar6 = (__this->fields).PLNIEGAECMC;
  if (pSVar6 != (System_Collections_Generic_List_GLCAPECMBLM__o *)0x0) {
    iVar4 = (pSVar6->fields)._size;
    (pSVar6->fields)._size = 0;
    (pSVar6->fields)._version = (pSVar6->fields)._version + 1;
    if (0 < iVar4) {
      System_Array__Clear((System_Array_o *)(pSVar6->fields)._items,0,iVar4,(MethodInfo *)0x0);
    }
    pSVar6 = (__this->fields).FIFCACFAFPH;
    if (pSVar6 != (System_Collections_Generic_List_GLCAPECMBLM__o *)0x0) {
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_78,(System_Collections_Generic_List_object__o *)pSVar6,
                 Method_System_Collections_Generic_List<GLCAPECMBLM>_GetEnumerator__);
      local_60.fields._index = local_78.fields._index;
      local_60.fields._version = local_78.fields._version;
      local_60.fields._list = local_78.fields._list;
      local_60.fields._current = local_78.fields._current;
      while( true ) {
        do {
          do {
            do {
              bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                (&local_60,
                                 Method_System_Collections_Generic_List_Enumerator<GLCAPECMBLM>_MoveNext__
                                );
              item = local_60.fields._current;
              if (!bVar3) {
                System_Collections_Generic_List_Enumerator<object>__Dispose
                          (&local_60,
                           Method_System_Collections_Generic_List_Enumerator<GLCAPECMBLM>_Dispose__)
                ;
                return (__this->fields).PLNIEGAECMC;
              }
              if ((GLCAPECMBLM_o *)local_60.fields._current == (GLCAPECMBLM_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              pHVar7 = ((GLCAPECMBLM_Fields *)((long)local_60.fields._current + 0x10))->AHCMAIOOIKM;
              if (pHVar7 == (HDBPKHNKOGI_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
            } while ((pHVar7->fields).FJACNELHGAK == false);
            if (((pHVar7->fields).PKPOHCOEHEN != false) == AHECABNOFFJ) {
              pOVar5 = ((GLCAPECMBLM_Fields *)((long)local_60.fields._current + 0x10))->BCKBBGCOMJD;
              if (pOVar5 == (OLKKAIFGGAK_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              iVar4 = OLKKAIFGGAK__MALPGCALHNK(pOVar5,(MethodInfo *)0x0);
              lVar2 = Method_System_Collections_Generic_List<GLCAPECMBLM>_Add__;
              if (iVar4 < 0) {
                pSVar6 = (__this->fields).PLNIEGAECMC;
                if (pSVar6 == (System_Collections_Generic_List_GLCAPECMBLM__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                pGVar8 = (pSVar6->fields)._items;
                (pSVar6->fields)._version = (pSVar6->fields)._version + 1;
                if (pGVar8 == (GLCAPECMBLM_array *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                uVar1 = (pSVar6->fields)._size;
                if (uVar1 < (uint)pGVar8->max_length) {
                  (pSVar6->fields)._size = uVar1 + 1;
                  pGVar8->m_Items[(int)uVar1] = (GLCAPECMBLM_o *)item;
                  thunk_FUN_01c20e04(pGVar8->m_Items + (int)uVar1,item);
                }
                else {
                  System_Collections_Generic_List<object>__AddWithResize
                            ((System_Collections_Generic_List_object__o *)pSVar6,item,
                             *(MethodInfo_26E4DAC **)
                              (*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
                }
              }
            }
            pHVar7 = ((GLCAPECMBLM_Fields *)((long)item + 0x10))->AHCMAIOOIKM;
            if (pHVar7 == (HDBPKHNKOGI_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
          } while (((pHVar7->fields).PKPOHCOEHEN != false) == AHECABNOFFJ);
          pOVar5 = ((GLCAPECMBLM_Fields *)((long)item + 0x10))->BCKBBGCOMJD;
          if (pOVar5 == (OLKKAIFGGAK_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          iVar4 = OLKKAIFGGAK__MALPGCALHNK(pOVar5,(MethodInfo *)0x0);
          lVar2 = Method_System_Collections_Generic_List<GLCAPECMBLM>_Add__;
        } while (iVar4 < 1);
        pSVar6 = (__this->fields).PLNIEGAECMC;
        if (pSVar6 == (System_Collections_Generic_List_GLCAPECMBLM__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pGVar8 = (pSVar6->fields)._items;
        (pSVar6->fields)._version = (pSVar6->fields)._version + 1;
        if (pGVar8 == (GLCAPECMBLM_array *)0x0) break;
        uVar1 = (pSVar6->fields)._size;
        if (uVar1 < (uint)pGVar8->max_length) {
          (pSVar6->fields)._size = uVar1 + 1;
          pGVar8->m_Items[(int)uVar1] = (GLCAPECMBLM_o *)item;
          thunk_FUN_01c20e04(pGVar8->m_Items + (int)uVar1,item);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar6,item,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

