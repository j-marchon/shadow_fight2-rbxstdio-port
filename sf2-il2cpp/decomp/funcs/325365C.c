// GJFEBGNFFBA$$CCGJEGLFHJB @ RVA 0x325365C

System_String_o * GJFEBGNFFBA__CCGJEGLFHJB(GJFEBGNFFBA_o *__this,MethodInfo *method)

{
  GJFEBGNFFBA_c *method_00;
  System_String_o *pSVar1;
  MethodInfo *method_01;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  
                    /* catch() { ... } // from try @ 03353640 with catch @ 0335366c */
  if ((DAT_04567147 & 1) == 0) {
                    /* try { // try from 0335367c to 03453683 has its CatchHandler @ 03353698 */
                    /* try { // try from 03353684 to 0345368f has its CatchHandler @ 03352ef4 */
    FUN_01bab630(&GJFEBGNFFBA_TypeInfo);
                    /* try { // try from 03353690 to 03453697 has its CatchHandler @ 03353698 */
    FUN_01bab630(&MPLEHFFCFEM_TypeInfo);
                    /* catch() { ... } // from try @ 0335367c with catch @ 03353698
                       catch() { ... } // from try @ 03353690 with catch @ 03353698 */
    FUN_01bab630(&StringLiteral_47);
    DAT_04567147 = 1;
    method = extraout_x1;
  }
  if ((MPLEHFFCFEM_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MPLEHFFCFEM_TypeInfo,method);
    method = extraout_x1_00;
  }
  if (MPLEHFFCFEM_TypeInfo->static_fields->EIANPAHFCEH != false) {
    return (System_String_o *)0x0;
  }
  method_00 = GJFEBGNFFBA_TypeInfo;
  if ((GJFEBGNFFBA_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (GJFEBGNFFBA_c *)thunk_FUN_01ba7564(GJFEBGNFFBA_TypeInfo,method);
  }
  GJFEBGNFFBA__BJMKPONFOPK((MethodInfo *)method_00);
  pSVar1 = (System_String_o *)
           (*(__this->klass->vtable)._4_unknown.methodPtr)
                     (__this,(__this->klass->vtable)._4_unknown.method);
  method_01 = (MethodInfo *)System_String__Concat(StringLiteral_47,pSVar1,(MethodInfo *)0x0);
  pSVar1 = GJFEBGNFFBA__IOEHKDBENCJ(method_01);
  pSVar1 = System_String__Concat((System_String_o *)method_01,pSVar1,(MethodInfo *)0x0);
  return pSVar1;
}

