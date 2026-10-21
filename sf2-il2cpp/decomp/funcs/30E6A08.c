// Nekki.SF2.Core.InputControllers.GamePadController$$remove_OnDevicePartDisconnected @ RVA 0x30E6A08

void Nekki_SF2_Core_InputControllers_GamePadController__remove_OnDevicePartDisconnected
               (Nekki_SF2_Core_InputControllers_GamePadController_o *__this,
               COOJKPHHMCD_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  COOJKPHHMCD_o *pCVar3;
  COOJKPHHMCD_o **ppCVar4;
  COOJKPHHMCD_o *source;
  
  if ((DAT_045663ee & 1) == 0) {
    FUN_01bab630(&COOJKPHHMCD_TypeInfo);
    DAT_045663ee = 1;
  }
  ppCVar4 = &(__this->fields).CFKGBKBACLK;
  source = *ppCVar4;
  while ((pSVar2 = System_Delegate__Remove
                             ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                              (MethodInfo *)0x0), pSVar2 == (System_Delegate_o *)0x0 ||
         ((COOJKPHHMCD_c *)pSVar2->klass == COOJKPHHMCD_TypeInfo))) {
    pCVar3 = (COOJKPHHMCD_o *)FUN_01c07368(ppCVar4,pSVar2,source);
    bVar1 = source == pCVar3;
    source = pCVar3;
    if (bVar1) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01babc64(pSVar2);
}

