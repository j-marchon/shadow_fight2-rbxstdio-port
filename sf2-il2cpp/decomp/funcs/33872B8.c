// IDDIABHBDEE$$OGGAJEAKGDO @ RVA 0x33872B8

System_String_o * IDDIABHBDEE__OGGAJEAKGDO(MethodInfo *method)

{
  System_String_o *pSVar1;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *str1;
  
                    /* try { // try from 034872b8 to 035872ef has its CatchHandler @ 03487188 */
  if ((DAT_04567bac & 1) == 0) {
                    /* catch() { ... } // from try @ 034872b4 with catch @ 034872e0 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_439);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_440);
                    /* try { // try from 034872f0 to 035872f7 has its CatchHandler @ 0348730c */
                    /* try { // try from 034872f8 to 03587303 has its CatchHandler @ 03487188 */
    FUN_01bab630(&byte___TypeInfo);
                    /* try { // try from 03487304 to 0358730b has its CatchHandler @ 0348730c */
    FUN_01bab630(&MGENAMAJALB_TypeInfo);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 034872f0 with catch @ 0348730c
                       catch(type#2 @ 00000000) { ... } // from try @ 03487304 with catch @ 0348730c
                        */
    DAT_04567bac = 1;
  }
  if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar1 = MGENAMAJALB__ANDNJCLBPGJ((MethodInfo *)0x0);
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_439,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_440,(MethodInfo *)0x0);
  str1 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  pSVar1 = System_String__Concat(pSVar1,str1,(MethodInfo *)0x0);
  return pSVar1;
}

