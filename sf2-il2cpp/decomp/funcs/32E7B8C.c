// MEJIKMPNBNL$$LJOCPCHJNIJ @ RVA 0x32E7B8C

System_Collections_Generic_List_OOMHDDBCBJP__o *
MEJIKMPNBNL__LJOCPCHJNIJ
          (MEJIKMPNBNL_o *__this,int32_t ACCIHBHMFPN,bool EMACOPPADFA,MethodInfo *method)

{
  uint uVar1;
  bool bVar2;
  int32_t iVar3;
  System_Collections_Generic_List_OOMHDDBCBJP__o *__this_00;
  System_Collections_Generic_List_OOMHDDBCBJP__o *__this_01;
  System_Object_array *args;
  Il2CppObject *pIVar4;
  long lVar5;
  undefined8 uVar6;
  OOMHDDBCBJP_array *pOVar7;
  System_Collections_Generic_List_Enumerator_T__o local_78;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  
  if ((DAT_0456761f & 1) == 0) {
    FUN_01bab630(&COALAGILPBO_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OOMHDDBCBJP>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OOMHDDBCBJP>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OOMHDDBCBJP>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OOMHDDBCBJP>_get_Count__);
    FUN_01bab630(&System_Collections_Generic_List<OOMHDDBCBJP>_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_5957);
    DAT_0456761f = 1;
  }
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
  __this_00 = (System_Collections_Generic_List_OOMHDDBCBJP__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<OOMHDDBCBJP>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<OOMHDDBCBJP>__ctor__);
  __this_01 = (__this->fields).BDCBJJGNPMC;
  if (__this_01 != (System_Collections_Generic_List_OOMHDDBCBJP__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_78,(System_Collections_Generic_List_object__o *)__this_01,
               Method_System_Collections_Generic_List<OOMHDDBCBJP>_GetEnumerator__);
    local_60.fields._list =
         (System_Collections_Generic_List_T__o *)
         CONCAT44(local_78.fields._list._4_4_,(int32_t)local_78.fields._list);
    local_60.fields._index = local_78.fields._index;
    local_60.fields._version = local_78.fields._version;
    local_60.fields._current = local_78.fields._current;
    while( true ) {
      bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_60,
                         Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_MoveNext__);
      pIVar4 = local_60.fields._current;
      if (!bVar2) break;
      if ((OOMHDDBCBJP_o *)local_60.fields._current == (OOMHDDBCBJP_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      iVar3 = OOMHDDBCBJP__NHGGBEACKBD((OOMHDDBCBJP_o *)local_60.fields._current,(MethodInfo *)0x0);
      lVar5 = Method_System_Collections_Generic_List<OOMHDDBCBJP>_Add__;
      if (iVar3 == ACCIHBHMFPN) {
        if (__this_00 == (System_Collections_Generic_List_OOMHDDBCBJP__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pOVar7 = (__this_00->fields)._items;
        (__this_00->fields)._version = (__this_00->fields)._version + 1;
        if (pOVar7 == (OOMHDDBCBJP_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        uVar1 = (__this_00->fields)._size;
        if (uVar1 < (uint)pOVar7->max_length) {
          (__this_00->fields)._size = uVar1 + 1;
          pOVar7->m_Items[(int)uVar1] = (OOMHDDBCBJP_o *)pIVar4;
          thunk_FUN_01c20e04(pOVar7->m_Items + (int)uVar1,pIVar4);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_00,pIVar4,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
        }
      }
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_60,Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_Dispose__);
    if (__this_00 != (System_Collections_Generic_List_OOMHDDBCBJP__o *)0x0) {
      if (((__this_00->fields)._size == 0) && (EMACOPPADFA)) {
        args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
        local_78.fields._list._0_4_ = ACCIHBHMFPN;
        pIVar4 = (Il2CppObject *)thunk_FUN_01bda448(COALAGILPBO_TypeInfo,&local_78);
        if (args == (System_Object_array *)0x0) goto LAB_033e7e2c;
        if ((pIVar4 != (Il2CppObject *)0x0) &&
           (lVar5 = thunk_FUN_01bda71c(pIVar4,(((args->obj).klass)->_1).element_class), lVar5 == 0))
        {
          uVar6 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
          FUN_01bab798(uVar6,0);
        }
        if ((int)args->max_length == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8d0();
        }
        args->m_Items[0] = pIVar4;
        thunk_FUN_01c20e04(args->m_Items,pIVar4);
        if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        UnityEngine_Debug__LogFormat(StringLiteral_5957,args,(MethodInfo *)0x0);
      }
      return __this_00;
    }
  }
LAB_033e7e2c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

