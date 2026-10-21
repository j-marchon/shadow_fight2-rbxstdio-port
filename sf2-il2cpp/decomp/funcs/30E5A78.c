// Nekki.SF2.Core.InputControllers.GamePadController$$remove_OnDeviceConnected @ RVA 0x30E5A78

void Nekki_SF2_Core_InputControllers_GamePadController__remove_OnDeviceConnected
               (Nekki_SF2_Core_InputControllers_GamePadController_o *__this,
               COOJKPHHMCD_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  COOJKPHHMCD_o *pCVar3;
  COOJKPHHMCD_o **ppCVar4;
  COOJKPHHMCD_o *source;
  
                    /* try { // try from 031e5a7c to 032e5aa7 has its CatchHandler @ 031e5bfc */
  if ((DAT_045663da & 1) == 0) {
    FUN_01bab630(&COOJKPHHMCD_TypeInfo);
    DAT_045663da = 1;
  }
                    /* try { // try from 031e5aac to 032e5ab3 has its CatchHandler @ 031e5bf0 */
  ppCVar4 = &(__this->fields).MLFHDGPOAMN;
  source = *ppCVar4;
  while ((pSVar2 = System_Delegate__Remove
                             ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                              (MethodInfo *)0x0), pSVar2 == (System_Delegate_o *)0x0 ||
         ((COOJKPHHMCD_c *)pSVar2->klass == COOJKPHHMCD_TypeInfo))) {
                    /* try { // try from 031e5ae8 to 032e5b13 has its CatchHandler @ 031e5bec */
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

