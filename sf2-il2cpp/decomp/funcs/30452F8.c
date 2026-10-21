// PJKHAJKEHEL$$AICOEGCIBAE @ RVA 0x30452F8

HOOAAGABMBL_o *
PJKHAJKEHEL__AICOEGCIBAE(PJKHAJKEHEL_o *__this,System_String_o *EBOHIPKPFDJ,MethodInfo *method)

{
  bool bVar1;
  HOOAAGABMBL_o **ppHVar2;
  
  if ((DAT_04565dc7 & 1) == 0) {
    FUN_01bab630(&StringLiteral_3531);
    FUN_01bab630(&StringLiteral_14871);
    FUN_01bab630(&StringLiteral_7046);
    FUN_01bab630(&StringLiteral_8779);
    FUN_01bab630(&StringLiteral_14258);
    FUN_01bab630(&StringLiteral_11018);
    DAT_04565dc7 = 1;
  }
  bVar1 = System_String__op_Equality(EBOHIPKPFDJ,StringLiteral_7046,(MethodInfo *)0x0);
  if (bVar1) {
    ppHVar2 = &(__this->fields).IIDEPPHFJPA;
  }
  else {
    bVar1 = System_String__op_Equality(EBOHIPKPFDJ,StringLiteral_3531,(MethodInfo *)0x0);
    if ((bVar1) ||
       (bVar1 = System_String__op_Equality(EBOHIPKPFDJ,StringLiteral_14258,(MethodInfo *)0x0), bVar1
       )) {
      ppHVar2 = &(__this->fields).PEMECEBIJDM;
    }
    else {
      bVar1 = System_String__op_Equality(EBOHIPKPFDJ,StringLiteral_14871,(MethodInfo *)0x0);
      if (bVar1) {
        ppHVar2 = &(__this->fields).PNAAPNFPCPI;
      }
      else {
        bVar1 = System_String__op_Equality(EBOHIPKPFDJ,StringLiteral_11018,(MethodInfo *)0x0);
        if (bVar1) {
          ppHVar2 = &(__this->fields).NBHGHLIPCAP;
        }
        else {
          bVar1 = System_String__op_Equality(EBOHIPKPFDJ,StringLiteral_8779,(MethodInfo *)0x0);
          if (!bVar1) {
            return (HOOAAGABMBL_o *)0x0;
          }
          ppHVar2 = &(__this->fields).AIDDHEHFBEG;
        }
      }
    }
  }
                    /* try { // try from 031453d0 to 032454cf has its CatchHandler @ 031453d0
                       catch() { ... } // from try @ 031453d0 with catch @ 031453d0
                       catch() { ... } // from try @ 031454e8 with catch @ 031453d0
                       catch() { ... } // from try @ 03145518 with catch @ 031453d0
                       catch() { ... } // from try @ 031455a4 with catch @ 031453d0
                       catch() { ... } // from try @ 031455d0 with catch @ 031453d0 */
  return *ppHVar2;
}

