// MGICPMNIAMM.FIAFELGJBBD$$EGKKFAEHGIB @ RVA 0x3156BE0

bool MGICPMNIAMM_FIAFELGJBBD__EGKKFAEHGIB(MGICPMNIAMM_FIAFELGJBBD_o *__this,MethodInfo *method)

{
  int iVar1;
  System_Random_o *pSVar2;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566844 & 1) == 0) {
    FUN_01bab630(&MGICPMNIAMM_TypeInfo);
    DAT_04566844 = 1;
    method = extraout_x1;
  }
  if ((MGICPMNIAMM_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MGICPMNIAMM_TypeInfo,method);
  }
  pSVar2 = MGICPMNIAMM_TypeInfo->static_fields->NBAAKDGJIEI;
  if (pSVar2 != (System_Random_o *)0x0) {
    iVar1 = (*(pSVar2->klass->vtable)._5_Next.methodPtr)
                      (pSVar2,(pSVar2->klass->vtable)._5_Next.method);
    return 0x32 < iVar1 % 100;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

