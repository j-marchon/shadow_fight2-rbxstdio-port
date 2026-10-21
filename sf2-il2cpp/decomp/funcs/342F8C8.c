// GBJGJEGPHKD$$NKGOBNPBCDM @ RVA 0x342F8C8

void GBJGJEGPHKD__NKGOBNPBCDM
               (GBJGJEGPHKD_o *__this,
               System_Collections_Generic_List_MGNDHCBAPEN_string__float___o *PCCHGBJONLN,
               MethodInfo *method)

{
  uint uVar1;
  Il2CppObject *pIVar2;
  bool bVar3;
  IEFEBEDLHNN_o *item;
  System_Object_array *args;
  long lVar4;
  System_Collections_Generic_List_IEFEBEDLHNN__o *__this_00;
  undefined8 uVar5;
  GBJGJEGPHKD_CMPNJPOADCA_o *pGVar6;
  IEFEBEDLHNN_array *pIVar7;
  Il2CppClass *pIVar8;
  System_Collections_Generic_List_Enumerator_T__o local_98;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  if ((DAT_04568160 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<string,_float>>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<string,_float>>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<string,_float>>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<IEFEBEDLHNN>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_float>>_GetEnumerator__
                );
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_9176);
    DAT_04568160 = 1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  if (PCCHGBJONLN == (System_Collections_Generic_List_MGNDHCBAPEN_string__float___o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_98,(System_Collections_Generic_List_object__o *)PCCHGBJONLN,
             Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_float>>_GetEnumerator__);
  local_80.fields._index = local_98.fields._index;
  local_80.fields._version = local_98.fields._version;
  local_80.fields._list = local_98.fields._list;
  local_80.fields._current = local_98.fields._current;
  while( true ) {
    bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_80,
                       Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<string,_float>>_MoveNext__
                      );
    pIVar2 = local_80.fields._current;
    if (!bVar3) {
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_80,
                 Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<string,_float>>_Dispose__
                );
      return;
    }
    if (local_80.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    item = GBJGJEGPHKD__OCJAHBKIFNO
                     (__this,(System_String_o *)local_80.fields._current[1].klass,method);
    if (item == (IEFEBEDLHNN_o *)0x0) {
      args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
      if (args == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pIVar8 = pIVar2[1].klass;
      if ((pIVar8 != (Il2CppClass *)0x0) &&
         (lVar4 = thunk_FUN_01bda71c(pIVar8,(((args->obj).klass)->_1).element_class), lVar4 == 0)) {
        uVar5 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
        FUN_01bab798(uVar5,0);
      }
      if ((int)args->max_length == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
      args->m_Items[0] = (Il2CppObject *)pIVar8;
      thunk_FUN_01c20e04(args->m_Items,pIVar8);
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      method = (MethodInfo *)0x0;
      UnityEngine_Debug__LogErrorFormat(StringLiteral_9176,args,(MethodInfo *)0x0);
    }
    lVar4 = Method_System_Collections_Generic_List<IEFEBEDLHNN>_Add__;
    pGVar6 = (__this->fields).EOIPAPCMGGF;
    if (pGVar6 == (GBJGJEGPHKD_CMPNJPOADCA_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    __this_00 = (pGVar6->fields).FMNFMACCAKD;
    if (__this_00 == (System_Collections_Generic_List_IEFEBEDLHNN__o *)0x0) break;
    pIVar7 = (__this_00->fields)._items;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    if (pIVar7 == (IEFEBEDLHNN_array *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    uVar1 = (__this_00->fields)._size;
    if (uVar1 < (uint)pIVar7->max_length) {
      (__this_00->fields)._size = uVar1 + 1;
      pIVar7->m_Items[(int)uVar1] = item;
      thunk_FUN_01c20e04(pIVar7->m_Items + (int)uVar1,item);
    }
    else {
      method = *(MethodInfo **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70);
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)item,
                 (MethodInfo_26E4DAC *)method);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

