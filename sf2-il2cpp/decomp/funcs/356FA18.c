// HAPEALJCNFG$$IGMDDJFPIJL @ RVA 0x356FA18

System_String_o * HAPEALJCNFG__IGMDDJFPIJL(HAPEALJCNFG_o *__this,MethodInfo *method)

{
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar1;
  
                    /* try { // try from 0366fa3c to 0376fa77 has its CatchHandler @ 03673220 */
  if ((DAT_04568c53 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5365);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy704___field_1);
    FUN_01bab630(&byte___TypeInfo);
    DAT_04568c53 = 1;
  }
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 0366fa8c to 0376fa97 has its CatchHandler @ 03673060 */
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5365,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x2c0);
                    /* try { // try from 0366fa9c to 0376faa3 has its CatchHandler @ 0367305c */
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy704___field_1,(MethodInfo *)0x0);
                    /* try { // try from 0366fac0 to 0376fac7 has its CatchHandler @ 03672cac */
  pSVar1 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  return pSVar1;
}

