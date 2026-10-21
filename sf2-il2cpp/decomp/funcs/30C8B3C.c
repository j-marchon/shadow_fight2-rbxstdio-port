// ADAHHFAPLLM$$PDBOOKOFGDG @ RVA 0x30C8B3C

void ADAHHFAPLLM__PDBOOKOFGDG(ADAHHFAPLLM_o *__this,int32_t KDNLAOJBFMH,MethodInfo *method)

{
  ushort uVar1;
  undefined8 uVar2;
  bool bVar3;
  MethodInfo *method_00;
  System_String_o *JEHFOBHMGJM;
  Il2CppObject *pIVar4;
  long lVar5;
  VirtualInvokeData *pVVar6;
  MethodInfo *in_x5;
  long lVar7;
  Il2CppClass *pIVar8;
  ulong uVar9;
  int32_t *piVar10;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  
  method_00 = (MethodInfo *)__this;
  if ((DAT_045662c3 & 1) == 0) {
    FUN_01bab630(&Method_System_Array_Empty<string>__);
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    method_00 = (MethodInfo *)FUN_01bab630(&StringLiteral_11758);
    DAT_045662c3 = 1;
  }
  JEHFOBHMGJM = ADAHHFAPLLM__DDIBCCLLJLP(method_00);
  pIVar4 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                     (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
  lVar5 = Method_System_Array_Empty<string>__;
  lVar7 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
  if (lVar7 == 0) {
    FUN_01b8167c(Method_System_Array_Empty<string>__);
    lVar7 = *(long *)(lVar5 + 0x38);
  }
  lVar7 = *(long *)(lVar7 + 0x10);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_01b81620();
  }
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_01ba7564();
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0x38) + 0x10);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_01b81620();
  }
  uVar2 = StringLiteral_11758;
  if (pIVar4 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pIVar8 = pIVar4->klass;
  uVar11 = **(undefined8 **)(lVar5 + 0xb8);
  uVar1._0_1_ = (pIVar8->_2).rank;
  uVar1._1_1_ = (pIVar8->_2).minimumAlignment;
  uVar9 = (ulong)uVar1;
  if (uVar9 != 0) {
    piVar10 = &((pIVar8->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
          (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
        pVVar6 = pIVar8->vtable + (*piVar10 + 0xc);
        goto LAB_031c8c78;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  pVVar6 = (VirtualInvokeData *)FUN_01b81914(pIVar4,BLEFOFGCKEF_TypeInfo,0xc);
LAB_031c8c78:
  auVar12 = (*pVVar6->methodPtr)(pIVar4,uVar2,uVar11,pVVar6->method);
  bVar3 = ADAHHFAPLLM__NBFDEJPFNPO(__this,auVar12._8_8_);
  if (bVar3) {
    ADAHHFAPLLM__NFMANKNGJLM(__this,0x80,JEHFOBHMGJM,auVar12._0_8_,KDNLAOJBFMH,in_x5);
    return;
  }
  return;
}

