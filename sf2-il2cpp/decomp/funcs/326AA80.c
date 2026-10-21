// GBBCLAJELFO$$AJJLBBCJAAL @ RVA 0x326AA80

System_String_o *
GBBCLAJELFO__AJJLBBCJAAL(GBBCLAJELFO_o *__this,System_String_array *OPAEPDIIOEB,MethodInfo *method)

{
  int value;
  uint32_t CJNHFNHJHPE;
  ACHLOMELAJE_o *__this_00;
  System_Byte_array *pSVar1;
  System_Byte_array *pSVar2;
  System_String_o *pSVar3;
  System_String_o *str1;
  MethodInfo *method_00;
  ACHLOMELAJE_o *__this_01;
  System_Nullable_int__Fields local_48;
  System_Nullable_int__Fields local_38;
  
  if ((DAT_045671dc & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4972);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4973);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4974);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4975);
                    /* try { // try from 0336aad8 to 0346ac53 has its CatchHandler @ 0336aad8
                       catch() { ... } // from try @ 0336aad8 with catch @ 0336aad8
                       catch() { ... } // from try @ 0336acb4 with catch @ 0336aad8
                       catch() { ... } // from try @ 0336ad7c with catch @ 0336aad8
                       catch() { ... } // from try @ 0336ae30 with catch @ 0336aad8
                       catch() { ... } // from try @ 0336afa4 with catch @ 0336aad8
                       catch() { ... } // from try @ 0336afac with catch @ 0336aad8
                       catch() { ... } // from try @ 0336afe8 with catch @ 0336aad8
                       catch() { ... } // from try @ 0336b020 with catch @ 0336aad8
                       catch() { ... } // from try @ 0336b050 with catch @ 0336aad8
                       catch() { ... } // from try @ 0336b08c with catch @ 0336aad8
                       catch() { ... } // from try @ 0336b0b4 with catch @ 0336aad8
                       catch() { ... } // from try @ 0336b0e8 with catch @ 0336aad8 */
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&Method_System_Nullable<int>_GetValueOrDefault__);
    FUN_01bab630(&Method_System_Nullable<int>__ctor__);
    FUN_01bab630(&Method_System_Nullable<int>_get_HasValue__);
    __this = (GBBCLAJELFO_o *)FUN_01bab630(&Method_System_Nullable<int>_get_Value__);
    DAT_045671dc = 1;
  }
  local_38.hasValue = false;
  local_38._1_3_ = 0;
  local_38.value = 0;
  if (OPAEPDIIOEB == (System_String_array *)0x0) {
LAB_0336ad9c:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(__this);
  }
  if (OPAEPDIIOEB->max_length == 0) {
    local_48.hasValue = false;
    local_48._1_3_ = 0;
    local_48.value = 0;
    System_Nullable<int>___ctor
              ((System_Nullable_int__o)&local_48,1,Method_System_Nullable<int>__ctor__);
    local_38 = local_48;
  }
  else {
    local_38 = (System_Nullable_int__Fields)
               AJAMDCEKAFE__NANCFCIGNEE(0,OPAEPDIIOEB,(MethodInfo *)0x0);
  }
  if (((ulong)local_38 & 0xff) == 0) {
                    /* try { // try from 0336ad1c to 0346ad23 has its CatchHandler @ 0336afcc */
    pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar1,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4972,(MethodInfo *)0x0)
    ;
    pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 0336ad44 to 0346ad4b has its CatchHandler @ 0336afb8 */
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar2,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4973,(MethodInfo *)0x0)
    ;
    pSVar3 = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
                    /* try { // try from 0336ad70 to 0346ad7b has its CatchHandler @ 0336afac */
    str1 = GBBCLAJELFO__IGMDDJFPIJL((GBBCLAJELFO_o *)pSVar3,method_00);
                    /* try { // try from 0336ad7c to 0346ade7 has its CatchHandler @ 0336aad8 */
    pSVar3 = System_String__Concat(pSVar3,str1,(MethodInfo *)0x0);
  }
  else {
    value = System_Nullable<int>__get_Value
                      ((System_Nullable_int__o)&local_38,Method_System_Nullable<int>_get_Value__);
    if (0x33 < value) {
      value = 0x34;
    }
    if (value < 2) {
      value = 1;
    }
    System_Nullable<int>___ctor
              ((System_Nullable_int__o)&local_38,value,Method_System_Nullable<int>__ctor__);
    if (local_38.hasValue != false) {
      while (0 < local_38.value) {
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        if (DAT_04565b7d == '\0') {
          FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
          DAT_04565b7d = '\x01';
        }
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
          __this_01 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
          if (DAT_04565b7d == '\0') {
            FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
            DAT_04565b7d = '\x01';
          }
        }
        else {
          __this_01 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
        }
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
        __this = (GBBCLAJELFO_o *)0x0;
        if (__this_00 == (ACHLOMELAJE_o *)0x0) goto LAB_0336ad9c;
                    /* try { // try from 0336ac54 to 0346ac5b has its CatchHandler @ 0336b0a0 */
        CJNHFNHJHPE = ACHLOMELAJE__KKAOKMLLBGL(__this_00,(MethodInfo *)0x0);
        __this = (GBBCLAJELFO_o *)(ulong)CJNHFNHJHPE;
        if (__this_01 == (ACHLOMELAJE_o *)0x0) goto LAB_0336ad9c;
        ACHLOMELAJE__NKOMBDGHDEN(__this_01,CJNHFNHJHPE,(MethodInfo *)0x0);
        if (((ulong)local_38 & 0xff) == 0) {
          local_38.hasValue = false;
          local_38._1_3_ = 0;
          local_38.value = 0;
        }
        else {
                    /* try { // try from 0336ac7c to 0346ac83 has its CatchHandler @ 0336b08c */
          local_48.hasValue = false;
          local_48._1_3_ = 0;
          local_48.value = 0;
          System_Nullable<int>___ctor
                    ((System_Nullable_int__o)&local_48,local_38.value + -1,
                     Method_System_Nullable<int>__ctor__);
          local_38 = local_48;
        }
                    /* try { // try from 0336aca8 to 0346acb3 has its CatchHandler @ 0336b020 */
        if (((ulong)local_38 & 0xff) == 0) break;
                    /* try { // try from 0336acb4 to 0346ad1b has its CatchHandler @ 0336aad8 */
      }
    }
    pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar1,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4974,(MethodInfo *)0x0)
    ;
    pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar2,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4975,(MethodInfo *)0x0)
    ;
    pSVar3 = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
  }
  return pSVar3;
}

