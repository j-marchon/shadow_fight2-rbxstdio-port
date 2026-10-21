// KOKJOMBFNCD$$BIGBBPBIECF @ RVA 0x319E29C

void KOKJOMBFNCD__BIGBBPBIECF(UnityEngine_Application_LogCallback_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  UnityEngine_Application_LogCallback_o *pUVar3;
  MethodInfo *extraout_x1;
  UnityEngine_Application_LogCallback_o *source;
  
  if ((DAT_04566ac8 & 1) == 0) {
    FUN_01bab630(&KOKJOMBFNCD_TypeInfo);
    FUN_01bab630(&UnityEngine_Application_LogCallback_TypeInfo);
    DAT_04566ac8 = 1;
    method = extraout_x1;
  }
  if ((KOKJOMBFNCD_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(KOKJOMBFNCD_TypeInfo,method);
  }
  source = KOKJOMBFNCD_TypeInfo->static_fields->LBHLJBEDMMP;
  do {
    pSVar2 = System_Delegate__Remove
                       ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                        (MethodInfo *)0x0);
    if (pSVar2 != (System_Delegate_o *)0x0) {
      if ((UnityEngine_Application_LogCallback_c *)pSVar2->klass !=
          UnityEngine_Application_LogCallback_TypeInfo) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar2);
      }
    }
    if ((KOKJOMBFNCD_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pUVar3 = (UnityEngine_Application_LogCallback_o *)
             FUN_01c07368(KOKJOMBFNCD_TypeInfo->static_fields,pSVar2,source);
    bVar1 = source != pUVar3;
    source = pUVar3;
  } while (bVar1);
  return;
}

