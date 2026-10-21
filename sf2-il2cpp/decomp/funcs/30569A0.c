// NHBBOEHHEKG$$FIMJOAKEGNL @ RVA 0x30569A0

System_String_o * NHBBOEHHEKG__FIMJOAKEGNL(NHBBOEHHEKG_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *extraout_x1;
  System_Collections_Generic_List_string__o *EDEHNHIHDDH;
  
                    /* try { // try from 031569a8 to 032569af has its CatchHandler @ 03156a70 */
                    /* try { // try from 031569b4 to 032569bb has its CatchHandler @ 03156a6c */
  if ((DAT_04565e69 & 1) == 0) {
    FUN_01bab630(&Method_LIIFLGALGNK_DEICJJOIDDF<string>__);
                    /* try { // try from 031569cc to 032569d3 has its CatchHandler @ 03156a68 */
                    /* try { // try from 031569d4 to 032569df has its CatchHandler @ 03156a64 */
    FUN_01bab630(&LIIFLGALGNK_TypeInfo);
    DAT_04565e69 = 1;
    method = extraout_x1;
  }
  EDEHNHIHDDH = (__this->fields).OECKCNINPHL;
  if ((LIIFLGALGNK_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 031569f8 to 03256a63 has its CatchHandler @ 03156a78 */
    thunk_FUN_01ba7564(LIIFLGALGNK_TypeInfo,method);
  }
  pSVar1 = (System_String_o *)
           LIIFLGALGNK__DEICJJOIDDF<object>
                     ((System_Collections_Generic_List_T__o *)EDEHNHIHDDH,
                      Method_LIIFLGALGNK_DEICJJOIDDF<string>__);
  return pSVar1;
}

