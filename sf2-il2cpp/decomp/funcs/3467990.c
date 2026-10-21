// OGHIOMKFPLH$$IALEAJKKJJO @ RVA 0x3467990

System_String_o * OGHIOMKFPLH__IALEAJKKJJO(MethodInfo *method)

{
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar1;
  
                    /* try { // try from 03567998 to 0366799b has its CatchHandler @ 035679ac */
                    /* catch() { ... } // from try @ 03567998 with catch @ 035679ac */
                    /* try { // try from 035679b4 to 03667a1b has its CatchHandler @ 03567a30 */
  if ((DAT_04568304 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2538);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2539);
    FUN_01bab630(&byte___TypeInfo);
    DAT_04568304 = 1;
  }
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2538,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 03567a1c to 03667a27 has its CatchHandler @ 03567654 */
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2539,(MethodInfo *)0x0);
                    /* try { // try from 03567a28 to 03667a2f has its CatchHandler @ 03567a30 */
                    /* catch() { ... } // from try @ 035679b4 with catch @ 03567a30
                       catch() { ... } // from try @ 03567a28 with catch @ 03567a30 */
  pSVar1 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  return pSVar1;
}

