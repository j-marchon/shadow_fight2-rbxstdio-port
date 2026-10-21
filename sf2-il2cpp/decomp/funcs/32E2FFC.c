// DOPEEDABNEK$$LDMKKAPAJCN @ RVA 0x32E2FFC

void DOPEEDABNEK__LDMKKAPAJCN(DOPEEDABNEK_o *__this,HOOAAGABMBL_o *IKKAMAMLIKA,MethodInfo *method)

{
  bool bVar1;
  System_String_o *NPMGAJPBDKL;
  System_String_o *GMEMMNHABBH;
  MethodInfo *in_x3;
  undefined8 *puVar2;
  System_String_o *a;
  
  if ((DAT_045675f7 & 1) == 0) {
                    /* try { // try from 033e3014 to 034e3017 has its CatchHandler @ 033e309c */
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_14870);
    FUN_01bab630(&StringLiteral_3076);
    FUN_01bab630(&StringLiteral_8772);
    FUN_01bab630(&StringLiteral_3462);
    FUN_01bab630(&StringLiteral_3463);
                    /* try { // try from 033e3064 to 034e309b has its CatchHandler @ 033e315c */
    FUN_01bab630(&StringLiteral_3464);
    FUN_01bab630(&StringLiteral_3465);
    FUN_01bab630(&StringLiteral_3460);
    FUN_01bab630(&StringLiteral_3461);
    FUN_01bab630(&StringLiteral_11017);
                    /* catch() { ... } // from try @ 033e3014 with catch @ 033e309c
                       try { // try from 033e309c to 034e30cf has its CatchHandler @ 033e2da8 */
    FUN_01bab630(&StringLiteral_7066);
    DAT_045675f7 = 1;
  }
                    /* catch() { ... } // from try @ 033e2e80 with catch @ 033e30ac */
  if (IKKAMAMLIKA == (HOOAAGABMBL_o *)0x0) {
    return;
  }
                    /* catch() { ... } // from try @ 033e2e68 with catch @ 033e30b0
                       catch() { ... } // from try @ 033e2fcc with catch @ 033e30b0 */
                    /* catch() { ... } // from try @ 033e2f18 with catch @ 033e30b4
                       catch() { ... } // from try @ 033e2fe0 with catch @ 033e30b4 */
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 033e30d0 to 034e30d3 has its CatchHandler @ 033e30e0 */
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                    /* catch() { ... } // from try @ 033e30d0 with catch @ 033e30e0 */
    DAT_04565b7d = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField == (ACHLOMELAJE_o *)0x0) {
    return;
  }
  a = (IKKAMAMLIKA->fields)._GMPAEDFIIHF_k__BackingField;
                    /* try { // try from 033e3120 to 034e3147 has its CatchHandler @ 033e315c */
  bVar1 = System_String__op_Equality(a,StringLiteral_14870,(MethodInfo *)0x0);
  if (bVar1) {
    puVar2 = &StringLiteral_3464;
  }
  else {
                    /* try { // try from 033e3148 to 034e3153 has its CatchHandler @ 033e2da8 */
    bVar1 = System_String__op_Equality(a,StringLiteral_3076,(MethodInfo *)0x0);
    NPMGAJPBDKL = StringLiteral_3460;
    GMEMMNHABBH = StringLiteral_3465;
    if (bVar1) goto LAB_033e31f0;
    bVar1 = System_String__op_Equality(a,StringLiteral_7066,(MethodInfo *)0x0);
    if (bVar1) {
      puVar2 = &StringLiteral_3461;
    }
    else {
      bVar1 = System_String__op_Equality(a,StringLiteral_11017,(MethodInfo *)0x0);
      if (bVar1) {
        puVar2 = &StringLiteral_3463;
      }
      else {
        bVar1 = System_String__op_Equality(a,StringLiteral_8772,(MethodInfo *)0x0);
        if (!bVar1) {
          return;
        }
        puVar2 = &StringLiteral_3462;
      }
    }
  }
  NPMGAJPBDKL = (System_String_o *)*puVar2;
  GMEMMNHABBH = (System_String_o *)0x0;
LAB_033e31f0:
  DOPEEDABNEK__DCGGJJJKFHO(IKKAMAMLIKA,NPMGAJPBDKL,GMEMMNHABBH,in_x3);
  return;
}

