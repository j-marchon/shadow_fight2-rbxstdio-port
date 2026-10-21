// PJKHAJKEHEL$$CGNPHPDFKJG @ RVA 0x3045490

void PJKHAJKEHEL__CGNPHPDFKJG
               (PJKHAJKEHEL_o *__this,System_String_o *EBOHIPKPFDJ,HOOAAGABMBL_o *IKKAMAMLIKA,
               MethodInfo *method)

{
  bool bVar1;
  HOOAAGABMBL_o **ppHVar2;
  
  if ((DAT_04565dc8 & 1) == 0) {
    FUN_01bab630(&StringLiteral_14870);
                    /* try { // try from 031454d0 to 032454e7 has its CatchHandler @ 031454e8 */
    FUN_01bab630(&StringLiteral_12160);
    FUN_01bab630(&StringLiteral_3076);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031454d0 with catch @ 031454e8
                       try { // try from 031454e8 to 032454ff has its CatchHandler @ 031453d0 */
    FUN_01bab630(&StringLiteral_8772);
    FUN_01bab630(&StringLiteral_11017);
                    /* try { // try from 03145500 to 03245517 has its CatchHandler @ 031455c8 */
    FUN_01bab630(&StringLiteral_7066);
    DAT_04565dc8 = 1;
  }
                    /* try { // try from 03145518 to 03245593 has its CatchHandler @ 031453d0 */
  bVar1 = System_String__op_Equality(EBOHIPKPFDJ,StringLiteral_12160,(MethodInfo *)0x0);
  if (bVar1) {
    ppHVar2 = &(__this->fields).HLAAFCIMBAP;
  }
  else {
    bVar1 = System_String__op_Equality(EBOHIPKPFDJ,StringLiteral_14870,(MethodInfo *)0x0);
    if (bVar1) {
      ppHVar2 = &(__this->fields).PNAAPNFPCPI;
    }
    else {
      bVar1 = System_String__op_Equality(EBOHIPKPFDJ,StringLiteral_11017,(MethodInfo *)0x0);
      if (bVar1) {
        ppHVar2 = &(__this->fields).NBHGHLIPCAP;
      }
      else {
        bVar1 = System_String__op_Equality(EBOHIPKPFDJ,StringLiteral_8772,(MethodInfo *)0x0);
        if (bVar1) {
          ppHVar2 = &(__this->fields).AIDDHEHFBEG;
        }
        else {
                    /* try { // try from 03145594 to 032455a3 has its CatchHandler @ 031455c8 */
                    /* try { // try from 031455a4 to 032455cb has its CatchHandler @ 031453d0 */
          bVar1 = System_String__op_Equality(EBOHIPKPFDJ,StringLiteral_3076,(MethodInfo *)0x0);
          if (bVar1) {
            ppHVar2 = &(__this->fields).PEMECEBIJDM;
          }
          else {
                    /* catch() { ... } // from try @ 03145500 with catch @ 031455c8
                       catch() { ... } // from try @ 03145594 with catch @ 031455c8 */
                    /* try { // try from 031455cc to 032455cf has its CatchHandler @ 031455d8 */
            bVar1 = System_String__op_Equality(EBOHIPKPFDJ,StringLiteral_7066,(MethodInfo *)0x0);
                    /* try { // try from 031455d0 to 032455db has its CatchHandler @ 031453d0 */
            if (!bVar1) {
              return;
            }
            ppHVar2 = &(__this->fields).IIDEPPHFJPA;
          }
        }
      }
    }
  }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 031455cc with catch @ 031455d8
                        */
  *ppHVar2 = IKKAMAMLIKA;
  thunk_FUN_01c20e04(ppHVar2,IKKAMAMLIKA);
  return;
}

