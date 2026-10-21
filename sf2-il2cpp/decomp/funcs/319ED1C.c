// PDFMAHPKIEI$$AIHNLLGNBLC @ RVA 0x319ED1C

PDFMAHPKIEI_o * PDFMAHPKIEI__AIHNLLGNBLC(MethodInfo *method)

{
  PDFMAHPKIEI_o *__this;
  
                    /* try { // try from 0329ed24 to 0339ed27 has its CatchHandler @ 0329f174 */
                    /* try { // try from 0329ed30 to 0339ed3f has its CatchHandler @ 0329f16c */
  if ((DAT_04566b09 & 1) == 0) {
    FUN_01bab630(&PDFMAHPKIEI_TypeInfo);
                    /* try { // try from 0329ed48 to 0339ed5b has its CatchHandler @ 0329f158 */
    DAT_04566b09 = 1;
  }
  __this = PDFMAHPKIEI_TypeInfo->static_fields->CBDMFFMCJBK;
  if (__this == (PDFMAHPKIEI_o *)0x0) {
    __this = (PDFMAHPKIEI_o *)thunk_FUN_01bda818();
                    /* try { // try from 0329ed68 to 0339ed6f has its CatchHandler @ 0329f168 */
    System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
    PDFMAHPKIEI_TypeInfo->static_fields->CBDMFFMCJBK = __this;
                    /* try { // try from 0329ed7c to 0339ed7f has its CatchHandler @ 0329f164 */
    thunk_FUN_01c20e04(PDFMAHPKIEI_TypeInfo->static_fields,__this);
  }
  return __this;
}

