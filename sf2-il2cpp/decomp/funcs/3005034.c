// GNJBJKEJEGC$$.ctor @ RVA 0x3005034

void GNJBJKEJEGC___ctor(GNJBJKEJEGC_o *__this,GNJBJKEJEGC_o *IBKIPBJJCPG,float PHBEFCPEHCD,
                       MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_Dictionary_string__float__o *pSVar2;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  undefined1 local_60 [24];
  Il2CppObject *local_48;
  undefined8 local_40;
  
  method_00 = (MethodInfo *)IBKIPBJJCPG;
  if ((DAT_04565b48 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_float>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_float>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_float>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary_Enumerator<string,_float>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary_Enumerator<string,_float>_MoveNext__)
    ;
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_float>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<string,_float>_get_Key__);
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<string,_float>_get_Value__);
    DAT_04565b48 = 1;
    method_00 = extraout_x1;
  }
  local_60._8_4_ = 0;
  local_60._12_4_ = 0;
  local_60._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_48 = (Il2CppObject *)0x0;
  local_60._16_8_ = (Il2CppObject *)0x0;
  local_40._0_4_ = 0;
  local_40._4_4_ = 0;
  GNJBJKEJEGC___ctor(__this,PHBEFCPEHCD,method_00);
  pSVar2 = (__this->fields).CMHJMGKMCCI;
  if (((pSVar2 != (System_Collections_Generic_Dictionary_string__float__o *)0x0) &&
      (System_Collections_Generic_Dictionary<object,_float>__Clear
                 ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,
                  Method_System_Collections_Generic_Dictionary<string,_float>_Clear__),
      IBKIPBJJCPG != (GNJBJKEJEGC_o *)0x0)) &&
     (pSVar2 = (IBKIPBJJCPG->fields).CMHJMGKMCCI,
     pSVar2 != (System_Collections_Generic_Dictionary_string__float__o *)0x0)) {
    System_Collections_Generic_Dictionary<object,_float>__GetEnumerator
              ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)local_60,
               (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,
               Method_System_Collections_Generic_Dictionary<string,_float>_GetEnumerator__);
    while( true ) {
      bVar1 = System_Collections_Generic_Dictionary_Enumerator<object,_float>__MoveNext
                        ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)
                         local_60,
                         Method_System_Collections_Generic_Dictionary_Enumerator<string,_float>_MoveNext__
                        );
      if (!bVar1) {
        System_Collections_Generic_Dictionary_Enumerator<object,_float>__Dispose
                  ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)local_60,
                   Method_System_Collections_Generic_Dictionary_Enumerator<string,_float>_Dispose__)
        ;
        return;
      }
      pSVar2 = (__this->fields).CMHJMGKMCCI;
      if (pSVar2 == (System_Collections_Generic_Dictionary_string__float__o *)0x0) break;
      System_Collections_Generic_Dictionary<object,_float>__Add
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,
                 (Il2CppObject *)local_60._16_8_,local_48._0_4_,
                 Method_System_Collections_Generic_Dictionary<string,_float>_Add__);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

