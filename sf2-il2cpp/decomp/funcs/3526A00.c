// OBOBEOMMECI$$IJEKBANNOMC @ RVA 0x3526A00

void OBOBEOMMECI__IJEKBANNOMC(OBOBEOMMECI_o *__this,System_String_o *GKKCICEBFMO,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_04568a01 & 1) == 0) {
    FUN_01bab630(&StringLiteral_6107);
    FUN_01bab630(&StringLiteral_8464);
    DAT_04568a01 = 1;
  }
  bVar1 = System_String__op_Equality(GKKCICEBFMO,StringLiteral_8464,(MethodInfo *)0x0);
  if ((bVar1) ||
     (bVar1 = System_String__op_Equality(GKKCICEBFMO,StringLiteral_6107,(MethodInfo *)0x0), !bVar1))
  {
    (__this->fields).LCOEMLDCACG = 1;
  }
  else {
    (__this->fields).LCOEMLDCACG = 0;
  }
  return;
}

