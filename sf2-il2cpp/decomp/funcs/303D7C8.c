// PJKHAJKEHEL$$CJPIJKJDHGI @ RVA 0x303D7C8

HOOAAGABMBL_o *
PJKHAJKEHEL__CJPIJKJDHGI
          (PJKHAJKEHEL_o *__this,System_String_o *EBOHIPKPFDJ,System_String_o *HJBFKFHHAEO,
          MethodInfo *method)

{
  bool bVar1;
  HOOAAGABMBL_o **ppHVar2;
  
  if ((DAT_04565d9c & 1) == 0) {
    FUN_01bab630(&StringLiteral_14870);
    FUN_01bab630(&StringLiteral_12160);
    FUN_01bab630(&StringLiteral_3076);
    FUN_01bab630(&StringLiteral_8772);
    FUN_01bab630(&StringLiteral_11017);
    FUN_01bab630(&StringLiteral_7066);
    DAT_04565d9c = 1;
  }
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
          bVar1 = System_String__op_Equality(EBOHIPKPFDJ,StringLiteral_3076,(MethodInfo *)0x0);
          if (bVar1) {
            ppHVar2 = &(__this->fields).PEMECEBIJDM;
          }
          else {
            bVar1 = System_String__op_Equality(EBOHIPKPFDJ,StringLiteral_7066,(MethodInfo *)0x0);
            if (!bVar1) {
              return (HOOAAGABMBL_o *)0x0;
            }
            ppHVar2 = &(__this->fields).IIDEPPHFJPA;
          }
        }
      }
    }
  }
  return *ppHVar2;
}

