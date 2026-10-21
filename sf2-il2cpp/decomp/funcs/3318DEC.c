// MKFAKELPPAC$$AOKPDDOLHJK @ RVA 0x3318DEC

void MKFAKELPPAC__AOKPDDOLHJK(MKFAKELPPAC_o *__this,MethodInfo *method)

{
  MKFAKELPPAC_o *method_00;
  PCEDNFLCPPF_o *__this_00;
  System_String_o *pSVar1;
  System_Byte_array *pSVar2;
  System_Byte_array *pSVar3;
  System_String_o *ACCIHBHMFPN;
  MethodInfo *method_01;
  MethodInfo *in_x3;
  
  method_00 = __this;
  if ((DAT_045677f6 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6579);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6580);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6581);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6582);
    method_00 = (MKFAKELPPAC_o *)FUN_01bab630(&byte___TypeInfo);
    DAT_045677f6 = 1;
  }
  __this_00 = PCEDNFLCPPF__AIHNLLGNBLC((MethodInfo *)method_00);
  pSVar1 = (System_String_o *)
           (*(__this->klass->vtable)._30_unknown.methodPtr)
                     (__this,(__this->klass->vtable)._30_unknown.method);
  pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar2,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6579,(MethodInfo *)0x0);
  pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar3,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6580,(MethodInfo *)0x0);
  ACCIHBHMFPN = OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
  if (__this_00 != (PCEDNFLCPPF_o *)0x0) {
    PCEDNFLCPPF__DOABHMPBKND(__this_00,pSVar1,ACCIHBHMFPN,in_x3);
    pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar2,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6581,(MethodInfo *)0x0)
    ;
    pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar3,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6582,(MethodInfo *)0x0)
    ;
    method_01 = (MethodInfo *)0x0;
    pSVar1 = OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
    MKFAKELPPAC__CEBOEOLNLCK(__this,pSVar1,method_01);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

