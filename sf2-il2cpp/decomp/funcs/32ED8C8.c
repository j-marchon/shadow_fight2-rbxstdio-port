// HBHNJNHNFHP$$BDIFEJCKEGH @ RVA 0x32ED8C8

void HBHNJNHNFHP__BDIFEJCKEGH
               (HBHNJNHNFHP_o *__this,float NACILJPLKBG,System_Action_o *PKKMGBOIDJD,
               MethodInfo *method)

{
  ushort uVar1;
  PBAKFOBIHEG_o *pPVar2;
  VirtualInvokeData *pVVar3;
  PBAKFOBIHEG_c *pPVar4;
  ulong uVar5;
  int32_t *piVar6;
  undefined4 in_register_00005004;
  
  if ((DAT_04567653 & 1) == 0) {
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    DAT_04567653 = 1;
  }
  if (NACILJPLKBG <= 0.0) {
    if (PKKMGBOIDJD != (System_Action_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x033ed978. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(PKKMGBOIDJD->fields).super.super.invoke_impl)
                ((PKKMGBOIDJD->fields).super.super.method_code,
                 (PKKMGBOIDJD->fields).super.super.method);
      return;
    }
    return;
  }
  pPVar2 = CoroutineManager__get_Current((MethodInfo *)0x0);
  if (pPVar2 == (PBAKFOBIHEG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pPVar4 = pPVar2->klass;
  uVar1._0_1_ = (pPVar4->_2).rank;
  uVar1._1_1_ = (pPVar4->_2).minimumAlignment;
  uVar5 = (ulong)uVar1;
  if (uVar5 != 0) {
    piVar6 = &((pPVar4->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar6 + -2))->interfaceType ==
          (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
        pVVar3 = pPVar4->vtable + (*piVar6 + 2);
        goto LAB_033ed99c;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  pVVar3 = (VirtualInvokeData *)FUN_01b81914(pPVar2,PBAKFOBIHEG_TypeInfo,2);
LAB_033ed99c:
                    /* WARNING: Could not recover jumptable at 0x033ed9b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar3->methodPtr)(CONCAT44(in_register_00005004,NACILJPLKBG),pPVar2,PKKMGBOIDJD,pVVar3->method)
  ;
  return;
}

