// Nekki.SF2.GUI.Dialogs.Raids.GeneralPlayerInfoView$$GGCDBGHJCAF @ RVA 0x32E8D48

void Nekki_SF2_GUI_Dialogs_Raids_GeneralPlayerInfoView__GGCDBGHJCAF
               (Nekki_SF2_GUI_Dialogs_Raids_GeneralPlayerInfoView_o *__this,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  undefined1 auVar9 [16];
  bool bVar10;
  KKLJIDJBFEI_o *__this_00;
  int64_t iVar11;
  PEEIMHCMDND_o *__this_01;
  SimpleJSON_JSONNode_o *a;
  int64_t iVar12;
  Il2CppObject *pIVar13;
  long lVar14;
  VirtualInvokeData *pVVar15;
  System_String_o *pSVar16;
  System_String_o *str1;
  System_String_o *str3;
  MethodInfo *in_x4;
  long lVar17;
  Il2CppClass *pIVar18;
  EOLFEKNCPLM_o *pEVar19;
  GKLPDMLELJF_o *pGVar20;
  ulong uVar21;
  int32_t *piVar22;
  int val2;
  uint val2_00;
  ulong uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  int32_t local_64;
  uint local_60;
  undefined4 uStack_5c;
  System_String_o *pSStack_58;
  
                    /* try { // try from 033e8d5c to 034e8d5f has its CatchHandler @ 033e8d64 */
                    /* try { // try from 033e8d60 to 034e8d83 has its CatchHandler @ 033e8c84 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033e8d5c with catch @ 033e8d64
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033e8d2c with catch @ 033e8d68
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033e8d18 with catch @ 033e8d6c
                        */
  if ((DAT_0456762a & 1) == 0) {
    FUN_01bab630(&Method_System_Array_Empty<string>__);
                    /* try { // try from 033e8d84 to 034e8d87 has its CatchHandler @ 033e8db0 */
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
                    /* try { // try from 033e8d88 to 034e8dbf has its CatchHandler @ 033e8c84 */
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&SimpleJSON_JSONNode_TypeInfo);
                    /* catch() { ... } // from try @ 033e8d84 with catch @ 033e8db0 */
    FUN_01bab630(&System_Math_TypeInfo);
                    /* try { // try from 033e8dc0 to 034e8dc7 has its CatchHandler @ 033e8ddc */
    FUN_01bab630(&StringLiteral_167);
                    /* try { // try from 033e8dc8 to 034e8dd3 has its CatchHandler @ 033e8c84 */
    FUN_01bab630(&StringLiteral_19378);
                    /* try { // try from 033e8dd4 to 034e8ddb has its CatchHandler @ 033e8ddc */
    FUN_01bab630(&StringLiteral_13800);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 033e8dc0 with catch @ 033e8ddc
                       catch(type#2 @ 00000000) { ... } // from try @ 033e8dd4 with catch @ 033e8ddc
                        */
    FUN_01bab630(&StringLiteral_13794);
    FUN_01bab630(&StringLiteral_13796);
    FUN_01bab630(&StringLiteral_1);
    FUN_01bab630(&StringLiteral_19376);
    FUN_01bab630(&StringLiteral_13788);
    DAT_0456762a = 1;
  }
  local_60 = 0;
  uStack_5c = 0;
  pSStack_58 = (System_String_o *)0x0;
  local_64 = 0;
  __this_00 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
  if (__this_00 == (KKLJIDJBFEI_o *)0x0) {
LAB_033e96cc:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  iVar11 = KKLJIDJBFEI__HEDLNKCNMCI(__this_00,(MethodInfo *)0x0);
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo);
  }
  __this_01 = HJPEKDOPBHN__JHBLAJKKPFG((MethodInfo *)0x0);
  if (__this_01 == (PEEIMHCMDND_o *)0x0) goto LAB_033e96cc;
  a = PEEIMHCMDND__BHCOOILLMGA
                (__this_01,(__this->fields).super.MLAAJICBOAD,&pSStack_58,(MethodInfo *)0x0);
  if ((SimpleJSON_JSONNode_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(SimpleJSON_JSONNode_TypeInfo);
  }
  bVar10 = SimpleJSON_JSONNode__op_Equality(a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar10) {
    return;
  }
  iVar12 = PEEIMHCMDND__DKBMICAMHBE(__this_01,a,(MethodInfo *)0x0);
  if (iVar12 < 1) {
    pIVar13 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                        (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    lVar14 = Method_System_Array_Empty<string>__;
    lVar17 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
    if (lVar17 == 0) {
      FUN_01b8167c(Method_System_Array_Empty<string>__);
      lVar17 = *(long *)(lVar14 + 0x38);
    }
    lVar17 = *(long *)(lVar17 + 0x10);
    if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
      lVar17 = FUN_01b81620();
    }
    if (*(int *)(lVar17 + 0xe0) == 0) {
      thunk_FUN_01ba7564();
    }
    lVar14 = *(long *)(*(long *)(lVar14 + 0x38) + 0x10);
    if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
      lVar14 = FUN_01b81620();
    }
    uVar25 = StringLiteral_19378;
    if (pIVar13 != (Il2CppObject *)0x0) {
      pIVar18 = pIVar13->klass;
      uVar24 = **(undefined8 **)(lVar14 + 0xb8);
      uVar2._0_1_ = (pIVar18->_2).rank;
      uVar2._1_1_ = (pIVar18->_2).minimumAlignment;
      uVar21 = (ulong)uVar2;
      if (uVar21 != 0) {
        piVar22 = &((pIVar18->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar22 + -2))->interfaceType ==
              (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
            pVVar15 = pIVar18->vtable + (*piVar22 + 0xc);
            goto LAB_033e921c;
          }
          uVar21 = uVar21 - 1;
          piVar22 = piVar22 + 4;
        } while (uVar21 != 0);
      }
      pVVar15 = (VirtualInvokeData *)FUN_01b81914(pIVar13,BLEFOFGCKEF_TypeInfo,0xc);
LAB_033e921c:
      pSVar16 = (System_String_o *)(*pVVar15->methodPtr)(pIVar13,uVar25,uVar24,pVVar15->method);
      goto LAB_033e96a0;
    }
    goto LAB_033e96cc;
  }
  pIVar13 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                      (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
  lVar14 = Method_System_Array_Empty<string>__;
  lVar17 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
  if (lVar17 == 0) {
    FUN_01b8167c(Method_System_Array_Empty<string>__);
    lVar17 = *(long *)(lVar14 + 0x38);
  }
  lVar17 = *(long *)(lVar17 + 0x10);
  if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
    lVar17 = FUN_01b81620();
  }
  if (*(int *)(lVar17 + 0xe0) == 0) {
    thunk_FUN_01ba7564();
  }
  lVar14 = *(long *)(*(long *)(lVar14 + 0x38) + 0x10);
  if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
    lVar14 = FUN_01b81620();
  }
  uVar25 = StringLiteral_19376;
  if (pIVar13 == (Il2CppObject *)0x0) goto LAB_033e96cc;
  pIVar18 = pIVar13->klass;
  uVar24 = **(undefined8 **)(lVar14 + 0xb8);
  uVar1._0_1_ = (pIVar18->_2).rank;
  uVar1._1_1_ = (pIVar18->_2).minimumAlignment;
  uVar21 = (ulong)uVar1;
  uVar23 = iVar11 - iVar12;
  if (uVar21 != 0) {
    piVar22 = &((pIVar18->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar22 + -2))->interfaceType ==
          (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
        pVVar15 = pIVar18->vtable + (*piVar22 + 0xc);
        goto LAB_033e9068;
      }
      uVar21 = uVar21 - 1;
      piVar22 = piVar22 + 4;
    } while (uVar21 != 0);
  }
  pVVar15 = (VirtualInvokeData *)FUN_01b81914(pIVar13,BLEFOFGCKEF_TypeInfo,0xc);
