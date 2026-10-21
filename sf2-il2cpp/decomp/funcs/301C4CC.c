// GGAFBEMCEIN$$DGLJCGNHLIG @ RVA 0x301C4CC

void GGAFBEMCEIN__DGLJCGNHLIG(GGAFBEMCEIN_o *__this,MethodInfo *method)

{
  System_Delegate_o *pSVar1;
  long lVar2;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  System_Action_bool__o **ppSVar3;
  System_Action_IAchievement____o *pSVar4;
  System_Action_bool__o *pSVar5;
  System_Action_IAchievement____o **ppSVar6;
  NHJCFGACFDF_StaticFields *pNVar7;
  System_Action_IAchievement____c *pSVar8;
  
  if ((DAT_04565c19 & 1) == 0) {
    FUN_01bab630(&System_Action<bool>_TypeInfo);
    FUN_01bab630(&System_Action<IAchievement[]>_TypeInfo);
    FUN_01bab630(&Method_GGAFBEMCEIN_FFHKBMDDKBI__);
    FUN_01bab630(&Method_GGAFBEMCEIN_LAINOIECIHC__);
    FUN_01bab630(&NHJCFGACFDF_TypeInfo);
    DAT_04565c19 = 1;
    method = extraout_x1;
  }
  if ((NHJCFGACFDF_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NHJCFGACFDF_TypeInfo,method);
  }
  pSVar4 = NHJCFGACFDF_TypeInfo->static_fields->LAINOIECIHC;
  pSVar1 = (System_Delegate_o *)thunk_FUN_01bda818(System_Action<IAchievement[]>_TypeInfo);
  System_Action<object>___ctor();
  pSVar1 = System_Delegate__Remove((System_Delegate_o *)pSVar4,pSVar1,(MethodInfo *)0x0);
  pSVar8 = System_Action<IAchievement[]>_TypeInfo;
  if (pSVar1 == (System_Delegate_o *)0x0) {
    lVar2 = 0;
    ppSVar6 = &NHJCFGACFDF_TypeInfo->static_fields->LAINOIECIHC;
    *ppSVar6 = (System_Action_IAchievement____o *)0x0;
  }
  else {
    pSVar4 = (System_Action_IAchievement____o *)
             thunk_FUN_01bda71c(pSVar1,System_Action<IAchievement[]>_TypeInfo);
    if (pSVar4 == (System_Action_IAchievement____o *)0x0) goto LAB_0311c6cc;
    ppSVar6 = &NHJCFGACFDF_TypeInfo->static_fields->LAINOIECIHC;
    *ppSVar6 = pSVar4;
    pSVar8 = System_Action<IAchievement[]>_TypeInfo;
    lVar2 = thunk_FUN_01bda71c(pSVar1,System_Action<IAchievement[]>_TypeInfo);
    if (lVar2 == 0) goto LAB_0311c67c;
  }
                    /* try { // try from 0311c5ec to 0321c613 has its CatchHandler @ 0311ce0c */
  thunk_FUN_01c20e04(ppSVar6,lVar2);
  pSVar5 = NHJCFGACFDF_TypeInfo->static_fields->FFHKBMDDKBI;
  pSVar1 = (System_Delegate_o *)thunk_FUN_01bda818(System_Action<bool>_TypeInfo);
  System_Action<bool>___ctor();
  pSVar1 = System_Delegate__Remove((System_Delegate_o *)pSVar5,pSVar1,(MethodInfo *)0x0);
  pSVar8 = (System_Action_IAchievement____c *)System_Action<bool>_TypeInfo;
  pSVar5 = (System_Action_bool__o *)0x0;
                    /* try { // try from 0311c648 to 0321c66f has its CatchHandler @ 0311cd6c */
  if ((pSVar1 == (System_Delegate_o *)0x0) ||
     (pSVar5 = (System_Action_bool__o *)thunk_FUN_01bda71c(pSVar1,System_Action<bool>_TypeInfo),
     pSVar5 != (System_Action_bool__o *)0x0)) {
    NHJCFGACFDF_TypeInfo->static_fields->FFHKBMDDKBI = pSVar5;
    pSVar8 = (System_Action_IAchievement____c *)System_Action<bool>_TypeInfo;
    pNVar7 = NHJCFGACFDF_TypeInfo->static_fields;
    if (pSVar1 == (System_Delegate_o *)0x0) {
      lVar2 = 0;
    }
    else {
      lVar2 = thunk_FUN_01bda71c(pSVar1,System_Action<bool>_TypeInfo);
                    /* try { // try from 0311c674 to 0321c6bb has its CatchHandler @ 0311cd64 */
      if (lVar2 == 0) {
LAB_0311c67c:
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar1,pSVar8);
      }
    }
    thunk_FUN_01c20e04(pNVar7,lVar2);
    GGAFBEMCEIN__GFAHOLHMPOM(__this,method_00);
    ppSVar6 = &(__this->fields).GJOMPCOHOJP;
    *ppSVar6 = (System_Action_IAchievement____o *)0x0;
    thunk_FUN_01c20e04(ppSVar6,0);
    ppSVar3 = &(__this->fields).JBNMABKLMAH;
    *ppSVar3 = (System_Action_bool__o *)0x0;
                    /* try { // try from 0311c6bc to 0321c777 has its CatchHandler @ 0311baf0 */
    thunk_FUN_01c20e04(ppSVar3,0);
    return;
  }
LAB_0311c6cc:
                    /* WARNING: Subroutine does not return */
  FUN_01babc64(pSVar1,pSVar8);
}

