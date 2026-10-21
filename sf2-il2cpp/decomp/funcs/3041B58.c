// PJKHAJKEHEL$$CGBNJHHIFGO @ RVA 0x3041B58

System_String_o *
PJKHAJKEHEL__CGBNJHHIFGO(PJKHAJKEHEL_o *__this,System_String_o *EBOHIPKPFDJ,MethodInfo *method)

{
  bool bVar1;
  HOOAAGABMBL_o *pHVar2;
  
  if ((DAT_04565db9 & 1) == 0) {
    FUN_01bab630(&StringLiteral_3531);
    FUN_01bab630(&StringLiteral_14871);
    FUN_01bab630(&StringLiteral_7046);
    FUN_01bab630(&StringLiteral_8779);
    FUN_01bab630(&StringLiteral_14258);
    FUN_01bab630(&StringLiteral_11018);
    DAT_04565db9 = 1;
  }
  bVar1 = System_String__op_Equality(EBOHIPKPFDJ,StringLiteral_7046,(MethodInfo *)0x0);
  if (bVar1) {
    pHVar2 = (__this->fields).IIDEPPHFJPA;
  }
  else {
    bVar1 = System_String__op_Equality(EBOHIPKPFDJ,StringLiteral_3531,(MethodInfo *)0x0);
    if ((bVar1) ||
       (bVar1 = System_String__op_Equality(EBOHIPKPFDJ,StringLiteral_14258,(MethodInfo *)0x0), bVar1
       )) {
      pHVar2 = (__this->fields).PEMECEBIJDM;
    }
    else {
      bVar1 = System_String__op_Equality(EBOHIPKPFDJ,StringLiteral_14871,(MethodInfo *)0x0);
      if (bVar1) {
        pHVar2 = (__this->fields).PNAAPNFPCPI;
      }
      else {
        bVar1 = System_String__op_Equality(EBOHIPKPFDJ,StringLiteral_11018,(MethodInfo *)0x0);
        if (bVar1) {
          pHVar2 = (__this->fields).NBHGHLIPCAP;
        }
        else {
          bVar1 = System_String__op_Equality(EBOHIPKPFDJ,StringLiteral_8779,(MethodInfo *)0x0);
          if (!bVar1) {
            return (System_String_o *)0x0;
          }
          pHVar2 = (__this->fields).AIDDHEHFBEG;
        }
      }
    }
  }
  if (pHVar2 != (HOOAAGABMBL_o *)0x0) {
    return (pHVar2->fields)._COIPKAKHDFP_k__BackingField;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

