// Nekki.SF2.Core.InputControllers.GamePadController$$add_OnDeviceStyleChanged @ RVA 0x30E64B8

void Nekki_SF2_Core_InputControllers_GamePadController__add_OnDeviceStyleChanged
               (Nekki_SF2_Core_InputControllers_GamePadController_o *__this,
               COOJKPHHMCD_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  COOJKPHHMCD_o *pCVar3;
  COOJKPHHMCD_o **ppCVar4;
  COOJKPHHMCD_o *a;
  
  if ((DAT_045663e6 & 1) == 0) {
    FUN_01bab630(&COOJKPHHMCD_TypeInfo);
    DAT_045663e6 = 1;
  }
  ppCVar4 = &(__this->fields).MNOACHLDOPH;
  a = *ppCVar4;
  while ((pSVar2 = System_Delegate__Combine
                             ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,
                              (MethodInfo *)0x0), pSVar2 == (System_Delegate_o *)0x0 ||
         ((COOJKPHHMCD_c *)pSVar2->klass == COOJKPHHMCD_TypeInfo))) {
    pCVar3 = (COOJKPHHMCD_o *)FUN_01c07368(ppCVar4,pSVar2,a);
    bVar1 = a == pCVar3;
    a = pCVar3;
    if (bVar1) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01babc64(pSVar2);
}