LAB_033e9068:
  pSVar16 = (System_String_o *)(*pVVar15->methodPtr)(pIVar13,uVar25,uVar24,pVVar15->method);
  if ((long)uVar23 < 0x3c) goto LAB_033e96a0;
  pEVar19 = (__this->fields).super.MLAAJICBOAD;
  if ((pEVar19 == (EOLFEKNCPLM_o *)0x0) ||
     (pGVar20 = (pEVar19->fields).MCOPPCNPAHF, pGVar20 == (GKLPDMLELJF_o *)0x0)) goto LAB_033e96cc;
  if ((pGVar20->fields).PFJPLCAIGJH != 1) goto LAB_033e96a0;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = uVar23;
  val2 = SUB164(auVar9 * ZEXT816(0xc22e450672894ab7),10);
  val2_00 = ((int)uVar23 + ((uint)(uVar23 / 0xe10) & 0x1fffffff) * -0xe10 & 0xffff) / 0x3c;
  uStack_5c = (undefined4)((uVar23 % 0x15180) / 0xe10);
  local_60 = val2_00;
  if (val2 < 1) {
    if ((uint)(uVar23 % 0x15180) < 0xe10) {
      if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      local_60 = System_Math__Max(1,val2_00,(MethodInfo *)0x0);
      pSVar16 = System_Int32__ToString((int32_t)&local_60,(MethodInfo *)0x0);
      pIVar13 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                          (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
      lVar14 = Method_System_Array_Empty<string>__;
      lVar17 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
      if (lVar17 == 0) {
        FUN_01b8167c(Method_System_Array_Empty<string>__);
        lVar17 = *(long *)(lVar14 + 0x38);
      }
      lVar17 = *(long *)(lVar17 + 0x10);
      if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
        lVar17 = FUN_01b81620();
      }
      if (*(int *)(lVar17 + 0xe0) == 0) {
        thunk_FUN_01ba7564();
      }
      lVar14 = *(long *)(*(long *)(lVar14 + 0x38) + 0x10);
      if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
        lVar14 = FUN_01b81620();
      }
      uVar25 = StringLiteral_13800;
      if (pIVar13 == (Il2CppObject *)0x0) goto LAB_033e96cc;
      pIVar18 = pIVar13->klass;
      uVar24 = **(undefined8 **)(lVar14 + 0xb8);
      uVar4._0_1_ = (pIVar18->_2).rank;
      uVar4._1_1_ = (pIVar18->_2).minimumAlignment;
      uVar21 = (ulong)uVar4;
      if (uVar21 != 0) {
        piVar22 = &((pIVar18->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar22 + -2))->interfaceType ==
              (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
            pVVar15 = pIVar18->vtable + (*piVar22 + 0xc);
            goto LAB_033e94c4;
          }
          uVar21 = uVar21 - 1;
          piVar22 = piVar22 + 4;
        } while (uVar21 != 0);
      }
      pVVar15 = (VirtualInvokeData *)FUN_01b81914(pIVar13,BLEFOFGCKEF_TypeInfo,0xc);
