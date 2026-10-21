// Nekki.SF2.GUI.TimerLabel$$set_HoursStringAlias @ RVA 0x33BB988

void Nekki_SF2_GUI_TimerLabel__set_HoursStringAlias
               (Nekki_SF2_GUI_TimerLabel_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  ushort uVar1;
  Il2CppObject *pIVar2;
  long lVar3;
  VirtualInvokeData *pVVar4;
  long lVar5;
  Il2CppClass *pIVar6;
  ulong uVar7;
  int32_t *piVar8;
  System_String_o *pSVar9;
  undefined8 uVar10;
  
  if ((DAT_04567da5 & 1) == 0) {
    FUN_01bab630(&Method_System_Array_Empty<string>__);
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    DAT_04567da5 = 1;
  }
  (__this->fields).ILHPJGKPFAP = CJNHFNHJHPE;
  thunk_FUN_01c20e04(&(__this->fields).ILHPJGKPFAP,CJNHFNHJHPE);
  pIVar2 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                     (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
  lVar3 = Method_System_Array_Empty<string>__;
  pSVar9 = (__this->fields).ILHPJGKPFAP;
  lVar5 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
  if (lVar5 == 0) {
    FUN_01b8167c(Method_System_Array_Empty<string>__);
    lVar5 = *(long *)(lVar3 + 0x38);
  }
  lVar5 = *(long *)(lVar5 + 0x10);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_01b81620();
  }
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_01ba7564();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0x38) + 0x10);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_01b81620();
  }
  if (pIVar2 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pIVar6 = pIVar2->klass;
  uVar10 = **(undefined8 **)(lVar3 + 0xb8);
  uVar1._0_1_ = (pIVar6->_2).rank;
  uVar1._1_1_ = (pIVar6->_2).minimumAlignment;
  uVar7 = (ulong)uVar1;
  if (uVar7 != 0) {
    piVar8 = &((pIVar6->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
          (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
        pVVar4 = pIVar6->vtable + (*piVar8 + 0xc);
        goto LAB_034bbab0;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  pVVar4 = (VirtualInvokeData *)FUN_01b81914(pIVar2,BLEFOFGCKEF_TypeInfo,0xc);
LAB_034bbab0:
  pSVar9 = (System_String_o *)(*pVVar4->methodPtr)(pIVar2,pSVar9,uVar10,pVVar4->method);
  (__this->fields).DaysString = pSVar9;
  thunk_FUN_01c20e04(&(__this->fields).DaysString);
  return;
}

