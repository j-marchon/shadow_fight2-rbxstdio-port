// FPMAFHGLPOB$$KKKBEBDBBEJ @ RVA 0x320BEA0

void FPMAFHGLPOB__KKKBEBDBBEJ(SimpleJSON_JSONObject_o *JHMENEKPIBO,MethodInfo *method)

{
  bool bVar1;
  int32_t n;
  SimpleJSON_JSONArray_o *__this;
  System_Collections_Generic_List_HBNENINHPGF__o *__this_00;
  ACHLOMELAJE_o *__this_01;
  SimpleJSON_JSONObject_o *__this_02;
  System_Byte_array *pSVar2;
  System_Byte_array *pSVar3;
  System_String_o *pSVar4;
  SimpleJSON_JSONNode_o *pSVar5;
  MethodInfo *extraout_x1;
  MGNPHCAAEIO_HLAKGGFFNAO_o *pMVar6;
  System_String_o *pSVar7;
  System_Collections_Generic_List_Enumerator_T__o local_98;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  if ((DAT_04566e77 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3383);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3384);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3385);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3386);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3387);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3388);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HBNENINHPGF>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HBNENINHPGF>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HBNENINHPGF>_get_Current__);
    FUN_01bab630(&SimpleJSON_JSONArray_TypeInfo);
    FUN_01bab630(&SimpleJSON_JSONNode_TypeInfo);
    FUN_01bab630(&SimpleJSON_JSONObject_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<HBNENINHPGF>_GetEnumerator__);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04566e77 = 1;
    method = extraout_x1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  __this = (SimpleJSON_JSONArray_o *)thunk_FUN_01bda818(SimpleJSON_JSONArray_TypeInfo,method);
  SimpleJSON_JSONArray___ctor(__this,(MethodInfo *)0x0);
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pMVar6 = MGNPHCAAEIO_TypeInfo->static_fields->BHAAICEFMBC;
  if (pMVar6 != (MGNPHCAAEIO_HLAKGGFFNAO_o *)0x0) {
    __this_00 = (pMVar6->fields).DIELINNGEBJ;
    if (__this_00 != (System_Collections_Generic_List_HBNENINHPGF__o *)0x0) {
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_98,(System_Collections_Generic_List_object__o *)__this_00,
                 Method_System_Collections_Generic_List<HBNENINHPGF>_GetEnumerator__);
      local_80.fields._index = local_98.fields._index;
      local_80.fields._version = local_98.fields._version;
      local_80.fields._list = local_98.fields._list;
      local_80.fields._current = local_98.fields._current;
      while( true ) {
        bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_80,
                           Method_System_Collections_Generic_List_Enumerator<HBNENINHPGF>_MoveNext__
                          );
        if (!bVar1) break;
        if (local_80.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar7 = local_80.fields._current[1].monitor;
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
        __this_01 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
        if (__this_01 == (ACHLOMELAJE_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        n = ACHLOMELAJE__FCPIAEEKGEL(__this_01,pSVar7,(MethodInfo *)0x0);
        __this_02 = (SimpleJSON_JSONObject_o *)thunk_FUN_01bda818(SimpleJSON_JSONObject_TypeInfo);
        SimpleJSON_JSONObject___ctor(__this_02,(MethodInfo *)0x0);
        pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar2,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3383,
                   (MethodInfo *)0x0);
        pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar3,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3384,
                   (MethodInfo *)0x0);
        pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
        if ((SimpleJSON_JSONNode_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pSVar5 = SimpleJSON_JSONNode__op_Implicit(pSVar7,(MethodInfo *)0x0);
        if (__this_02 == (SimpleJSON_JSONObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        (*(__this_02->klass->vtable)._8_set_Item.methodPtr)
                  (__this_02,pSVar4,pSVar5,(__this_02->klass->vtable)._8_set_Item.method);
        pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar2,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3385,
                   (MethodInfo *)0x0);
        pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar3,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3386,
                   (MethodInfo *)0x0);
        pSVar7 = OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
        pSVar5 = SimpleJSON_JSONNode__op_Implicit(n,(MethodInfo *)0x0);
        (*(__this_02->klass->vtable)._8_set_Item.methodPtr)
                  (__this_02,pSVar7,pSVar5,(__this_02->klass->vtable)._8_set_Item.method);
        if (__this == (SimpleJSON_JSONArray_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        (*(__this->klass->vtable)._21_Add.methodPtr)
                  (__this,__this_02,(__this->klass->vtable)._21_Add.method);
      }
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_80,Method_System_Collections_Generic_List_Enumerator<HBNENINHPGF>_Dispose__)
      ;
      pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar2,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3387,
                 (MethodInfo *)0x0);
      pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar3,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3388,
                 (MethodInfo *)0x0);
      pSVar7 = OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
      if (JHMENEKPIBO != (SimpleJSON_JSONObject_o *)0x0) {
        (*(JHMENEKPIBO->klass->vtable)._20_Add.methodPtr)
                  (JHMENEKPIBO,pSVar7,__this,(JHMENEKPIBO->klass->vtable)._20_Add.method);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

