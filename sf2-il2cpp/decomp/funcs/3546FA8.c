// LEGDPJHPEOB$$ODJOCIIEDDE @ RVA 0x3546FA8

int64_t LEGDPJHPEOB__ODJOCIIEDDE
                  (LEGDPJHPEOB_o *__this,HOOAAGABMBL_o *IKKAMAMLIKA,MethodInfo *method)

{
  int64_t iVar1;
  
  if ((DAT_04568b17 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&StringLiteral_10684);
    DAT_04568b17 = 1;
  }
  if (IKKAMAMLIKA == (HOOAAGABMBL_o *)0x0) {
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__LogError(StringLiteral_10684,(MethodInfo *)0x0);
    iVar1 = 0x7fffffff;
  }
  else {
    iVar1 = (IKKAMAMLIKA->fields)._LAOFJOMPFDL_k__BackingField;
  }
  return iVar1;
}

