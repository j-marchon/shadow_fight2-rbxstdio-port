// HOOAAGABMBL$$DBONHFEAOEG @ RVA 0x30E8A38

System_Collections_Generic_List_PONNKDFAMFM__o *
HOOAAGABMBL__DBONHFEAOEG
          (HOOAAGABMBL_o *__this,bool CGBENLNALEG,int32_t OBADACMNENC,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  Il2CppObject *pIVar3;
  bool bVar4;
  int32_t iVar5;
  int32_t iVar6;
  System_Collections_Generic_List_PONNKDFAMFM__o *__this_00;
  System_Collections_Generic_List_object__o *__this_01;
  DOPEEDABNEK_o *__this_02;
  BPDOKJBGHAG_o *pBVar7;
  System_Collections_Generic_List_PONNKDFAMFM__o *__this_03;
  MethodInfo *method_00;
  PONNKDFAMFM_IBOIJJKIIAJ_o *pPVar8;
  System_Object_array *pSVar9;
  PONNKDFAMFM_array *pPVar10;
  System_Collections_Generic_List_Enumerator_T__o local_98;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  if ((DAT_0456641c & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PONNKDFAMFM>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PONNKDFAMFM>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PONNKDFAMFM>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PONNKDFAMFM>_AddRange__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PONNKDFAMFM>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PONNKDFAMFM>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PONNKDFAMFM>_Sort__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PONNKDFAMFM>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<PONNKDFAMFM>_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_0456641c = 1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  __this_00 = (System_Collections_Generic_List_PONNKDFAMFM__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<PONNKDFAMFM>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<PONNKDFAMFM>__ctor__);
  __this_01 = (System_Collections_Generic_List_object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<PONNKDFAMFM>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            (__this_01,Method_System_Collections_Generic_List<PONNKDFAMFM>__ctor__);
  iVar5 = HOOAAGABMBL__CKBLOIOCNPP(__this,method_00);
  if (__this_01 != (System_Collections_Generic_List_object__o *)0x0) {
    System_Collections_Generic_List<object>__AddRange
              (__this_01,
               (System_Collections_Generic_IEnumerable_T__o *)
               (__this->fields)._PIKFJCELJID_k__BackingField,
               Method_System_Collections_Generic_List<PONNKDFAMFM>_AddRange__);
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
    __this_02 = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
    if (__this_02 != (DOPEEDABNEK_o *)0x0) {
      pBVar7 = DOPEEDABNEK__KCGCLNKJLPM(__this_02,__this,(MethodInfo *)0x0);
      if (pBVar7 != (BPDOKJBGHAG_o *)0x0) {
        __this_03 = (pBVar7->fields).NBDCLLADIFL;
        if (__this_03 == (System_Collections_Generic_List_PONNKDFAMFM__o *)0x0) goto LAB_031e8df8;
        System_Collections_Generic_List<object>__GetEnumerator
                  (&local_98,(System_Collections_Generic_List_object__o *)__this_03,
                   Method_System_Collections_Generic_List<PONNKDFAMFM>_GetEnumerator__);
        local_80.fields._index = local_98.fields._index;
        local_80.fields._version = local_98.fields._version;
        local_80.fields._list = local_98.fields._list;
        local_80.fields._current = local_98.fields._current;
        while (bVar4 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                 (&local_80,
                                  Method_System_Collections_Generic_List_Enumerator<PONNKDFAMFM>_MoveNext__
                                 ), pIVar3 = local_80.fields._current, bVar4) {
          if ((PONNKDFAMFM_o *)local_80.fields._current == (PONNKDFAMFM_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pPVar8 = ((PONNKDFAMFM_Fields *)((long)local_80.fields._current + 0x10))->JDHAHDALAOA;
          if (pPVar8 == (PONNKDFAMFM_IBOIJJKIIAJ_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          iVar6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                            ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                             (pPVar8->fields).AEIJFFBOBCP.fields,(MethodInfo *)0x0);
          lVar2 = Method_System_Collections_Generic_List<PONNKDFAMFM>_Add__;
          if (iVar5 < iVar6) {
            pSVar9 = (__this_01->fields)._items;
            (__this_01->fields)._version = (__this_01->fields)._version + 1;
            if (pSVar9 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            uVar1 = (__this_01->fields)._size;
            if (uVar1 < (uint)pSVar9->max_length) {
              (__this_01->fields)._size = uVar1 + 1;
              pSVar9->m_Items[(int)uVar1] = pIVar3;
              thunk_FUN_01c20e04(pSVar9->m_Items + (int)uVar1,pIVar3);
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        (__this_01,pIVar3,
                         *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70))
              ;
            }
          }
        }
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_80,
                   Method_System_Collections_Generic_List_Enumerator<PONNKDFAMFM>_Dispose__);
      }
      System_Collections_Generic_List<object>__Sort
                (__this_01,Method_System_Collections_Generic_List<PONNKDFAMFM>_Sort__);
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_98,__this_01,
                 Method_System_Collections_Generic_List<PONNKDFAMFM>_GetEnumerator__);
      local_80.fields._index = local_98.fields._index;
      local_80.fields._version = local_98.fields._version;
      local_80.fields._list = local_98.fields._list;
      local_80.fields._current = local_98.fields._current;
LAB_031e8ce0:
      bVar4 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_80,
                         Method_System_Collections_Generic_List_Enumerator<PONNKDFAMFM>_MoveNext__);
      pIVar3 = local_80.fields._current;
      if (!bVar4) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_80,
                   Method_System_Collections_Generic_List_Enumerator<PONNKDFAMFM>_Dispose__);
        return __this_00;
      }
      if (CGBENLNALEG) goto code_r0x031e8cf8;
      if ((PONNKDFAMFM_o *)local_80.fields._current == (PONNKDFAMFM_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      goto LAB_031e8d24;
    }
  }
LAB_031e8df8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
code_r0x031e8cf8:
  if ((PONNKDFAMFM_o *)local_80.fields._current == (PONNKDFAMFM_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pPVar8 = ((PONNKDFAMFM_Fields *)((long)local_80.fields._current + 0x10))->JDHAHDALAOA;
  if (pPVar8 == (PONNKDFAMFM_IBOIJJKIIAJ_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  iVar5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                    ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                     (pPVar8->fields).AEIJFFBOBCP.fields,(MethodInfo *)0x0);
  if ((__this->fields)._HCHGENFJLHA_k__BackingField < iVar5) {
LAB_031e8d24:
    pPVar8 = ((PONNKDFAMFM_Fields *)((long)pIVar3 + 0x10))->JDHAHDALAOA;
    if (pPVar8 == (PONNKDFAMFM_IBOIJJKIIAJ_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    iVar5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                      ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                       (pPVar8->fields).NOPGBJNLFHM.fields,(MethodInfo *)0x0);
    lVar2 = Method_System_Collections_Generic_List<PONNKDFAMFM>_Add__;
    if (iVar5 <= OBADACMNENC) {
      if (__this_00 == (System_Collections_Generic_List_PONNKDFAMFM__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pPVar10 = (__this_00->fields)._items;
      (__this_00->fields)._version = (__this_00->fields)._version + 1;
      if (pPVar10 == (PONNKDFAMFM_array *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      uVar1 = (__this_00->fields)._size;
      if (uVar1 < (uint)pPVar10->max_length) {
        (__this_00->fields)._size = uVar1 + 1;
        pPVar10->m_Items[(int)uVar1] = (PONNKDFAMFM_o *)pIVar3;
        thunk_FUN_01c20e04(pPVar10->m_Items + (int)uVar1,pIVar3);
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_00,pIVar3,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      }
    }
  }
  goto LAB_031e8ce0;
}

