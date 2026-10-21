// ACHLOMELAJE$$LPFCJFIHKLG @ RVA 0x30595A8

void ACHLOMELAJE__LPFCJFIHKLG(ACHLOMELAJE_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_04565e76 & 1) == 0) {
    FUN_01bab630(&StringLiteral_4956);
    DAT_04565e76 = 1;
  }
  bVar1 = System_String__op_Equality((__this->fields).CAJCGACFIHD,CJNHFNHJHPE,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  (__this->fields).CAJCGACFIHD = CJNHFNHJHPE;
  thunk_FUN_01c20e04(&(__this->fields).CAJCGACFIHD,CJNHFNHJHPE);
  KIHIPAJGNBF__MLDEHFFGJDP
            ((KIHIPAJGNBF_o *)__this,StringLiteral_4956,(__this->fields).CAJCGACFIHD,
             (MethodInfo *)0x0);
  return;
}

