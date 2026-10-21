// OJHODFIGFMA$$FHEDJOBDEPF @ RVA 0x32413F4

void OJHODFIGFMA__FHEDJOBDEPF
               (OJHODFIGFMA_o *__this,int32_t JLGJOLIMJKB,bool NPKHCHGKFLA,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  OJHODFIGFMA_EMMLKOABOHF_o *pOVar3;
  System_Action_OJHODFIGFMA_MJOLIJOPBMO__o *pSVar4;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_88;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_60;
  
  if ((DAT_0456708b & 1) == 0) {
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
    FUN_01bab630(&
                 Method_System_Collections_Generic_KeyValuePair<string,_OJHODFIGFMA_MJOLIJOPBMO>_get_Value__
                );
    DAT_0456708b = 1;
  }
  local_60.fields._getEnumeratorRetType = 0;
  local_60.fields._36_4_ = 0;
  local_60.fields._version = 0;
  local_60.fields._index = 0;
  local_60.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_60.fields._current.fields.value = (Il2CppObject *)0x0;
  local_60.fields._current.fields.key = (Il2CppObject *)0x0;
  if (!NPKHCHGKFLA) {
    pOVar3 = (__this->fields).HEHMPFLAEGE;
    if ((pOVar3 == (OJHODFIGFMA_EMMLKOABOHF_o *)0x0) ||
       (__this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                    (pOVar3->fields).IAGNJPIIEPO,
       __this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    System_Collections_Generic_Dictionary<object,_object>__GetEnumerator
              (&local_88,__this_00,
               Method_System_Collections_Generic_Dictionary<string,_OJHODFIGFMA_MJOLIJOPBMO>_GetEnumerator__
              );
    local_60.fields._version = local_88.fields._version;
    local_60.fields._index = local_88.fields._index;
    local_60.fields._dictionary = local_88.fields._dictionary;
    local_60.fields._current.fields.value = local_88.fields._current.fields.value;
    local_60.fields._current.fields.key = local_88.fields._current.fields.key;
    local_60.fields._getEnumeratorRetType = local_88.fields._getEnumeratorRetType;
    local_60.fields._36_4_ = local_88.fields._36_4_;
    while( true ) {
      bVar2 = System_Collections_Generic_Dictionary_Enumerator<object,_object>__MoveNext
                        (&local_60,
                         Method_System_Collections_Generic_Dictionary_Enumerator<string,_OJHODFIGFMA_MJOLIJOPBMO>_MoveNext__
                        );
      pIVar1 = local_60.fields._current.fields.value;
      if (!bVar2) break;
      if (local_60.fields._current.fields.value == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      if (local_60.fields._current.fields.value[1].klass == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar2 = LKPNOBFEAKD__BNNIDPDMOIL
                        ((LKPNOBFEAKD_o *)local_60.fields._current.fields.value[1].klass,
                         (__this->fields).APPPNIFKKCH,(MethodInfo *)0x0);
      if (bVar2) {
        if (pIVar1[1].klass == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        if (*(int *)&((pIVar1[1].klass)->_1).parent == 2) {
          *(uint *)&pIVar1[1].monitor = (uint)(*(int *)&pIVar1[1].monitor == JLGJOLIMJKB);
          pSVar4 = (__this->fields).LAFPPPABCJG;
          if (pSVar4 == (System_Action_OJHODFIGFMA_MJOLIJOPBMO__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
                    /* try { // try from 0334150c to 0344159f has its CatchHandler @ 0334150c
                       catch() { ... } // from try @ 0334150c with catch @ 0334150c
                       catch() { ... } // from try @ 033415a8 with catch @ 0334150c
                       catch() { ... } // from try @ 03341600 with catch @ 0334150c
                       catch() { ... } // from try @ 03341624 with catch @ 0334150c
                       catch() { ... } // from try @ 0334165c with catch @ 0334150c */
          (*(code *)(pSVar4->fields).super.super.invoke_impl)
                    ((pSVar4->fields).super.super.method_code,pIVar1,
                     (pSVar4->fields).super.super.method);
        }
      }
    }
    System_Collections_Generic_Dictionary_Enumerator<object,_object>__Dispose
              (&local_60,
               Method_System_Collections_Generic_Dictionary_Enumerator<string,_OJHODFIGFMA_MJOLIJOPBMO>_Dispose__
              );
  }
  return;
}

