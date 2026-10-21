// PEEIMHCMDND$$OGHFMBJIOBB @ RVA 0x3423C68

/* WARNING: Removing unreachable block (ram,0x03523f60) */
/* WARNING: Removing unreachable block (ram,0x03523f64) */
/* WARNING: Removing unreachable block (ram,0x0352400c) */

void PEEIMHCMDND__OGHFMBJIOBB
               (PEEIMHCMDND_o *__this,SimpleJSON_JSONNode_o *JGJJDOBMBNB,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  GGHCLMEFIGO_o *__this_00;
  System_Collections_Generic_List_IGFGDDANEPE__o *__this_01;
  SimpleJSON_JSONObject_o *__this_02;
  SimpleJSON_JSONNode_o *pSVar3;
  long *plVar4;
  SimpleJSON_JSONString_o *__this_03;
  ACHLOMELAJE_o *pAVar5;
  Il2CppClass *pIVar6;
  System_Collections_Generic_List_Enumerator_T__o local_b8;
  System_Collections_Generic_List_Enumerator_T__o local_a0;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  if ((DAT_045680f9 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IGFGDDANEPE>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HEFOANCOHDC>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IGFGDDANEPE>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HEFOANCOHDC>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IGFGDDANEPE>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HEFOANCOHDC>_get_Current__);
    FUN_01bab630(&SimpleJSON_JSONNode_TypeInfo);
    FUN_01bab630(&SimpleJSON_JSONObject_TypeInfo);
    FUN_01bab630(&SimpleJSON_JSONString_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<IGFGDDANEPE>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HEFOANCOHDC>_GetEnumerator__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_9327);
    FUN_01bab630(&StringLiteral_10239);
    DAT_045680f9 = 1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  local_a0.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_a0.fields._index = 0;
  local_a0.fields._version = 0;
  local_a0.fields._current = (Il2CppObject *)0x0;
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pAVar5 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (pAVar5 != (ACHLOMELAJE_o *)0x0) {
    __this_00 = (pAVar5->fields).OIDPLCLELEN;
    if ((__this_00 == (GGHCLMEFIGO_o *)0x0) ||
       (__this_01 = GGHCLMEFIGO__PDBBGCIHBFL(__this_00,(MethodInfo *)0x0),
       __this_01 == (System_Collections_Generic_List_IGFGDDANEPE__o *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_b8,(System_Collections_Generic_List_object__o *)__this_01,
               Method_System_Collections_Generic_List<IGFGDDANEPE>_GetEnumerator__);
    local_80.fields._index = local_b8.fields._index;
    local_80.fields._version = local_b8.fields._version;
    local_80.fields._list = local_b8.fields._list;
    local_80.fields._current = local_b8.fields._current;
    while (bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_80,
                              Method_System_Collections_Generic_List_Enumerator<IGFGDDANEPE>_MoveNext__
                             ), pIVar1 = local_80.fields._current, bVar2) {
      if (local_80.fields._current != (Il2CppObject *)0x0) {
        __this_02 = (SimpleJSON_JSONObject_o *)thunk_FUN_01bda818(SimpleJSON_JSONObject_TypeInfo);
        SimpleJSON_JSONObject___ctor(__this_02,(MethodInfo *)0x0);
        if (JGJJDOBMBNB == (SimpleJSON_JSONNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        (*(JGJJDOBMBNB->klass->vtable)._21_Add.methodPtr)
                  (JGJJDOBMBNB,__this_02,(JGJJDOBMBNB->klass->vtable)._21_Add.method);
        pIVar6 = pIVar1[1].klass;
        if ((SimpleJSON_JSONNode_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pSVar3 = SimpleJSON_JSONNode__op_Implicit((System_String_o *)pIVar6,(MethodInfo *)0x0);
        if (__this_02 == (SimpleJSON_JSONObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        (*(__this_02->klass->vtable)._8_set_Item.methodPtr)
                  (__this_02,StringLiteral_9327,pSVar3,(__this_02->klass->vtable)._8_set_Item.method
                  );
        pIVar6 = pIVar1[0xb].klass;
        if (pIVar6 == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        System_Collections_Generic_List<object>__GetEnumerator
                  (&local_b8,(System_Collections_Generic_List_object__o *)pIVar6,
                   Method_System_Collections_Generic_List<HEFOANCOHDC>_GetEnumerator__);
        local_a0.fields._index = local_b8.fields._index;
        local_a0.fields._version = local_b8.fields._version;
        local_a0.fields._list = local_b8.fields._list;
        local_a0.fields._current = local_b8.fields._current;
        while (bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                 (&local_a0,
                                  Method_System_Collections_Generic_List_Enumerator<HEFOANCOHDC>_MoveNext__
                                 ), pIVar1 = local_a0.fields._current, bVar2) {
          if (local_a0.fields._current != (Il2CppObject *)0x0) {
            plVar4 = (long *)(*(__this_02->klass->vtable)._7_get_Item.methodPtr)
                                       (__this_02,StringLiteral_10239,
                                        (__this_02->klass->vtable)._7_get_Item.method);
            pIVar6 = pIVar1[4].klass;
            __this_03 = (SimpleJSON_JSONString_o *)
                        thunk_FUN_01bda818(SimpleJSON_JSONString_TypeInfo);
            SimpleJSON_JSONString___ctor(__this_03,(System_String_o *)pIVar6,(MethodInfo *)0x0);
            if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            (**(code **)(*plVar4 + 0x288))(plVar4,__this_03,*(undefined8 *)(*plVar4 + 0x290));
          }
        }
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_a0,
                   Method_System_Collections_Generic_List_Enumerator<HEFOANCOHDC>_Dispose__);
      }
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_80,Method_System_Collections_Generic_List_Enumerator<IGFGDDANEPE>_Dispose__);
  }
  return;
}

