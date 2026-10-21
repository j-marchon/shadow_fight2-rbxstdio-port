// ADAHHFAPLLM$$JIOKHKDAFMN @ RVA 0x30C81AC

void ADAHHFAPLLM__JIOKHKDAFMN(ADAHHFAPLLM_o *__this,int32_t KDNLAOJBFMH,MethodInfo *method)

{
  ushort uVar1;
  undefined8 uVar2;
  MethodInfo *method_00;
  System_String_o *JEHFOBHMGJM;
  Il2CppObject *pIVar3;
  long lVar4;
  VirtualInvokeData *pVVar5;
  System_String_o *NONPLOOOOAG;
  MethodInfo *in_x5;
  long lVar6;
  Il2CppClass *pIVar7;
  ulong uVar8;
  int32_t *piVar9;
  undefined8 uVar10;
  
  method_00 = (MethodInfo *)__this;
  if ((DAT_045662bb & 1) == 0) {
    FUN_01bab630(&Method_System_Array_Empty<string>__);
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    method_00 = (MethodInfo *)FUN_01bab630(&StringLiteral_20346);
    DAT_045662bb = 1;
  }
  JEHFOBHMGJM = ADAHHFAPLLM__DDIBCCLLJLP(method_00);
  pIVar3 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                     (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
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
  uVar2 = StringLiteral_20346;
  if (pIVar3 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pIVar7 = pIVar3->klass;
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
        goto LAB_031c82e8;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  pVVar5 = (VirtualInvokeData *)FUN_01b81914(pIVar3,BLEFOFGCKEF_TypeInfo,0xc);
LAB_031c82e8:
  NONPLOOOOAG = (System_String_o *)(*pVVar5->methodPtr)(pIVar3,uVar2,uVar10,pVVar5->method);
  ADAHHFAPLLM__NFMANKNGJLM(__this,2,JEHFOBHMGJM,NONPLOOOOAG,KDNLAOJBFMH,in_x5);
  return;
}

