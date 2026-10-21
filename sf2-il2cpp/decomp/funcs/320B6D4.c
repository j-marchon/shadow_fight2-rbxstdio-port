// FPMAFHGLPOB$$NEFAGJPGDAC @ RVA 0x320B6D4

/* WARNING: Removing unreachable block (ram,0x0330b928) */
/* WARNING: Removing unreachable block (ram,0x0330b9e4) */

void FPMAFHGLPOB__NEFAGJPGDAC
               (SimpleJSON_JSONObject_o *JHMENEKPIBO,System_String_o *BCPAFBNLBDE,
               IJBEKFLAPNK_o *ALGPKPJKBHO,MethodInfo *method)

{
  undefined8 uVar1;
  float n;
  Il2CppObject *pIVar2;
  Il2CppObject *__this;
  bool bVar3;
  SimpleJSON_JSONObject_o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  SimpleJSON_JSONObject_o *__this_02;
  SimpleJSON_JSONNode_o *pSVar4;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_f8;
  undefined1 local_d0 [24];
  System_Collections_Generic_Dictionary_TKey__TValue__o *local_b8;
  undefined8 local_b0;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_a0;
  
  if ((DAT_04566e8a & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_float>_GetEnumerator__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_Dictionary<string,_float>>_GetEnumerator__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_Dictionary<string,_float>>_Dispose__
                );
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary_Enumerator<string,_float>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary_Enumerator<string,_float>_MoveNext__)
    ;
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_Dictionary<string,_float>>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_float>_get_Current__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_Dictionary<string,_float>>_get_Current__
                );
    FUN_01bab630(&SimpleJSON_JSONNode_TypeInfo);
    FUN_01bab630(&SimpleJSON_JSONObject_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_KeyValuePair<string,_Dictionary<string,_float>>_get_Key__
                );
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<string,_float>_get_Key__);
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<string,_float>_get_Value__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_KeyValuePair<string,_Dictionary<string,_float>>_get_Value__
                );
    DAT_04566e8a = 1;
  }
  local_a0.fields._getEnumeratorRetType = 0;
  local_a0.fields._36_4_ = 0;
  local_a0.fields._version = 0;
  local_a0.fields._index = 0;
  local_a0.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_a0.fields._current.fields.value = (Il2CppObject *)0x0;
  local_a0.fields._current.fields.key = (Il2CppObject *)0x0;
  local_b0._0_4_ = 0;
  local_b0._4_4_ = 0;
  local_d0._8_4_ = 0;
  local_d0._12_4_ = 0;
  local_d0._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_b8 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_d0._16_8_ = (Il2CppObject *)0x0;
  __this_00 = (SimpleJSON_JSONObject_o *)thunk_FUN_01bda818(SimpleJSON_JSONObject_TypeInfo);
  SimpleJSON_JSONObject___ctor(__this_00,(MethodInfo *)0x0);
  if (JHMENEKPIBO == (SimpleJSON_JSONObject_o *)0x0) {
LAB_0330b9f0:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  (*(JHMENEKPIBO->klass->vtable)._8_set_Item.methodPtr)
            (JHMENEKPIBO,BCPAFBNLBDE,__this_00,(JHMENEKPIBO->klass->vtable)._8_set_Item.method);
  if (ALGPKPJKBHO != (IJBEKFLAPNK_o *)0x0) {
    __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)
                (ALGPKPJKBHO->fields).AIGFEBEBGCK;
    if (__this_01 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
    goto LAB_0330b9f0;
    System_Collections_Generic_Dictionary<object,_object>__GetEnumerator
              (&local_f8,__this_01,
               Method_System_Collections_Generic_Dictionary<string,_Dictionary<string,_float>>_GetEnumerator__
              );
    local_a0.fields._version = local_f8.fields._version;
    local_a0.fields._index = local_f8.fields._index;
    local_a0.fields._dictionary = local_f8.fields._dictionary;
    local_a0.fields._current.fields.value = local_f8.fields._current.fields.value;
    local_a0.fields._current.fields.key = local_f8.fields._current.fields.key;
    local_a0.fields._getEnumeratorRetType = local_f8.fields._getEnumeratorRetType;
    local_a0.fields._36_4_ = local_f8.fields._36_4_;
    while (bVar3 = System_Collections_Generic_Dictionary_Enumerator<object,_object>__MoveNext
                             (&local_a0,
                              Method_System_Collections_Generic_Dictionary_Enumerator<string,_Dictionary<string,_float>>_MoveNext__
                             ), __this = local_a0.fields._current.fields.value,
          pIVar2 = local_a0.fields._current.fields.key, bVar3) {
      __this_02 = (SimpleJSON_JSONObject_o *)thunk_FUN_01bda818(SimpleJSON_JSONObject_TypeInfo);
      SimpleJSON_JSONObject___ctor(__this_02,(MethodInfo *)0x0);
      if ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this ==
          (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      System_Collections_Generic_Dictionary<object,_float>__GetEnumerator
                (&local_f8,(System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,
                 Method_System_Collections_Generic_Dictionary<string,_float>_GetEnumerator__);
      local_d0._8_4_ = local_f8.fields._version;
      local_d0._12_4_ = local_f8.fields._index;
      local_d0._0_8_ = local_f8.fields._dictionary;
      local_b8 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)
                 local_f8.fields._current.fields.value;
      local_d0._16_8_ = local_f8.fields._current.fields.key;
      local_b0._0_4_ = local_f8.fields._getEnumeratorRetType;
      local_b0._4_4_ = local_f8.fields._36_4_;
      while (bVar3 = System_Collections_Generic_Dictionary_Enumerator<object,_float>__MoveNext
                               ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)
                                local_d0,
                                Method_System_Collections_Generic_Dictionary_Enumerator<string,_float>_MoveNext__
                               ), uVar1 = local_d0._16_8_, bVar3) {
        n = local_b8._0_4_;
        if ((SimpleJSON_JSONNode_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pSVar4 = SimpleJSON_JSONNode__op_Implicit(n,(MethodInfo *)0x0);
        if (__this_02 == (SimpleJSON_JSONObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        (*(__this_02->klass->vtable)._8_set_Item.methodPtr)
                  (__this_02,uVar1,pSVar4,(__this_02->klass->vtable)._8_set_Item.method);
      }
      System_Collections_Generic_Dictionary_Enumerator<object,_float>__Dispose
                ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)local_d0,
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_float>_Dispose__);
      if (__this_00 == (SimpleJSON_JSONObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      (*(__this_00->klass->vtable)._8_set_Item.methodPtr)
                (__this_00,pIVar2,__this_02,(__this_00->klass->vtable)._8_set_Item.method);
    }
    System_Collections_Generic_Dictionary_Enumerator<object,_object>__Dispose
              (&local_a0,
               Method_System_Collections_Generic_Dictionary_Enumerator<string,_Dictionary<string,_float>>_Dispose__
              );
  }
  return;
}

