// DEKKGJNMFEB$$.cctor @ RVA 0x322D2FC

void DEKKGJNMFEB___cctor(MethodInfo *method)

{
  System_Action_IGFGDDANEPE__o *pSVar1;
  
  if ((DAT_04566fb8 & 1) == 0) {
    FUN_01bab630(&System_Action<IGFGDDANEPE>_TypeInfo);
    FUN_01bab630(&DEKKGJNMFEB_TypeInfo);
    FUN_01bab630(&Method_DEKKGJNMFEB_<>c_GDNCHMNHBHE__);
    FUN_01bab630(&DEKKGJNMFEB_<>c_TypeInfo);
    DAT_04566fb8 = 1;
  }
  if ((DEKKGJNMFEB_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar1 = (System_Action_IGFGDDANEPE__o *)thunk_FUN_01bda818(System_Action<IGFGDDANEPE>_TypeInfo);
  System_Action<object>___ctor();
  DEKKGJNMFEB_TypeInfo->static_fields->BNKPDJFNJKP = pSVar1;
  thunk_FUN_01c20e04(DEKKGJNMFEB_TypeInfo->static_fields,pSVar1);
  return;
}

