// SFButton$$OnPointerClick @ RVA 0x34BAEF0

void SFButton__OnPointerClick
               (SFButton_o *__this,UnityEngine_EventSystems_PointerEventData_o *MELGPLLNBGH,
               MethodInfo *method)

{
  ushort uVar1;
  PBAKFOBIHEG_o *pPVar2;
  System_Collections_IEnumerator_o *pSVar3;
  VirtualInvokeData *pVVar4;
  MethodInfo *in_x3;
  PBAKFOBIHEG_c *pPVar5;
  ulong uVar6;
  int32_t *piVar7;
  
  if ((DAT_045685cd & 1) == 0) {
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    FUN_01bab630(&SFButton_TypeInfo);
    DAT_045685cd = 1;
  }
  if (SFButton_TypeInfo->static_fields->ClickInvokeFramesOffset < 1) {
    if ((__this->fields).super.super.m_Interactable != false) {
      (*(__this->klass->vtable)._48_DHDHDICMLCD.methodPtr)
                (__this,(__this->klass->vtable)._48_DHDHDICMLCD.method);
    }
                    /* WARNING: Could not recover jumptable at 0x035bafa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(__this->klass->vtable)._50_OnClick.methodPtr)
              (__this,MELGPLLNBGH,(__this->klass->vtable)._50_OnClick.method);
    return;
  }
  if ((__this->fields).HGLJOEEEGNL != false) {
    return;
  }
  pPVar2 = CoroutineManager__get_Current((MethodInfo *)0x0);
  pSVar3 = SFButton__JBPDECOFFNG
                     (__this,MELGPLLNBGH,SFButton_TypeInfo->static_fields->ClickInvokeFramesOffset,
                      in_x3);
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
        pVVar4 = pPVar5->vtable + *piVar7;
        goto LAB_035bb024;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  pVVar4 = (VirtualInvokeData *)FUN_01b81914(pPVar2,PBAKFOBIHEG_TypeInfo,0);
LAB_035bb024:
                    /* WARNING: Could not recover jumptable at 0x035bb040. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar4->methodPtr)(pPVar2,pSVar3,1,pVVar4->method);
  return;
}

