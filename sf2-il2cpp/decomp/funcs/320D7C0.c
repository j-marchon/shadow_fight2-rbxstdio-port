// FPMAFHGLPOB$$EGKNJFGNMIK @ RVA 0x320D7C0

void FPMAFHGLPOB__EGKNJFGNMIK(SimpleJSON_JSONObject_o *JHMENEKPIBO,MethodInfo *method)

{
  code cVar1;
  Il2CppObject *IKKAMAMLIKA;
  bool bVar2;
  System_Byte_array *pSVar3;
  System_Byte_array *pSVar4;
  System_String_o *pSVar5;
  ulong uVar6;
  MethodInfo *__this;
  System_Collections_Generic_List_IGFGDDANEPE__o *__this_00;
  HOOAAGABMBL_o *pHVar7;
  MethodInfo *method_00;
  ACHLOMELAJE_o *pAVar8;
  GGHCLMEFIGO_o *pGVar9;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_04566e7c & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3423);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3424);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3425);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3426);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3427);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3428);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IGFGDDANEPE>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IGFGDDANEPE>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IGFGDDANEPE>_get_Current__);
    FUN_01bab630(&SimpleJSON_JSONArray_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<IGFGDDANEPE>_GetEnumerator__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04566e7c = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar3,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3423,(MethodInfo *)0x0);
  pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar4,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3424,(MethodInfo *)0x0);
  pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
  if (JHMENEKPIBO != (SimpleJSON_JSONObject_o *)0x0) {
    uVar6 = (*(JHMENEKPIBO->klass->vtable)._26_HasKey.methodPtr)
                      (JHMENEKPIBO,pSVar5,(JHMENEKPIBO->klass->vtable)._26_HasKey.method);
    if ((uVar6 & 1) == 0) {
      __this = (MethodInfo *)thunk_FUN_01bda818(SimpleJSON_JSONArray_TypeInfo);
      SimpleJSON_JSONArray___ctor((SimpleJSON_JSONArray_o *)__this,(MethodInfo *)0x0);
      pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar3,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3427,
                 (MethodInfo *)0x0);
      pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar4,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3428,
                 (MethodInfo *)0x0);
      pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
      method_00 = __this;
      (*(JHMENEKPIBO->klass->vtable)._8_set_Item.methodPtr)
                (JHMENEKPIBO,pSVar5,__this,(JHMENEKPIBO->klass->vtable)._8_set_Item.method);
    }
    else {
      pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar3,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3425,
                 (MethodInfo *)0x0);
      pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar4,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3426,
                 (MethodInfo *)0x0);
      pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
      method_00 = (JHMENEKPIBO->klass->vtable)._7_get_Item.method;
      __this = (MethodInfo *)
               (*(JHMENEKPIBO->klass->vtable)._7_get_Item.methodPtr)(JHMENEKPIBO,pSVar5);
      if (__this != (MethodInfo *)0x0) {
        cVar1 = (code)(SimpleJSON_JSONArray_TypeInfo->_2).naturalAligment;
        if (((byte)__this->methodPointer[0x130] < (byte)cVar1) ||
           (*(SimpleJSON_JSONArray_c **)
             (*(long *)(__this->methodPointer + 200) + (ulong)(byte)cVar1 * 8 + -8) !=
            SimpleJSON_JSONArray_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_01babc64(__this);
        }
      }
    }
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
    pAVar8 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if (((pAVar8 != (ACHLOMELAJE_o *)0x0) &&
        (pGVar9 = (pAVar8->fields).OIDPLCLELEN, pGVar9 != (GGHCLMEFIGO_o *)0x0)) &&
       (__this_00 = (pGVar9->fields).DPOPJKJLDEE,
       __this_00 != (System_Collections_Generic_List_IGFGDDANEPE__o *)0x0)) {
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_48,(System_Collections_Generic_List_object__o *)__this_00,
                 Method_System_Collections_Generic_List<IGFGDDANEPE>_GetEnumerator__);
      while( true ) {
        bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_48,
                           Method_System_Collections_Generic_List_Enumerator<IGFGDDANEPE>_MoveNext__
                          );
        IKKAMAMLIKA = local_48.fields._current;
        if (!bVar2) {
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (&local_48,
                     Method_System_Collections_Generic_List_Enumerator<IGFGDDANEPE>_Dispose__);
          return;
        }
        if ((IGFGDDANEPE_o *)local_48.fields._current == (IGFGDDANEPE_o *)0x0) break;
        pHVar7 = ((IGFGDDANEPE_Fields *)((long)local_48.fields._current + 0x10))->PCBECBEFJOI;
        if (pHVar7 == (HOOAAGABMBL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        uVar6 = (*(pHVar7->klass->vtable)._5_EFLKILFFJKH.methodPtr)
                          (pHVar7,(pHVar7->klass->vtable)._5_EFLKILFFJKH.method);
        if (((uVar6 & 1) == 0) &&
           (((IGFGDDANEPE_Fields *)((long)IKKAMAMLIKA + 0x10))->OFIKEBGDMBE != false)) {
          FPMAFHGLPOB__FDGMBGNOIPC
                    ((SimpleJSON_JSONArray_o *)__this,(IGFGDDANEPE_o *)IKKAMAMLIKA,method_00);
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

