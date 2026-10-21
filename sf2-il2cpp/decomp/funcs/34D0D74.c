// BBBBKBBFNOG$$GIENGNEGHPJ @ RVA 0x34D0D74

void BBBBKBBFNOG__GIENGNEGHPJ(MethodInfo *method)

{
  BBBBKBBFNOG_c *method_00;
  System_Action_bool__o *pSVar1;
  
  if ((DAT_045686b1 & 1) == 0) {
    FUN_01bab630(&System_Action<bool>_TypeInfo);
    FUN_01bab630(&Method_BBBBKBBFNOG_PDDBOJJODKK__);
    FUN_01bab630(&BBBBKBBFNOG_TypeInfo);
    DAT_045686b1 = 1;
  }
  method_00 = BBBBKBBFNOG_TypeInfo;
  if ((BBBBKBBFNOG_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (BBBBKBBFNOG_c *)thunk_FUN_01ba7564();
  }
  BBBBKBBFNOG__NDNPGAKJLHM((MethodInfo *)method_00);
  pSVar1 = (System_Action_bool__o *)thunk_FUN_01bda818(System_Action<bool>_TypeInfo);
  System_Action<bool>___ctor();
  Nekki_SF2_Core_ApplicationController__remove_OnPause(pSVar1,(MethodInfo *)0x0);
  pSVar1 = (System_Action_bool__o *)thunk_FUN_01bda818(System_Action<bool>_TypeInfo);
  System_Action<bool>___ctor();
  Nekki_SF2_Core_ApplicationController__add_OnPause(pSVar1,(MethodInfo *)0x0);
  return;
}

