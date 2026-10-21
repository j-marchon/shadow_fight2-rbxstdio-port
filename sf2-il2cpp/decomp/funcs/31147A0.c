// Nekki.SF2.GUI.Dialogs.Raids.Clans.MembersClanTable$$UpdateTable @ RVA 0x31147A0

/* WARNING: Type propagation algorithm not settling */

void Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable__UpdateTable
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable_o *__this,MethodInfo *method)

{
  int32_t length;
  int iVar1;
  uint uVar2;
  long lVar3;
  bool bVar4;
  System_Comparison_IDGOGBNEGAM__o **ppSVar5;
  Il2CppObject *pIVar6;
  System_Collections_Generic_List_OPMDFMOAMKB__o *__this_00;
  DPDNFOCBGGD_o *item;
  MethodInfo *method_00;
  System_Collections_Generic_List_DPDNFOCBGGD__o *pSVar7;
  DPDNFOCBGGD_array *pDVar8;
  int iVar9;
  System_Collections_Generic_List_IDGOGBNEGAM__o *pSVar10;
  int iVar11;
  System_Comparison_IDGOGBNEGAM__o *comparison;
  System_Collections_Generic_List_Enumerator_T__o local_88;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  
  if ((DAT_045665a2 & 1) == 0) {
    FUN_01bab630(&System_Comparison<IDGOGBNEGAM>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OPMDFMOAMKB>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OPMDFMOAMKB>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OPMDFMOAMKB>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<DPDNFOCBGGD>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<DPDNFOCBGGD>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OPMDFMOAMKB>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IDGOGBNEGAM>_Sort__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IDGOGBNEGAM>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IDGOGBNEGAM>_get_Item__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable_<>c_MAKCLEHHMHN__);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable_<>c_TypeInfo);
    DAT_045665a2 = 1;
  }
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._current = (Il2CppObject *)0x0;
  pSVar7 = (__this->fields).EHNBACPAECJ;
  if (pSVar7 != (System_Collections_Generic_List_DPDNFOCBGGD__o *)0x0) {
    length = (pSVar7->fields)._size;
    (pSVar7->fields)._size = 0;
    (pSVar7->fields)._version = (pSVar7->fields)._version + 1;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(pSVar7->fields)._items,0,length,(MethodInfo *)0x0);
    }
    pSVar10 = (__this->fields).NMNKHAIGHDG;
    if ((Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    comparison = Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable_<>c_TypeInfo->static_fields->
                 __9__32_0;
    if (comparison == (System_Comparison_IDGOGBNEGAM__o *)0x0) {
      if ((Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable_<>c_TypeInfo->_2).cctor_finished == 0)
      {
        thunk_FUN_01ba7564();
      }
      comparison = (System_Comparison_IDGOGBNEGAM__o *)
                   thunk_FUN_01bda818(System_Comparison<IDGOGBNEGAM>_TypeInfo);
      System_Comparison<object>___ctor();
      ppSVar5 = &Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable_<>c_TypeInfo->static_fields->
                 __9__32_0;
      *ppSVar5 = comparison;
      thunk_FUN_01c20e04(ppSVar5,comparison);
    }
    if (pSVar10 != (System_Collections_Generic_List_IDGOGBNEGAM__o *)0x0) {
      System_Collections_Generic_List<object>__Sort
                ((System_Collections_Generic_List_object__o *)pSVar10,
                 (System_Comparison_T__o *)comparison,
                 Method_System_Collections_Generic_List<IDGOGBNEGAM>_Sort__);
      pSVar10 = (__this->fields).NMNKHAIGHDG;
      if (pSVar10 != (System_Collections_Generic_List_IDGOGBNEGAM__o *)0x0) {
        iVar9 = (pSVar10->fields)._size;
        if (iVar9 < 1) {
LAB_03214980:
          __this_00 = (__this->fields).AIFLDFNIHBJ;
          if (__this_00 != (System_Collections_Generic_List_OPMDFMOAMKB__o *)0x0) {
            System_Collections_Generic_List<object>__GetEnumerator
                      (&local_88,(System_Collections_Generic_List_object__o *)__this_00,
                       Method_System_Collections_Generic_List<OPMDFMOAMKB>_GetEnumerator__);
            iVar9 = 0;
            local_70.fields._index = local_88.fields._index;
            local_70.fields._version = local_88.fields._version;
            local_70.fields._list = local_88.fields._list;
            local_70.fields._current = local_88.fields._current;
            while( true ) {
              bVar4 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                (&local_70,
                                 Method_System_Collections_Generic_List_Enumerator<OPMDFMOAMKB>_MoveNext__
                                );
              pIVar6 = local_70.fields._current;
              lVar3 = Method_System_Collections_Generic_List<DPDNFOCBGGD>_Add__;
              if (!bVar4) break;
              pSVar10 = (__this->fields).NMNKHAIGHDG;
              if (pSVar10 == (System_Collections_Generic_List_IDGOGBNEGAM__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              if ((DPDNFOCBGGD_o *)local_70.fields._current == (DPDNFOCBGGD_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              if (((DPDNFOCBGGD_o *)((long)local_70.fields._current + 0x18))->klass ==
                  (DPDNFOCBGGD_c *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              iVar11 = (pSVar10->fields)._size;
              iVar1 = *(int *)&(((DPDNFOCBGGD_o *)((long)local_70.fields._current + 0x18))->klass->
                               _1).name;
              if (iVar1 <= iVar11) {
                iVar11 = iVar1;
              }
              if (iVar11 <= iVar9) break;
              pSVar7 = (__this->fields).EHNBACPAECJ;
              if (pSVar7 == (System_Collections_Generic_List_DPDNFOCBGGD__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              pDVar8 = (pSVar7->fields)._items;
              (pSVar7->fields)._version = (pSVar7->fields)._version + 1;
              if (pDVar8 == (DPDNFOCBGGD_array *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              uVar2 = (pSVar7->fields)._size;
              if (uVar2 < (uint)pDVar8->max_length) {
                (pSVar7->fields)._size = uVar2 + 1;
                pDVar8->m_Items[(int)uVar2] = (DPDNFOCBGGD_o *)local_70.fields._current;
                thunk_FUN_01c20e04(pDVar8->m_Items + (int)uVar2,local_70.fields._current);
              }
              else {
                System_Collections_Generic_List<object>__AddWithResize
                          ((System_Collections_Generic_List_object__o *)pSVar7,
                           local_70.fields._current,
                           *(MethodInfo_26E4DAC **)
                            (*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
              }
              do {
                pSVar10 = (__this->fields).NMNKHAIGHDG;
                    /* try { // try from 03214a70 to 03314b7f has its CatchHandler @ 03214a70
                       catch() { ... } // from try @ 03214a70 with catch @ 03214a70
                       catch() { ... } // from try @ 03214c90 with catch @ 03214a70
                       catch() { ... } // from try @ 03214cc8 with catch @ 03214a70
                       catch() { ... } // from try @ 03214d08 with catch @ 03214a70
                       catch() { ... } // from try @ 03214d38 with catch @ 03214a70 */
                if (pSVar10 == (System_Collections_Generic_List_IDGOGBNEGAM__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                pSVar7 = (__this->fields).EHNBACPAECJ;
                item = (DPDNFOCBGGD_o *)
                       System_Collections_Generic_List<object>__get_Item
                                 ((System_Collections_Generic_List_object__o *)pSVar10,iVar9,
                                  Method_System_Collections_Generic_List<IDGOGBNEGAM>_get_Item__);
                lVar3 = Method_System_Collections_Generic_List<DPDNFOCBGGD>_Add__;
                if (pSVar7 == (System_Collections_Generic_List_DPDNFOCBGGD__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                pDVar8 = (pSVar7->fields)._items;
                (pSVar7->fields)._version = (pSVar7->fields)._version + 1;
                if (pDVar8 == (DPDNFOCBGGD_array *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                uVar2 = (pSVar7->fields)._size;
                if (uVar2 < (uint)pDVar8->max_length) {
                  (pSVar7->fields)._size = uVar2 + 1;
                  pDVar8->m_Items[(int)uVar2] = item;
                  thunk_FUN_01c20e04();
                }
                else {
                  System_Collections_Generic_List<object>__AddWithResize
                            ((System_Collections_Generic_List_object__o *)pSVar7,
                             (Il2CppObject *)item,
                             *(MethodInfo_26E4DAC **)
                              (*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
                }
                iVar9 = iVar9 + 1;
              } while (iVar11 != iVar9);
              if (((DPDNFOCBGGD_o *)((long)pIVar6 + 0x18))->klass == (DPDNFOCBGGD_c *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              iVar9 = *(int *)&(((DPDNFOCBGGD_o *)((long)pIVar6 + 0x18))->klass->_1).name;
            }
            System_Collections_Generic_List_Enumerator<object>__Dispose
                      (&local_70,
                       Method_System_Collections_Generic_List_Enumerator<OPMDFMOAMKB>_Dispose__);
            Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable__NCDOMAGEGCF(__this,method_00);
            return;
          }
        }
        else {
          iVar11 = 1;
          do {
            pIVar6 = System_Collections_Generic_List<object>__get_Item
                               ((System_Collections_Generic_List_object__o *)pSVar10,iVar11 + -1,
                                Method_System_Collections_Generic_List<IDGOGBNEGAM>_get_Item__);
            if (pIVar6 == (Il2CppObject *)0x0) break;
            *(int *)((long)&pIVar6[1].klass + 4) = iVar11;
            if (iVar9 == iVar11) goto LAB_03214980;
            pSVar10 = (__this->fields).NMNKHAIGHDG;
            iVar11 = iVar11 + 1;
          } while (pSVar10 != (System_Collections_Generic_List_IDGOGBNEGAM__o *)0x0);
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

