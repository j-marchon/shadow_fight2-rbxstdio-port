// Nekki.SF2.GUI.Dialogs.Raids.RaidLeaguesDialog$$IAKHIFOFLGO @ RVA 0x3100434

void Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesDialog__IAKHIFOFLGO
               (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesDialog_o *__this,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  System_String_o *pSVar6;
  undefined8 uVar7;
  KKLJIDJBFEI_o *__this_00;
  int64_t iVar8;
  Il2CppObject *pIVar9;
  VirtualInvokeData *pVVar10;
  System_String_o *PFCGLNFFKFG;
  System_String_o *JONDDIMGADB;
  System_String_o *FCLHIDDAHIJ;
  System_String_o *pSVar11;
  long lVar12;
  bool FCCHAOBFMLN;
  long lVar13;
  long lVar14;
  Il2CppClass *pIVar15;
  ulong uVar16;
  int32_t *piVar17;
  Nekki_SF2_GUI_LabelAlias_o *pNVar18;
  System_String_o *pSVar19;
  undefined8 uVar20;
  bool LMOANJOPDGM;
  
  if ((DAT_045664b9 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_System_Array_Empty<string>__);
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&Nekki_Utils_GlobalTimer_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesDialog_IAKHIFOFLGO__);
    FUN_01bab630(&StringLiteral_2434);
    FUN_01bab630(&StringLiteral_167);
    FUN_01bab630(&StringLiteral_13795);
    FUN_01bab630(&StringLiteral_13800);
    FUN_01bab630(&StringLiteral_11759);
    FUN_01bab630(&StringLiteral_2086);
    FUN_01bab630(&StringLiteral_21451);
    FUN_01bab630(&StringLiteral_13796);
    FUN_01bab630(&StringLiteral_1);
    DAT_045664b9 = 1;
  }
  __this_00 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
  if (__this_00 == (KKLJIDJBFEI_o *)0x0) goto LAB_032000c8;
  iVar8 = KKLJIDJBFEI__HEDLNKCNMCI(__this_00,(MethodInfo *)0x0);
  pSVar6 = StringLiteral_2086;
  pSVar11 = StringLiteral_167;
  lVar13 = (__this->fields).PBACPHGLOFJ;
  pSVar19 = (System_String_o *)0x0;
  lVar12 = lVar13 - iVar8;
  if (lVar12 != 0 && iVar8 <= lVar13) {
    if (lVar12 < 1) {
      pSVar19 = (System_String_o *)0x0;
    }
    else {
      LMOANJOPDGM = 0xe0f < lVar12;
      pIVar9 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                         (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
      lVar13 = Method_System_Array_Empty<string>__;
      lVar14 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
      if (lVar14 == 0) {
        FUN_01b8167c(Method_System_Array_Empty<string>__);
        lVar14 = *(long *)(lVar13 + 0x38);
      }
      lVar14 = *(long *)(lVar14 + 0x10);
      if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
        lVar14 = FUN_01b81620();
      }
      if (*(int *)(lVar14 + 0xe0) == 0) {
        thunk_FUN_01ba7564();
      }
      lVar13 = *(long *)(*(long *)(lVar13 + 0x38) + 0x10);
      if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
        lVar13 = FUN_01b81620();
      }
      uVar7 = StringLiteral_11759;
      if (pIVar9 == (Il2CppObject *)0x0) goto LAB_032000c8;
      pIVar15 = pIVar9->klass;
      uVar20 = **(undefined8 **)(lVar13 + 0xb8);
      uVar1._0_1_ = (pIVar15->_2).rank;
      uVar1._1_1_ = (pIVar15->_2).minimumAlignment;
      uVar16 = (ulong)uVar1;
      if (uVar16 != 0) {
        piVar17 = &((pIVar15->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar17 + -2))->interfaceType ==
              (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
            pVVar10 = pIVar15->vtable + (*piVar17 + 0xc);
            goto LAB_031ffbac;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      pVVar10 = (VirtualInvokeData *)FUN_01b81914(pIVar9,BLEFOFGCKEF_TypeInfo,0xc);
LAB_031ffbac:
      pSVar19 = (System_String_o *)(*pVVar10->methodPtr)(pIVar9,uVar7,uVar20,pVVar10->method);
      iVar8 = lVar12;
      if (lVar12 < 0xe10) {
        JONDDIMGADB = (System_String_o *)0x0;
        FCLHIDDAHIJ = (System_String_o *)0x0;
        PFCGLNFFKFG = (System_String_o *)0x0;
        LMOANJOPDGM = true;
        pSVar11 = pSVar6;
        FCCHAOBFMLN = true;
      }
      else {
        pIVar9 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                           (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
        lVar13 = Method_System_Array_Empty<string>__;
        lVar14 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
        if (lVar14 == 0) {
          FUN_01b8167c(Method_System_Array_Empty<string>__);
          lVar14 = *(long *)(lVar13 + 0x38);
        }
        lVar14 = *(long *)(lVar14 + 0x10);
        if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
          lVar14 = FUN_01b81620();
        }
        if (*(int *)(lVar14 + 0xe0) == 0) {
          thunk_FUN_01ba7564();
        }
        lVar13 = *(long *)(*(long *)(lVar13 + 0x38) + 0x10);
        if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
          lVar13 = FUN_01b81620();
        }
        uVar7 = StringLiteral_13795;
        if (pIVar9 == (Il2CppObject *)0x0) goto LAB_032000c8;
        pIVar15 = pIVar9->klass;
        uVar20 = **(undefined8 **)(lVar13 + 0xb8);
        uVar2._0_1_ = (pIVar15->_2).rank;
        uVar2._1_1_ = (pIVar15->_2).minimumAlignment;
        uVar16 = (ulong)uVar2;
        if (uVar16 != 0) {
          piVar17 = &((pIVar15->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar17 + -2))->interfaceType ==
                (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
              pVVar10 = pIVar15->vtable + (*piVar17 + 0xc);
              goto LAB_031ffccc;
            }
            uVar16 = uVar16 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar16 != 0);
        }
        pVVar10 = (VirtualInvokeData *)FUN_01b81914(pIVar9,BLEFOFGCKEF_TypeInfo,0xc);
LAB_031ffccc:
        PFCGLNFFKFG = (System_String_o *)(*pVVar10->methodPtr)(pIVar9,uVar7,uVar20,pVVar10->method);
        if (lVar12 < 0xe10) {
          JONDDIMGADB = (System_String_o *)0x0;
          FCLHIDDAHIJ = (System_String_o *)0x0;
          pSVar19 = (System_String_o *)0x0;
          LMOANJOPDGM = true;
          pSVar11 = (System_String_o *)0x0;
          iVar8 = 0;
          FCCHAOBFMLN = false;
        }
        else {
          pIVar9 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                             (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
          lVar13 = Method_System_Array_Empty<string>__;
          lVar14 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
          if (lVar14 == 0) {
            FUN_01b8167c(Method_System_Array_Empty<string>__);
            lVar14 = *(long *)(lVar13 + 0x38);
          }
          lVar14 = *(long *)(lVar14 + 0x10);
          if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
            lVar14 = FUN_01b81620();
          }
          if (*(int *)(lVar14 + 0xe0) == 0) {
            thunk_FUN_01ba7564();
          }
          lVar13 = *(long *)(*(long *)(lVar13 + 0x38) + 0x10);
          if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
            lVar13 = FUN_01b81620();
          }
          uVar7 = StringLiteral_13796;
          if (pIVar9 == (Il2CppObject *)0x0) goto LAB_032000c8;
          pIVar15 = pIVar9->klass;
          uVar20 = **(undefined8 **)(lVar13 + 0xb8);
          uVar3._0_1_ = (pIVar15->_2).rank;
          uVar3._1_1_ = (pIVar15->_2).minimumAlignment;
          uVar16 = (ulong)uVar3;
          if (uVar16 != 0) {
            piVar17 = &((pIVar15->_1).interfaceOffsets)->offset;
            do {
              if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar17 + -2))->interfaceType ==
                  (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
                pVVar10 = pIVar15->vtable + (*piVar17 + 0xc);
                goto LAB_031ffdd8;
              }
              uVar16 = uVar16 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar16 != 0);
          }
          pVVar10 = (VirtualInvokeData *)FUN_01b81914(pIVar9,BLEFOFGCKEF_TypeInfo,0xc);
