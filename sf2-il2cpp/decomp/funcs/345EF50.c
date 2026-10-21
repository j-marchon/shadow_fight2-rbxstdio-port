// OGHIOMKFPLH$$KFDPIIMDFIA @ RVA 0x345EF50

System_String_o * OGHIOMKFPLH__KFDPIIMDFIA(MethodInfo *method)

{
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar1;
  
  if ((DAT_045682e1 & 1) == 0) {
                    /* try { // try from 0355ef88 to 0365efaf has its CatchHandler @ 0355efc4 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1996);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1997);
    FUN_01bab630(&byte___TypeInfo);
    DAT_045682e1 = 1;
  }
                    /* try { // try from 0355efb0 to 0365efbb has its CatchHandler @ 0355ebd8 */
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 0355efbc to 0365efc3 has its CatchHandler @ 0355efc4 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0355ef88 with catch @ 0355efc4
                       catch(type#2 @ 00000000) { ... } // from try @ 0355efbc with catch @ 0355efc4
                        */
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1996,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1997,(MethodInfo *)0x0);
  pSVar1 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  return pSVar1;
}

