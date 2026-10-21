// FPMAFHGLPOB$$IDLABKHCAFO @ RVA 0x320F9D4

void FPMAFHGLPOB__IDLABKHCAFO
               (SimpleJSON_JSONObject_o *JHMENEKPIBO,System_String_o *IKKKILCDMMB,MethodInfo *method
               )

{
  Il2CppObject *pIVar1;
  bool bVar2;
  SimpleJSON_JSONArray_o *__this;
  System_Collections_Generic_List_HNFFPPPDKDK__o *__this_00;
  SimpleJSON_JSONObject_o *__this_01;
  System_Byte_array *pSVar3;
  System_Byte_array *pSVar4;
  System_String_o *pSVar5;
  SimpleJSON_JSONNode_o *pSVar6;
  ACHLOMELAJE_o *pAVar7;
  NFGLEDADCGL_o *pNVar8;
  System_String_o *s;
  System_Collections_Generic_List_Enumerator_T__o local_98;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  if ((DAT_04566e83 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3517);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3518);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3519);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3520);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HNFFPPPDKDK>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HNFFPPPDKDK>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HNFFPPPDKDK>_get_Current__);
    FUN_01bab630(&SimpleJSON_JSONArray_TypeInfo);
    FUN_01bab630(&SimpleJSON_JSONNode_TypeInfo);
    FUN_01bab630(&SimpleJSON_JSONObject_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<HNFFPPPDKDK>_GetEnumerator__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04566e83 = 1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  __this = (SimpleJSON_JSONArray_o *)thunk_FUN_01bda818(SimpleJSON_JSONArray_TypeInfo);
  SimpleJSON_JSONArray___ctor(__this,(MethodInfo *)0x0);
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
  pAVar7 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if ((pAVar7 != (ACHLOMELAJE_o *)0x0) &&
     (pNVar8 = (pAVar7->fields).CKJAGLDEMAE, pNVar8 != (NFGLEDADCGL_o *)0x0)) {
    __this_00 = (pNVar8->fields).PEJIOCBFEEE;
    if (__this_00 != (System_Collections_Generic_List_HNFFPPPDKDK__o *)0x0) {
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_98,(System_Collections_Generic_List_object__o *)__this_00,
                 Method_System_Collections_Generic_List<HNFFPPPDKDK>_GetEnumerator__);
      local_80.fields._index = local_98.fields._index;
      local_80.fields._version = local_98.fields._version;
      local_80.fields._list = local_98.fields._list;
      local_80.fields._current = local_98.fields._current;
      while (bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                               (&local_80,
                                Method_System_Collections_Generic_List_Enumerator<HNFFPPPDKDK>_MoveNext__
                               ), pIVar1 = local_80.fields._current, bVar2) {
        __this_01 = (SimpleJSON_JSONObject_o *)thunk_FUN_01bda818(SimpleJSON_JSONObject_TypeInfo);
        SimpleJSON_JSONObject___ctor(__this_01,(MethodInfo *)0x0);
        pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar3,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3517,
                   (MethodInfo *)0x0);
        pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar4,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3518,
                   (MethodInfo *)0x0);
        pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
        if (pIVar1 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        s = pIVar1[1].monitor;
        if ((SimpleJSON_JSONNode_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pSVar6 = SimpleJSON_JSONNode__op_Implicit(s,(MethodInfo *)0x0);
        if (__this_01 == (SimpleJSON_JSONObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        (*(__this_01->klass->vtable)._8_set_Item.methodPtr)
                  (__this_01,pSVar5,pSVar6,(__this_01->klass->vtable)._8_set_Item.method);
        pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar3,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3519,
                   (MethodInfo *)0x0);
        pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar4,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3520,
                   (MethodInfo *)0x0);
        pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
        pSVar6 = SimpleJSON_JSONNode__op_Implicit
                           (*(int32_t *)((long)&pIVar1[1].klass + 4),(MethodInfo *)0x0);
        (*(__this_01->klass->vtable)._8_set_Item.methodPtr)
                  (__this_01,pSVar5,pSVar6,(__this_01->klass->vtable)._8_set_Item.method);
        if (__this == (SimpleJSON_JSONArray_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        (*(__this->klass->vtable)._21_Add.methodPtr)
                  (__this,__this_01,(__this->klass->vtable)._21_Add.method);
      }
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_80,Method_System_Collections_Generic_List_Enumerator<HNFFPPPDKDK>_Dispose__)
      ;
      if (JHMENEKPIBO != (SimpleJSON_JSONObject_o *)0x0) {
        (*(JHMENEKPIBO->klass->vtable)._8_set_Item.methodPtr)
                  (JHMENEKPIBO,IKKKILCDMMB,__this,(JHMENEKPIBO->klass->vtable)._8_set_Item.method);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

