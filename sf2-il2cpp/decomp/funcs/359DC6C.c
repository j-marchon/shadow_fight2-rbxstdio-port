// Nekki.Utils.RaidBetaLogger$$GetExceptionName @ RVA 0x359DC6C

System_String_o *
Nekki_Utils_RaidBetaLogger__GetExceptionName(System_String_o *NIPCCKMNCGF,MethodInfo *method)

{
  int32_t startIndex;
  int iVar1;
  System_Byte_array *pSVar2;
  System_Byte_array *pSVar3;
  System_String_o *pSVar4;
  System_Char_array *anyOf;
  
  if ((DAT_04568e00 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1526);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1527);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1528);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1529);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1530);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1531);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&char___TypeInfo);
    DAT_04568e00 = 1;
  }
  pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar2,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1526,(MethodInfo *)0x0);
  pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar3,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1527,(MethodInfo *)0x0);
  pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
  if (NIPCCKMNCGF != (System_String_o *)0x0) {
    startIndex = System_String__IndexOf(NIPCCKMNCGF,pSVar4,5,(MethodInfo *)0x0);
    if (startIndex < 0) {
      pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar2,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1528,
                 (MethodInfo *)0x0);
      pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar3,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1529,
                 (MethodInfo *)0x0);
      pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
      return pSVar4;
    }
    anyOf = (System_Char_array *)FUN_01bab718(char___TypeInfo,2);
    if (anyOf != (System_Char_array *)0x0) {
      iVar1 = (int)anyOf->max_length;
      if ((iVar1 == 0) || (anyOf->m_Items[0] = 0x20, iVar1 == 1)) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
      anyOf->m_Items[1] = 0x3a;
      iVar1 = System_String__IndexOfAny(NIPCCKMNCGF,anyOf,startIndex,(MethodInfo *)0x0);
      if (iVar1 < 0) {
        pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar2,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1530,
                   (MethodInfo *)0x0);
        pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar3,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1531,
                   (MethodInfo *)0x0);
                    /* try { // try from 0369de74 to 0379df1f has its CatchHandler @ 0369de74
                       catch() { ... } // from try @ 0369de74 with catch @ 0369de74
                       catch() { ... } // from try @ 0369df4c with catch @ 0369de74
                       catch() { ... } // from try @ 0369df8c with catch @ 0369de74
                       catch() { ... } // from try @ 0369dfb8 with catch @ 0369de74
                       catch() { ... } // from try @ 0369dff8 with catch @ 0369de74 */
        pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
        if (pSVar4 == (System_String_o *)0x0) goto LAB_0369deac;
        iVar1 = (pSVar4->fields)._stringLength + startIndex;
      }
      pSVar4 = System_String__Substring(NIPCCKMNCGF,0,iVar1,(MethodInfo *)0x0);
      return pSVar4;
    }
  }
LAB_0369deac:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

