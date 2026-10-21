// AKOMJPINHEN$$PMBDGIJIIDD @ RVA 0x308F6DC

void AKOMJPINHEN__PMBDGIJIIDD(AKOMJPINHEN_o *__this,KEFHDOHHHML_o *IDCGLBOIAFJ,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_0456608a & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&StringLiteral_4285);
    DAT_0456608a = 1;
  }
  if ((IDCGLBOIAFJ != (KEFHDOHHHML_o *)0x0) &&
     (bVar1 = KEFHDOHHHML__BOJJBGPIKDP(IDCGLBOIAFJ,(MethodInfo *)0x0), bVar1)) {
    return;
  }
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  UnityEngine_Debug__LogError(StringLiteral_4285,(MethodInfo *)0x0);
  return;
}

