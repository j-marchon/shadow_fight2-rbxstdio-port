// Nekki.Utils.RaidBetaLogger$$IFGNOMDEHCM @ RVA 0x359EF20

System_String_o *
Nekki_Utils_RaidBetaLogger__IFGNOMDEHCM
          (Nekki_Utils_RaidBetaLogger_o *__this,System_String_o *DJDEOBOADKF,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  System_Text_StringBuilder_o *pSVar3;
  System_Byte_array *pSVar4;
  System_Byte_array *pSVar5;
  System_String_o *pSVar6;
  System_Text_StringBuilder_o *pSVar7;
  
  if ((DAT_04568ddf & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1316);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1317);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1318);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1319);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1320);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1321);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&System_Text_StringBuilder_TypeInfo);
    DAT_04568ddf = 1;
  }
  pSVar3 = (__this->fields).LJLADKMLDEF;
  if (pSVar3 != (System_Text_StringBuilder_o *)0x0) {
    iVar2 = System_Text_StringBuilder__get_Length(pSVar3,(MethodInfo *)0x0);
    if (DJDEOBOADKF != (System_String_o *)0x0) {
      iVar1 = (DJDEOBOADKF->fields)._stringLength;
      pSVar3 = (System_Text_StringBuilder_o *)thunk_FUN_01bda818(System_Text_StringBuilder_TypeInfo)
      ;
      System_Text_StringBuilder___ctor(pSVar3,iVar2 + iVar1 + 0x100,(MethodInfo *)0x0);
      pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar4,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1316,
                 (MethodInfo *)0x0);
      pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar5,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1317,
                 (MethodInfo *)0x0);
      pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
      if (pSVar3 != (System_Text_StringBuilder_o *)0x0) {
        System_Text_StringBuilder__Append(pSVar3,pSVar6,(MethodInfo *)0x0);
        pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar4,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1318,
                   (MethodInfo *)0x0);
        pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar5,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1319,
                   (MethodInfo *)0x0);
        pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
        System_Text_StringBuilder__Append(pSVar3,pSVar6,(MethodInfo *)0x0);
        System_Text_StringBuilder__Append(pSVar3,DJDEOBOADKF,(MethodInfo *)0x0);
        pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar4,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1320,
                   (MethodInfo *)0x0);
        pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar5,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1321,
                   (MethodInfo *)0x0);
        pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
        System_Text_StringBuilder__Append(pSVar3,pSVar6,(MethodInfo *)0x0);
        pSVar7 = (__this->fields).LJLADKMLDEF;
        if (pSVar7 != (System_Text_StringBuilder_o *)0x0) {
          pSVar6 = (System_String_o *)
                   (*(pSVar7->klass->vtable)._3_ToString.methodPtr)
                             (pSVar7,(pSVar7->klass->vtable)._3_ToString.method);
          System_Text_StringBuilder__Append(pSVar3,pSVar6,(MethodInfo *)0x0);
                    /* WARNING: Could not recover jumptable at 0x0369f188. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          pSVar6 = (System_String_o *)
                   (*(pSVar3->klass->vtable)._3_ToString.methodPtr)
                             (pSVar3,(pSVar3->klass->vtable)._3_ToString.method);
          return pSVar6;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