LAB_033e94c4:
      str1 = (System_String_o *)(*pVVar15->methodPtr)(pIVar13,uVar25,uVar24,pVVar15->method);
      pIVar13 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                          (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
      lVar14 = Method_System_Array_Empty<string>__;
      lVar17 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
      if (lVar17 == 0) {
        FUN_01b8167c(Method_System_Array_Empty<string>__);
        lVar17 = *(long *)(lVar14 + 0x38);
      }
      lVar17 = *(long *)(lVar17 + 0x10);
      if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
        lVar17 = FUN_01b81620();
      }
      if (*(int *)(lVar17 + 0xe0) == 0) {
        thunk_FUN_01ba7564();
      }
      lVar14 = *(long *)(*(long *)(lVar14 + 0x38) + 0x10);
      if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
        lVar14 = FUN_01b81620();
      }
      if (pIVar13 == (Il2CppObject *)0x0) goto LAB_033e96cc;
      pIVar18 = pIVar13->klass;
      uVar25 = **(undefined8 **)(lVar14 + 0xb8);
      uVar7._0_1_ = (pIVar18->_2).rank;
      uVar7._1_1_ = (pIVar18->_2).minimumAlignment;
      uVar21 = (ulong)uVar7;
      if (uVar21 != 0) {
        piVar22 = &((pIVar18->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar22 + -2))->interfaceType ==
              (Il2CppClass *)BLEFOFGCKEF_TypeInfo) goto LAB_033e9658;
          uVar21 = uVar21 - 1;
          piVar22 = piVar22 + 4;
        } while (uVar21 != 0);
      }
    }
    else {
      pSVar16 = System_Int32__ToString((int32_t)&uStack_5c,(MethodInfo *)0x0);
      pIVar13 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                          (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
      lVar14 = Method_System_Array_Empty<string>__;
      lVar17 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
      if (lVar17 == 0) {
        FUN_01b8167c(Method_System_Array_Empty<string>__);
        lVar17 = *(long *)(lVar14 + 0x38);
      }
      lVar17 = *(long *)(lVar17 + 0x10);
      if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
        lVar17 = FUN_01b81620();
      }
      if (*(int *)(lVar17 + 0xe0) == 0) {
        thunk_FUN_01ba7564();
      }
      lVar14 = *(long *)(*(long *)(lVar14 + 0x38) + 0x10);
      if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
        lVar14 = FUN_01b81620();
      }
      uVar25 = StringLiteral_13796;
      if (pIVar13 == (Il2CppObject *)0x0) goto LAB_033e96cc;
      pIVar18 = pIVar13->klass;
      uVar24 = **(undefined8 **)(lVar14 + 0xb8);
      uVar6._0_1_ = (pIVar18->_2).rank;
      uVar6._1_1_ = (pIVar18->_2).minimumAlignment;
      uVar21 = (ulong)uVar6;
      if (uVar21 != 0) {
        piVar22 = &((pIVar18->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar22 + -2))->interfaceType ==
              (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
            pVVar15 = pIVar18->vtable + (*piVar22 + 0xc);
            goto LAB_033e9590;
          }
          uVar21 = uVar21 - 1;
          piVar22 = piVar22 + 4;
        } while (uVar21 != 0);
      }
      pVVar15 = (VirtualInvokeData *)FUN_01b81914(pIVar13,BLEFOFGCKEF_TypeInfo,0xc);
