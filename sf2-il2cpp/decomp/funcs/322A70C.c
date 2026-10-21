// OPGMEHFEJJJ$$IDCNCEELNDB @ RVA 0x322A70C

OPNMPAJKDMI_o *
OPGMEHFEJJJ__IDCNCEELNDB(OPGMEHFEJJJ_o *__this,HOOAAGABMBL_o *IKKAMAMLIKA,MethodInfo *method)

{
  ACHLOMELAJE_o *pAVar1;
  NCNJEIBHGBH_o *pNVar2;
  bool bVar3;
  OPNMPAJKDMI_o *__this_00;
  System_String_o *a;
  
  if ((DAT_04566f96 & 1) == 0) {
    FUN_01bab630(&LMPGMKLOHAH_TypeInfo);
    FUN_01bab630(&OPNMPAJKDMI_TypeInfo);
    FUN_01bab630(&StringLiteral_9797);
    FUN_01bab630(&StringLiteral_5054);
    DAT_04566f96 = 1;
  }
  if (IKKAMAMLIKA == (HOOAAGABMBL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  a = (IKKAMAMLIKA->fields)._DKODBGOHKGH_k__BackingField;
  bVar3 = System_String__op_Equality(a,StringLiteral_9797,(MethodInfo *)0x0);
  if (bVar3) {
    pAVar1 = (__this->fields).OKNKKHGBECG;
    pNVar2 = (__this->fields).FJCGMNIMGCD;
    __this_00 = (OPNMPAJKDMI_o *)thunk_FUN_01bda818(OPNMPAJKDMI_TypeInfo);
    OPNMPAJKDMI___ctor(__this_00,IKKAMAMLIKA,pAVar1,pNVar2,(MethodInfo *)0x0);
  }
  else {
                    /* try { // try from 0332a7c8 to 0342a977 has its CatchHandler @ 0332a7c8
                       catch() { ... } // from try @ 0332a7c8 with catch @ 0332a7c8
                       catch() { ... } // from try @ 0332a9b8 with catch @ 0332a7c8
                       catch() { ... } // from try @ 0332abb4 with catch @ 0332a7c8
                       catch() { ... } // from try @ 0332acb8 with catch @ 0332a7c8
                       catch() { ... } // from try @ 0332ad04 with catch @ 0332a7c8
                       catch() { ... } // from try @ 0332ad10 with catch @ 0332a7c8
                       catch() { ... } // from try @ 0332ad38 with catch @ 0332a7c8
                       catch() { ... } // from try @ 0332ad84 with catch @ 0332a7c8
                       catch() { ... } // from try @ 0332adac with catch @ 0332a7c8
                       catch() { ... } // from try @ 0332adf8 with catch @ 0332a7c8
                       catch() { ... } // from try @ 0332ae18 with catch @ 0332a7c8
                       catch() { ... } // from try @ 0332ae58 with catch @ 0332a7c8 */
    bVar3 = System_String__op_Equality(a,StringLiteral_5054,(MethodInfo *)0x0);
    __this_00 = (OPNMPAJKDMI_o *)0x0;
    if (bVar3) {
      pAVar1 = (__this->fields).OKNKKHGBECG;
      pNVar2 = (__this->fields).FJCGMNIMGCD;
      __this_00 = (OPNMPAJKDMI_o *)thunk_FUN_01bda818(LMPGMKLOHAH_TypeInfo);
      LMPGMKLOHAH___ctor((LMPGMKLOHAH_o *)__this_00,IKKAMAMLIKA,pAVar1,pNVar2,(MethodInfo *)0x0);
    }
  }
  return __this_00;
}

