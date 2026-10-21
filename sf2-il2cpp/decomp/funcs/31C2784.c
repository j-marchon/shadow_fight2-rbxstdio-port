// ADJEBFOPFFF$$OOIAFADFKDI @ RVA 0x31C2784

void ADJEBFOPFFF__OOIAFADFKDI(ADJEBFOPFFF_o *__this,int32_t MNPKIDDPNBM,MethodInfo *method)

{
  MethodInfo *method_00;
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  
  method_00 = (MethodInfo *)(ulong)(uint)MNPKIDDPNBM;
  if ((DAT_04566c1f & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&StringLiteral_10940);
    FUN_01bab630(&StringLiteral_10939);
    auVar2 = FUN_01bab630(&StringLiteral_10938);
    method_00 = auVar2._8_8_;
    __this = auVar2._0_8_;
    DAT_04566c1f = 1;
  }
  switch(MNPKIDDPNBM) {
  case 1:
    ADJEBFOPFFF__FKMEBLPLHIM(__this,method_00);
    return;
  case 2:
  case 5:
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    puVar1 = &StringLiteral_10938;
    break;
  case 3:
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    puVar1 = &StringLiteral_10940;
    break;
  case 4:
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    puVar1 = &StringLiteral_10939;
    break;
  default:
    return;
  }
  UnityEngine_Debug__LogError((Il2CppObject *)*puVar1,(MethodInfo *)0x0);
  return;
}

