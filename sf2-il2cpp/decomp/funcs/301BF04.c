// GGAFBEMCEIN$$GIENGNEGHPJ @ RVA 0x301BF04

void GGAFBEMCEIN__GIENGNEGHPJ
               (GGAFBEMCEIN_o *__this,System_Action_IAchievement____o *BFDGGFADBEN,
               MethodInfo *method)

{
  System_Delegate_o *pSVar1;
  long lVar2;
  System_Action_IAchievement____o *pSVar3;
  System_Action_IAchievement____o **ppSVar4;
  System_Action_IAchievement____c *pSVar5;
  
  if ((DAT_04565c15 & 1) == 0) {
    FUN_01bab630(&System_Action<IAchievement[]>_TypeInfo);
    FUN_01bab630(&Method_GGAFBEMCEIN_LAINOIECIHC__);
    FUN_01bab630(&NHJCFGACFDF_TypeInfo);
    DAT_04565c15 = 1;
  }
  ppSVar4 = &(__this->fields).GJOMPCOHOJP;
  *ppSVar4 = BFDGGFADBEN;
  thunk_FUN_01c20e04(ppSVar4,BFDGGFADBEN);
  if ((NHJCFGACFDF_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar3 = NHJCFGACFDF_TypeInfo->static_fields->LAINOIECIHC;
  pSVar1 = (System_Delegate_o *)thunk_FUN_01bda818(System_Action<IAchievement[]>_TypeInfo);
  System_Action<object>___ctor();
  pSVar1 = System_Delegate__Remove((System_Delegate_o *)pSVar3,pSVar1,(MethodInfo *)0x0);
  pSVar5 = System_Action<IAchievement[]>_TypeInfo;
  if (pSVar1 == (System_Delegate_o *)0x0) {
    lVar2 = 0;
    ppSVar4 = &NHJCFGACFDF_TypeInfo->static_fields->LAINOIECIHC;
    *ppSVar4 = (System_Action_IAchievement____o *)0x0;
  }
  else {
                    /* try { // try from 0311bfd0 to 0321bff7 has its CatchHandler @ 0311c398 */
    pSVar3 = (System_Action_IAchievement____o *)
             thunk_FUN_01bda71c(pSVar1,System_Action<IAchievement[]>_TypeInfo);
    if (pSVar3 == (System_Action_IAchievement____o *)0x0) goto LAB_0311c0e0;
    ppSVar4 = &NHJCFGACFDF_TypeInfo->static_fields->LAINOIECIHC;
    *ppSVar4 = pSVar3;
    pSVar5 = System_Action<IAchievement[]>_TypeInfo;
    lVar2 = thunk_FUN_01bda71c(pSVar1,System_Action<IAchievement[]>_TypeInfo);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(pSVar1,pSVar5);
    }
  }
  thunk_FUN_01c20e04(ppSVar4,lVar2);
  pSVar3 = NHJCFGACFDF_TypeInfo->static_fields->LAINOIECIHC;
                    /* try { // try from 0311c02c to 0321c053 has its CatchHandler @ 0311c394 */
  pSVar1 = (System_Delegate_o *)thunk_FUN_01bda818(System_Action<IAchievement[]>_TypeInfo);
  System_Action<object>___ctor();
  pSVar1 = System_Delegate__Combine((System_Delegate_o *)pSVar3,pSVar1,(MethodInfo *)0x0);
  pSVar5 = System_Action<IAchievement[]>_TypeInfo;
  if (pSVar1 == (System_Delegate_o *)0x0) {
    lVar2 = 0;
    ppSVar4 = &NHJCFGACFDF_TypeInfo->static_fields->LAINOIECIHC;
    *ppSVar4 = (System_Action_IAchievement____o *)0x0;
  }
  else {
                    /* try { // try from 0311c05c to 0321c067 has its CatchHandler @ 0311c390 */
    pSVar3 = (System_Action_IAchievement____o *)
             thunk_FUN_01bda71c(pSVar1,System_Action<IAchievement[]>_TypeInfo);
    if (pSVar3 == (System_Action_IAchievement____o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(pSVar1,pSVar5);
    }
    ppSVar4 = &NHJCFGACFDF_TypeInfo->static_fields->LAINOIECIHC;
    *ppSVar4 = pSVar3;
    pSVar5 = System_Action<IAchievement[]>_TypeInfo;
                    /* try { // try from 0311c080 to 0321c083 has its CatchHandler @ 0311c364 */
                    /* try { // try from 0311c084 to 0321c093 has its CatchHandler @ 0311c38c */
    lVar2 = thunk_FUN_01bda71c(pSVar1,System_Action<IAchievement[]>_TypeInfo);
    if (lVar2 == 0) {
LAB_0311c0e0:
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(pSVar1,pSVar5);
    }
  }
                    /* try { // try from 0311c0a8 to 0321c0b3 has its CatchHandler @ 0311c374 */
  thunk_FUN_01c20e04(ppSVar4,lVar2);
  return;
}

