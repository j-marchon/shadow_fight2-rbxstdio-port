// BHEDGAKGKPO$$CGFLLLNEFOE @ RVA 0x31CA61C

System_String_o * BHEDGAKGKPO__CGFLLLNEFOE(MethodInfo *method)

{
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar1;
  
  if ((DAT_04566c60 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_135);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_136);
                    /* try { // try from 032ca664 to 033ca8db has its CatchHandler @ 032ca664
                       catch() { ... } // from try @ 032ca664 with catch @ 032ca664
                       catch() { ... } // from try @ 032ca990 with catch @ 032ca664
                       catch() { ... } // from try @ 032cabcc with catch @ 032ca664
                       catch() { ... } // from try @ 032cabd4 with catch @ 032ca664
                       catch() { ... } // from try @ 032cac7c with catch @ 032ca664 */
    FUN_01bab630(&byte___TypeInfo);
    DAT_04566c60 = 1;
  }
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_135,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_136,(MethodInfo *)0x0);
  pSVar1 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  return pSVar1;
}