LAB_031ffdd8:
          JONDDIMGADB = (System_String_o *)
                        (*pVVar10->methodPtr)(pIVar9,uVar7,uVar20,pVVar10->method);
          if (lVar12 < 0xe10) {
            FCLHIDDAHIJ = (System_String_o *)0x0;
            LMOANJOPDGM = false;
            pSVar11 = (System_String_o *)0x0;
            iVar8 = 0;
            pSVar19 = (System_String_o *)0x0;
            FCCHAOBFMLN = LMOANJOPDGM;
          }
          else {
            pIVar9 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                               (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
            lVar13 = Method_System_Array_Empty<string>__;
            lVar14 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
            if (lVar14 == 0) {
              FUN_01b8167c(Method_System_Array_Empty<string>__);
              lVar14 = *(long *)(lVar13 + 0x38);
            }
            lVar14 = *(long *)(lVar14 + 0x10);
            if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
              lVar14 = FUN_01b81620();
            }
            if (*(int *)(lVar14 + 0xe0) == 0) {
              thunk_FUN_01ba7564();
            }
            lVar13 = *(long *)(*(long *)(lVar13 + 0x38) + 0x10);
            if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
              lVar13 = FUN_01b81620();
            }
            uVar7 = StringLiteral_13800;
            if (pIVar9 == (Il2CppObject *)0x0) goto LAB_032000c8;
            pIVar15 = pIVar9->klass;
            uVar20 = **(undefined8 **)(lVar13 + 0xb8);
            uVar4._0_1_ = (pIVar15->_2).rank;
            uVar4._1_1_ = (pIVar15->_2).minimumAlignment;
            uVar16 = (ulong)uVar4;
            if (uVar16 != 0) {
              piVar17 = &((pIVar15->_1).interfaceOffsets)->offset;
              do {
                if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar17 + -2))->interfaceType ==
                    (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
                  pVVar10 = pIVar15->vtable + (*piVar17 + 0xc);
                  goto LAB_031ffee4;
                }
                uVar16 = uVar16 - 1;
                piVar17 = piVar17 + 4;
              } while (uVar16 != 0);
            }
            pVVar10 = (VirtualInvokeData *)FUN_01b81914(pIVar9,BLEFOFGCKEF_TypeInfo,0xc);
