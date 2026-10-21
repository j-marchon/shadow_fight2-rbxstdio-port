// Nekki.SF2.GUI.Menu.MainMenu$$EFFLCPLIPEI @ RVA 0x356BB34

void Nekki_SF2_GUI_Menu_MainMenu__EFFLCPLIPEI
               (Nekki_SF2_GUI_Menu_MainMenu_o *__this,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  uint32_t uVar3;
  uint32_t uVar4;
  Il2CppObject *pIVar5;
  long lVar6;
  VirtualInvokeData *pVVar7;
  System_String_o *pSVar8;
  Nekki_SF2_GUI_Menu_MenuExpPanel_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  long lVar9;
  Il2CppClass *pIVar10;
  ulong uVar11;
  int32_t *piVar12;
  ACHLOMELAJE_o *__this_01;
  undefined8 uVar13;
  uint32_t local_34;
  
  if ((DAT_04568c2d & 1) == 0) {
    FUN_01bab630(&Method_System_Array_Empty<string>__);
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_17774);
    FUN_01bab630(&StringLiteral_18134);
    DAT_04568c2d = 1;
    method = extraout_x1;
  }
  local_34 = 0;
  if ((__this->fields).super.__IsReleased_k__BackingField != false) {
    return;
  }
  if (*(char *)&(__this->fields)._money == '\0') {
    return;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
    method = extraout_x1_00;
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
    method = extraout_x1_01;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
  }
  __this_01 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (__this_01 == (ACHLOMELAJE_o *)0x0) goto LAB_0366be30;
  uVar3 = ACHLOMELAJE__LFOIBFFCBCL(__this_01,(MethodInfo *)0x0);
  uVar4 = ACHLOMELAJE__KKAOKMLLBGL(__this_01,(MethodInfo *)0x0);
  pIVar5 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                     (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
  lVar6 = Method_System_Array_Empty<string>__;
  if (uVar3 == uVar4) {
    lVar9 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
    if (lVar9 == 0) {
      FUN_01b8167c(Method_System_Array_Empty<string>__);
      lVar9 = *(long *)(lVar6 + 0x38);
    }
    lVar9 = *(long *)(lVar9 + 0x10);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_01b81620();
    }
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_01ba7564();
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0x38) + 0x10);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_01b81620();
    }
    if (pIVar5 == (Il2CppObject *)0x0) goto LAB_0366be30;
    pIVar10 = pIVar5->klass;
    lVar6 = **(long **)(lVar6 + 0xb8);
    uVar1._0_1_ = (pIVar10->_2).rank;
    uVar1._1_1_ = (pIVar10->_2).minimumAlignment;
    uVar11 = (ulong)uVar1;
    uVar13 = StringLiteral_17774;
    if (uVar11 != 0) {
      piVar12 = &((pIVar10->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar12 + -2))->interfaceType ==
            (Il2CppClass *)BLEFOFGCKEF_TypeInfo) goto LAB_0366bde4;
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
  }
  else {
    lVar6 = FUN_01bab718(string___TypeInfo,2);
    local_34 = ACHLOMELAJE__LFOIBFFCBCL(__this_01,(MethodInfo *)0x0);
    pSVar8 = System_UInt32__ToString((uint32_t)&local_34,(MethodInfo *)0x0);
    if (lVar6 == 0) goto LAB_0366be30;
    if (*(int *)(lVar6 + 0x18) == 0) {
LAB_0366be34:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    *(undefined8 *)(lVar6 + 0x20) = pSVar8;
    thunk_FUN_01c20e04((undefined8 *)(lVar6 + 0x20),pSVar8);
    local_34 = ACHLOMELAJE__KKAOKMLLBGL(__this_01,(MethodInfo *)0x0);
    pSVar8 = System_UInt32__ToString((uint32_t)&local_34,(MethodInfo *)0x0);
    if (*(uint *)(lVar6 + 0x18) < 2) goto LAB_0366be34;
    *(System_String_o **)(lVar6 + 0x28) = pSVar8;
    thunk_FUN_01c20e04();
    if (pIVar5 == (Il2CppObject *)0x0) goto LAB_0366be30;
    pIVar10 = pIVar5->klass;
    uVar2._0_1_ = (pIVar10->_2).rank;
    uVar2._1_1_ = (pIVar10->_2).minimumAlignment;
    uVar11 = (ulong)uVar2;
    uVar13 = StringLiteral_18134;
    if (uVar11 != 0) {
      piVar12 = &((pIVar10->_1).interfaceOffsets)->offset;
      do {
        uVar13 = StringLiteral_18134;
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar12 + -2))->interfaceType ==
            (Il2CppClass *)BLEFOFGCKEF_TypeInfo) goto LAB_0366bde4;
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
        uVar13 = StringLiteral_18134;
      } while (uVar11 != 0);
    }
  }
  pVVar7 = (VirtualInvokeData *)FUN_01b81914(pIVar5,BLEFOFGCKEF_TypeInfo,0xc);
LAB_0366bdf4:
  pSVar8 = (System_String_o *)(*pVVar7->methodPtr)(pIVar5,uVar13,lVar6,pVVar7->method);
  __this_00 = *(Nekki_SF2_GUI_Menu_MenuExpPanel_o **)&(__this->fields).CMKBLDOABLB;
  if (__this_00 != (Nekki_SF2_GUI_Menu_MenuExpPanel_o *)0x0) {
    Nekki_SF2_GUI_Menu_MenuExpPanel__ShowHint(__this_00,pSVar8,(MethodInfo *)0x0);
    return;
  }
LAB_0366be30:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
LAB_0366bde4:
  pVVar7 = pIVar10->vtable + (*piVar12 + 0xc);
  goto LAB_0366bdf4;
}

