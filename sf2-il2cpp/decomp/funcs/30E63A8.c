// Nekki.SF2.Core.InputControllers.GamePadController$$remove_OnKeyDown @ RVA 0x30E63A8

void Nekki_SF2_Core_InputControllers_GamePadController__remove_OnKeyDown
               (Nekki_SF2_Core_InputControllers_GamePadController_o *__this,
               CKOFPNFDDAB_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  CKOFPNFDDAB_o *pCVar3;
  CKOFPNFDDAB_o **ppCVar4;
  CKOFPNFDDAB_o *source;
  
  if ((DAT_045663e4 & 1) == 0) {
    FUN_01bab630(&CKOFPNFDDAB_TypeInfo);
    DAT_045663e4 = 1;
  }
  ppCVar4 = &(__this->fields).AEKEGMAOOHO;
  source = *ppCVar4;
  while ((pSVar2 = System_Delegate__Remove
                             ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                              (MethodInfo *)0x0), pSVar2 == (System_Delegate_o *)0x0 ||
         ((CKOFPNFDDAB_c *)pSVar2->klass == CKOFPNFDDAB_TypeInfo))) {
    pCVar3 = (CKOFPNFDDAB_o *)FUN_01c07368(ppCVar4,pSVar2,source);
    bVar1 = source == pCVar3;
    source = pCVar3;
    if (bVar1) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01babc64(pSVar2);
}

