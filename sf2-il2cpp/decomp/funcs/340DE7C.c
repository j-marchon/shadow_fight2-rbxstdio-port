// MGNPHCAAEIO$$GEEAHPIDNFO @ RVA 0x340DE7C

void MGNPHCAAEIO__GEEAHPIDNFO(System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  MGNPHCAAEIO_StaticFields *pMVar1;
  
  if ((DAT_04568057 & 1) == 0) {
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_04568057 = 1;
    method = extraout_x1;
  }
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo,method);
  }
  pMVar1 = MGNPHCAAEIO_TypeInfo->static_fields;
  pMVar1->HJGJPNIFHFC = CJNHFNHJHPE;
  thunk_FUN_01c20e04(&pMVar1->HJGJPNIFHFC,CJNHFNHJHPE);
  return;
}

