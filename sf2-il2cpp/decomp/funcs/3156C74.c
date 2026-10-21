// MGICPMNIAMM.FIAFELGJBBD$$MNAABHNFFGN @ RVA 0x3156C74

int32_t MGICPMNIAMM_FIAFELGJBBD__MNAABHNFFGN
                  (MGICPMNIAMM_FIAFELGJBBD_o *__this,int32_t CKCOLJLFJDB,int32_t DEDNHOELFOD,
                  MethodInfo *method)

{
  int iVar1;
  int iVar2;
  int iVar3;
  System_Random_o *pSVar4;
  
  if ((DAT_04566845 & 1) == 0) {
    FUN_01bab630(&MGICPMNIAMM_TypeInfo);
    DAT_04566845 = 1;
  }
  if ((MGICPMNIAMM_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar4 = MGICPMNIAMM_TypeInfo->static_fields->NBAAKDGJIEI;
  if (pSVar4 != (System_Random_o *)0x0) {
    iVar3 = (*(pSVar4->klass->vtable)._5_Next.methodPtr)
                      (pSVar4,(pSVar4->klass->vtable)._5_Next.method);
    iVar2 = DEDNHOELFOD - CKCOLJLFJDB;
    iVar1 = 0;
    if (iVar2 != 0) {
      iVar1 = iVar3 / iVar2;
    }
    return (iVar3 - iVar1 * iVar2) + CKCOLJLFJDB;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