LAB_031ffee4:
            FCLHIDDAHIJ = (System_String_o *)
                          (*pVVar10->methodPtr)(pIVar9,uVar7,uVar20,pVVar10->method);
            FCCHAOBFMLN = LMOANJOPDGM;
          }
        }
      }
      pSVar11 = Nekki_SF2_GUI_TimerLabel__GetTimeString
                          (iVar8,FCCHAOBFMLN,FCCHAOBFMLN,0xe0f < lVar12,0x1517f < lVar12,false,false
                           ,pSVar11,PFCGLNFFKFG,LMOANJOPDGM,LMOANJOPDGM,LMOANJOPDGM,0x1517f < lVar12
                           ,false,JONDDIMGADB,FCLHIDDAHIJ,StringLiteral_1,2,(MethodInfo *)0x0);
      pSVar19 = System_String__Concat(pSVar19,pSVar11,(MethodInfo *)0x0);
    }
  }
  pIVar9 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                     (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
  lVar12 = Method_System_Array_Empty<string>__;
  lVar13 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
  if (lVar13 == 0) {
    FUN_01b8167c(Method_System_Array_Empty<string>__);
    lVar13 = *(long *)(lVar12 + 0x38);
  }
  lVar13 = *(long *)(lVar13 + 0x10);
  if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
    lVar13 = FUN_01b81620();
  }
  if (*(int *)(lVar13 + 0xe0) == 0) {
    thunk_FUN_01ba7564();
  }
  lVar12 = *(long *)(*(long *)(lVar12 + 0x38) + 0x10);
  if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
    lVar12 = FUN_01b81620();
  }
  uVar7 = StringLiteral_21451;
  if (pIVar9 != (Il2CppObject *)0x0) {
    pIVar15 = pIVar9->klass;
    uVar20 = **(undefined8 **)(lVar12 + 0xb8);
    uVar5._0_1_ = (pIVar15->_2).rank;
    uVar5._1_1_ = (pIVar15->_2).minimumAlignment;
    uVar16 = (ulong)uVar5;
    if (uVar16 != 0) {
      piVar17 = &((pIVar15->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar17 + -2))->interfaceType ==
            (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
          pVVar10 = pIVar15->vtable + (*piVar17 + 0xc);
          goto LAB_03200054;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    pVVar10 = (VirtualInvokeData *)FUN_01b81914(pIVar9,BLEFOFGCKEF_TypeInfo,0xc);
LAB_03200054:
    pSVar11 = (System_String_o *)(*pVVar10->methodPtr)(pIVar9,uVar7,uVar20,pVVar10->method);
    pSVar11 = System_String__Concat(StringLiteral_2434,pSVar11,StringLiteral_167,(MethodInfo *)0x0);
    pNVar18 = (__this->fields)._timeLabel;
    pSVar11 = System_String__Concat(pSVar11,pSVar19,(MethodInfo *)0x0);
    if (pNVar18 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x032000c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(pNVar18->klass->vtable)._75_set_text.methodPtr)
                (pNVar18,pSVar11,(pNVar18->klass->vtable)._75_set_text.method);
      return;
    }
  }
LAB_032000c8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

