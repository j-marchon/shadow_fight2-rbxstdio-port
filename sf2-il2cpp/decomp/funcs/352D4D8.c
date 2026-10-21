// Nekki.SF2.GUI.Dialogs.Raids.MessageItem$$DLOCFGMOEFN @ RVA 0x352D4D8

void Nekki_SF2_GUI_Dialogs_Raids_MessageItem__DLOCFGMOEFN
               (Nekki_SF2_GUI_Dialogs_Raids_MessageItem_o *__this,int64_t ANDHBPGOCOM,
               MethodInfo *method)

{
  uint uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  bool bVar6;
  System_Text_StringBuilder_o *__this_00;
  System_Text_StringBuilder_o *pSVar7;
  Il2CppObject *pIVar8;
  long lVar9;
  VirtualInvokeData *pVVar10;
  System_String_o *b;
  long lVar11;
  Il2CppClass *pIVar12;
  ulong uVar13;
  int32_t *piVar14;
  Nekki_SF2_GUI_LabelAlias_o *pNVar15;
  long lVar16;
  System_String_o *pSVar17;
  undefined8 uVar18;
  long lVar19;
  long lVar20;
  
  if ((DAT_04568a39 & 1) == 0) {
    FUN_01bab630(&Method_System_Array_Empty<string>__);
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&System_Text_StringBuilder_TypeInfo);
    FUN_01bab630(&StringLiteral_167);
    DAT_04568a39 = 1;
  }
  if ((__this->fields).NBMPEEDDGKD < 0) {
    return;
  }
  pNVar15 = (__this->fields)._timeLabel;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar6 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pNVar15,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar6) {
    return;
  }
  lVar19 = ANDHBPGOCOM - (__this->fields).NBMPEEDDGKD;
  if (lVar19 < -999) {
    return;
  }
  lVar20 = (lVar19 / 1000) % 0xe10;
  lVar9 = lVar19 / 3600000;
  uVar1 = (int)((ulong)((long)(int)(short)lVar20 * -0x77777777) >> 0x20) + (int)(short)lVar20;
  lVar16 = (long)(short)((short)(uVar1 >> 5) - (short)((int)uVar1 >> 0x1f));
  if ((lVar9 == (__this->fields).IOOGFEOIEPK) && ((__this->fields).CCIKLAFHFAH == lVar16)) {
    return;
  }
  (__this->fields).IOOGFEOIEPK = lVar9;
  (__this->fields).CCIKLAFHFAH = lVar16;
  __this_00 = (System_Text_StringBuilder_o *)thunk_FUN_01bda818(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(__this_00,(MethodInfo *)0x0);
  if (3599999 < lVar19) {
    if (__this_00 == (System_Text_StringBuilder_o *)0x0) goto LAB_0362db00;
    pSVar7 = System_Text_StringBuilder__Append(__this_00,lVar9,(MethodInfo *)0x0);
    pIVar8 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                       (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    lVar9 = Method_System_Array_Empty<string>__;
    pSVar17 = (__this->fields)._TimeHourShort;
    lVar11 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
    if (lVar11 == 0) {
      FUN_01b8167c(Method_System_Array_Empty<string>__);
      lVar11 = *(long *)(lVar9 + 0x38);
    }
    lVar11 = *(long *)(lVar11 + 0x10);
    if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = FUN_01b81620();
    }
    if (*(int *)(lVar11 + 0xe0) == 0) {
      thunk_FUN_01ba7564();
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_01b81620();
    }
    if (pIVar8 == (Il2CppObject *)0x0) goto LAB_0362db00;
    pIVar12 = pIVar8->klass;
    uVar18 = **(undefined8 **)(lVar9 + 0xb8);
    uVar2._0_1_ = (pIVar12->_2).rank;
    uVar2._1_1_ = (pIVar12->_2).minimumAlignment;
    uVar13 = (ulong)uVar2;
    if (uVar13 != 0) {
      piVar14 = &((pIVar12->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar14 + -2))->interfaceType ==
            (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
          pVVar10 = pIVar12->vtable + (*piVar14 + 0xc);
          goto LAB_0362d74c;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    pVVar10 = (VirtualInvokeData *)FUN_01b81914(pIVar8,BLEFOFGCKEF_TypeInfo,0xc);
LAB_0362d74c:
    pSVar17 = (System_String_o *)(*pVVar10->methodPtr)(pIVar8,pSVar17,uVar18,pVVar10->method);
    if ((pSVar7 == (System_Text_StringBuilder_o *)0x0) ||
       (pSVar7 = System_Text_StringBuilder__Append(pSVar7,pSVar17,(MethodInfo *)0x0),
       pSVar7 == (System_Text_StringBuilder_o *)0x0)) goto LAB_0362db00;
    System_Text_StringBuilder__Append(pSVar7,StringLiteral_167,(MethodInfo *)0x0);
  }
  if (0x3b < lVar20) {
    if (__this_00 == (System_Text_StringBuilder_o *)0x0) goto LAB_0362db00;
    pSVar7 = System_Text_StringBuilder__Append(__this_00,lVar16,(MethodInfo *)0x0);
    pIVar8 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                       (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    lVar9 = Method_System_Array_Empty<string>__;
    pSVar17 = (__this->fields)._TimeMinuteShort;
    lVar16 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
    if (lVar16 == 0) {
      FUN_01b8167c(Method_System_Array_Empty<string>__);
      lVar16 = *(long *)(lVar9 + 0x38);
    }
    lVar16 = *(long *)(lVar16 + 0x10);
    if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
      lVar16 = FUN_01b81620();
    }
    if (*(int *)(lVar16 + 0xe0) == 0) {
      thunk_FUN_01ba7564();
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_01b81620();
    }
    if (pIVar8 == (Il2CppObject *)0x0) goto LAB_0362db00;
    pIVar12 = pIVar8->klass;
    uVar18 = **(undefined8 **)(lVar9 + 0xb8);
    uVar3._0_1_ = (pIVar12->_2).rank;
    uVar3._1_1_ = (pIVar12->_2).minimumAlignment;
    uVar13 = (ulong)uVar3;
    if (uVar13 != 0) {
      piVar14 = &((pIVar12->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar14 + -2))->interfaceType ==
            (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
          pVVar10 = pIVar12->vtable + (*piVar14 + 0xc);
          goto LAB_0362d87c;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    pVVar10 = (VirtualInvokeData *)FUN_01b81914(pIVar8,BLEFOFGCKEF_TypeInfo,0xc);
LAB_0362d87c:
    pSVar17 = (System_String_o *)(*pVVar10->methodPtr)(pIVar8,pSVar17,uVar18,pVVar10->method);
    if ((pSVar7 == (System_Text_StringBuilder_o *)0x0) ||
       (pSVar7 = System_Text_StringBuilder__Append(pSVar7,pSVar17,(MethodInfo *)0x0),
       pSVar7 == (System_Text_StringBuilder_o *)0x0)) goto LAB_0362db00;
    System_Text_StringBuilder__Append(pSVar7,StringLiteral_167,(MethodInfo *)0x0);
  }
  pIVar8 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                     (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
  lVar9 = Method_System_Array_Empty<string>__;
  if ((lVar19 < 3600000) && (lVar20 < 0x3c)) {
    pSVar17 = (__this->fields)._TimeLessMinute;
    lVar19 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
    if (lVar19 == 0) {
      FUN_01b8167c(Method_System_Array_Empty<string>__);
      lVar19 = *(long *)(lVar9 + 0x38);
    }
    lVar19 = *(long *)(lVar19 + 0x10);
    if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
      lVar19 = FUN_01b81620();
    }
    if (*(int *)(lVar19 + 0xe0) == 0) {
      thunk_FUN_01ba7564();
    }
    lVar19 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
    if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
      lVar19 = FUN_01b81620();
    }
    if (pIVar8 == (Il2CppObject *)0x0) goto LAB_0362db00;
    pIVar12 = pIVar8->klass;
    uVar18 = **(undefined8 **)(lVar19 + 0xb8);
    uVar4._0_1_ = (pIVar12->_2).rank;
    uVar4._1_1_ = (pIVar12->_2).minimumAlignment;
    uVar13 = (ulong)uVar4;
    if (uVar13 != 0) {
      piVar14 = &((pIVar12->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar14 + -2))->interfaceType ==
            (Il2CppClass *)BLEFOFGCKEF_TypeInfo) goto LAB_0362da28;
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
  }
  else {
    pSVar17 = (__this->fields)._TimeAgo;
    lVar19 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
    if (lVar19 == 0) {
      FUN_01b8167c(Method_System_Array_Empty<string>__);
      lVar19 = *(long *)(lVar9 + 0x38);
    }
    lVar19 = *(long *)(lVar19 + 0x10);
    if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
      lVar19 = FUN_01b81620();
    }
    if (*(int *)(lVar19 + 0xe0) == 0) {
      thunk_FUN_01ba7564();
    }
    lVar19 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
    if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
      lVar19 = FUN_01b81620();
    }
    if (pIVar8 == (Il2CppObject *)0x0) goto LAB_0362db00;
    pIVar12 = pIVar8->klass;
    uVar18 = **(undefined8 **)(lVar19 + 0xb8);
    uVar5._0_1_ = (pIVar12->_2).rank;
    uVar5._1_1_ = (pIVar12->_2).minimumAlignment;
    uVar13 = (ulong)uVar5;
    if (uVar13 != 0) {
      piVar14 = &((pIVar12->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar14 + -2))->interfaceType ==
            (Il2CppClass *)BLEFOFGCKEF_TypeInfo) goto LAB_0362da28;
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
  }
  pVVar10 = (VirtualInvokeData *)FUN_01b81914(pIVar8,BLEFOFGCKEF_TypeInfo,0xc);
LAB_0362da38:
  pSVar17 = (System_String_o *)(*pVVar10->methodPtr)(pIVar8,pSVar17,uVar18,pVVar10->method);
  if (__this_00 != (System_Text_StringBuilder_o *)0x0) {
    System_Text_StringBuilder__Append(__this_00,pSVar17,(MethodInfo *)0x0);
    pSVar17 = (System_String_o *)
              (*(__this_00->klass->vtable)._3_ToString.methodPtr)
                        (__this_00,(__this_00->klass->vtable)._3_ToString.method);
    if (pSVar17 != (System_String_o *)0x0) {
      if ((pSVar17->fields)._stringLength < 1) {
        return;
      }
      pNVar15 = (__this->fields)._timeLabel;
      if (pNVar15 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
        b = (System_String_o *)
            (*(pNVar15->klass->vtable)._74_get_text.methodPtr)
                      (pNVar15,(pNVar15->klass->vtable)._74_get_text.method);
        bVar6 = System_String__op_Inequality(pSVar17,b,(MethodInfo *)0x0);
        if (!bVar6) {
          return;
        }
        pNVar15 = (__this->fields)._timeLabel;
        if (pNVar15 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0362dae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(pNVar15->klass->vtable)._75_set_text.methodPtr)
                    (pNVar15,pSVar17,(pNVar15->klass->vtable)._75_set_text.method);
          return;
        }
      }
    }
  }
LAB_0362db00:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
LAB_0362da28:
  pVVar10 = pIVar12->vtable + (*piVar14 + 0xc);
  goto LAB_0362da38;
}

