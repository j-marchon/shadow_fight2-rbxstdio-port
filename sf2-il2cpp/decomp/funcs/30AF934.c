// CFEANGJDHEE$$LMDMNPBBNML @ RVA 0x30AF934

void CFEANGJDHEE__LMDMNPBBNML(System_String_o *CELOLGNMKCG,MethodInfo *method)

{
  System_String_o *DIHAKADKIKM;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  
  if ((DAT_045661d0 & 1) == 0) {
    FUN_01bab630(&CFEANGJDHEE_TypeInfo);
    FUN_01bab630(&StringLiteral_2476);
                    /* try { // try from 031af97c to 032af98b has its CatchHandler @ 031af98c */
    DAT_045661d0 = 1;
  }
                    /* catch() { ... } // from try @ 031af97c with catch @ 031af98c */
  DIHAKADKIKM = System_String__Concat(StringLiteral_2476,CELOLGNMKCG,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 031af72c with catch @ 031af990 */
                    /* try { // try from 031af994 to 032af997 has its CatchHandler @ 031af9a0 */
                    /* try { // try from 031af998 to 032af9a3 has its CatchHandler @ 031af2e0 */
  method_00 = extraout_x1;
  if ((CFEANGJDHEE_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 031af994 with catch @ 031af9a0 */
    thunk_FUN_01ba7564(CFEANGJDHEE_TypeInfo);
    method_00 = extraout_x1_00;
  }
  CFEANGJDHEE__DHAAGKPHJLA(DIHAKADKIKM,method_00);
  return;
}

