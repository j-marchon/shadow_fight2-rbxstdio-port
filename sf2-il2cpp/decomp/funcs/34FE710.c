// LHKALFIIJKB$$EPPBDPHJHEG @ RVA 0x34FE710

void LHKALFIIJKB__EPPBDPHJHEG(MethodInfo *method)

{
  ushort uVar1;
  PBAKFOBIHEG_o *pPVar2;
  System_Action_o **ppSVar3;
  VirtualInvokeData *pVVar4;
  PBAKFOBIHEG_c *pPVar5;
  ulong uVar6;
  int32_t *piVar7;
  System_Action_o *pSVar8;
  
  if ((DAT_0456883a & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    FUN_01bab630(&Method_LHKALFIIJKB_<>c_KDDIOBJIDMP__);
    FUN_01bab630(&LHKALFIIJKB_<>c_TypeInfo);
    DAT_0456883a = 1;
  }
  Nekki_SF2_GUI_Dialogs_NotificationsGame__ImmediateCloseNotifications((MethodInfo *)0x0);
  pPVar2 = CoroutineManager__get_Current((MethodInfo *)0x0);
  if ((LHKALFIIJKB_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(LHKALFIIJKB_<>c_TypeInfo);
  }
  pSVar8 = LHKALFIIJKB_<>c_TypeInfo->static_fields->__9__59_0;
  if (pSVar8 == (System_Action_o *)0x0) {
    if ((LHKALFIIJKB_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(LHKALFIIJKB_<>c_TypeInfo);
    }
    pSVar8 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
    System_Action___ctor();
    ppSVar3 = &LHKALFIIJKB_<>c_TypeInfo->static_fields->__9__59_0;
    *ppSVar3 = pSVar8;
    thunk_FUN_01c20e04(ppSVar3,pSVar8);
  }
  if (pPVar2 == (PBAKFOBIHEG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pPVar5 = pPVar2->klass;
  uVar1._0_1_ = (pPVar5->_2).rank;
  uVar1._1_1_ = (pPVar5->_2).minimumAlignment;
  uVar6 = (ulong)uVar1;
  if (uVar6 != 0) {
    piVar7 = &((pPVar5->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar7 + -2))->interfaceType ==
          (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
        pVVar4 = pPVar5->vtable + (*piVar7 + 2);
        goto LAB_035fe858;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  pVVar4 = (VirtualInvokeData *)FUN_01b81914(pPVar2,PBAKFOBIHEG_TypeInfo,2);
LAB_035fe858:
                    /* WARNING: Could not recover jumptable at 0x035fe878. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar4->methodPtr)(0x3dcccccd,pPVar2,pSVar8,pVVar4->method);
  return;
}

