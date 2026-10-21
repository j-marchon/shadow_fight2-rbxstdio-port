// MGICPMNIAMM$$.cctor @ RVA 0x3156790

void MGICPMNIAMM___cctor(MethodInfo *method)

{
  System_Random_o *__this;
  
  if ((DAT_0456683f & 1) == 0) {
    FUN_01bab630(&MGICPMNIAMM_TypeInfo);
    FUN_01bab630(&System_Random_TypeInfo);
    DAT_0456683f = 1;
  }
  __this = (System_Random_o *)thunk_FUN_01bda818(System_Random_TypeInfo);
                    /* try { // try from 032567e4 to 033567ef has its CatchHandler @ 03254ff4 */
  System_Random___ctor(__this,0x48a080e,(MethodInfo *)0x0);
                    /* try { // try from 032567f0 to 033567f7 has its CatchHandler @ 032567f8 */
                    /* catch() { ... } // from try @ 03256344 with catch @ 032567f8
                       catch() { ... } // from try @ 03256468 with catch @ 032567f8
                       catch() { ... } // from try @ 0325677c with catch @ 032567f8
                       catch() { ... } // from try @ 032567f0 with catch @ 032567f8 */
  MGICPMNIAMM_TypeInfo->static_fields->NBAAKDGJIEI = __this;
  thunk_FUN_01c20e04(MGICPMNIAMM_TypeInfo->static_fields,__this);
  return;
}

