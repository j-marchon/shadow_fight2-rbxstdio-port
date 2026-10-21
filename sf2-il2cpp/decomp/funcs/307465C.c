// Nekki.SF2.GUI.Dialogs.Raids.RaidTopHundredDialog$$CBMBNAKAFMH @ RVA 0x307465C

void Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog__CBMBNAKAFMH
               (Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog_o *__this,MethodInfo *method)

{
  ushort uVar1;
  undefined8 uVar2;
  Il2CppObject *pIVar3;
  long lVar4;
  VirtualInvokeData *pVVar5;
  System_String_o *pSVar6;
  long lVar7;
  Il2CppClass *pIVar8;
  BHEDGAKGKPO_StaticFields *pBVar9;
  ulong uVar10;
  int32_t *piVar11;
  Nekki_SF2_GUI_LabelAlias_o *pNVar12;
  undefined8 uVar13;
  
  if ((DAT_04565f95 & 1) == 0) {
    FUN_01bab630(&Method_System_Array_Empty<string>__);
    FUN_01bab630(&BHEDGAKGKPO_TypeInfo);
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&StringLiteral_4951);
    FUN_01bab630(&StringLiteral_8341);
    FUN_01bab630(&StringLiteral_253);
    DAT_04565f95 = 1;
  }
  pNVar12 = (__this->fields)._titleLabel;
  pIVar3 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                     (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
  lVar4 = Method_System_Array_Empty<string>__;
  lVar7 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
  if (lVar7 == 0) {
    FUN_01b8167c(Method_System_Array_Empty<string>__);
    lVar7 = *(long *)(lVar4 + 0x38);
  }
  lVar7 = *(long *)(lVar7 + 0x10);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_01b81620();
  }
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_01ba7564();
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0x38) + 0x10);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01b81620();
  }
  uVar2 = StringLiteral_4951;
  if (pIVar3 != (Il2CppObject *)0x0) {
    pIVar8 = pIVar3->klass;
    uVar13 = **(undefined8 **)(lVar4 + 0xb8);
    uVar1._0_1_ = (pIVar8->_2).rank;
    uVar1._1_1_ = (pIVar8->_2).minimumAlignment;
    uVar10 = (ulong)uVar1;
    if (uVar10 != 0) {
      piVar11 = &((pIVar8->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar11 + -2))->interfaceType ==
            (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
          pVVar5 = pIVar8->vtable + (*piVar11 + 0xc);
          goto LAB_031747b8;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    pVVar5 = (VirtualInvokeData *)FUN_01b81914(pIVar3,BLEFOFGCKEF_TypeInfo,0xc);
LAB_031747b8:
    pSVar6 = (System_String_o *)(*pVVar5->methodPtr)(pIVar3,uVar2,uVar13,pVVar5->method);
    pSVar6 = System_String__Concat(pSVar6,StringLiteral_253,(MethodInfo *)0x0);
    if (pNVar12 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
      (*(pNVar12->klass->vtable)._75_set_text.methodPtr)
                (pNVar12,pSVar6,(pNVar12->klass->vtable)._75_set_text.method);
      pNVar12 = (__this->fields)._prevSeasonLabel;
      if ((BHEDGAKGKPO_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (pNVar12 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
        pBVar9 = BHEDGAKGKPO_TypeInfo->static_fields;
        (*(pNVar12->klass->vtable)._23_set_color.methodPtr)
                  ((pBVar9->FHIAKPJBBCB).fields.r,(pBVar9->FHIAKPJBBCB).fields.g,
                   (pBVar9->FHIAKPJBBCB).fields.b,(pBVar9->FHIAKPJBBCB).fields.a,pNVar12,
                   (pNVar12->klass->vtable)._23_set_color.method);
        pNVar12 = (__this->fields)._prevSeasonLabel;
        if (pNVar12 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
          Nekki_SF2_GUI_LabelAlias__set_Alias(pNVar12,StringLiteral_8341,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

