// IDGOGBNEGAM$$ONLBMMFEPOI @ RVA 0x3099DA8

System_String_o * IDGOGBNEGAM__ONLBMMFEPOI(int32_t EFJNKONCKNF,MethodInfo *method)

{
  ushort uVar1;
  Il2CppObject *pIVar2;
  System_String_o *pSVar3;
  long lVar4;
  VirtualInvokeData *pVVar5;
  MethodInfo *method_00;
  long lVar6;
  Il2CppClass *pIVar7;
  ulong uVar8;
  int32_t *piVar9;
  undefined8 uVar10;
  
  if ((DAT_04566109 & 1) == 0) {
    FUN_01bab630(&Method_System_Array_Empty<string>__);
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    DAT_04566109 = 1;
  }
  pIVar2 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                     (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
  pSVar3 = IDGOGBNEGAM__NPAOCMPEILP(EFJNKONCKNF,method_00);
  lVar4 = Method_System_Array_Empty<string>__;
  lVar6 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
  if (lVar6 == 0) {
    FUN_01b8167c(Method_System_Array_Empty<string>__);
    lVar6 = *(long *)(lVar4 + 0x38);
  }
  lVar6 = *(long *)(lVar6 + 0x10);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_01b81620();
  }
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_01ba7564();
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0x38) + 0x10);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01b81620();
  }
  if (pIVar2 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pIVar7 = pIVar2->klass;
  uVar10 = **(undefined8 **)(lVar4 + 0xb8);
  uVar1._0_1_ = (pIVar7->_2).rank;
  uVar1._1_1_ = (pIVar7->_2).minimumAlignment;
  uVar8 = (ulong)uVar1;
  if (uVar8 != 0) {
    piVar9 = &((pIVar7->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar9 + -2))->interfaceType ==
          (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
        pVVar5 = pIVar7->vtable + (*piVar9 + 0xc);
        goto LAB_03199ec4;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  pVVar5 = (VirtualInvokeData *)FUN_01b81914(pIVar2,BLEFOFGCKEF_TypeInfo,0xc);
LAB_03199ec4:
                    /* WARNING: Could not recover jumptable at 0x03199ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pSVar3 = (System_String_o *)(*pVVar5->methodPtr)(pIVar2,pSVar3,uVar10,pVVar5->method);
  return pSVar3;
}

