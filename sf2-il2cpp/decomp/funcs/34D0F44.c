// BBBBKBBFNOG$$EJCGFFJOGHF @ RVA 0x34D0F44

System_String_o * BBBBKBBFNOG__EJCGFFJOGHF(DNELIPCHKLK_o *KOILJHHCIEE,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  System_Byte_array *pSVar3;
  System_Byte_array *pSVar4;
  System_String_o *value;
  
  if ((DAT_045686b4 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6633);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6634);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6635);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6636);
    FUN_01bab630(&byte___TypeInfo);
    DAT_045686b4 = 1;
  }
  if (KOILJHHCIEE != (DNELIPCHKLK_o *)0x0) {
    pSVar2 = (System_String_o *)
             (*(KOILJHHCIEE->klass->vtable)._3_ToString.methodPtr)
                       (KOILJHHCIEE,(KOILJHHCIEE->klass->vtable)._3_ToString.method);
    pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar3,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6633,(MethodInfo *)0x0)
    ;
    pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar4,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6634,(MethodInfo *)0x0)
    ;
    value = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
    if (pSVar2 != (System_String_o *)0x0) {
      bVar1 = System_String__Contains(pSVar2,value,(MethodInfo *)0x0);
      if (bVar1) {
        pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar3,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6635,
                   (MethodInfo *)0x0);
        pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar4,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6636,
                   (MethodInfo *)0x0);
        pSVar2 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
        return pSVar2;
      }
      return (KOILJHHCIEE->fields).GDPFBDIJNHA;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

