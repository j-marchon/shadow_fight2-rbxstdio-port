// CLFCKIFNGHA$$NHPECIMNMBM @ RVA 0x3454A24

/* WARNING: Removing unreachable block (ram,0x03554da0) */

void CLFCKIFNGHA__NHPECIMNMBM
               (System_Collections_Generic_List_string__o *CBDPLOECEOA,
               System_Threading_CancellationToken_o DHAGFGIGPFI,
               System_Action_HashSet_string___o *NOOAHEHCMEL,MethodInfo *method)

{
  Il2CppObject *AFKICLAFDKC;
  bool bVar1;
  Il2CppObject *pIVar2;
  Il2CppClass *__this;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *JLNPKGGFFDD;
  UnityMainThreadDispatcher_o *__this_00;
  System_Action_o *PKKMGBOIDJD;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  int iVar3;
  System_Threading_CancellationToken_o __this_01;
  System_Collections_Generic_List_Enumerator_T__o local_98;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  if ((DAT_045682c0 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6474);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6475);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&CLFCKIFNGHA_TypeInfo);
    FUN_01bab630(&System_Threading_CancellationToken_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_HashSet<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_HashSet<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_HashSet<string>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_GetEnumerator__);
    FUN_01bab630(&Method_CLFCKIFNGHA_NEPIAMCAOBL_ODOPJJFCNAD__);
    FUN_01bab630(&CLFCKIFNGHA_NEPIAMCAOBL_TypeInfo);
    FUN_01bab630(&UnityMainThreadDispatcher_TypeInfo);
    DAT_045682c0 = 1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  pIVar2 = (Il2CppObject *)thunk_FUN_01bda818(CLFCKIFNGHA_NEPIAMCAOBL_TypeInfo);
  System_Object___ctor(pIVar2,(MethodInfo *)0x0);
  if (pIVar2 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  __this_01.fields._source = (System_Threading_CancellationToken_Fields)(pIVar2 + 1);
  *(System_Threading_CancellationToken_Fields *)__this_01.fields._source =
       DHAGFGIGPFI.fields._source;
  thunk_FUN_01c20e04(__this_01.fields._source,0);
  pIVar2[1].monitor = NOOAHEHCMEL;
  thunk_FUN_01c20e04(&pIVar2[1].monitor,NOOAHEHCMEL);
  __this = (Il2CppClass *)thunk_FUN_01bda818(System_Collections_Generic_HashSet<string>_TypeInfo);
  System_Collections_Generic_HashSet<object>___ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             Method_System_Collections_Generic_HashSet<string>__ctor__);
  pIVar2 = pIVar2 + 2;
  pIVar2->klass = __this;
  thunk_FUN_01c20e04(pIVar2,__this);
  if (CBDPLOECEOA == (System_Collections_Generic_List_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_98,(System_Collections_Generic_List_object__o *)CBDPLOECEOA,
             Method_System_Collections_Generic_List<string>_GetEnumerator__);
  local_80.fields._index = local_98.fields._index;
  local_80.fields._version = local_98.fields._version;
  local_80.fields._list = local_98.fields._list;
  local_80.fields._current = local_98.fields._current;
  do {
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_80,
                       Method_System_Collections_Generic_List_Enumerator<string>_MoveNext__);
    AFKICLAFDKC = local_80.fields._current;
    if (!bVar1) {
      iVar3 = 6;
LAB_03554d04:
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_80,Method_System_Collections_Generic_List_Enumerator<string>_Dispose__);
      if ((iVar3 == 6) || (iVar3 == 0)) {
        if ((UnityMainThreadDispatcher_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        __this_00 = UnityMainThreadDispatcher__get_Current((MethodInfo *)0x0);
        PKKMGBOIDJD = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
        System_Action___ctor();
        if (__this_00 == (UnityMainThreadDispatcher_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        UnityMainThreadDispatcher__Enqueue(__this_00,PKKMGBOIDJD,(MethodInfo *)0x0);
      }
      return;
    }
    if ((System_Threading_CancellationToken_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = System_Threading_CancellationToken__get_IsCancellationRequested
                      (__this_01,(MethodInfo *)0x0);
    if (bVar1) {
      MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)MOPNMEHIMFJ,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6474,
                 (MethodInfo *)0x0);
      LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)LFINFBNOLFG,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6475,
                 (MethodInfo *)0x0);
      JLNPKGGFFDD = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
      if ((UnityMainThreadDispatcher_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityMainThreadDispatcher__LogThreadSafe((Il2CppObject *)JLNPKGGFFDD,(MethodInfo *)0x0);
      iVar3 = 5;
      goto LAB_03554d04;
    }
    method_00 = extraout_x1;
    if ((CLFCKIFNGHA_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
      method_00 = extraout_x1_00;
    }
    bVar1 = CLFCKIFNGHA__HIPBEBHBDLE((System_String_o *)AFKICLAFDKC,method_00);
    if (!bVar1) {
      if (pIVar2->klass == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      System_Collections_Generic_HashSet<object>__Add
                ((System_Collections_Generic_HashSet_object__o *)pIVar2->klass,AFKICLAFDKC,
                 Method_System_Collections_Generic_HashSet<string>_Add__);
    }
  } while( true );
}

