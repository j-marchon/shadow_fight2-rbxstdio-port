// HJNDPNIMBBG$$HEOBDIBNECE @ RVA 0x35C5624

UnityEngine_Sprite_o * HJNDPNIMBBG__HEOBDIBNECE(HJNDPNIMBBG_o *__this,MethodInfo *method)

{
  HJNDPNIMBBG_Fields *pHVar1;
  bool bVar2;
  bool bVar3;
  UnityEngine_Object_o *exists;
  UnityEngine_Sprite_o *pUVar4;
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  if ((DAT_04568f60 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_17862);
    DAT_04568f60 = 1;
  }
  bVar2 = PCOEHCPGBBG__EDHHJAMCOJH((__this->fields).NAAMEIBLICP,(MethodInfo *)0x0);
  pHVar1 = (HJNDPNIMBBG_Fields *)&StringLiteral_17862;
  if (!bVar2) {
    pHVar1 = &__this->fields;
  }
  exists = (UnityEngine_Object_o *)HJNDPNIMBBG__PJJJCGCPIBD(pHVar1->NAAMEIBLICP,method_00);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  bVar3 = UnityEngine_Object__op_Implicit(exists,(MethodInfo *)0x0);
  if (bVar2 || bVar3) {
    return (UnityEngine_Sprite_o *)exists;
  }
  pUVar4 = HJNDPNIMBBG__PJJJCGCPIBD(StringLiteral_17862,method_01);
  return pUVar4;
}

