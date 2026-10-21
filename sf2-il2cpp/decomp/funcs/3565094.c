// LIFECPAILNA$$CILPNDAAJGF @ RVA 0x3565094

DOCABGGCCIL_o * LIFECPAILNA__CILPNDAAJGF(LIFECPAILNA_o *__this,MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  bool bVar4;
  System_Collections_Generic_List_float__o *__this_00;
  System_Collections_Generic_List_LIFECPAILNA_BJKDAMLKHMA__o *pSVar5;
  Il2CppObject *pIVar6;
  MethodInfo *extraout_x1;
  System_Single_array *pSVar7;
  int index;
  int index_00;
  float fVar8;
  float fVar9;
  System_Collections_Generic_List_Enumerator_T__o local_88;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  
  if ((DAT_04568be7 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<LIFECPAILNA_BJKDAMLKHMA>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<LIFECPAILNA_BJKDAMLKHMA>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<LIFECPAILNA_BJKDAMLKHMA>_get_Current__
                );
    FUN_01bab630(&LIIFLGALGNK_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<float>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<LIFECPAILNA_BJKDAMLKHMA>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<float>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<float>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<LIFECPAILNA_BJKDAMLKHMA>_get_Item__);
    FUN_01bab630(&Method_System_Collections_Generic_List<float>_get_Item__);
    FUN_01bab630(&System_Collections_Generic_List<float>_TypeInfo);
    DAT_04568be7 = 1;
    method = extraout_x1;
  }
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._current = (Il2CppObject *)0x0;
  __this_00 = (System_Collections_Generic_List_float__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<float>_TypeInfo,method);
  System_Collections_Generic_List<float>___ctor
            (__this_00,Method_System_Collections_Generic_List<float>__ctor__);
  lVar3 = Method_System_Collections_Generic_List<float>_Add__;
  if (__this_00 != (System_Collections_Generic_List_float__o *)0x0) {
    pSVar7 = (__this_00->fields)._items;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    if (pSVar7 != (System_Single_array *)0x0) {
      uVar2 = (__this_00->fields)._size;
      if (uVar2 < (uint)pSVar7->max_length) {
        (__this_00->fields)._size = uVar2 + 1;
        pSVar7->m_Items[(int)uVar2] = 0.0;
      }
      else {
        System_Collections_Generic_List<float>__AddWithResize
                  (__this_00,0.0,
                   *(MethodInfo_2703A5C **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
      }
      pSVar5 = (__this->fields).KLBPMOHPJBD;
      if (pSVar5 != (System_Collections_Generic_List_LIFECPAILNA_BJKDAMLKHMA__o *)0x0) {
        System_Collections_Generic_List<object>__GetEnumerator
                  (&local_88,(System_Collections_Generic_List_object__o *)pSVar5,
                   Method_System_Collections_Generic_List<LIFECPAILNA_BJKDAMLKHMA>_GetEnumerator__);
        fVar9 = 0.0;
        local_70.fields._index = local_88.fields._index;
        local_70.fields._version = local_88.fields._version;
        local_70.fields._list = local_88.fields._list;
        local_70.fields._current = local_88.fields._current;
        while (bVar4 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                 (&local_70,
                                  Method_System_Collections_Generic_List_Enumerator<LIFECPAILNA_BJKDAMLKHMA>_MoveNext__
                                 ), lVar3 = Method_System_Collections_Generic_List<float>_Add__,
              bVar4) {
          if (local_70.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pSVar7 = (__this_00->fields)._items;
          fVar9 = fVar9 + *(float *)&local_70.fields._current[1].monitor;
          (__this_00->fields)._version = (__this_00->fields)._version + 1;
          if (pSVar7 == (System_Single_array *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          uVar2 = (__this_00->fields)._size;
          if (uVar2 < (uint)pSVar7->max_length) {
            (__this_00->fields)._size = uVar2 + 1;
            pSVar7->m_Items[(int)uVar2] = fVar9;
          }
          else {
            System_Collections_Generic_List<float>__AddWithResize
                      (__this_00,fVar9,
                       *(MethodInfo_2703A5C **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
          }
        }
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_70,
                   Method_System_Collections_Generic_List_Enumerator<LIFECPAILNA_BJKDAMLKHMA>_Dispose__
                  );
        if ((LIIFLGALGNK_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        fVar9 = LIIFLGALGNK__GFHNCCOMPAJ(0.0,fVar9,(MethodInfo *)0x0);
        iVar1 = (__this_00->fields)._size;
        if (0 < iVar1 + -1) {
          index_00 = 1;
          do {
            index = index_00 + -1;
            fVar8 = System_Collections_Generic_List<float>__get_Item
                              (__this_00,index,
                               Method_System_Collections_Generic_List<float>_get_Item__);
            if ((fVar8 <= fVar9) &&
               (fVar8 = System_Collections_Generic_List<float>__get_Item
                                  (__this_00,index_00,
                                   Method_System_Collections_Generic_List<float>_get_Item__),
               fVar9 <= fVar8)) goto LAB_03665330;
            index_00 = index_00 + 1;
          } while (iVar1 != index_00);
        }
        index = 0;
LAB_03665330:
        pSVar5 = (__this->fields).KLBPMOHPJBD;
        if ((pSVar5 != (System_Collections_Generic_List_LIFECPAILNA_BJKDAMLKHMA__o *)0x0) &&
           (pIVar6 = System_Collections_Generic_List<object>__get_Item
                               ((System_Collections_Generic_List_object__o *)pSVar5,index,
                                Method_System_Collections_Generic_List<LIFECPAILNA_BJKDAMLKHMA>_get_Item__
                               ), pIVar6 != (Il2CppObject *)0x0)) {
          return (DOCABGGCCIL_o *)pIVar6[1].klass;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

