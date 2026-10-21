// Nekki.SF2.GUI.TimerLabel$$set_DelimiterAlias @ RVA 0x33BB160

void Nekki_SF2_GUI_TimerLabel__set_DelimiterAlias
               (Nekki_SF2_GUI_TimerLabel_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  ushort uVar1;
  Il2CppObject *pIVar2;
  long lVar3;
  VirtualInvokeData *pVVar4;
  undefined8 uVar5;
  long lVar6;
  Il2CppClass *pIVar7;
  ulong uVar8;
  int32_t *piVar9;
  undefined8 uVar10;
  
  if ((DAT_04567da1 & 1) == 0) {
    FUN_01bab630(&Method_System_Array_Empty<string>__);
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    DAT_04567da1 = 1;
  }
  *(System_String_o **)&(__this->fields).ShowZeroDays = CJNHFNHJHPE;
  thunk_FUN_01c20e04(&(__this->fields).ShowZeroDays,CJNHFNHJHPE);
  pIVar2 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                     (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
  lVar3 = Method_System_Array_Empty<string>__;
  uVar5._0_1_ = (__this->fields).ShowZeroDays;
  uVar5._1_1_ = (__this->fields).ShowZeroHours;
  uVar5._2_6_ = *(undefined6 *)&(__this->fields).field_0x1fa;
  lVar6 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
  if (lVar6 == 0) {
    FUN_01b8167c(Method_System_Array_Empty<string>__);
    lVar6 = *(long *)(lVar3 + 0x38);
  }
  lVar6 = *(long *)(lVar6 + 0x10);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_01b81620();
  }
  if (*(int *)(lVar6 + 0xe0) == 0) {
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
  pIVar7 = pIVar2->klass;
  uVar10 = **(undefined8 **)(lVar3 + 0xb8);
  uVar1._0_1_ = (pIVar7->_2).rank;
  uVar1._1_1_ = (pIVar7->_2).minimumAlignment;
  uVar8 = (ulong)uVar1;
  if (uVar8 != 0) {
    piVar9 = &((pIVar7->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar9 + -2))->interfaceType ==
          (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
        pVVar4 = pIVar7->vtable + (*piVar9 + 0xc);
        goto LAB_034bb288;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  pVVar4 = (VirtualInvokeData *)FUN_01b81914(pIVar2,BLEFOFGCKEF_TypeInfo,0xc);
LAB_034bb288:
  uVar5 = (*pVVar4->methodPtr)(pIVar2,uVar5,uVar10,pVVar4->method);
  (__this->fields).UseDaysDelimiter = (bool_conflict)(char)uVar5;
  *(int3 *)&(__this->fields).field_0x1f1 = (int3)((ulong)uVar5 >> 8);
  (__this->fields).SegmentsDate = (int)((ulong)uVar5 >> 0x20);
  thunk_FUN_01c20e04(&(__this->fields).UseDaysDelimiter);
  return;
}

