// Nekki.SF2.GUI.Common.Credits.CreditsScreen$$KCODMKBDGIA @ RVA 0x352D034

System_String_o *
Nekki_SF2_GUI_Common_Credits_CreditsScreen__KCODMKBDGIA
          (Nekki_SF2_GUI_Common_Credits_CreditsScreen_o *__this,MethodInfo *method)

{
  undefined8 *puVar1;
  ushort uVar2;
  bool bVar3;
  System_String_o *str0;
  Il2CppObject *pIVar4;
  VirtualInvokeData *pVVar5;
  long lVar6;
  System_String_o *a;
  System_String_o *pSVar7;
  MethodInfo *extraout_x1;
  Il2CppClass *pIVar8;
  ulong uVar9;
  int32_t *piVar10;
  
  if ((DAT_04568a34 & 1) == 0) {
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&MGENAMAJALB_TypeInfo);
    FUN_01bab630(&StringLiteral_20635);
    FUN_01bab630(&StringLiteral_18048);
    FUN_01bab630(&StringLiteral_20636);
    FUN_01bab630(&StringLiteral_1511);
    DAT_04568a34 = 1;
    method = extraout_x1;
  }
  if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MGENAMAJALB_TypeInfo,method);
  }
  str0 = MGENAMAJALB__GNOADHJNPCJ((MethodInfo *)0x0);
  pIVar4 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                     (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
  pSVar7 = StringLiteral_1511;
  if (pIVar4 == (Il2CppObject *)0x0) {
    a = (System_String_o *)0x0;
  }
  else {
    pIVar8 = pIVar4->klass;
    uVar2._0_1_ = (pIVar8->_2).rank;
    uVar2._1_1_ = (pIVar8->_2).minimumAlignment;
    uVar9 = (ulong)uVar2;
    if (uVar9 != 0) {
      piVar10 = &((pIVar8->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
            (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
          pVVar5 = pIVar8->vtable + (*piVar10 + 6);
          goto LAB_0362d180;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    pVVar5 = (VirtualInvokeData *)FUN_01b81914(pIVar4,BLEFOFGCKEF_TypeInfo,6);
LAB_0362d180:
    lVar6 = (*pVVar5->methodPtr)(pIVar4,pVVar5->method);
    a = (System_String_o *)0x0;
    if (lVar6 != 0) {
      a = *(System_String_o **)(lVar6 + 0x10);
    }
  }
  bVar3 = System_String__op_Equality(a,StringLiteral_20635,(MethodInfo *)0x0);
  puVar1 = &StringLiteral_20636;
  if (!bVar3) {
    puVar1 = &StringLiteral_18048;
  }
  pSVar7 = System_String__Concat(str0,pSVar7,(System_String_o *)*puVar1,(MethodInfo *)0x0);
  return pSVar7;
}

