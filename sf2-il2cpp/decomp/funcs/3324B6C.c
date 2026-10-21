// KHLHAPCOFLB.<>c$$PEPDMAABEEK @ RVA 0x3324B6C

void KHLHAPCOFLB_<>c__PEPDMAABEEK
               (KHLHAPCOFLB___c_o *__this,System_Action_bool__o *h,MethodInfo *method)

{
  System_Action_bool__c *pSVar1;
  System_Delegate_o *pSVar2;
  System_Action_bool__o *pSVar3;
  long lVar4;
  NHJCFGACFDF_StaticFields *pNVar5;
  
  if ((DAT_04567868 & 1) == 0) {
    FUN_01bab630(&System_Action<bool>_TypeInfo);
    FUN_01bab630(&NHJCFGACFDF_TypeInfo);
    DAT_04567868 = 1;
  }
  if ((NHJCFGACFDF_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar2 = System_Delegate__Combine
                     ((System_Delegate_o *)NHJCFGACFDF_TypeInfo->static_fields->FFHKBMDDKBI,
                      (System_Delegate_o *)h,(MethodInfo *)0x0);
  pSVar1 = System_Action<bool>_TypeInfo;
  pSVar3 = (System_Action_bool__o *)0x0;
  if (pSVar2 != (System_Delegate_o *)0x0) {
    pSVar3 = (System_Action_bool__o *)thunk_FUN_01bda71c(pSVar2,System_Action<bool>_TypeInfo);
    if (pSVar3 == (System_Action_bool__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(pSVar2,pSVar1);
    }
  }
  NHJCFGACFDF_TypeInfo->static_fields->FFHKBMDDKBI = pSVar3;
  pSVar1 = System_Action<bool>_TypeInfo;
  pNVar5 = NHJCFGACFDF_TypeInfo->static_fields;
  if (pSVar2 == (System_Delegate_o *)0x0) {
    lVar4 = 0;
  }
  else {
    lVar4 = thunk_FUN_01bda71c(pSVar2,System_Action<bool>_TypeInfo);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(pSVar2,pSVar1);
    }
  }
  thunk_FUN_01c20e04(pNVar5,lVar4);
  return;
}

