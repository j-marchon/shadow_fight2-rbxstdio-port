// GFCCCDLDGEG$$IGMDDJFPIJL @ RVA 0x30DD294

System_String_o * GFCCCDLDGEG__IGMDDJFPIJL(GFCCCDLDGEG_o *__this,MethodInfo *method)

{
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar1;
  
                    /* try { // try from 031dd2b0 to 032dd2bf has its CatchHandler @ 031dd2c0 */
                    /* catch() { ... } // from try @ 031dd204 with catch @ 031dd2c0
                       catch() { ... } // from try @ 031dd2b0 with catch @ 031dd2c0 */
  if ((DAT_04566368 & 1) == 0) {
                    /* try { // try from 031dd2c4 to 032dd2c7 has its CatchHandler @ 031dd2d0 */
                    /* try { // try from 031dd2c8 to 032dd2d3 has its CatchHandler @ 031dce64 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy256___field_1);
                    /* catch() { ... } // from try @ 031dd2c4 with catch @ 031dd2d0 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4761);
    FUN_01bab630(&byte___TypeInfo);
    DAT_04566368 = 1;
  }
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4761,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x100);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy256___field_1,(MethodInfo *)0x0);
  pSVar1 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  return pSVar1;
}

