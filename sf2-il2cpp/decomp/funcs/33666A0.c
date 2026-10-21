// CJFBGEEIPBA$$INMBMELGIBH @ RVA 0x33666A0

void CJFBGEEIPBA__INMBMELGIBH(CJFBGEEIPBA_o *__this,KEFHDOHHHML_o *IDCGLBOIAFJ,MethodInfo *method)

{
  if ((DAT_04567abd & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&StringLiteral_17047);
    DAT_04567abd = 1;
  }
  if (IDCGLBOIAFJ != (KEFHDOHHHML_o *)0x0) {
    CJFBGEEIPBA__CBJDFGLCFBN(__this,IDCGLBOIAFJ,method);
    return;
  }
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  UnityEngine_Debug__LogError(StringLiteral_17047,(MethodInfo *)0x0);
  return;
}

