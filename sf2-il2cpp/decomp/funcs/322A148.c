// LPGPNBGHDBD$$LLOLNNDDPFM @ RVA 0x322A148

System_String_o * LPGPNBGHDBD__LLOLNNDDPFM(int32_t OJDBABKBAFA,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  bool bVar3;
  Il2CppObject *pIVar4;
  long lVar5;
  VirtualInvokeData *pVVar6;
  System_String_o *str0;
  System_String_o *str2;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  long lVar7;
  Il2CppClass *pIVar8;
  ulong uVar9;
  int32_t *piVar10;
  System_String_o *pSVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  uint CJNHFNHJHPE;
  uint local_28;
  uint local_24;
  
  if ((DAT_04566f92 & 1) == 0) {
    FUN_01bab630(&Method_System_Array_Empty<string>__);
    FUN_01bab630(&BJFCCEEPHOF_TypeInfo);
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&StringLiteral_16715);
    FUN_01bab630(&StringLiteral_19716);
    FUN_01bab630(&StringLiteral_1585);
    FUN_01bab630(&StringLiteral_1377);
    DAT_04566f92 = 1;
  }
  local_24 = 0;
  if (OJDBABKBAFA < 1000000) {
    pSVar11 = (System_String_o *)0x0;
    CJNHFNHJHPE = OJDBABKBAFA;
    local_28 = OJDBABKBAFA;
    goto LAB_0332a3dc;
  }
  if (OJDBABKBAFA < 1000000000) {
    CJNHFNHJHPE = (uint)OJDBABKBAFA / 1000000;
    local_24 = ((uint)OJDBABKBAFA % 1000000) / 10000;
    local_28 = CJNHFNHJHPE;
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
    if (pIVar4 == (Il2CppObject *)0x0) {
LAB_0332a468:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pIVar8 = pIVar4->klass;
    uVar12 = **(undefined8 **)(lVar5 + 0xb8);
    uVar1._0_1_ = (pIVar8->_2).rank;
    uVar1._1_1_ = (pIVar8->_2).minimumAlignment;
    uVar9 = (ulong)uVar1;
    uVar13 = StringLiteral_19716;
    if (uVar9 != 0) {
      piVar10 = &((pIVar8->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
            (Il2CppClass *)BLEFOFGCKEF_TypeInfo) goto LAB_0332a3b0;
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
  }
  else {
    CJNHFNHJHPE = (uint)OJDBABKBAFA / 1000000000;
    local_24 = ((uint)OJDBABKBAFA % 1000000000) / 10000000;
    local_28 = CJNHFNHJHPE;
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
    if (pIVar4 == (Il2CppObject *)0x0) goto LAB_0332a468;
    pIVar8 = pIVar4->klass;
    uVar12 = **(undefined8 **)(lVar5 + 0xb8);
    uVar2._0_1_ = (pIVar8->_2).rank;
    uVar2._1_1_ = (pIVar8->_2).minimumAlignment;
    uVar9 = (ulong)uVar2;
    uVar13 = StringLiteral_16715;
    if (uVar9 != 0) {
      piVar10 = &((pIVar8->_1).interfaceOffsets)->offset;
      do {
        uVar13 = StringLiteral_16715;
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
            (Il2CppClass *)BLEFOFGCKEF_TypeInfo) goto LAB_0332a3b0;
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
        uVar13 = StringLiteral_16715;
      } while (uVar9 != 0);
    }
  }
  pVVar6 = (VirtualInvokeData *)FUN_01b81914(pIVar4,BLEFOFGCKEF_TypeInfo,0xc);
LAB_0332a3c0:
  pSVar11 = (System_String_o *)(*pVVar6->methodPtr)(pIVar4,uVar13,uVar12,pVVar6->method);
LAB_0332a3dc:
  bVar3 = PCOEHCPGBBG__BDLEIEHBFAD(pSVar11,(MethodInfo *)0x0);
  if (bVar3) {
    method_00 = extraout_x1;
    if ((BJFCCEEPHOF_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
      method_00 = extraout_x1_00;
    }
    pSVar11 = BJFCCEEPHOF__POMAAOILGAL(CJNHFNHJHPE,method_00);
  }
  else {
    str0 = System_Int32__ToString((int32_t)&local_28,(MethodInfo *)0x0);
    str2 = System_Int32__ToString((int32_t)&local_24,StringLiteral_1585,(MethodInfo *)0x0);
    pSVar11 = System_String__Concat(str0,StringLiteral_1377,str2,pSVar11,(MethodInfo *)0x0);
  }
  return pSVar11;
LAB_0332a3b0:
  pVVar6 = pIVar8->vtable + (*piVar10 + 0xc);
  goto LAB_0332a3c0;
}

