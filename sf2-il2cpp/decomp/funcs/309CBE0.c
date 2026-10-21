// Nekki.SF2.GUI.Fight.EndFightContent$$LHINFPOHDPH @ RVA 0x309CBE0

System_String_o *
Nekki_SF2_GUI_Fight_EndFightContent__LHINFPOHDPH
          (Nekki_SF2_GUI_Fight_EndFightContent_o *__this,int64_t DCDLMCEEOCC,MethodInfo *method)

{
  long *plVar1;
  ushort uVar2;
  int64_t iVar3;
  Il2CppObject *pIVar4;
  long lVar5;
  VirtualInvokeData *pVVar6;
  Il2CppObject *arg0;
  Il2CppObject *arg1;
  System_String_o *pSVar7;
  long lVar8;
  Il2CppClass *pIVar9;
  ulong uVar10;
  int32_t *piVar11;
  long lVar12;
  undefined8 uVar13;
  System_ValueTuple_long__long__o SVar14;
  int64_t local_48;
  int64_t local_40;
  int64_t local_38;
  
  if ((DAT_04566121 & 1) == 0) {
    FUN_01bab630(&Method_System_Array_Empty<string>__);
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&long_TypeInfo);
    FUN_01bab630(&StringLiteral_16715);
    FUN_01bab630(&StringLiteral_21610);
    FUN_01bab630(&StringLiteral_22359);
    __this = (Nekki_SF2_GUI_Fight_EndFightContent_o *)FUN_01bab630(&StringLiteral_19716);
    DAT_04566121 = 1;
  }
  SVar14 = Nekki_SF2_GUI_Fight_EndFightContent__KAJJINHAMII(__this,DCDLMCEEOCC,method);
  iVar3 = SVar14.fields.Item1;
  local_38 = iVar3;
  if (999 < DCDLMCEEOCC) {
    plVar1 = &StringLiteral_16715;
    if (DCDLMCEEOCC < 1000000000) {
      plVar1 = &StringLiteral_19716;
    }
    if (DCDLMCEEOCC < 1000000) {
      plVar1 = &StringLiteral_21610;
    }
    lVar12 = *plVar1;
    if (lVar12 != 0) {
      pIVar4 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                         (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
      lVar5 = Method_System_Array_Empty<string>__;
      lVar8 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
      if (lVar8 == 0) {
        FUN_01b8167c(Method_System_Array_Empty<string>__);
        lVar8 = *(long *)(lVar5 + 0x38);
      }
      lVar8 = *(long *)(lVar8 + 0x10);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_01b81620();
      }
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_01ba7564();
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0x38) + 0x10);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_01b81620();
      }
      if (pIVar4 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pIVar9 = pIVar4->klass;
      uVar13 = **(undefined8 **)(lVar5 + 0xb8);
      uVar2._0_1_ = (pIVar9->_2).rank;
      uVar2._1_1_ = (pIVar9->_2).minimumAlignment;
      uVar10 = (ulong)uVar2;
      if (uVar10 != 0) {
        piVar11 = &((pIVar9->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar11 + -2))->interfaceType ==
              (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
            pVVar6 = pIVar9->vtable + (*piVar11 + 0xc);
            goto LAB_0319cd9c;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      pVVar6 = (VirtualInvokeData *)FUN_01b81914(pIVar4,BLEFOFGCKEF_TypeInfo,0xc);
LAB_0319cd9c:
      pIVar4 = (Il2CppObject *)(*pVVar6->methodPtr)(pIVar4,lVar12,uVar13,pVVar6->method);
      local_40 = iVar3;
      arg0 = (Il2CppObject *)thunk_FUN_01bda448(long_TypeInfo,&local_40);
      local_48 = SVar14.fields.Item2;
      arg1 = (Il2CppObject *)thunk_FUN_01bda448(long_TypeInfo,&local_48);
      pSVar7 = System_String__Format(StringLiteral_22359,arg0,arg1,pIVar4,(MethodInfo *)0x0);
      return pSVar7;
    }
  }
  pSVar7 = System_Int64__ToString((int64_t)&local_38,(MethodInfo *)0x0);
  return pSVar7;
}

