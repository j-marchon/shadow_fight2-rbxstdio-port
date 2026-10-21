// ACHLOMELAJE$$KCKPAFCFAMP @ RVA 0x306167C

System_String_o * ACHLOMELAJE__KCKPAFCFAMP(ACHLOMELAJE_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_String_o *CJNHFNHJHPE;
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  if ((DAT_04565ecd & 1) == 0) {
    FUN_01bab630(&StringLiteral_1);
    DAT_04565ecd = 1;
  }
  method_01 = (MethodInfo *)0x0;
  bVar1 = System_String__op_Equality((__this->fields).CAJCGACFIHD,StringLiteral_1,(MethodInfo *)0x0)
  ;
  if (bVar1) {
    CJNHFNHJHPE = ACHLOMELAJE__OGGMOAFJDIL(__this,method_00);
    ACHLOMELAJE__LPFCJFIHKLG(__this,CJNHFNHJHPE,method_01);
  }
  return (__this->fields).CAJCGACFIHD;
}

