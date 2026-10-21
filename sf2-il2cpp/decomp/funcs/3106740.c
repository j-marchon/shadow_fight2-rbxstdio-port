// OPNFCOGALLI$$LCEFIPCHKMN @ RVA 0x3106740

void OPNFCOGALLI__LCEFIPCHKMN(OPNFCOGALLI_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  Il2CppObject *item;
  bool bVar3;
  int32_t PKDBOMAHGHC;
  System_Collections_Generic_List_object__o *__this_00;
  MethodInfo *extraout_x1;
  ECENNHNBAME_o *pEVar4;
  ECENNHNBAME_HJPFANEPGJF_o *pEVar5;
  GBJGJEGPHKD_o *pGVar6;
  System_Object_array *pSVar7;
  System_Collections_Generic_List_IIMNGGHGKOD__o *__this_01;
  System_Collections_Generic_List_Enumerator_T__o local_78;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  
  if ((DAT_0456650f & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IIMNGGHGKOD>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IIMNGGHGKOD>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IIMNGGHGKOD>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IIMNGGHGKOD>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IIMNGGHGKOD>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IIMNGGHGKOD>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IIMNGGHGKOD>_get_Count__);
    FUN_01bab630(&System_Collections_Generic_List<IIMNGGHGKOD>_TypeInfo);
    FUN_01bab630(&Method_OMLLDCIMLBB<object>_CallEvent__);
    DAT_0456650f = 1;
    method = extraout_x1;
  }
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
  if (((__this->fields).FAHOMGFHMAP != false) && ((__this->fields).GOIGJAGADMO != false)) {
    pEVar4 = (__this->fields).NDBPNFLAKDL;
    (__this->fields).FAHOMGFHMAP = false;
    if ((pEVar4 == (ECENNHNBAME_o *)0x0) ||
       ((pEVar5 = (pEVar4->fields).DMGLMCBIAGL, pEVar5 == (ECENNHNBAME_HJPFANEPGJF_o *)0x0 ||
        (__this_01 = (pEVar5->fields).NEIJJHEFLHP,
        __this_01 == (System_Collections_Generic_List_IIMNGGHGKOD__o *)0x0)))) {
LAB_0320698c:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if (0 < (__this_01->fields)._size) {
      PKDBOMAHGHC = OPNFCOGALLI__MKIHMHHJLHE(__this,method);
      __this_00 = (System_Collections_Generic_List_object__o *)
                  thunk_FUN_01bda818(System_Collections_Generic_List<IIMNGGHGKOD>_TypeInfo);
      System_Collections_Generic_List<object>___ctor
                (__this_00,Method_System_Collections_Generic_List<IIMNGGHGKOD>__ctor__);
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_78,(System_Collections_Generic_List_object__o *)__this_01,
                 Method_System_Collections_Generic_List<IIMNGGHGKOD>_GetEnumerator__);
      local_60.fields._index = local_78.fields._index;
      local_60.fields._version = local_78.fields._version;
      local_60.fields._list = local_78.fields._list;
      local_60.fields._current = local_78.fields._current;
      while( true ) {
        bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_60,
                           Method_System_Collections_Generic_List_Enumerator<IIMNGGHGKOD>_MoveNext__
                          );
        item = local_60.fields._current;
        if (!bVar3) break;
        pGVar6 = (__this->fields).KOHECBJAFKG;
        if (pGVar6 == (GBJGJEGPHKD_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        if ((IIMNGGHGKOD_o *)local_60.fields._current == (IIMNGGHGKOD_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        bVar3 = IIMNGGHGKOD__KOLIFGAJOHA
                          ((IIMNGGHGKOD_o *)local_60.fields._current,PKDBOMAHGHC,
                           (__this->fields).NDBPNFLAKDL,(pGVar6->fields).KOHECBJAFKG,
                           (MethodInfo *)0x0);
        lVar2 = Method_System_Collections_Generic_List<IIMNGGHGKOD>_Add__;
        if (bVar3) {
          if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pSVar7 = (__this_00->fields)._items;
          (__this_00->fields)._version = (__this_00->fields)._version + 1;
          if (pSVar7 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          uVar1 = (__this_00->fields)._size;
          if (uVar1 < (uint)pSVar7->max_length) {
            (__this_00->fields)._size = uVar1 + 1;
            pSVar7->m_Items[(int)uVar1] = item;
            thunk_FUN_01c20e04(pSVar7->m_Items + (int)uVar1,item);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      (__this_00,item,
                       *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
          }
        }
      }
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_60,Method_System_Collections_Generic_List_Enumerator<IIMNGGHGKOD>_Dispose__)
      ;
      if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_0320698c;
      if (0 < (__this_00->fields)._size) {
        OMLLDCIMLBB<object>__CallEvent
                  ((OMLLDCIMLBB_object__o *)__this,5,(Il2CppObject *)__this_00,
                   Method_OMLLDCIMLBB<object>_CallEvent__);
      }
    }
  }
  return;
}

