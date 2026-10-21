// LCAOAAFEOAG.EFNELLKNPAH$$GEDLNHGEGNI @ RVA 0x35BD958

System_String_o * LCAOAAFEOAG_EFNELLKNPAH__GEDLNHGEGNI(MethodInfo *method)

{
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar1;
  
                    /* try { // try from 036bd95c to 037bda8b has its CatchHandler @ 036bd95c
                       catch() { ... } // from try @ 036bd95c with catch @ 036bd95c
                       catch() { ... } // from try @ 036bdb64 with catch @ 036bd95c
                       catch() { ... } // from try @ 036bdbfc with catch @ 036bd95c
                       catch() { ... } // from try @ 036bdc38 with catch @ 036bd95c
                       catch() { ... } // from try @ 036bdc68 with catch @ 036bd95c */
  if ((DAT_04568ef0 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6627);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6628);
    FUN_01bab630(&byte___TypeInfo);
    DAT_04568ef0 = 1;
  }
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6627,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6628,(MethodInfo *)0x0);
  pSVar1 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  return pSVar1;
}

