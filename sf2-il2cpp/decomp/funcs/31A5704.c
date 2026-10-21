// PDFMAHPKIEI$$HJIPAOJMNEG @ RVA 0x31A5704

System_String_o * PDFMAHPKIEI__HJIPAOJMNEG(System_Byte_array *CJNHFNHJHPE,MethodInfo *method)

{
  System_Text_Encoding_o *pSVar1;
  System_String_o *pSVar2;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566b0a & 1) == 0) {
    FUN_01bab630(&EGFFLEKJFGN_TypeInfo);
    DAT_04566b0a = 1;
    method = extraout_x1;
  }
  if ((CJNHFNHJHPE == (System_Byte_array *)0x0) || (CJNHFNHJHPE->max_length == 0)) {
    pSVar2 = (System_String_o *)0x0;
  }
  else {
    if ((EGFFLEKJFGN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(EGFFLEKJFGN_TypeInfo,method);
    }
                    /* try { // try from 032a575c to 033a5763 has its CatchHandler @ 032a5c0c */
    EGFFLEKJFGN__LGAJPKLKGCM(CJNHFNHJHPE,(MethodInfo *)0x0);
    pSVar1 = System_Text_Encoding__get_UTF8((MethodInfo *)0x0);
    if (pSVar1 == (System_Text_Encoding_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
                    /* try { // try from 032a5778 to 033a577b has its CatchHandler @ 032a5be0 */
    pSVar2 = (System_String_o *)
             (*(pSVar1->klass->vtable)._37_GetString.methodPtr)
                       (pSVar1,CJNHFNHJHPE,(pSVar1->klass->vtable)._37_GetString.method);
  }
                    /* try { // try from 032a5884 to 033a58a7 has its CatchHandler @ 032a58f8 */
  return pSVar2;
}

