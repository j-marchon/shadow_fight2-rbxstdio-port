// MGNPHCAAEIO$$MBDLAPMPMBC @ RVA 0x33FC1B8

void MGNPHCAAEIO__MBDLAPMPMBC(System_Action_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  MethodInfo *extraout_x1;
  System_Action_o *a;
  
  if ((DAT_04567fc2 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_04567fc2 = 1;
    method = extraout_x1;
  }
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo,method);
  }
  a = MGNPHCAAEIO_TypeInfo->static_fields->EEHHDNEENIJ;
  do {
    pSVar2 = System_Delegate__Combine
                       ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,(MethodInfo *)0x0);
    if (pSVar2 != (System_Delegate_o *)0x0) {
      if ((System_Action_c *)pSVar2->klass != System_Action_TypeInfo) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar2);
      }
    }
    if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar3 = (System_Action_o *)
             FUN_01c07368(&MGNPHCAAEIO_TypeInfo->static_fields->EEHHDNEENIJ,pSVar2,a);
    bVar1 = a != pSVar3;
    a = pSVar3;
  } while (bVar1);
  return;
}

