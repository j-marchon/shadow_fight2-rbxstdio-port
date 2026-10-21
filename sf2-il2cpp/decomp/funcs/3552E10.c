// MGAKCABPDII$$OFPHPMGMCAL @ RVA 0x3552E10

System_String_o * MGAKCABPDII__OFPHPMGMCAL(MGAKCABPDII_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  float in_s0;
  
  if ((DAT_04568b4d & 1) == 0) {
    in_s0 = (float)FUN_01bab630(&StringLiteral_14698);
    DAT_04568b4d = 1;
  }
  pSVar1 = System_Single__ToString(in_s0,(MethodInfo *)&(__this->fields).super.field_0x54);
  pSVar1 = System_String__Concat(StringLiteral_14698,pSVar1,(MethodInfo *)0x0);
  return pSVar1;
}

