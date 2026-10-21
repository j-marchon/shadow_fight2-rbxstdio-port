// ECENNHNBAME$$ToString @ RVA 0x30183AC

System_String_o * ECENNHNBAME__ToString(ECENNHNBAME_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if ((DAT_04565be0 & 1) == 0) {
    FUN_01bab630(&StringLiteral_7504);
    DAT_04565be0 = 1;
  }
  pSVar1 = System_String__Concat(StringLiteral_7504,(__this->fields).JIJLBFGKNJK,(MethodInfo *)0x0);
  return pSVar1;
}