LAB_033e9590:
      str1 = (System_String_o *)(*pVVar15->methodPtr)(pIVar13,uVar25,uVar24,pVVar15->method);
      pIVar13 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                          (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
      lVar14 = Method_System_Array_Empty<string>__;
      lVar17 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
      if (lVar17 == 0) {
        FUN_01b8167c(Method_System_Array_Empty<string>__);
        lVar17 = *(long *)(lVar14 + 0x38);
      }
      lVar17 = *(long *)(lVar17 + 0x10);
      if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
        lVar17 = FUN_01b81620();
      }
      if (*(int *)(lVar17 + 0xe0) == 0) {
        thunk_FUN_01ba7564();
      }
      lVar14 = *(long *)(*(long *)(lVar14 + 0x38) + 0x10);
      if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
        lVar14 = FUN_01b81620();
      }
      if (pIVar13 == (Il2CppObject *)0x0) goto LAB_033e96cc;
      pIVar18 = pIVar13->klass;
      uVar25 = **(undefined8 **)(lVar14 + 0xb8);
      uVar8._0_1_ = (pIVar18->_2).rank;
      uVar8._1_1_ = (pIVar18->_2).minimumAlignment;
      uVar21 = (ulong)uVar8;
      if (uVar21 != 0) {
        piVar22 = &((pIVar18->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar22 + -2))->interfaceType ==
              (Il2CppClass *)BLEFOFGCKEF_TypeInfo) goto LAB_033e9658;
          uVar21 = uVar21 - 1;
          piVar22 = piVar22 + 4;
        } while (uVar21 != 0);
      }
    }
  }
  else {
    if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    local_64 = System_Math__Min(0xb4,val2,(MethodInfo *)0x0);
    pSVar16 = System_Int32__ToString((int32_t)&local_64,(MethodInfo *)0x0);
    pIVar13 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                        (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    lVar14 = Method_System_Array_Empty<string>__;
    lVar17 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
    if (lVar17 == 0) {
      FUN_01b8167c(Method_System_Array_Empty<string>__);
      lVar17 = *(long *)(lVar14 + 0x38);
    }
    lVar17 = *(long *)(lVar17 + 0x10);
    if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
      lVar17 = FUN_01b81620();
    }
    if (*(int *)(lVar17 + 0xe0) == 0) {
      thunk_FUN_01ba7564();
    }
    lVar14 = *(long *)(*(long *)(lVar14 + 0x38) + 0x10);
    if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
      lVar14 = FUN_01b81620();
    }
    uVar25 = StringLiteral_13794;
    if (pIVar13 == (Il2CppObject *)0x0) goto LAB_033e96cc;
    pIVar18 = pIVar13->klass;
    uVar24 = **(undefined8 **)(lVar14 + 0xb8);
    uVar3._0_1_ = (pIVar18->_2).rank;
    uVar3._1_1_ = (pIVar18->_2).minimumAlignment;
    uVar21 = (ulong)uVar3;
    if (uVar21 != 0) {
      piVar22 = &((pIVar18->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar22 + -2))->interfaceType ==
            (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
          pVVar15 = pIVar18->vtable + (*piVar22 + 0xc);
          goto LAB_033e9338;
        }
        uVar21 = uVar21 - 1;
        piVar22 = piVar22 + 4;
      } while (uVar21 != 0);
    }
    pVVar15 = (VirtualInvokeData *)FUN_01b81914(pIVar13,BLEFOFGCKEF_TypeInfo,0xc);
