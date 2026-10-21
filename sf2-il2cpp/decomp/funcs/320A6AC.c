// FPMAFHGLPOB$$GMIEADCFLNI @ RVA 0x320A6AC

void FPMAFHGLPOB__GMIEADCFLNI
               (SimpleJSON_JSONObject_o *JHMENEKPIBO,System_String_o *ALHDMEKMLPH,
               HOOAAGABMBL_o *IKKAMAMLIKA,MethodInfo *method)

{
  System_Byte_array *pSVar1;
  System_Byte_array *pSVar2;
  System_String_o *pSVar3;
  SimpleJSON_JSONNode_o *pSVar4;
  MethodInfo *method_00;
  System_String_o *s;
  
  if ((DAT_04566e79 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3405);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3406);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3407);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3408);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3409);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3410);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&SimpleJSON_JSONNode_TypeInfo);
    DAT_04566e79 = 1;
  }
  if (IKKAMAMLIKA == (HOOAAGABMBL_o *)0x0) {
    return;
  }
  pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar1,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3405,(MethodInfo *)0x0);
  pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar2,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3406,(MethodInfo *)0x0);
  pSVar3 = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
  pSVar3 = System_String__Concat(ALHDMEKMLPH,pSVar3,(MethodInfo *)0x0);
  s = (IKKAMAMLIKA->fields)._COIPKAKHDFP_k__BackingField;
  if ((SimpleJSON_JSONNode_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(SimpleJSON_JSONNode_TypeInfo);
  }
  pSVar4 = SimpleJSON_JSONNode__op_Implicit(s,(MethodInfo *)0x0);
  if (JHMENEKPIBO != (SimpleJSON_JSONObject_o *)0x0) {
    (*(JHMENEKPIBO->klass->vtable)._8_set_Item.methodPtr)
              (JHMENEKPIBO,pSVar3,pSVar4,(JHMENEKPIBO->klass->vtable)._8_set_Item.method);
    pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar1,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3407,(MethodInfo *)0x0)
    ;
    pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar2,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3408,(MethodInfo *)0x0)
    ;
    pSVar3 = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
    pSVar3 = System_String__Concat(ALHDMEKMLPH,pSVar3,(MethodInfo *)0x0);
    pSVar4 = SimpleJSON_JSONNode__op_Implicit
                       ((IKKAMAMLIKA->fields)._HCHGENFJLHA_k__BackingField,(MethodInfo *)0x0);
    method_00 = (JHMENEKPIBO->klass->vtable)._8_set_Item.method;
    (*(JHMENEKPIBO->klass->vtable)._8_set_Item.methodPtr)(JHMENEKPIBO,pSVar3,pSVar4);
    pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar1,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3409,(MethodInfo *)0x0)
    ;
                    /* try { // try from 0330a8c8 to 0340a9ef has its CatchHandler @ 0330a8c8
                       catch() { ... } // from try @ 0330a8c8 with catch @ 0330a8c8
                       catch() { ... } // from try @ 0330aa88 with catch @ 0330a8c8
                       catch() { ... } // from try @ 0330aaf4 with catch @ 0330a8c8
                       catch() { ... } // from try @ 0330ab28 with catch @ 0330a8c8
                       catch() { ... } // from try @ 0330ab68 with catch @ 0330a8c8 */
    pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar2,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3410,(MethodInfo *)0x0)
    ;
    pSVar3 = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
    pSVar3 = System_String__Concat(ALHDMEKMLPH,pSVar3,(MethodInfo *)0x0);
    FPMAFHGLPOB__JJPJJDHOFLE(IKKAMAMLIKA,JHMENEKPIBO,pSVar3,method_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

