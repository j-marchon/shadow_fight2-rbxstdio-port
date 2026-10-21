// ONPHBGJDFBM$$OCECLIFLFHK @ RVA 0x31333B8

void ONPHBGJDFBM__OCECLIFLFHK
               (ONPHBGJDFBM_o *__this,System_Action_o *JPBADEBNNLL,float IIKNBOMDFHP,
               MethodInfo *method)

{
  ushort uVar1;
  ONPHBGJDFBM_o *__this_00;
  System_Collections_IEnumerator_o *pSVar2;
  VirtualInvokeData *pVVar3;
  System_Action_o *extraout_x1;
  System_Action_o *extraout_x1_00;
  System_Action_o *method_00;
  ONPHBGJDFBM_c *pOVar4;
  ulong uVar5;
  int32_t *piVar6;
  System_Collections_IEnumerator_o **ppSVar7;
  
  method_00 = JPBADEBNNLL;
  if ((DAT_045666e6 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    FUN_01bab630(&StringLiteral_11276);
    DAT_045666e6 = 1;
    method_00 = extraout_x1;
  }
  ppSVar7 = &(__this->fields).ENDCJNFPMCD;
  if (*ppSVar7 != (System_Collections_IEnumerator_o *)0x0) {
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__LogError(StringLiteral_11276,(MethodInfo *)0x0);
    method_00 = extraout_x1_00;
  }
  ONPHBGJDFBM__DCLABJGIAIG(__this,(MethodInfo *)method_00);
  __this_00 = (ONPHBGJDFBM_o *)CoroutineManager__get_Current((MethodInfo *)0x0);
  pSVar2 = ONPHBGJDFBM__MIFNEMBFEME(__this_00,JPBADEBNNLL,IIKNBOMDFHP,method);
  if (__this_00 == (ONPHBGJDFBM_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pOVar4 = __this_00->klass;
  uVar1._0_1_ = (pOVar4->_2).rank;
  uVar1._1_1_ = (pOVar4->_2).minimumAlignment;
  uVar5 = (ulong)uVar1;
  if (uVar5 != 0) {
    piVar6 = &((pOVar4->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar6 + -2))->interfaceType ==
          (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
        pVVar3 = &(pOVar4->vtable)._0_Equals + *piVar6;
        goto LAB_032334c0;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  pVVar3 = (VirtualInvokeData *)FUN_01b81914(__this_00,PBAKFOBIHEG_TypeInfo,0);
LAB_032334c0:
  pSVar2 = (System_Collections_IEnumerator_o *)
           (*pVVar3->methodPtr)(__this_00,pSVar2,1,pVVar3->method);
  *ppSVar7 = pSVar2;
  thunk_FUN_01c20e04(ppSVar7,pSVar2);
  return;
}

