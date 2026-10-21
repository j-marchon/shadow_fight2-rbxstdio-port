// DBIINAFCKME$$.ctor @ RVA 0x31BADA4

void DBIINAFCKME___ctor(DBIINAFCKME_o *__this,MethodInfo *method)

{
  MethodInfo *method_00;
  System_String_o **ppSVar1;
  
  if ((DAT_04566bdc & 1) == 0) {
    FUN_01bab630(&CIOBNDOOGIM_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&string_TypeInfo);
    FUN_01bab630(&StringLiteral_7525);
    FUN_01bab630(&StringLiteral_1);
    DAT_04566bdc = 1;
  }
  (__this->fields).MIGGLEOLMPE = StringLiteral_1;
  thunk_FUN_01c20e04();
  (__this->fields).KFACILDAOFB = string_TypeInfo->static_fields->Empty;
  thunk_FUN_01c20e04();
  (__this->fields).FONAMAFAAGN = string_TypeInfo->static_fields->Empty;
  thunk_FUN_01c20e04();
  (__this->fields).MDJHHDCLEJA = StringLiteral_1;
  thunk_FUN_01c20e04();
  ppSVar1 = &(__this->fields).GIENMHHFCNE;
  *ppSVar1 = StringLiteral_1;
  thunk_FUN_01c20e04(ppSVar1);
  (__this->fields).NFLCPBJPAML = -1;
  if ((CIOBNDOOGIM_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  CIOBNDOOGIM___ctor((CIOBNDOOGIM_o *)__this,(MethodInfo *)0x0);
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  UnityEngine_Debug__Log(StringLiteral_7525,(MethodInfo *)0x0);
  DBIINAFCKME__ALNBOKFNFFK(__this,method_00);
  return;
}

