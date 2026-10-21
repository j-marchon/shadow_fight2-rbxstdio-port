// DLAFGNMCMFA$$EIFCLKFDOOI @ RVA 0x3521EB8

void DLAFGNMCMFA__EIFCLKFDOOI(MGNDHCBAPEN_int__int__o *CJNHFNHJHPE,MethodInfo *method)

{
  MGNDHCBAPEN_int__int__o **ppMVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_045689cf & 1) == 0) {
    FUN_01bab630(&DLAFGNMCMFA_TypeInfo);
    DAT_045689cf = 1;
    method = extraout_x1;
  }
  if ((DLAFGNMCMFA_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(DLAFGNMCMFA_TypeInfo,method);
  }
  ppMVar1 = &DLAFGNMCMFA_TypeInfo->static_fields->_LNCAAMPFOII_k__BackingField;
  *ppMVar1 = CJNHFNHJHPE;
  thunk_FUN_01c20e04(ppMVar1,CJNHFNHJHPE);
  return;
}

