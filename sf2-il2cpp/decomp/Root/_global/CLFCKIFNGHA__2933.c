// TypeDefIndex 2933
// Namespace: 
// public static class CLFCKIFNGHA
// Fields:
//   private static List<IAGNPGHOAIC> FIDBAGOJPKB; // 0x0
//   private static Dictionary<string, IAGNPGHOAIC> FJONCCJJCBP; // 0x8
//   private static CancellationTokenSource CNINFEKICMA; // 0x10

// ===== private static void GMENDOGOHMH(IAGNPGHOAIC IEKGHPACLPF, bool CNADELPLGPE)  [RVA 0x3454500]
// CLFCKIFNGHA$$GMENDOGOHMH @ RVA 0x3454500

/* WARNING: Removing unreachable block (ram,0x0355460c) */

void CLFCKIFNGHA__GMENDOGOHMH(IAGNPGHOAIC_o *IEKGHPACLPF,bool CNADELPLGPE,MethodInfo *method)

{
  System_Collections_Generic_List_IAGNPGHOAIC__o *__this;
  MethodInfo *method_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  System_Collections_Generic_List_IAGNPGHOAIC__o *obj;
  bool local_34 [4];
  
  method_00 = (MethodInfo *)(ulong)CNADELPLGPE;
  if ((DAT_045682bf & 1) == 0) {
    FUN_01bab630(&CLFCKIFNGHA_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<IAGNPGHOAIC>_Remove__);
    DAT_045682bf = 1;
    method_00 = extraout_x1;
  }
  if ((CLFCKIFNGHA_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    method_00 = extraout_x1_00;
  }
  CLFCKIFNGHA__FKCGNCCEFCH(IEKGHPACLPF,method_00);
  obj = CLFCKIFNGHA_TypeInfo->static_fields->FIDBAGOJPKB;
  local_34[0] = false;
  System_Threading_Monitor__Enter((Il2CppObject *)obj,local_34,(MethodInfo *)0x0);
  if ((CLFCKIFNGHA_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this = CLFCKIFNGHA_TypeInfo->static_fields->FIDBAGOJPKB;
  if (__this == (System_Collections_Generic_List_IAGNPGHOAIC__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__Remove
            ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)IEKGHPACLPF,
             Method_System_Collections_Generic_List<IAGNPGHOAIC>_Remove__);
  if (local_34[0] != false) {
    System_Threading_Monitor__Exit((Il2CppObject *)obj,(MethodInfo *)0x0);
  }
  if (IEKGHPACLPF == (IAGNPGHOAIC_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  IAGNPGHOAIC__BMMOAFKFHNN(IEKGHPACLPF,true,(MethodInfo *)0x0);
  if (CNADELPLGPE) {
    IAGNPGHOAIC__GMPIHBHDDLJ(IEKGHPACLPF,(MethodInfo *)0x0);
  }
  return;
}


// ===== private static void NHPECIMNMBM(List<string> CBDPLOECEOA, CancellationToken DHAGFGIGPFI, Action<HashSet<string>> NOOAHEHCMEL)  [RVA 0x3454A24]
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


// ===== public static IAGNPGHOAIC GJJHPEFOHON(string AFKICLAFDKC)  [RVA 0x3455098]
// CLFCKIFNGHA$$GJJHPEFOHON @ RVA 0x3455098

/* WARNING: Removing unreachable block (ram,0x0355523c) */
/* WARNING: Removing unreachable block (ram,0x035551f8) */
/* WARNING: Removing unreachable block (ram,0x03555248) */

IAGNPGHOAIC_o * CLFCKIFNGHA__GJJHPEFOHON(System_String_o *AFKICLAFDKC,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_IAGNPGHOAIC__o *__this;
  MethodInfo *extraout_x1;
  System_Collections_Generic_List_IAGNPGHOAIC__o *obj;
  int iVar2;
  IAGNPGHOAIC_o *pIVar3;
  System_Collections_Generic_List_Enumerator_T__o local_78;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  bool local_44 [4];
  
  if ((DAT_045682c1 & 1) == 0) {
    FUN_01bab630(&CLFCKIFNGHA_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IAGNPGHOAIC>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IAGNPGHOAIC>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IAGNPGHOAIC>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IAGNPGHOAIC>_GetEnumerator__);
    DAT_045682c1 = 1;
    method = extraout_x1;
  }
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
  if ((CLFCKIFNGHA_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(CLFCKIFNGHA_TypeInfo,method);
  }
  obj = CLFCKIFNGHA_TypeInfo->static_fields->FIDBAGOJPKB;
  local_44[0] = false;
  System_Threading_Monitor__Enter((Il2CppObject *)obj,local_44,(MethodInfo *)0x0);
  if ((CLFCKIFNGHA_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this = CLFCKIFNGHA_TypeInfo->static_fields->FIDBAGOJPKB;
  if (__this == (System_Collections_Generic_List_IAGNPGHOAIC__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_78,(System_Collections_Generic_List_object__o *)__this,
             Method_System_Collections_Generic_List<IAGNPGHOAIC>_GetEnumerator__);
  local_60.fields._index = local_78.fields._index;
  local_60.fields._version = local_78.fields._version;
  local_60.fields._list = local_78.fields._list;
  local_60.fields._current = local_78.fields._current;
  do {
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_60,
                       Method_System_Collections_Generic_List_Enumerator<IAGNPGHOAIC>_MoveNext__);
    pIVar3 = (IAGNPGHOAIC_o *)local_60.fields._current;
    if (!bVar1) {
      pIVar3 = (IAGNPGHOAIC_o *)0x0;
      iVar2 = 5;
      goto LAB_035551e0;
    }
    if ((IAGNPGHOAIC_o *)local_60.fields._current == (IAGNPGHOAIC_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = System_String__op_Equality
                      (((IAGNPGHOAIC_Fields *)((long)local_60.fields._current + 0x10))->OMJHOKDPLKI,
                       AFKICLAFDKC,(MethodInfo *)0x0);
  } while (!bVar1);
  iVar2 = 4;
LAB_035551e0:
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_60,Method_System_Collections_Generic_List_Enumerator<IAGNPGHOAIC>_Dispose__);
  if (local_44[0] != false) {
    System_Threading_Monitor__Exit((Il2CppObject *)obj,(MethodInfo *)0x0);
  }
  if (iVar2 != 4) {
    pIVar3 = (IAGNPGHOAIC_o *)0x0;
  }
  return pIVar3;
}


// ===== private static void FKCGNCCEFCH(IAGNPGHOAIC IEKGHPACLPF)  [RVA 0x345467C]
// CLFCKIFNGHA$$FKCGNCCEFCH @ RVA 0x345467C

void CLFCKIFNGHA__FKCGNCCEFCH(IAGNPGHOAIC_o *IEKGHPACLPF,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  Il2CppObject *key;
  bool bVar3;
  System_Collections_Generic_List_object__o *__this;
  System_Collections_Generic_Dictionary_object__object__o *pSVar4;
  MethodInfo *extraout_x1;
  System_Object_array *pSVar5;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_d0;
  System_Collections_Generic_List_Enumerator_T__o local_a8;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_90;
  
  if ((DAT_045682c2 & 1) == 0) {
    FUN_01bab630(&CLFCKIFNGHA_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_IAGNPGHOAIC>_GetEnumerator__)
    ;
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_IAGNPGHOAIC>_Remove__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_Dispose__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_IAGNPGHOAIC>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_IAGNPGHOAIC>_MoveNext__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_get_Current__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_IAGNPGHOAIC>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<string,_IAGNPGHOAIC>_get_Key__);
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<string,_IAGNPGHOAIC>_get_Value__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Count__);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    DAT_045682c2 = 1;
    method = extraout_x1;
  }
  local_90.fields._getEnumeratorRetType = 0;
  local_90.fields._36_4_ = 0;
  local_90.fields._version = 0;
  local_90.fields._index = 0;
  local_90.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_90.fields._current.fields.value = (Il2CppObject *)0x0;
  local_90.fields._current.fields.key = (Il2CppObject *)0x0;
  local_a8.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_a8.fields._index = 0;
  local_a8.fields._version = 0;
  local_a8.fields._current = (Il2CppObject *)0x0;
  __this = (System_Collections_Generic_List_object__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            (__this,Method_System_Collections_Generic_List<string>__ctor__);
  if ((CLFCKIFNGHA_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)
           CLFCKIFNGHA_TypeInfo->static_fields->FJONCCJJCBP;
  if (pSVar4 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary<object,_object>__GetEnumerator
              (&local_d0,pSVar4,
               Method_System_Collections_Generic_Dictionary<string,_IAGNPGHOAIC>_GetEnumerator__);
    local_90.fields._version = local_d0.fields._version;
    local_90.fields._index = local_d0.fields._index;
    local_90.fields._dictionary = local_d0.fields._dictionary;
    local_90.fields._current.fields.value = local_d0.fields._current.fields.value;
    local_90.fields._current.fields.key = local_d0.fields._current.fields.key;
    local_90.fields._getEnumeratorRetType = local_d0.fields._getEnumeratorRetType;
    local_90.fields._36_4_ = local_d0.fields._36_4_;
    while( true ) {
      bVar3 = System_Collections_Generic_Dictionary_Enumerator<object,_object>__MoveNext
                        (&local_90,
                         Method_System_Collections_Generic_Dictionary_Enumerator<string,_IAGNPGHOAIC>_MoveNext__
                        );
      lVar2 = Method_System_Collections_Generic_List<string>_Add__;
      if (!bVar3) break;
      if ((IAGNPGHOAIC_o *)local_90.fields._current.fields.value == IEKGHPACLPF) {
        if (__this == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar5 = (__this->fields)._items;
        (__this->fields)._version = (__this->fields)._version + 1;
        if (pSVar5 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        uVar1 = (__this->fields)._size;
        if (uVar1 < (uint)pSVar5->max_length) {
          (__this->fields)._size = uVar1 + 1;
          pSVar5->m_Items[(int)uVar1] = local_90.fields._current.fields.key;
          thunk_FUN_01c20e04();
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    (__this,local_90.fields._current.fields.key,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
        }
      }
    }
    System_Collections_Generic_Dictionary_Enumerator<object,_object>__Dispose
              (&local_90,
               Method_System_Collections_Generic_Dictionary_Enumerator<string,_IAGNPGHOAIC>_Dispose__
              );
    if (__this != (System_Collections_Generic_List_object__o *)0x0) {
      if (0 < (__this->fields)._size) {
        System_Collections_Generic_List<object>__GetEnumerator
                  (&local_a8,__this,Method_System_Collections_Generic_List<string>_GetEnumerator__);
        while (bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                 (&local_a8,
                                  Method_System_Collections_Generic_List_Enumerator<string>_MoveNext__
                                 ), key = local_a8.fields._current, bVar3) {
          if ((CLFCKIFNGHA_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)
                   CLFCKIFNGHA_TypeInfo->static_fields->FJONCCJJCBP;
          if (pSVar4 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          System_Collections_Generic_Dictionary<object,_object>__Remove
                    (pSVar4,key,
                     Method_System_Collections_Generic_Dictionary<string,_IAGNPGHOAIC>_Remove__);
        }
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_a8,Method_System_Collections_Generic_List_Enumerator<string>_Dispose__);
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void GMENDOGOHMH(string AFKICLAFDKC, bool CNADELPLGPE)  [RVA 0x3455328]
// CLFCKIFNGHA$$GMENDOGOHMH @ RVA 0x3455328

void CLFCKIFNGHA__GMENDOGOHMH(System_String_o *AFKICLAFDKC,bool CNADELPLGPE,MethodInfo *method)

{
  IAGNPGHOAIC_o *IEKGHPACLPF;
  MethodInfo *method_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  
  method_00 = (MethodInfo *)(ulong)CNADELPLGPE;
  if ((DAT_045682c3 & 1) == 0) {
    FUN_01bab630(&CLFCKIFNGHA_TypeInfo);
    DAT_045682c3 = 1;
    method_00 = extraout_x1;
  }
  if ((CLFCKIFNGHA_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    method_00 = extraout_x1_00;
  }
  IEKGHPACLPF = CLFCKIFNGHA__GJJHPEFOHON(AFKICLAFDKC,method_00);
  if (IEKGHPACLPF != (IAGNPGHOAIC_o *)0x0) {
    if ((CLFCKIFNGHA_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    CLFCKIFNGHA__GMENDOGOHMH(IEKGHPACLPF,CNADELPLGPE,method);
    return;
  }
  return;
}


// ===== public static bool KPOPGHNAGAE(string AFKICLAFDKC, string AMBCAJJIEOE)  [RVA 0x34553BC]
// CLFCKIFNGHA$$KPOPGHNAGAE @ RVA 0x34553BC

/* WARNING: Removing unreachable block (ram,0x03555558) */

bool CLFCKIFNGHA__KPOPGHNAGAE
               (System_String_o *AFKICLAFDKC,System_String_o *AMBCAJJIEOE,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  IAGNPGHOAIC_o *__this;
  System_Collections_Generic_List_IAGNPGHOAIC__o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  MethodInfo *extraout_x1_03;
  MethodInfo *extraout_x1_04;
  MethodInfo *pMVar4;
  IAGNPGHOAIC_array *pIVar5;
  System_Collections_Generic_List_IAGNPGHOAIC__o *obj;
  bool local_34 [4];
  
  if ((DAT_045682c4 & 1) == 0) {
    FUN_01bab630(&CLFCKIFNGHA_TypeInfo);
    FUN_01bab630(&IAGNPGHOAIC_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<IAGNPGHOAIC>_Add__);
    DAT_045682c4 = 1;
  }
  __this = (IAGNPGHOAIC_o *)thunk_FUN_01bda818(IAGNPGHOAIC_TypeInfo);
  IAGNPGHOAIC___ctor(__this,AFKICLAFDKC,AMBCAJJIEOE,(MethodInfo *)0x0);
  if ((CLFCKIFNGHA_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  obj = CLFCKIFNGHA_TypeInfo->static_fields->FIDBAGOJPKB;
  local_34[0] = false;
  System_Threading_Monitor__Enter((Il2CppObject *)obj,local_34,(MethodInfo *)0x0);
  if ((CLFCKIFNGHA_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  lVar2 = Method_System_Collections_Generic_List<IAGNPGHOAIC>_Add__;
  __this_00 = CLFCKIFNGHA_TypeInfo->static_fields->FIDBAGOJPKB;
  if (__this_00 != (System_Collections_Generic_List_IAGNPGHOAIC__o *)0x0) {
    pIVar5 = (__this_00->fields)._items;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    if (pIVar5 != (IAGNPGHOAIC_array *)0x0) {
      uVar1 = (__this_00->fields)._size;
      if (uVar1 < (uint)pIVar5->max_length) {
        (__this_00->fields)._size = uVar1 + 1;
        pIVar5->m_Items[(int)uVar1] = __this;
        thunk_FUN_01c20e04(pIVar5->m_Items + (int)uVar1,__this);
        pMVar4 = extraout_x1;
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)__this,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
        pMVar4 = extraout_x1_00;
      }
      if (local_34[0] != false) {
        System_Threading_Monitor__Exit((Il2CppObject *)obj,(MethodInfo *)0x0);
        pMVar4 = extraout_x1_01;
      }
      if ((CLFCKIFNGHA_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
        pMVar4 = extraout_x1_02;
      }
      bVar3 = CLFCKIFNGHA__HIPBEBHBDLE(__this,pMVar4);
      if (bVar3) {
        pMVar4 = extraout_x1_03;
        if ((CLFCKIFNGHA_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
          pMVar4 = extraout_x1_04;
        }
        CLFCKIFNGHA__OCNFNLFGLNG(__this,pMVar4);
      }
      return bVar3;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static void .cctor()  [RVA 0x3455868]
// CLFCKIFNGHA$$.cctor @ RVA 0x3455868

void CLFCKIFNGHA___cctor(MethodInfo *method)

{
  System_Collections_Generic_List_IAGNPGHOAIC__o *__this;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  System_Collections_Generic_Dictionary_string__IAGNPGHOAIC__o **ppSVar1;
  
  if ((DAT_045682c5 & 1) == 0) {
    FUN_01bab630(&CLFCKIFNGHA_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_IAGNPGHOAIC>__ctor__);
    FUN_01bab630(&System_Collections_Generic_Dictionary<string,_IAGNPGHOAIC>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<IAGNPGHOAIC>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<IAGNPGHOAIC>_TypeInfo);
    DAT_045682c5 = 1;
  }
  __this = (System_Collections_Generic_List_IAGNPGHOAIC__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<IAGNPGHOAIC>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this,
             Method_System_Collections_Generic_List<IAGNPGHOAIC>__ctor__);
  CLFCKIFNGHA_TypeInfo->static_fields->FIDBAGOJPKB = __this;
  thunk_FUN_01c20e04(CLFCKIFNGHA_TypeInfo->static_fields,__this);
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_Dictionary<string,_IAGNPGHOAIC>_TypeInfo
                                );
  System_Collections_Generic_Dictionary<object,_object>___ctor
            (__this_00,Method_System_Collections_Generic_Dictionary<string,_IAGNPGHOAIC>__ctor__);
  ppSVar1 = &CLFCKIFNGHA_TypeInfo->static_fields->FJONCCJJCBP;
  *ppSVar1 = (System_Collections_Generic_Dictionary_string__IAGNPGHOAIC__o *)__this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  return;
}


// ===== public static void DGLJCGNHLIG()  [RVA 0x3455958]
// CLFCKIFNGHA$$DGLJCGNHLIG @ RVA 0x3455958

/* WARNING: Removing unreachable block (ram,0x03555b10) */
/* WARNING: Removing unreachable block (ram,0x03555b60) */
/* WARNING: Removing unreachable block (ram,0x03555b6c) */

void CLFCKIFNGHA__DGLJCGNHLIG(MethodInfo *method)

{
  int32_t length;
  bool bVar1;
  System_Collections_Generic_List_IAGNPGHOAIC__o *pSVar2;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  System_Collections_Generic_List_IAGNPGHOAIC__o *obj;
  System_Collections_Generic_List_Enumerator_T__o local_78;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  bool local_34 [4];
  
  if ((DAT_045682c6 & 1) == 0) {
    FUN_01bab630(&CLFCKIFNGHA_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_IAGNPGHOAIC>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IAGNPGHOAIC>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IAGNPGHOAIC>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IAGNPGHOAIC>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IAGNPGHOAIC>_Clear__);
                    /* try { // try from 035559c8 to 03655f63 has its CatchHandler @ 035559c8
                       catch() { ... } // from try @ 035559c8 with catch @ 035559c8
                       catch() { ... } // from try @ 03557bd0 with catch @ 035559c8
                       catch() { ... } // from try @ 03557f70 with catch @ 035559c8
                       catch() { ... } // from try @ 03558074 with catch @ 035559c8 */
    FUN_01bab630(&Method_System_Collections_Generic_List<IAGNPGHOAIC>_GetEnumerator__);
    DAT_045682c6 = 1;
  }
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
  if ((CLFCKIFNGHA_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  obj = CLFCKIFNGHA_TypeInfo->static_fields->FIDBAGOJPKB;
  local_34[0] = false;
  System_Threading_Monitor__Enter((Il2CppObject *)obj,local_34,(MethodInfo *)0x0);
  if ((CLFCKIFNGHA_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar2 = CLFCKIFNGHA_TypeInfo->static_fields->FIDBAGOJPKB;
  if (pSVar2 == (System_Collections_Generic_List_IAGNPGHOAIC__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_78,(System_Collections_Generic_List_object__o *)pSVar2,
             Method_System_Collections_Generic_List<IAGNPGHOAIC>_GetEnumerator__);
  local_60.fields._index = local_78.fields._index;
  local_60.fields._version = local_78.fields._version;
  local_60.fields._list = local_78.fields._list;
  local_60.fields._current = local_78.fields._current;
  while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                           (&local_60,
                            Method_System_Collections_Generic_List_Enumerator<IAGNPGHOAIC>_MoveNext__
                           ), bVar1) {
    if ((IAGNPGHOAIC_o *)local_60.fields._current == (IAGNPGHOAIC_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    IAGNPGHOAIC__BMMOAFKFHNN((IAGNPGHOAIC_o *)local_60.fields._current,true,(MethodInfo *)0x0);
  }
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_60,Method_System_Collections_Generic_List_Enumerator<IAGNPGHOAIC>_Dispose__);
  if ((CLFCKIFNGHA_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar2 = CLFCKIFNGHA_TypeInfo->static_fields->FIDBAGOJPKB;
  if (pSVar2 == (System_Collections_Generic_List_IAGNPGHOAIC__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  length = (pSVar2->fields)._size;
  (pSVar2->fields)._size = 0;
  (pSVar2->fields)._version = (pSVar2->fields)._version + 1;
  if (0 < length) {
    System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,length,(MethodInfo *)0x0);
  }
  if (local_34[0] != false) {
    System_Threading_Monitor__Exit((Il2CppObject *)obj,(MethodInfo *)0x0);
  }
  if ((CLFCKIFNGHA_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this = (System_Collections_Generic_Dictionary_object__object__o *)
           CLFCKIFNGHA_TypeInfo->static_fields->FJONCCJJCBP;
  if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary<object,_object>__Clear
              (__this,Method_System_Collections_Generic_Dictionary<string,_IAGNPGHOAIC>_Clear__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void CIEHCLDCJOB(List<string> CBDPLOECEOA, Action<HashSet<string>> NOOAHEHCMEL)  [RVA 0x3455C48]
// CLFCKIFNGHA$$CIEHCLDCJOB @ RVA 0x3455C48

void CLFCKIFNGHA__CIEHCLDCJOB
               (System_Collections_Generic_List_string__o *CBDPLOECEOA,
               System_Action_HashSet_string___o *NOOAHEHCMEL,MethodInfo *method)

{
  Il2CppObject *__this;
  System_Threading_CancellationTokenSource_o **ppSVar1;
  System_Action_o *action;
  System_Threading_CancellationTokenSource_o *pSVar2;
  
  if ((DAT_045682c7 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&CLFCKIFNGHA_TypeInfo);
    FUN_01bab630(&System_Threading_CancellationTokenSource_TypeInfo);
    FUN_01bab630(&Method_CLFCKIFNGHA_HNHHHMMIDDH_JIMKPGHMKNN__);
    FUN_01bab630(&CLFCKIFNGHA_HNHHHMMIDDH_TypeInfo);
    FUN_01bab630(&System_Threading_Tasks_Task_TypeInfo);
    DAT_045682c7 = 1;
  }
  __this = (Il2CppObject *)thunk_FUN_01bda818(CLFCKIFNGHA_HNHHHMMIDDH_TypeInfo);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  if (__this != (Il2CppObject *)0x0) {
    __this[1].klass = (Il2CppClass *)CBDPLOECEOA;
    thunk_FUN_01c20e04(__this + 1,CBDPLOECEOA);
    __this[1].monitor = NOOAHEHCMEL;
    thunk_FUN_01c20e04(&__this[1].monitor,NOOAHEHCMEL);
    if ((CLFCKIFNGHA_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar2 = CLFCKIFNGHA_TypeInfo->static_fields->CNINFEKICMA;
    if (pSVar2 != (System_Threading_CancellationTokenSource_o *)0x0) {
      if ((CLFCKIFNGHA_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
        pSVar2 = CLFCKIFNGHA_TypeInfo->static_fields->CNINFEKICMA;
        if (pSVar2 == (System_Threading_CancellationTokenSource_o *)0x0) goto LAB_03555dec;
      }
      System_Threading_CancellationTokenSource__Cancel(pSVar2,(MethodInfo *)0x0);
    }
    pSVar2 = (System_Threading_CancellationTokenSource_o *)
             thunk_FUN_01bda818(System_Threading_CancellationTokenSource_TypeInfo);
    System_Threading_CancellationTokenSource___ctor(pSVar2,(MethodInfo *)0x0);
    if ((CLFCKIFNGHA_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    ppSVar1 = &CLFCKIFNGHA_TypeInfo->static_fields->CNINFEKICMA;
    *ppSVar1 = pSVar2;
    thunk_FUN_01c20e04(ppSVar1,pSVar2);
    action = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
    System_Action___ctor();
    if ((System_Threading_Tasks_Task_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    System_Threading_Tasks_Task__Run(action,(MethodInfo *)0x0);
    return;
  }
LAB_03555dec:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static bool HIPBEBHBDLE(IAGNPGHOAIC IEKGHPACLPF)  [RVA 0x34555C4]
// CLFCKIFNGHA$$HIPBEBHBDLE @ RVA 0x34555C4

bool CLFCKIFNGHA__HIPBEBHBDLE(IAGNPGHOAIC_o *IEKGHPACLPF,MethodInfo *method)

{
  undefined1 auVar1 [16];
  bool bVar2;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *JLNPKGGFFDD;
  System_Object_array *BFPCMHPBAGL;
  long lVar3;
  undefined8 uVar4;
  System_String_o *pSVar5;
  undefined1 auVar6 [16];
  
  auVar6._8_8_ = method;
  auVar6._0_8_ = IEKGHPACLPF;
  if ((DAT_045682c8 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6476);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6477);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    auVar6 = FUN_01bab630(&UnityMainThreadDispatcher_TypeInfo);
    DAT_045682c8 = 1;
  }
  if (IEKGHPACLPF != (IAGNPGHOAIC_o *)0x0) {
    bVar2 = IAGNPGHOAIC__PBACHEOJBGG(IEKGHPACLPF,(MethodInfo *)0x0);
    if (!bVar2) {
      MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)MOPNMEHIMFJ,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6476,
                 (MethodInfo *)0x0);
      LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)LFINFBNOLFG,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6477,
                 (MethodInfo *)0x0);
      JLNPKGGFFDD = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
      auVar6 = FUN_01bab718(object___TypeInfo,1);
      BFPCMHPBAGL = auVar6._0_8_;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = auVar6._8_8_;
      auVar6 = auVar1 << 0x40;
      if (BFPCMHPBAGL == (System_Object_array *)0x0) goto LAB_03555730;
      pSVar5 = (IEKGHPACLPF->fields).OMJHOKDPLKI;
      if ((pSVar5 != (System_String_o *)0x0) &&
         (lVar3 = thunk_FUN_01bda71c(pSVar5,(((BFPCMHPBAGL->obj).klass)->_1).element_class),
         lVar3 == 0)) {
        uVar4 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
        FUN_01bab798(uVar4,0);
      }
      if ((int)BFPCMHPBAGL->max_length == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
      BFPCMHPBAGL->m_Items[0] = (Il2CppObject *)pSVar5;
      thunk_FUN_01c20e04(BFPCMHPBAGL->m_Items,pSVar5);
      if ((UnityMainThreadDispatcher_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityMainThreadDispatcher__LogErrorFormatThreadSafe(JLNPKGGFFDD,BFPCMHPBAGL,(MethodInfo *)0x0)
      ;
    }
    return bVar2;
  }
LAB_03555730:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar6._0_8_,auVar6._8_8_);
}


// ===== private static void OCNFNLFGLNG(IAGNPGHOAIC IEKGHPACLPF)  [RVA 0x3455744]
// CLFCKIFNGHA$$OCNFNLFGLNG @ RVA 0x3455744

void CLFCKIFNGHA__OCNFNLFGLNG(IAGNPGHOAIC_o *IEKGHPACLPF,MethodInfo *method)

{
  uint uVar1;
  bool bVar2;
  System_String_array *pSVar3;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  ulong uVar4;
  System_String_o *key;
  ulong uVar5;
  
  if ((DAT_045682c9 & 1) == 0) {
    FUN_01bab630(&CLFCKIFNGHA_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_IAGNPGHOAIC>_set_Item__);
    DAT_045682c9 = 1;
  }
  if (IEKGHPACLPF != (IAGNPGHOAIC_o *)0x0) {
    IAGNPGHOAIC__BKCFPHNEONL(IEKGHPACLPF,(MethodInfo *)0x0);
    bVar2 = IAGNPGHOAIC__BKALFJAFEOE(IEKGHPACLPF,(MethodInfo *)0x0);
    if (!bVar2) {
      return;
    }
    pSVar3 = IAGNPGHOAIC__CIIONFHFKGB(IEKGHPACLPF,(MethodInfo *)0x0);
    if (pSVar3 != (System_String_array *)0x0) {
      if (0 < (int)pSVar3->max_length) {
        uVar5 = 0;
        uVar4 = pSVar3->max_length & 0xffffffff;
        do {
          if (uVar4 <= uVar5) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8d0();
          }
          key = pSVar3->m_Items[uVar5];
          if ((CLFCKIFNGHA_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          __this = (System_Collections_Generic_Dictionary_object__object__o *)
                   CLFCKIFNGHA_TypeInfo->static_fields->FJONCCJJCBP;
          if (__this == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
          goto LAB_03555860;
          System_Collections_Generic_Dictionary<object,_object>__set_Item
                    (__this,(Il2CppObject *)key,(Il2CppObject *)IEKGHPACLPF,
                     Method_System_Collections_Generic_Dictionary<string,_IAGNPGHOAIC>_set_Item__);
          uVar1 = (uint)pSVar3->max_length;
          uVar4 = (ulong)uVar1;
          uVar5 = uVar5 + 1;
        } while ((long)uVar5 < (long)(int)uVar1);
      }
      IAGNPGHOAIC__BMMOAFKFHNN(IEKGHPACLPF,false,(MethodInfo *)0x0);
      return;
    }
  }
LAB_03555860:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void ILFKGOLHMBA(bool BFEGNLEDOFE)  [RVA 0x3455DF8]
// CLFCKIFNGHA$$ILFKGOLHMBA @ RVA 0x3455DF8

/* WARNING: Removing unreachable block (ram,0x03555f64) */
/* WARNING: Removing unreachable block (ram,0x03555f70) */

void CLFCKIFNGHA__ILFKGOLHMBA(bool BFEGNLEDOFE,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_IAGNPGHOAIC__o *__this;
  MethodInfo *extraout_x1;
  System_Collections_Generic_List_IAGNPGHOAIC__o *obj;
  System_Collections_Generic_List_Enumerator_T__o local_68;
  System_Collections_Generic_List_Enumerator_T__o local_50;
  bool local_34 [4];
  
  if ((DAT_045682ca & 1) == 0) {
    FUN_01bab630(&CLFCKIFNGHA_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IAGNPGHOAIC>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IAGNPGHOAIC>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IAGNPGHOAIC>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IAGNPGHOAIC>_GetEnumerator__);
    DAT_045682ca = 1;
    method = extraout_x1;
  }
  local_50.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_50.fields._index = 0;
  local_50.fields._version = 0;
  local_50.fields._current = (Il2CppObject *)0x0;
  if ((CLFCKIFNGHA_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(CLFCKIFNGHA_TypeInfo,method);
  }
  obj = CLFCKIFNGHA_TypeInfo->static_fields->FIDBAGOJPKB;
  local_34[0] = false;
  System_Threading_Monitor__Enter((Il2CppObject *)obj,local_34,(MethodInfo *)0x0);
  if ((CLFCKIFNGHA_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this = CLFCKIFNGHA_TypeInfo->static_fields->FIDBAGOJPKB;
  if (__this != (System_Collections_Generic_List_IAGNPGHOAIC__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_68,(System_Collections_Generic_List_object__o *)__this,
               Method_System_Collections_Generic_List<IAGNPGHOAIC>_GetEnumerator__);
    local_50.fields._index = local_68.fields._index;
    local_50.fields._version = local_68.fields._version;
    local_50.fields._list = local_68.fields._list;
    local_50.fields._current = local_68.fields._current;
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_50,
                         Method_System_Collections_Generic_List_Enumerator<IAGNPGHOAIC>_MoveNext__);
      if (!bVar1) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_50,
                   Method_System_Collections_Generic_List_Enumerator<IAGNPGHOAIC>_Dispose__);
        if (local_34[0] != false) {
          System_Threading_Monitor__Exit((Il2CppObject *)obj,(MethodInfo *)0x0);
        }
        return;
      }
      if ((IAGNPGHOAIC_o *)local_50.fields._current == (IAGNPGHOAIC_o *)0x0) break;
      IAGNPGHOAIC__BMMOAFKFHNN
                ((IAGNPGHOAIC_o *)local_50.fields._current,BFEGNLEDOFE,(MethodInfo *)0x0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static bool HIPBEBHBDLE(string AFKICLAFDKC)  [RVA 0x3454EE8]
// CLFCKIFNGHA$$HIPBEBHBDLE @ RVA 0x3454EE8

bool CLFCKIFNGHA__HIPBEBHBDLE(System_String_o *AFKICLAFDKC,MethodInfo *method)

{
  bool bVar1;
  IAGNPGHOAIC_o *IEKGHPACLPF;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *JLNPKGGFFDD;
  System_Object_array *BFPCMHPBAGL;
  long lVar2;
  undefined8 uVar3;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  MethodInfo *method_00;
  
  if ((DAT_045682cb & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6478);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6479);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&CLFCKIFNGHA_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&UnityMainThreadDispatcher_TypeInfo);
    DAT_045682cb = 1;
    method = extraout_x1;
  }
  if ((CLFCKIFNGHA_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    method = extraout_x1_00;
  }
  IEKGHPACLPF = CLFCKIFNGHA__GJJHPEFOHON(AFKICLAFDKC,method);
  if (IEKGHPACLPF != (IAGNPGHOAIC_o *)0x0) {
    method_00 = extraout_x1_01;
    if ((CLFCKIFNGHA_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
      method_00 = extraout_x1_02;
    }
    bVar1 = CLFCKIFNGHA__HIPBEBHBDLE(IEKGHPACLPF,method_00);
    return bVar1;
  }
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6478,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6479,(MethodInfo *)0x0);
  JLNPKGGFFDD = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  BFPCMHPBAGL = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
  if (BFPCMHPBAGL == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if ((AFKICLAFDKC != (System_String_o *)0x0) &&
     (lVar2 = thunk_FUN_01bda71c(AFKICLAFDKC,(((BFPCMHPBAGL->obj).klass)->_1).element_class),
     lVar2 == 0)) {
    uVar3 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
    FUN_01bab798(uVar3,0);
  }
  if ((int)BFPCMHPBAGL->max_length != 0) {
    BFPCMHPBAGL->m_Items[0] = (Il2CppObject *)AFKICLAFDKC;
    thunk_FUN_01c20e04(BFPCMHPBAGL->m_Items,AFKICLAFDKC);
    if ((UnityMainThreadDispatcher_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityMainThreadDispatcher__LogErrorFormatThreadSafe(JLNPKGGFFDD,BFPCMHPBAGL,(MethodInfo *)0x0);
    return false;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8d0();
}


// ===== public static bool FLGLJENNFLG(string EIJDDKJONFO)  [RVA 0x3456038]
// CLFCKIFNGHA$$FLGLJENNFLG @ RVA 0x3456038

bool CLFCKIFNGHA__FLGLJENNFLG(System_String_o *EIJDDKJONFO,MethodInfo *method)

{
  bool bVar1;
  System_String_o *key;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  
                    /* try { // try from 03556040 to 03656047 has its CatchHandler @ 035580f0 */
                    /* try { // try from 03556048 to 03656073 has its CatchHandler @ 03558188 */
  if ((DAT_045682cc & 1) == 0) {
    FUN_01bab630(&CLFCKIFNGHA_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_IAGNPGHOAIC>_ContainsKey__);
                    /* try { // try from 03556074 to 0365608f has its CatchHandler @ 035581c4 */
    DAT_045682cc = 1;
  }
  key = CMEBCBKGFFL__NFBODKMCAMM(EIJDDKJONFO,(MethodInfo *)0x0);
  if ((CLFCKIFNGHA_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 03556094 to 0365609b has its CatchHandler @ 035580ec */
    thunk_FUN_01ba7564(CLFCKIFNGHA_TypeInfo);
  }
  __this = (System_Collections_Generic_Dictionary_object__object__o *)
           CLFCKIFNGHA_TypeInfo->static_fields->FJONCCJJCBP;
  if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* try { // try from 035560ac to 036560b3 has its CatchHandler @ 035580e8 */
                    /* try { // try from 035560b8 to 036560bf has its CatchHandler @ 035580e4 */
    bVar1 = System_Collections_Generic_Dictionary<object,_object>__ContainsKey
                      (__this,(Il2CppObject *)key,
                       Method_System_Collections_Generic_Dictionary<string,_IAGNPGHOAIC>_ContainsKey__
                      );
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static string DPHMDPHEIKO()  [RVA 0x34560CC]
// CLFCKIFNGHA$$DPHMDPHEIKO @ RVA 0x34560CC

System_String_o * CLFCKIFNGHA__DPHMDPHEIKO(MethodInfo *method)

{
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar1;
  
                    /* try { // try from 035560d0 to 036560d7 has its CatchHandler @ 035580e0 */
                    /* try { // try from 035560d8 to 036560e7 has its CatchHandler @ 035580dc */
                    /* try { // try from 035560ec to 036560f3 has its CatchHandler @ 035581c0 */
  if ((DAT_045682cd & 1) == 0) {
                    /* try { // try from 03556100 to 03656117 has its CatchHandler @ 035581bc */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy128___field_82);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6480);
    FUN_01bab630(&byte___TypeInfo);
                    /* try { // try from 03556124 to 0365612b has its CatchHandler @ 035580d8 */
    DAT_045682cd = 1;
  }
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 0355613c to 03656143 has its CatchHandler @ 035580d4 */
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6480,(MethodInfo *)0x0);
                    /* try { // try from 03556148 to 0365614f has its CatchHandler @ 035580d0 */
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x80);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy128___field_82,(MethodInfo *)0x0);
                    /* try { // try from 03556160 to 03656167 has its CatchHandler @ 035580cc */
                    /* try { // try from 03556168 to 03656177 has its CatchHandler @ 035580c8 */
  pSVar1 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  return pSVar1;
}

