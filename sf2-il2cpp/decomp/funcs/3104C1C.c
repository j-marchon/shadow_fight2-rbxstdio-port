// MGENAMAJALB$$OAFGPIANJPJ @ RVA 0x3104C1C

void MGENAMAJALB__OAFGPIANJPJ(MethodInfo *method)

{
  bool bVar1;
  MGENAMAJALB_c *pMVar2;
  System_String_o *pSVar3;
  
  if ((DAT_045664ed & 1) == 0) {
    FUN_01bab630(&MGENAMAJALB_TypeInfo);
    DAT_045664ed = 1;
  }
  pMVar2 = MGENAMAJALB_TypeInfo;
  if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
    pMVar2 = (MGENAMAJALB_c *)thunk_FUN_01ba7564();
  }
  pSVar3 = MGENAMAJALB__JKLFLNNFEMP((MethodInfo *)pMVar2);
  bVar1 = System_IO_Directory__Exists(pSVar3,(MethodInfo *)0x0);
  if (bVar1) {
    pMVar2 = MGENAMAJALB_TypeInfo;
    if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
      pMVar2 = (MGENAMAJALB_c *)thunk_FUN_01ba7564();
    }
    pSVar3 = MGENAMAJALB__JKLFLNNFEMP((MethodInfo *)pMVar2);
    NEHNBJKKABI__IIOJEPFDGLE(pSVar3,true,(MethodInfo *)0x0);
  }
  pMVar2 = MGENAMAJALB_TypeInfo;
  if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
    pMVar2 = (MGENAMAJALB_c *)thunk_FUN_01ba7564();
  }
  pSVar3 = MGENAMAJALB__JKLFLNNFEMP((MethodInfo *)pMVar2);
  NEHNBJKKABI__GLNBJGJPBFD(pSVar3,(MethodInfo *)0x0);
  return;
}

