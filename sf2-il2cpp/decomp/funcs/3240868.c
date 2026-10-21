// OJHODFIGFMA$$MBLPHLDFJOK @ RVA 0x3240868

void OJHODFIGFMA__MBLPHLDFJOK(OJHODFIGFMA_o *__this,MethodInfo *method)

{
  bool bVar1;
  bool bVar2;
  System_Text_StringBuilder_o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  System_String_o *pSVar3;
  Il2CppObject *pIVar4;
  MethodInfo *extraout_x1;
  OJHODFIGFMA_EMMLKOABOHF_o *pOVar5;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_98;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_70;
  
  if ((DAT_04567086 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
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
                 Method_System_Collections_Generic_KeyValuePair<string,_OJHODFIGFMA_MJOLIJOPBMO>_get_Key__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_KeyValuePair<string,_OJHODFIGFMA_MJOLIJOPBMO>_get_Value__
                );
    FUN_01bab630(&System_Text_StringBuilder_TypeInfo);
    FUN_01bab630(&StringLiteral_4831);
    FUN_01bab630(&StringLiteral_4841);
    FUN_01bab630(&StringLiteral_325);
    DAT_04567086 = 1;
    method = extraout_x1;
  }
  local_70.fields._getEnumeratorRetType = 0;
  local_70.fields._36_4_ = 0;
  local_70.fields._version = 0;
  local_70.fields._index = 0;
  local_70.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_70.fields._current.fields.value = (Il2CppObject *)0x0;
  local_70.fields._current.fields.key = (Il2CppObject *)0x0;
  __this_00 = (System_Text_StringBuilder_o *)
              thunk_FUN_01bda818(System_Text_StringBuilder_TypeInfo,method);
  System_Text_StringBuilder___ctor(__this_00,(MethodInfo *)0x0);
  pOVar5 = (__this->fields).HEHMPFLAEGE;
  if ((pOVar5 != (OJHODFIGFMA_EMMLKOABOHF_o *)0x0) &&
     (__this_01 = (System_Collections_Generic_Dictionary_object__object__o *)
                  (pOVar5->fields).IAGNJPIIEPO,
     __this_01 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
    System_Collections_Generic_Dictionary<object,_object>__GetEnumerator
              (&local_98,__this_01,
               Method_System_Collections_Generic_Dictionary<string,_OJHODFIGFMA_MJOLIJOPBMO>_GetEnumerator__
              );
    bVar1 = false;
    local_70.fields._version = local_98.fields._version;
    local_70.fields._index = local_98.fields._index;
    local_70.fields._dictionary = local_98.fields._dictionary;
    local_70.fields._current.fields.value = local_98.fields._current.fields.value;
    local_70.fields._current.fields.key = local_98.fields._current.fields.key;
    local_70.fields._getEnumeratorRetType = local_98.fields._getEnumeratorRetType;
    local_70.fields._36_4_ = local_98.fields._36_4_;
    while( true ) {
      bVar2 = System_Collections_Generic_Dictionary_Enumerator<object,_object>__MoveNext
                        (&local_70,
                         Method_System_Collections_Generic_Dictionary_Enumerator<string,_OJHODFIGFMA_MJOLIJOPBMO>_MoveNext__
                        );
      pIVar4 = local_70.fields._current.fields.key;
      if (!bVar2) break;
      if (local_70.fields._current.fields.value == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      if (*(int *)&local_70.fields._current.fields.value[1].monitor != 0) {
        pSVar3 = System_Int32__ToString
                           ((int)local_70.fields._current.fields.value + 0x18,(MethodInfo *)0x0);
        pSVar3 = System_String__Concat
                           (StringLiteral_4831,(System_String_o *)pIVar4,StringLiteral_325,pSVar3,
                            (MethodInfo *)0x0);
        if (__this_00 == (System_Text_StringBuilder_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        bVar1 = true;
        System_Text_StringBuilder__AppendLine(__this_00,pSVar3,(MethodInfo *)0x0);
      }
    }
    System_Collections_Generic_Dictionary_Enumerator<object,_object>__Dispose
              (&local_70,
               Method_System_Collections_Generic_Dictionary_Enumerator<string,_OJHODFIGFMA_MJOLIJOPBMO>_Dispose__
              );
    if (bVar1) {
      if (__this_00 == (System_Text_StringBuilder_o *)0x0) goto LAB_03340a8c;
      System_Text_StringBuilder__Insert(__this_00,0,StringLiteral_4841,(MethodInfo *)0x0);
      pIVar4 = (Il2CppObject *)
               (*(__this_00->klass->vtable)._3_ToString.methodPtr)
                         (__this_00,(__this_00->klass->vtable)._3_ToString.method);
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
      }
      UnityEngine_Debug__Log(pIVar4,(MethodInfo *)0x0);
    }
    return;
  }
LAB_03340a8c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

