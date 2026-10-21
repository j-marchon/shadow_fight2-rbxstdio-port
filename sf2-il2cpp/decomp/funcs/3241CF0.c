// OJHODFIGFMA$$MHKENGKHDKD @ RVA 0x3241CF0

void OJHODFIGFMA__MHKENGKHDKD(OJHODFIGFMA_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  undefined8 uVar2;
  OJHODFIGFMA_EMMLKOABOHF_o *pOVar3;
  undefined1 auVar4 [16];
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_50;
  
  auVar4._8_8_ = method;
  auVar4._0_8_ = __this;
  if ((DAT_04567091 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_OJHODFIGFMA_MJOLIJOPBMO>_GetEnumerator__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_OJHODFIGFMA_MJOLIJOPBMO>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_OJHODFIGFMA_MJOLIJOPBMO>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_OJHODFIGFMA_MJOLIJOPBMO>_get_Current__
                );
    auVar4 = FUN_01bab630(&
                          Method_System_Collections_Generic_KeyValuePair<string,_OJHODFIGFMA_MJOLIJOPBMO>_get_Value__
                         );
    DAT_04567091 = 1;
  }
  uVar2 = auVar4._0_8_;
  local_50.fields._getEnumeratorRetType = 0;
  local_50.fields._36_4_ = 0;
  local_50.fields._version = 0;
  local_50.fields._index = 0;
  local_50.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_50.fields._current.fields.value = (Il2CppObject *)0x0;
  local_50.fields._current.fields.key = (Il2CppObject *)0x0;
  pOVar3 = (__this->fields).HEHMPFLAEGE;
  (__this->fields).LDKCAIDMEDK = false;
  if ((pOVar3 != (OJHODFIGFMA_EMMLKOABOHF_o *)0x0) &&
     (__this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                  (pOVar3->fields).IAGNJPIIEPO, uVar2 = 0,
     __this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
    System_Collections_Generic_Dictionary<object,_object>__GetEnumerator
              (&local_50,__this_00,
               Method_System_Collections_Generic_Dictionary<string,_OJHODFIGFMA_MJOLIJOPBMO>_GetEnumerator__
              );
    while( true ) {
      bVar1 = System_Collections_Generic_Dictionary_Enumerator<object,_object>__MoveNext
                        (&local_50,
                         Method_System_Collections_Generic_Dictionary_Enumerator<string,_OJHODFIGFMA_MJOLIJOPBMO>_MoveNext__
                        );
      if (!bVar1) {
        System_Collections_Generic_Dictionary_Enumerator<object,_object>__Dispose
                  (&local_50,
                   Method_System_Collections_Generic_Dictionary_Enumerator<string,_OJHODFIGFMA_MJOLIJOPBMO>_Dispose__
                  );
        return;
      }
      if (local_50.fields._current.fields.value == (Il2CppObject *)0x0) break;
      if (local_50.fields._current.fields.value[1].klass == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      if (*(int *)&((local_50.fields._current.fields.value[1].klass)->_1).parent == 1) {
        *(undefined1 *)((long)&local_50.fields._current.fields.value[1].monitor + 4) = 0;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(uVar2,auVar4._8_8_);
}

