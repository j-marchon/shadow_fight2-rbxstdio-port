// ECENNHNBAME$$PPHOIDGOHAD @ RVA 0x3019CE8

void ECENNHNBAME__PPHOIDGOHAD
               (ECENNHNBAME_o *__this,int32_t PKDBOMAHGHC,
               System_Collections_Generic_List_JADGCGOJLJB__o *LEIGHDGNHKF,
               System_Collections_Generic_List_JADGCGOJLJB__o *MJOODOHBAMD,
               System_Collections_Generic_HashSet_JADGCGOJLJB_IMLPLLLPALI__o *OBGEOMFFJMJ,
               MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  Il2CppObject *__this_00;
  bool bVar3;
  int32_t iVar4;
  int32_t iVar5;
  int iVar6;
  int iVar7;
  System_Collections_Generic_List_JADGCGOJLJB__o *__this_01;
  ECENNHNBAME_HJPFANEPGJF_o *pEVar8;
  JADGCGOJLJB_array *pJVar9;
  System_Collections_Generic_List_Enumerator_T__o local_98;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  if ((DAT_04565bf2 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<JADGCGOJLJB>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<JADGCGOJLJB>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<JADGCGOJLJB>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_HashSet<JADGCGOJLJB_IMLPLLLPALI>_Contains__);
    FUN_01bab630(&Method_System_Collections_Generic_List<JADGCGOJLJB>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<JADGCGOJLJB>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<JADGCGOJLJB>_GetEnumerator__);
    DAT_04565bf2 = 1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  if (LEIGHDGNHKF != (System_Collections_Generic_List_JADGCGOJLJB__o *)0x0) {
    iVar4 = (LEIGHDGNHKF->fields)._size;
    (LEIGHDGNHKF->fields)._size = 0;
    (LEIGHDGNHKF->fields)._version = (LEIGHDGNHKF->fields)._version + 1;
    if (0 < iVar4) {
      System_Array__Clear((System_Array_o *)(LEIGHDGNHKF->fields)._items,0,iVar4,(MethodInfo *)0x0);
    }
    if (MJOODOHBAMD != (System_Collections_Generic_List_JADGCGOJLJB__o *)0x0) {
      iVar4 = (MJOODOHBAMD->fields)._size;
      (MJOODOHBAMD->fields)._size = 0;
      (MJOODOHBAMD->fields)._version = (MJOODOHBAMD->fields)._version + 1;
      if (0 < iVar4) {
        System_Array__Clear((System_Array_o *)(MJOODOHBAMD->fields)._items,0,iVar4,(MethodInfo *)0x0
                           );
      }
      pEVar8 = (__this->fields).DMGLMCBIAGL;
      if ((pEVar8 != (ECENNHNBAME_HJPFANEPGJF_o *)0x0) &&
         (__this_01 = (pEVar8->fields).GLFJDDHEMNO,
         __this_01 != (System_Collections_Generic_List_JADGCGOJLJB__o *)0x0)) {
        System_Collections_Generic_List<object>__GetEnumerator
                  (&local_98,(System_Collections_Generic_List_object__o *)__this_01,
                   Method_System_Collections_Generic_List<JADGCGOJLJB>_GetEnumerator__);
        local_80.fields._index = local_98.fields._index;
        local_80.fields._version = local_98.fields._version;
        local_80.fields._list = local_98.fields._list;
        local_80.fields._current = local_98.fields._current;
LAB_03119e20:
        do {
          bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                            (&local_80,
                             Method_System_Collections_Generic_List_Enumerator<JADGCGOJLJB>_MoveNext__
                            );
          __this_00 = local_80.fields._current;
          if (!bVar3) {
            System_Collections_Generic_List_Enumerator<object>__Dispose
                      (&local_80,
                       Method_System_Collections_Generic_List_Enumerator<JADGCGOJLJB>_Dispose__);
            return;
          }
          if ((JADGCGOJLJB_o *)local_80.fields._current == (JADGCGOJLJB_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          iVar4 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                            ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                             (((JADGCGOJLJB_Fields *)((long)local_80.fields._current + 0x10))->
                             IELLEFEFFJD).fields,(MethodInfo *)0x0);
          iVar5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                            ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                             (__this->fields).LCLBPCMKHPM.fields,(MethodInfo *)0x0);
          if (iVar4 < iVar5) {
            iVar6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                              ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                               (__this->fields).LCLBPCMKHPM.fields,(MethodInfo *)0x0);
          }
          else {
            iVar6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                              ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                               (((JADGCGOJLJB_Fields *)((long)__this_00 + 0x10))->IELLEFEFFJD).
                               fields,(MethodInfo *)0x0);
          }
          iVar4 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                            ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                             (((JADGCGOJLJB_Fields *)((long)__this_00 + 0x10))->DMNCBADHGJP).fields,
                             (MethodInfo *)0x0);
          iVar5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                            ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                             (__this->fields).IPAGCJKIPEN.fields,(MethodInfo *)0x0);
          if (iVar5 < iVar4) {
            iVar7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                              ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                               (__this->fields).IPAGCJKIPEN.fields,(MethodInfo *)0x0);
          }
          else {
            iVar7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                              ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                               (((JADGCGOJLJB_Fields *)((long)__this_00 + 0x10))->DMNCBADHGJP).
                               fields,(MethodInfo *)0x0);
          }
          if ((iVar6 <= PKDBOMAHGHC) && (PKDBOMAHGHC <= iVar7)) {
            if (OBGEOMFFJMJ != (System_Collections_Generic_HashSet_JADGCGOJLJB_IMLPLLLPALI__o *)0x0)
            {
              iVar4 = JADGCGOJLJB__NHGGBEACKBD((JADGCGOJLJB_o *)__this_00,(MethodInfo *)0x0);
              bVar3 = System_Collections_Generic_HashSet<Int32Enum>__Contains
                                ((System_Collections_Generic_HashSet_T__o *)OBGEOMFFJMJ,iVar4,
                                 Method_System_Collections_Generic_HashSet<JADGCGOJLJB_IMLPLLLPALI>_Contains__
                                );
              if (bVar3) goto LAB_03119e20;
            }
            lVar2 = Method_System_Collections_Generic_List<JADGCGOJLJB>_Add__;
            pJVar9 = (LEIGHDGNHKF->fields)._items;
            (LEIGHDGNHKF->fields)._version = (LEIGHDGNHKF->fields)._version + 1;
            if (pJVar9 == (JADGCGOJLJB_array *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            uVar1 = (LEIGHDGNHKF->fields)._size;
            if (uVar1 < (uint)pJVar9->max_length) {
              (LEIGHDGNHKF->fields)._size = uVar1 + 1;
              pJVar9->m_Items[(int)uVar1] = (JADGCGOJLJB_o *)__this_00;
              thunk_FUN_01c20e04(pJVar9->m_Items + (int)uVar1,__this_00);
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        ((System_Collections_Generic_List_object__o *)LEIGHDGNHKF,__this_00,
                         *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70))
              ;
            }
            goto LAB_03119e20;
          }
        } while (PKDBOMAHGHC + -1 != iVar7);
        if (OBGEOMFFJMJ != (System_Collections_Generic_HashSet_JADGCGOJLJB_IMLPLLLPALI__o *)0x0) {
          iVar4 = JADGCGOJLJB__NHGGBEACKBD((JADGCGOJLJB_o *)__this_00,(MethodInfo *)0x0);
          bVar3 = System_Collections_Generic_HashSet<Int32Enum>__Contains
                            ((System_Collections_Generic_HashSet_T__o *)OBGEOMFFJMJ,iVar4,
                             Method_System_Collections_Generic_HashSet<JADGCGOJLJB_IMLPLLLPALI>_Contains__
                            );
          if (bVar3) goto LAB_03119e20;
        }
        lVar2 = Method_System_Collections_Generic_List<JADGCGOJLJB>_Add__;
        pJVar9 = (MJOODOHBAMD->fields)._items;
        (MJOODOHBAMD->fields)._version = (MJOODOHBAMD->fields)._version + 1;
        if (pJVar9 == (JADGCGOJLJB_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        uVar1 = (MJOODOHBAMD->fields)._size;
        if (uVar1 < (uint)pJVar9->max_length) {
          (MJOODOHBAMD->fields)._size = uVar1 + 1;
          pJVar9->m_Items[(int)uVar1] = (JADGCGOJLJB_o *)__this_00;
          thunk_FUN_01c20e04(pJVar9->m_Items + (int)uVar1,__this_00);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)MJOODOHBAMD,__this_00,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
        }
        goto LAB_03119e20;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

