// Nekki.SF2.GUI.Profile.BattlePassPanel$$IAKHIFOFLGO @ RVA 0x3590E84

void Nekki_SF2_GUI_Profile_BattlePassPanel__IAKHIFOFLGO
               (Nekki_SF2_GUI_Profile_BattlePassPanel_o *__this,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  undefined8 uVar5;
  EGMONPGHHDP_o *__this_00;
  int64_t NFBEBOIDJLL;
  System_Action_o *CJNHFNHJHPE;
  LabelButton_o *pLVar6;
  Il2CppObject *pIVar7;
  long lVar8;
  VirtualInvokeData *pVVar9;
  System_String_o *pSVar10;
  System_String_o *JONDDIMGADB;
  System_String_o *FCLHIDDAHIJ;
  System_String_o *EFIHACGLMNA;
  MethodInfo *extraout_x1;
  long lVar11;
  Il2CppClass *pIVar12;
  ulong uVar13;
  int32_t *piVar14;
  Nekki_SF2_GUI_LabelAlias_o *pNVar15;
  undefined8 uVar16;
  
  if ((DAT_04568d74 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_System_Array_Empty<string>__);
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Profile_BattlePassPanel_IAKHIFOFLGO__);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&Nekki_Utils_GlobalTimer_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&StringLiteral_255);
    FUN_01bab630(&StringLiteral_9679);
    FUN_01bab630(&StringLiteral_13795);
    FUN_01bab630(&StringLiteral_13800);
    FUN_01bab630(&StringLiteral_17850);
    FUN_01bab630(&StringLiteral_13796);
    FUN_01bab630(&StringLiteral_1);
    FUN_01bab630(&StringLiteral_13805);
    FUN_01bab630(&StringLiteral_16774);
    DAT_04568d74 = 1;
    method = extraout_x1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
  }
  __this_00 = HJPEKDOPBHN__IAALPCFKGEK((MethodInfo *)0x0);
  if (__this_00 == (EGMONPGHHDP_o *)0x0) goto LAB_03691498;
  NFBEBOIDJLL = EGMONPGHHDP__IEMNJCLKOIP(__this_00,(MethodInfo *)0x0);
  if (NFBEBOIDJLL < 1) {
    CJNHFNHJHPE = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
    System_Action___ctor();
    if ((Nekki_Utils_GlobalTimer_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    Nekki_Utils_GlobalTimer__remove_OnTick(CJNHFNHJHPE,(MethodInfo *)0x0);
    pLVar6 = (__this->fields)._btnGetReward;
    if (pLVar6 == (LabelButton_o *)0x0) goto LAB_03691498;
    UnityEngine_UI_Selectable__set_interactable
              ((UnityEngine_UI_Selectable_o *)pLVar6,false,(MethodInfo *)0x0);
    pLVar6 = (__this->fields)._btnBuyPass;
    if (pLVar6 == (LabelButton_o *)0x0) goto LAB_03691498;
    UnityEngine_UI_Selectable__set_interactable
              ((UnityEngine_UI_Selectable_o *)pLVar6,false,(MethodInfo *)0x0);
    JJPNLEPEAFM__JNDPLPKDPCP
              (StringLiteral_17850,StringLiteral_16774,StringLiteral_9679,StringLiteral_1,
               (System_Action_object__o *)0x0,1,0,false,false,StringLiteral_1,true,true,true,true,
               (MethodInfo *)0x0);
    NFBEBOIDJLL = 0;
  }
  pNVar15 = (__this->fields)._timeLabel;
  pIVar7 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                     (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
  lVar8 = Method_System_Array_Empty<string>__;
  lVar11 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
  if (lVar11 == 0) {
    FUN_01b8167c(Method_System_Array_Empty<string>__);
    lVar11 = *(long *)(lVar8 + 0x38);
  }
  lVar11 = *(long *)(lVar11 + 0x10);
  if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = FUN_01b81620();
  }
  if (*(int *)(lVar11 + 0xe0) == 0) {
    thunk_FUN_01ba7564();
  }
  lVar8 = *(long *)(*(long *)(lVar8 + 0x38) + 0x10);
  if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_01b81620();
  }
  uVar5 = StringLiteral_13795;
  if (pIVar7 != (Il2CppObject *)0x0) {
    pIVar12 = pIVar7->klass;
    uVar16 = **(undefined8 **)(lVar8 + 0xb8);
    uVar1._0_1_ = (pIVar12->_2).rank;
    uVar1._1_1_ = (pIVar12->_2).minimumAlignment;
    uVar13 = (ulong)uVar1;
    if (uVar13 != 0) {
      piVar14 = &((pIVar12->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar14 + -2))->interfaceType ==
            (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
          pVVar9 = pIVar12->vtable + (*piVar14 + 0xc);
          goto LAB_03691168;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    pVVar9 = (VirtualInvokeData *)FUN_01b81914(pIVar7,BLEFOFGCKEF_TypeInfo,0xc);
LAB_03691168:
    pSVar10 = (System_String_o *)(*pVVar9->methodPtr)(pIVar7,uVar5,uVar16,pVVar9->method);
    pIVar7 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                       (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    lVar8 = Method_System_Array_Empty<string>__;
    lVar11 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
    if (lVar11 == 0) {
      FUN_01b8167c(Method_System_Array_Empty<string>__);
      lVar11 = *(long *)(lVar8 + 0x38);
    }
    lVar11 = *(long *)(lVar11 + 0x10);
    if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = FUN_01b81620();
    }
    if (*(int *)(lVar11 + 0xe0) == 0) {
      thunk_FUN_01ba7564();
    }
    lVar8 = *(long *)(*(long *)(lVar8 + 0x38) + 0x10);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_01b81620();
    }
    uVar5 = StringLiteral_13796;
    if (pIVar7 != (Il2CppObject *)0x0) {
      pIVar12 = pIVar7->klass;
      uVar16 = **(undefined8 **)(lVar8 + 0xb8);
      uVar2._0_1_ = (pIVar12->_2).rank;
      uVar2._1_1_ = (pIVar12->_2).minimumAlignment;
      uVar13 = (ulong)uVar2;
      if (uVar13 != 0) {
        piVar14 = &((pIVar12->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar14 + -2))->interfaceType ==
              (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
            pVVar9 = pIVar12->vtable + (*piVar14 + 0xc);
            goto LAB_03691240;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      pVVar9 = (VirtualInvokeData *)FUN_01b81914(pIVar7,BLEFOFGCKEF_TypeInfo,0xc);
LAB_03691240:
      JONDDIMGADB = (System_String_o *)(*pVVar9->methodPtr)(pIVar7,uVar5,uVar16,pVVar9->method);
      pIVar7 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                         (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
      lVar8 = Method_System_Array_Empty<string>__;
      lVar11 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
      if (lVar11 == 0) {
        FUN_01b8167c(Method_System_Array_Empty<string>__);
        lVar11 = *(long *)(lVar8 + 0x38);
      }
      lVar11 = *(long *)(lVar11 + 0x10);
      if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_01b81620();
      }
      if (*(int *)(lVar11 + 0xe0) == 0) {
        thunk_FUN_01ba7564();
      }
      lVar8 = *(long *)(*(long *)(lVar8 + 0x38) + 0x10);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_01b81620();
      }
      uVar5 = StringLiteral_13800;
      if (pIVar7 != (Il2CppObject *)0x0) {
        pIVar12 = pIVar7->klass;
        uVar16 = **(undefined8 **)(lVar8 + 0xb8);
        uVar3._0_1_ = (pIVar12->_2).rank;
        uVar3._1_1_ = (pIVar12->_2).minimumAlignment;
        uVar13 = (ulong)uVar3;
        if (uVar13 != 0) {
          piVar14 = &((pIVar12->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar14 + -2))->interfaceType ==
                (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
              pVVar9 = pIVar12->vtable + (*piVar14 + 0xc);
              goto LAB_03691318;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        pVVar9 = (VirtualInvokeData *)FUN_01b81914(pIVar7,BLEFOFGCKEF_TypeInfo,0xc);
LAB_03691318:
        FCLHIDDAHIJ = (System_String_o *)(*pVVar9->methodPtr)(pIVar7,uVar5,uVar16,pVVar9->method);
        pIVar7 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                           (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
        lVar8 = Method_System_Array_Empty<string>__;
        lVar11 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
        if (lVar11 == 0) {
          FUN_01b8167c(Method_System_Array_Empty<string>__);
          lVar11 = *(long *)(lVar8 + 0x38);
        }
        lVar11 = *(long *)(lVar11 + 0x10);
        if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = FUN_01b81620();
        }
        if (*(int *)(lVar11 + 0xe0) == 0) {
          thunk_FUN_01ba7564();
        }
        lVar8 = *(long *)(*(long *)(lVar8 + 0x38) + 0x10);
        if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = FUN_01b81620();
        }
        uVar5 = StringLiteral_13805;
        if (pIVar7 != (Il2CppObject *)0x0) {
          pIVar12 = pIVar7->klass;
          uVar16 = **(undefined8 **)(lVar8 + 0xb8);
          uVar4._0_1_ = (pIVar12->_2).rank;
          uVar4._1_1_ = (pIVar12->_2).minimumAlignment;
          uVar13 = (ulong)uVar4;
          if (uVar13 != 0) {
            piVar14 = &((pIVar12->_1).interfaceOffsets)->offset;
            do {
              if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar14 + -2))->interfaceType ==
                  (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
                pVVar9 = pIVar12->vtable + (*piVar14 + 0xc);
                goto LAB_036913f8;
              }
              uVar13 = uVar13 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar13 != 0);
          }
          pVVar9 = (VirtualInvokeData *)FUN_01b81914(pIVar7,BLEFOFGCKEF_TypeInfo,0xc);
LAB_036913f8:
          EFIHACGLMNA = (System_String_o *)(*pVVar9->methodPtr)(pIVar7,uVar5,uVar16,pVVar9->method);
          pSVar10 = Nekki_SF2_GUI_TimerLabel__GetTimeString
                              (NFBEBOIDJLL,true,true,true,true,true,true,StringLiteral_255,pSVar10,
                               true,true,true,true,true,JONDDIMGADB,FCLHIDDAHIJ,EFIHACGLMNA,2,
                               (MethodInfo *)0x0);
          if (pNVar15 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03691494. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(pNVar15->klass->vtable)._75_set_text.methodPtr)
                      (pNVar15,pSVar10,(pNVar15->klass->vtable)._75_set_text.method);
            return;
          }
        }
      }
    }
  }
LAB_03691498:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

