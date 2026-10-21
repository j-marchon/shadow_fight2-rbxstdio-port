// OFFIONDOEPM$$AMJCJJALAJH @ RVA 0x3137F14

System_String_o * OFFIONDOEPM__AMJCJJALAJH(System_String_o *FAICPHKIHHC,MethodInfo *method)

{
  bool bVar1;
  uint16_t uVar2;
  int32_t iVar3;
  System_String_o *pSVar4;
  UnityEngine_Object_o *x;
  
  if ((DAT_0456670b & 1) == 0) {
    FUN_01bab630(&KKCBGIBKOCP_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_10829);
    FUN_01bab630(&StringLiteral_10832);
    FUN_01bab630(&StringLiteral_14092);
    FUN_01bab630(&StringLiteral_1);
    FUN_01bab630(&StringLiteral_1377);
    DAT_0456670b = 1;
  }
  bVar1 = PCOEHCPGBBG__BDLEIEHBFAD(FAICPHKIHHC,(MethodInfo *)0x0);
  pSVar4 = StringLiteral_1;
  if (!bVar1) {
    if (FAICPHKIHHC == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    iVar3 = System_String__IndexOf(FAICPHKIHHC,0x2e,(MethodInfo *)0x0);
    pSVar4 = FAICPHKIHHC;
    if (iVar3 < 1) {
      uVar2 = System_String__get_Chars(FAICPHKIHHC,0,(MethodInfo *)0x0);
      if (uVar2 != 0x2e) {
        FAICPHKIHHC = System_String__Concat(StringLiteral_1377,FAICPHKIHHC,(MethodInfo *)0x0);
      }
      pSVar4 = System_String__Concat(StringLiteral_10832,FAICPHKIHHC,(MethodInfo *)0x0);
      if ((KKCBGIBKOCP_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(KKCBGIBKOCP_TypeInfo);
      }
      x = (UnityEngine_Object_o *)
          KKCBGIBKOCP__NECCNHODCAE(StringLiteral_14092,pSVar4,false,(MethodInfo *)0x0);
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
      }
      bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (!bVar1) {
        pSVar4 = System_String__Concat(StringLiteral_10829,FAICPHKIHHC,(MethodInfo *)0x0);
        return pSVar4;
      }
    }
  }
  return pSVar4;
}

