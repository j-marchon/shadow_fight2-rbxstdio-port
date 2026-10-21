// ADGIHFGIFHO$$CGNPHPDFKJG @ RVA 0x312C578

void ADGIHFGIFHO__CGNPHPDFKJG
               (ADGIHFGIFHO_o *__this,System_String_o *EBOHIPKPFDJ,HOOAAGABMBL_o *IKKAMAMLIKA,
               MethodInfo *method)

{
  bool bVar1;
  HOOAAGABMBL_o **ppHVar2;
  
  if ((DAT_0456669e & 1) == 0) {
    FUN_01bab630(&StringLiteral_10806);
    FUN_01bab630(&StringLiteral_10823);
    FUN_01bab630(&StringLiteral_10951);
    DAT_0456669e = 1;
  }
  bVar1 = System_String__op_Equality(EBOHIPKPFDJ,StringLiteral_10823,(MethodInfo *)0x0);
  if (bVar1) {
    if (IKKAMAMLIKA == (HOOAAGABMBL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = System_String__op_Equality
                      ((IKKAMAMLIKA->fields)._DKODBGOHKGH_k__BackingField,StringLiteral_10806,
                       (MethodInfo *)0x0);
    if (bVar1) {
      ppHVar2 = &(__this->fields).GFNKONPLPEB;
      (__this->fields).GFNKONPLPEB = IKKAMAMLIKA;
    }
    else {
      bVar1 = System_String__op_Equality
                        ((IKKAMAMLIKA->fields)._DKODBGOHKGH_k__BackingField,StringLiteral_10951,
                         (MethodInfo *)0x0);
      if (!bVar1) goto LAB_0322c63c;
      ppHVar2 = &(__this->fields).NOKHEGPHOHK;
      (__this->fields).NOKHEGPHOHK = IKKAMAMLIKA;
    }
    thunk_FUN_01c20e04(ppHVar2,IKKAMAMLIKA);
  }
LAB_0322c63c:
  PJKHAJKEHEL__CGNPHPDFKJG((PJKHAJKEHEL_o *)__this,EBOHIPKPFDJ,IKKAMAMLIKA,(MethodInfo *)0x0);
  return;
}

