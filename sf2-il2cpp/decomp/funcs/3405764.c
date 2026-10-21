// MGNPHCAAEIO$$AHAAGBGJDGN @ RVA 0x3405764

void MGNPHCAAEIO__AHAAGBGJDGN
               (System_Action_MGNPHCAAEIO_LGLCMNNLHMI__ObscuredInt__o *CJNHFNHJHPE,
               MethodInfo *method)

{
  System_Action_MGNPHCAAEIO_LGLCMNNLHMI__ObscuredInt__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_MGNPHCAAEIO_LGLCMNNLHMI__ObscuredInt__o *pSVar5;
  MethodInfo *extraout_x1;
  System_Action_MGNPHCAAEIO_LGLCMNNLHMI__ObscuredInt__o *a;
  
  if ((DAT_04568015 & 1) == 0) {
    FUN_01bab630(&System_Action<MGNPHCAAEIO_LGLCMNNLHMI,_ObscuredInt>_TypeInfo);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_04568015 = 1;
    method = extraout_x1;
  }
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo,method);
  }
  a = MGNPHCAAEIO_TypeInfo->static_fields->FBNNBIBKJCG;
  do {
    pSVar3 = System_Delegate__Combine
                       ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,(MethodInfo *)0x0);
    pSVar1 = System_Action<MGNPHCAAEIO_LGLCMNNLHMI,_ObscuredInt>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<MGNPHCAAEIO_LGLCMNNLHMI,_ObscuredInt>_TypeInfo
                                );
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar5 = (System_Action_MGNPHCAAEIO_LGLCMNNLHMI__ObscuredInt__o *)
             FUN_01c07368(&MGNPHCAAEIO_TypeInfo->static_fields->FBNNBIBKJCG,lVar4,a);
    bVar2 = a != pSVar5;
    a = pSVar5;
  } while (bVar2);
  return;
}

