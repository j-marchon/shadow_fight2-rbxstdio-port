// OGFKOHEPEAK$$DNPCNMPIODJ @ RVA 0x34FA6E8

void OGFKOHEPEAK__DNPCNMPIODJ
               (System_Decimal_o *__return_storage_ptr__,OGFKOHEPEAK_o *__this,MethodInfo *method)

{
  uint uVar1;
  float value;
  bool bVar2;
  MethodInfo *in_x2;
  System_Decimal_o *__return_storage_ptr___00;
  System_Decimal_o *extraout_x8;
  float local_24;
  
  if ((DAT_0456881b & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&System_Decimal_TypeInfo);
    FUN_01bab630(&StringLiteral_11365);
    DAT_0456881b = 1;
  }
  local_24 = 0.0;
  bVar2 = OGFKOHEPEAK__MJBCKGHJLMK(__this,&local_24,in_x2);
  value = local_24;
  if (bVar2) {
    uVar1 = (System_Decimal_TypeInfo->_2).cctor_finished;
    __return_storage_ptr___00 = (System_Decimal_o *)(ulong)uVar1;
    if (uVar1 == 0) {
      thunk_FUN_01ba7564();
      __return_storage_ptr___00 = extraout_x8;
    }
    System_Decimal__op_Explicit(__return_storage_ptr___00,value,(MethodInfo *)0x0);
  }
  else {
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__LogError(StringLiteral_11365,(MethodInfo *)0x0);
    if ((System_Decimal_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
  }
  return;
}

