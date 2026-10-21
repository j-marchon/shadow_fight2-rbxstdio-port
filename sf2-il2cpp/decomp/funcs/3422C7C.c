// HEFOANCOHDC$$ToString @ RVA 0x3422C7C

System_String_o * HEFOANCOHDC__ToString(HEFOANCOHDC_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o *str0;
  
  if ((DAT_045680eb & 1) == 0) {
    FUN_01bab630(&StringLiteral_167);
    DAT_045680eb = 1;
  }
  str0 = (__this->fields).JIJLBFGKNJK;
  pSVar1 = System_Object__ToString((Il2CppObject *)__this,(MethodInfo *)0x0);
  pSVar1 = System_String__Concat(str0,StringLiteral_167,pSVar1,(MethodInfo *)0x0);
  return pSVar1;
}