LAB_033e9338:
    str1 = (System_String_o *)(*pVVar15->methodPtr)(pIVar13,uVar25,uVar24,pVVar15->method);
    pIVar13 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                        (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    lVar14 = Method_System_Array_Empty<string>__;
    lVar17 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
    if (lVar17 == 0) {
      FUN_01b8167c(Method_System_Array_Empty<string>__);
      lVar17 = *(long *)(lVar14 + 0x38);
    }
    lVar17 = *(long *)(lVar17 + 0x10);
    if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
      lVar17 = FUN_01b81620();
    }
    if (*(int *)(lVar17 + 0xe0) == 0) {
      thunk_FUN_01ba7564();
    }
    lVar14 = *(long *)(*(long *)(lVar14 + 0x38) + 0x10);
    if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
      lVar14 = FUN_01b81620();
    }
    if (pIVar13 == (Il2CppObject *)0x0) goto LAB_033e96cc;
    pIVar18 = pIVar13->klass;
    uVar25 = **(undefined8 **)(lVar14 + 0xb8);
    uVar5._0_1_ = (pIVar18->_2).rank;
    uVar5._1_1_ = (pIVar18->_2).minimumAlignment;
    uVar21 = (ulong)uVar5;
    if (uVar21 != 0) {
      piVar22 = &((pIVar18->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar22 + -2))->interfaceType ==
            (Il2CppClass *)BLEFOFGCKEF_TypeInfo) goto LAB_033e9658;
        uVar21 = uVar21 - 1;
        piVar22 = piVar22 + 4;
      } while (uVar21 != 0);
    }
  }
  uVar24 = StringLiteral_13788;
  pVVar15 = (VirtualInvokeData *)FUN_01b81914(pIVar13,BLEFOFGCKEF_TypeInfo,0xc);
LAB_033e9668:
  str3 = (System_String_o *)(*pVVar15->methodPtr)(pIVar13,uVar24,uVar25,pVVar15->method);
  in_x4 = (MethodInfo *)0x0;
  pSVar16 = System_String__Concat(pSVar16,str1,StringLiteral_167,str3,(MethodInfo *)0x0);
LAB_033e96a0:
  Nekki_SF2_GUI_Dialogs_Raids_GeneralPlayerInfoView__LFENGGKOJDO(__this,6,pSVar16,false,in_x4);
  return;
LAB_033e9658:
  pVVar15 = pIVar18->vtable + (*piVar22 + 0xc);
  uVar24 = StringLiteral_13788;
  goto LAB_033e9668;
}

