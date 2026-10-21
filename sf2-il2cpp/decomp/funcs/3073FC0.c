// Nekki.SF2.GUI.Dialogs.Raids.RaidTopHundredDialog$$KKHNLLICFOO @ RVA 0x3073FC0

void Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog__KKHNLLICFOO
               (Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog_o *__this,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  long lVar5;
  undefined8 uVar6;
  KKLJIDJBFEI_o *__this_00;
  int64_t iVar7;
  Il2CppObject *pIVar8;
  VirtualInvokeData *pVVar9;
  System_String_o *str0;
  System_String_o *PFCGLNFFKFG;
  System_String_o *JONDDIMGADB;
  System_String_o *FCLHIDDAHIJ;
  System_String_o *pSVar10;
  System_Action_o *CJNHFNHJHPE;
  bool FCCHAOBFMLN;
  long lVar11;
  long lVar12;
  Il2CppClass *pIVar13;
  ulong uVar14;
  int32_t *piVar15;
  bool LMOANJOPDGM;
  undefined8 uVar16;
  System_String_o *FJDJFJNEEJI;
  System_String_o *str1;
  Nekki_SF2_GUI_LabelAlias_o *pNVar17;
  
  if ((DAT_04565fa2 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_System_Array_Empty<string>__);
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&Nekki_Utils_GlobalTimer_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog_IAKHIFOFLGO__);
    FUN_01bab630(&StringLiteral_167);
    FUN_01bab630(&StringLiteral_13795);
    FUN_01bab630(&StringLiteral_13800);
    FUN_01bab630(&StringLiteral_4951);
    FUN_01bab630(&StringLiteral_2086);
    FUN_01bab630(&StringLiteral_13796);
    FUN_01bab630(&StringLiteral_1);
    DAT_04565fa2 = 1;
  }
  __this_00 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
  if (__this_00 != (KKLJIDJBFEI_o *)0x0) {
    iVar7 = KKLJIDJBFEI__HEDLNKCNMCI(__this_00,(MethodInfo *)0x0);
    FJDJFJNEEJI = StringLiteral_2086;
    pSVar10 = StringLiteral_167;
    lVar11 = (__this->fields).PBACPHGLOFJ;
    pNVar17 = (__this->fields)._titleLabel;
    lVar5 = lVar11 - iVar7;
    if (lVar5 == 0 || lVar11 < iVar7) {
      lVar5 = 0;
    }
    LMOANJOPDGM = 0xe0f < lVar5;
    pIVar8 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                       (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    lVar11 = Method_System_Array_Empty<string>__;
    lVar12 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
    if (lVar12 == 0) {
      FUN_01b8167c(Method_System_Array_Empty<string>__);
      lVar12 = *(long *)(lVar11 + 0x38);
    }
    lVar12 = *(long *)(lVar12 + 0x10);
    if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = FUN_01b81620();
    }
    if (*(int *)(lVar12 + 0xe0) == 0) {
      thunk_FUN_01ba7564();
    }
    lVar11 = *(long *)(*(long *)(lVar11 + 0x38) + 0x10);
    if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = FUN_01b81620();
    }
    uVar6 = StringLiteral_4951;
    if (pIVar8 != (Il2CppObject *)0x0) {
      pIVar13 = pIVar8->klass;
      uVar16 = **(undefined8 **)(lVar11 + 0xb8);
      uVar1._0_1_ = (pIVar13->_2).rank;
      uVar1._1_1_ = (pIVar13->_2).minimumAlignment;
      uVar14 = (ulong)uVar1;
      if (uVar14 != 0) {
        piVar15 = &((pIVar13->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar15 + -2))->interfaceType ==
              (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
            pVVar9 = pIVar13->vtable + (*piVar15 + 0xc);
            goto LAB_031741ac;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      pVVar9 = (VirtualInvokeData *)FUN_01b81914(pIVar8,BLEFOFGCKEF_TypeInfo,0xc);
LAB_031741ac:
      str0 = (System_String_o *)(*pVVar9->methodPtr)(pIVar8,uVar6,uVar16,pVVar9->method);
      str1 = StringLiteral_167;
      iVar7 = lVar5;
      if (lVar5 < 0xe10) {
        JONDDIMGADB = (System_String_o *)0x0;
        FCLHIDDAHIJ = (System_String_o *)0x0;
        PFCGLNFFKFG = (System_String_o *)0x0;
        LMOANJOPDGM = true;
        FCCHAOBFMLN = true;
      }
      else {
        pIVar8 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                           (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
        lVar11 = Method_System_Array_Empty<string>__;
        lVar12 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
        if (lVar12 == 0) {
          FUN_01b8167c(Method_System_Array_Empty<string>__);
          lVar12 = *(long *)(lVar11 + 0x38);
        }
        lVar12 = *(long *)(lVar12 + 0x10);
        if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
          lVar12 = FUN_01b81620();
        }
        if (*(int *)(lVar12 + 0xe0) == 0) {
          thunk_FUN_01ba7564();
        }
        lVar11 = *(long *)(*(long *)(lVar11 + 0x38) + 0x10);
        if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = FUN_01b81620();
        }
        uVar6 = StringLiteral_13795;
        if (pIVar8 == (Il2CppObject *)0x0) goto LAB_03174658;
        pIVar13 = pIVar8->klass;
        uVar16 = **(undefined8 **)(lVar11 + 0xb8);
        uVar2._0_1_ = (pIVar13->_2).rank;
        uVar2._1_1_ = (pIVar13->_2).minimumAlignment;
        uVar14 = (ulong)uVar2;
        if (uVar14 != 0) {
          piVar15 = &((pIVar13->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar15 + -2))->interfaceType ==
                (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
              pVVar9 = pIVar13->vtable + (*piVar15 + 0xc);
              goto LAB_031742e0;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        pVVar9 = (VirtualInvokeData *)FUN_01b81914(pIVar8,BLEFOFGCKEF_TypeInfo,0xc);
LAB_031742e0:
        PFCGLNFFKFG = (System_String_o *)(*pVVar9->methodPtr)(pIVar8,uVar6,uVar16,pVVar9->method);
        if (lVar5 < 0xe10) {
          JONDDIMGADB = (System_String_o *)0x0;
          FCLHIDDAHIJ = (System_String_o *)0x0;
          FJDJFJNEEJI = (System_String_o *)0x0;
          FCCHAOBFMLN = false;
          str1 = (System_String_o *)0x0;
          str0 = (System_String_o *)0x0;
          pNVar17 = (Nekki_SF2_GUI_LabelAlias_o *)0x0;
          LMOANJOPDGM = true;
          iVar7 = 0;
        }
        else {
          pIVar8 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                             (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
          lVar11 = Method_System_Array_Empty<string>__;
          lVar12 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
          if (lVar12 == 0) {
            FUN_01b8167c(Method_System_Array_Empty<string>__);
            lVar12 = *(long *)(lVar11 + 0x38);
          }
          lVar12 = *(long *)(lVar12 + 0x10);
          if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
            lVar12 = FUN_01b81620();
          }
          if (*(int *)(lVar12 + 0xe0) == 0) {
            thunk_FUN_01ba7564();
          }
          lVar11 = *(long *)(*(long *)(lVar11 + 0x38) + 0x10);
          if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
            lVar11 = FUN_01b81620();
          }
          uVar6 = StringLiteral_13796;
          if (pIVar8 == (Il2CppObject *)0x0) goto LAB_03174658;
          pIVar13 = pIVar8->klass;
          uVar16 = **(undefined8 **)(lVar11 + 0xb8);
          uVar3._0_1_ = (pIVar13->_2).rank;
          uVar3._1_1_ = (pIVar13->_2).minimumAlignment;
          uVar14 = (ulong)uVar3;
          if (uVar14 != 0) {
            piVar15 = &((pIVar13->_1).interfaceOffsets)->offset;
            do {
              if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar15 + -2))->interfaceType ==
                  (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
                pVVar9 = pIVar13->vtable + (*piVar15 + 0xc);
                goto LAB_031743fc;
              }
              uVar14 = uVar14 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar14 != 0);
          }
          pVVar9 = (VirtualInvokeData *)FUN_01b81914(pIVar8,BLEFOFGCKEF_TypeInfo,0xc);
LAB_031743fc:
          JONDDIMGADB = (System_String_o *)(*pVVar9->methodPtr)(pIVar8,uVar6,uVar16,pVVar9->method);
          if (lVar5 < 0xe10) {
            FCLHIDDAHIJ = (System_String_o *)0x0;
            LMOANJOPDGM = false;
            FJDJFJNEEJI = (System_String_o *)0x0;
            FCCHAOBFMLN = false;
            str1 = (System_String_o *)0x0;
            str0 = (System_String_o *)0x0;
            pNVar17 = (Nekki_SF2_GUI_LabelAlias_o *)0x0;
            iVar7 = 0;
          }
          else {
            pIVar8 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                               (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
            lVar11 = Method_System_Array_Empty<string>__;
            lVar12 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
            if (lVar12 == 0) {
              FUN_01b8167c(Method_System_Array_Empty<string>__);
              lVar12 = *(long *)(lVar11 + 0x38);
            }
            lVar12 = *(long *)(lVar12 + 0x10);
            if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
              lVar12 = FUN_01b81620();
            }
            if (*(int *)(lVar12 + 0xe0) == 0) {
              thunk_FUN_01ba7564();
            }
            lVar11 = *(long *)(*(long *)(lVar11 + 0x38) + 0x10);
            if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
              lVar11 = FUN_01b81620();
            }
            uVar6 = StringLiteral_13800;
            if (pIVar8 == (Il2CppObject *)0x0) goto LAB_03174658;
            pIVar13 = pIVar8->klass;
            uVar16 = **(undefined8 **)(lVar11 + 0xb8);
            uVar4._0_1_ = (pIVar13->_2).rank;
            uVar4._1_1_ = (pIVar13->_2).minimumAlignment;
            uVar14 = (ulong)uVar4;
            if (uVar14 != 0) {
              piVar15 = &((pIVar13->_1).interfaceOffsets)->offset;
              do {
                if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar15 + -2))->interfaceType ==
                    (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
                  pVVar9 = pIVar13->vtable + (*piVar15 + 0xc);
                  goto LAB_03174518;
                }
                uVar14 = uVar14 - 1;
                piVar15 = piVar15 + 4;
              } while (uVar14 != 0);
            }
            pVVar9 = (VirtualInvokeData *)FUN_01b81914(pIVar8,BLEFOFGCKEF_TypeInfo,0xc);
LAB_03174518:
            FCLHIDDAHIJ = (System_String_o *)
                          (*pVVar9->methodPtr)(pIVar8,uVar6,uVar16,pVVar9->method);
            FJDJFJNEEJI = pSVar10;
            FCCHAOBFMLN = LMOANJOPDGM;
          }
        }
      }
      pSVar10 = Nekki_SF2_GUI_TimerLabel__GetTimeString
                          (iVar7,FCCHAOBFMLN,FCCHAOBFMLN,0xe0f < lVar5,0x1517f < lVar5,false,false,
                           FJDJFJNEEJI,PFCGLNFFKFG,LMOANJOPDGM,LMOANJOPDGM,LMOANJOPDGM,
                           0x1517f < lVar5,false,JONDDIMGADB,FCLHIDDAHIJ,StringLiteral_1,2,
                           (MethodInfo *)0x0);
      pSVar10 = System_String__Concat(str0,str1,pSVar10,(MethodInfo *)0x0);
      if (pNVar17 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
        (*(pNVar17->klass->vtable)._75_set_text.methodPtr)
                  (pNVar17,pSVar10,(pNVar17->klass->vtable)._75_set_text.method);
        if (lVar5 == 0) {
          CJNHFNHJHPE = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
          System_Action___ctor();
          if ((Nekki_Utils_GlobalTimer_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          Nekki_Utils_GlobalTimer__remove_OnTick(CJNHFNHJHPE,(MethodInfo *)0x0);
          return;
        }
        return;
      }
    }
  }
LAB_03174658:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

