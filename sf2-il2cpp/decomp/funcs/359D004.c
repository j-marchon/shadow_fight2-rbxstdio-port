// Nekki.Utils.RaidBetaLogger$$DINNIAOENFN @ RVA 0x359D004

System_String_o * Nekki_Utils_RaidBetaLogger__DINNIAOENFN(MethodInfo *method)

{
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar1;
  CFGLKHFFEKA_o *MMOKLAAAIPP;
  System_String_o *str1;
  
                    /* try { // try from 0369d014 to 0379d01b has its CatchHandler @ 0369d2f8 */
                    /* try { // try from 0369d030 to 0379d037 has its CatchHandler @ 0369d0cc */
  if ((DAT_04568dea & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1418);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1419);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&CFGLKHFFEKA_TypeInfo);
    FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
    DAT_04568dea = 1;
  }
                    /* try { // try from 0369d080 to 0379d09b has its CatchHandler @ 0369d0c8 */
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1418,(MethodInfo *)0x0);
                    /* try { // try from 0369d0a8 to 0379d0af has its CatchHandler @ 0369d304 */
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 0369d0b8 to 0379d0c3 has its CatchHandler @ 0369d0d0 */
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1419,(MethodInfo *)0x0);
                    /* try { // try from 0369d0c4 to 0379d0e3 has its CatchHandler @ 0369ce10 */
                    /* catch() { ... } // from try @ 0369d080 with catch @ 0369d0c8 */
                    /* catch() { ... } // from try @ 0369d030 with catch @ 0369d0cc */
  pSVar1 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 0369d0b8 with catch @ 0369d0d0 */
  if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 0369d0e4 to 0379d0e7 has its CatchHandler @ 0369d2d8 */
    thunk_FUN_01ba7564(EOAOCPLIKOI_TypeInfo);
  }
                    /* try { // try from 0369d0e8 to 0379d163 has its CatchHandler @ 0369ce10 */
  MMOKLAAAIPP = EOAOCPLIKOI__DADLDJLFLJO((MethodInfo *)0x0);
  if ((CFGLKHFFEKA_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(CFGLKHFFEKA_TypeInfo);
  }
  str1 = CFGLKHFFEKA__ALBJPLAPOBO(MMOKLAAAIPP,(MethodInfo *)0x0);
  pSVar1 = System_String__Concat(pSVar1,str1,(MethodInfo *)0x0);
  return pSVar1;
}

