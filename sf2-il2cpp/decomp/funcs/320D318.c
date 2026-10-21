// FPMAFHGLPOB$$JJPJJDHOFLE @ RVA 0x320D318

void FPMAFHGLPOB__JJPJJDHOFLE
               (System_Collections_Generic_List_HEFOANCOHDC__o *EGBBHPHAHAC,
               SimpleJSON_JSONObject_o *JHMENEKPIBO,System_String_o *PNOCDIDLLLM,MethodInfo *method)

{
  Il2CppObject *__this;
  bool bVar1;
  SimpleJSON_JSONArray_o *__this_00;
  SimpleJSON_JSONObject_o *__this_01;
  System_Byte_array *pSVar2;
  System_Byte_array *pSVar3;
  System_String_o *pSVar4;
  SimpleJSON_JSONNode_o *pSVar5;
  System_String_o *pSVar6;
  System_Collections_Generic_List_Enumerator_T__o local_98;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  if ((DAT_04566e7e & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3431);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3432);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3433);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3434);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3435);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3436);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HEFOANCOHDC>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HEFOANCOHDC>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HEFOANCOHDC>_get_Current__);
    FUN_01bab630(&SimpleJSON_JSONArray_TypeInfo);
    FUN_01bab630(&SimpleJSON_JSONNode_TypeInfo);
    FUN_01bab630(&SimpleJSON_JSONObject_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<HEFOANCOHDC>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HEFOANCOHDC>_get_Count__);
    DAT_04566e7e = 1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  if (EGBBHPHAHAC != (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0) {
    if ((EGBBHPHAHAC->fields)._size < 1) {
      __this_00 = (SimpleJSON_JSONArray_o *)0x0;
    }
    else {
      __this_00 = (SimpleJSON_JSONArray_o *)thunk_FUN_01bda818(SimpleJSON_JSONArray_TypeInfo);
      SimpleJSON_JSONArray___ctor(__this_00,(MethodInfo *)0x0);
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_98,(System_Collections_Generic_List_object__o *)EGBBHPHAHAC,
                 Method_System_Collections_Generic_List<HEFOANCOHDC>_GetEnumerator__);
      local_80.fields._index = local_98.fields._index;
      local_80.fields._version = local_98.fields._version;
      local_80.fields._list = local_98.fields._list;
      local_80.fields._current = local_98.fields._current;
      while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                               (&local_80,
                                Method_System_Collections_Generic_List_Enumerator<HEFOANCOHDC>_MoveNext__
                               ), __this = local_80.fields._current, bVar1) {
        __this_01 = (SimpleJSON_JSONObject_o *)thunk_FUN_01bda818(SimpleJSON_JSONObject_TypeInfo);
        SimpleJSON_JSONObject___ctor(__this_01,(MethodInfo *)0x0);
        pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar2,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3431,
                   (MethodInfo *)0x0);
        pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar3,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3432,
                   (MethodInfo *)0x0);
        pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
        if ((HEFOANCOHDC_o *)__this == (HEFOANCOHDC_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar6 = ((HEFOANCOHDC_Fields *)((long)__this + 0x10))->JIJLBFGKNJK;
        if ((SimpleJSON_JSONNode_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pSVar5 = SimpleJSON_JSONNode__op_Implicit(pSVar6,(MethodInfo *)0x0);
        if (__this_01 == (SimpleJSON_JSONObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        (*(__this_01->klass->vtable)._8_set_Item.methodPtr)
                  (__this_01,pSVar4,pSVar5,(__this_01->klass->vtable)._8_set_Item.method);
        pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar2,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3433,
                   (MethodInfo *)0x0);
        pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar3,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3434,
                   (MethodInfo *)0x0);
        pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
        pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar2,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3435,
                   (MethodInfo *)0x0);
        pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar3,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3436,
                   (MethodInfo *)0x0);
        pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
        pSVar6 = HEFOANCOHDC__EOBFJAOLIMH((HEFOANCOHDC_o *)__this,pSVar6,(MethodInfo *)0x0);
        pSVar5 = SimpleJSON_JSONNode__op_Implicit(pSVar6,(MethodInfo *)0x0);
        (*(__this_01->klass->vtable)._8_set_Item.methodPtr)
                  (__this_01,pSVar4,pSVar5,(__this_01->klass->vtable)._8_set_Item.method);
        if (__this_00 == (SimpleJSON_JSONArray_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        (*(__this_00->klass->vtable)._21_Add.methodPtr)
                  (__this_00,__this_01,(__this_00->klass->vtable)._21_Add.method);
      }
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_80,Method_System_Collections_Generic_List_Enumerator<HEFOANCOHDC>_Dispose__)
      ;
    }
    if ((SimpleJSON_JSONNode_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = SimpleJSON_JSONNode__op_Inequality
                      ((SimpleJSON_JSONNode_o *)__this_00,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      if (JHMENEKPIBO == (SimpleJSON_JSONObject_o *)0x0) goto LAB_0330d6e4;
      (*(JHMENEKPIBO->klass->vtable)._8_set_Item.methodPtr)
                (JHMENEKPIBO,PNOCDIDLLLM,__this_00,(JHMENEKPIBO->klass->vtable)._8_set_Item.method);
    }
    return;
  }
LAB_0330d6e4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

