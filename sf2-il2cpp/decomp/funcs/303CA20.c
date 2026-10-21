// KKICACIIOBD$$AJJLBBCJAAL @ RVA 0x303CA20

System_String_o *
KKICACIIOBD__AJJLBBCJAAL(KKICACIIOBD_o *__this,System_String_array *OPAEPDIIOEB,MethodInfo *method)

{
  FGKGKDEJCOG_o *__this_00;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar1;
  System_String_array *extraout_x1;
  System_String_array *extraout_x1_00;
  System_String_array *extraout_x1_01;
  
                    /* try { // try from 0313ca28 to 0323ca2b has its CatchHandler @ 0313cb3c */
                    /* try { // try from 0313ca30 to 0323ca33 has its CatchHandler @ 0313cb34 */
  if ((DAT_04565d95 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6461);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6462);
                    /* try { // try from 0313ca54 to 0323ca67 has its CatchHandler @ 0313cb4c */
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565d95 = 1;
    OPAEPDIIOEB = extraout_x1;
  }
                    /* try { // try from 0313ca74 to 0323ca77 has its CatchHandler @ 0313cb28 */
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,OPAEPDIIOEB);
    OPAEPDIIOEB = extraout_x1_00;
  }
  if (DAT_04565e59 == '\0') {
                    /* try { // try from 0313ca90 to 0323ca97 has its CatchHandler @ 0313cb40 */
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565e59 = '\x01';
    OPAEPDIIOEB = extraout_x1_01;
  }
                    /* try { // try from 0313caa8 to 0323caab has its CatchHandler @ 0313cb38 */
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,OPAEPDIIOEB);
                    /* try { // try from 0313cab4 to 0323cabf has its CatchHandler @ 0313cb30 */
  }
  __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->EIHHKABBIMJ;
                    /* try { // try from 0313cac0 to 0323cb07 has its CatchHandler @ 0313c904 */
  if (__this_00 != (FGKGKDEJCOG_o *)0x0) {
    FGKGKDEJCOG__GEEFPKCAMNE(__this_00,(MethodInfo *)0x0);
    MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)MOPNMEHIMFJ,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6461,(MethodInfo *)0x0)
    ;
                    /* try { // try from 0313cb08 to 0323cb0b has its CatchHandler @ 0313cb2c */
    LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 0313cb10 to 0323cb13 has its CatchHandler @ 0313cb4c */
                    /* try { // try from 0313cb18 to 0323cb23 has its CatchHandler @ 0313cb40 */
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)LFINFBNOLFG,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6462,(MethodInfo *)0x0)
    ;
                    /* try { // try from 0313cb24 to 0323cb63 has its CatchHandler @ 0313c904 */
                    /* catch() { ... } // from try @ 0313ca74 with catch @ 0313cb28 */
                    /* catch() { ... } // from try @ 0313cb08 with catch @ 0313cb2c */
                    /* catch() { ... } // from try @ 0313cab4 with catch @ 0313cb30 */
    pSVar1 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
    return pSVar1;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 0313ca30 with catch @ 0313cb34 */
  FUN_01bab8c8();
}

