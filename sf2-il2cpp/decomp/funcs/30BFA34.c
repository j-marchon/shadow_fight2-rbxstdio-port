// Nekki.SF2.Core.ApplicationController$$ClearTextureCache @ RVA 0x30BFA34

void Nekki_SF2_Core_ApplicationController__ClearTextureCache(MethodInfo *method)

{
  BCAEBMNHBAN_o *__this;
  
  if ((DAT_0456626f & 1) == 0) {
    FUN_01bab630(&AMHFFFODDOC_TypeInfo);
    FUN_01bab630(&EEMAEBIOIKM_TypeInfo);
    FUN_01bab630(&NGCBNMBJMOE_TypeInfo);
    DAT_0456626f = 1;
  }
  if ((AMHFFFODDOC_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  AMHFFFODDOC__NDNPGAKJLHM((MethodInfo *)0x0);
  if ((NGCBNMBJMOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  NGCBNMBJMOE__NDNPGAKJLHM((MethodInfo *)0x0);
  if ((EEMAEBIOIKM_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  EEMAEBIOIKM__NDNPGAKJLHM((MethodInfo *)0x0);
  __this = BCAEBMNHBAN__AIHNLLGNBLC((MethodInfo *)0x0);
  if (__this != (BCAEBMNHBAN_o *)0x0) {
    BCAEBMNHBAN__NDNPGAKJLHM(__this,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

