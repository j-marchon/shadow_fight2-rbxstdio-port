// Nekki.SF2.GUI.Dialogs.Raids.Clans.MembersClanView$$LLAJCEMDFEO @ RVA 0x33FAE08

void Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanView__LLAJCEMDFEO
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanView_o *__this,MethodInfo *method)

{
  byte bVar1;
  ushort uVar2;
  undefined8 uVar3;
  EEOMEMBBGNA_o *__this_00;
  MGDJPGGPDJI_o *pMVar4;
  Il2CppObject *pIVar5;
  long lVar6;
  System_String_o *pSVar7;
  VirtualInvokeData *pVVar8;
  Nekki_SF2_GUI_Dialogs_BaseDialog_o *pNVar9;
  System_Action_object__o *IELDNEAAPBE;
  MethodInfo *extraout_x1;
  Il2CppClass *pIVar10;
  ulong uVar11;
  int32_t *piVar12;
  LabelButton_o *__this_01;
  
  if ((DAT_04567fb4 & 1) == 0) {
    FUN_01bab630(&System_Action<object>_TypeInfo);
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanView_MPJCLFBEOGE__);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_SimpleDialog_TypeInfo);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_9679);
    FUN_01bab630(&StringLiteral_3640);
    FUN_01bab630(&StringLiteral_17850);
    FUN_01bab630(&StringLiteral_17769);
    FUN_01bab630(&StringLiteral_17301);
    FUN_01bab630(&StringLiteral_1);
    FUN_01bab630(&StringLiteral_17327);
    DAT_04567fb4 = 1;
    method = extraout_x1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
  }
  __this_00 = HJPEKDOPBHN__CEFGBPEHJJG((MethodInfo *)0x0);
  if ((__this_00 != (EEOMEMBBGNA_o *)0x0) &&
     (pMVar4 = EEOMEMBBGNA__MPCGKMBAHHO(__this_00,(__this->fields).AMEAGHFFDFI,(MethodInfo *)0x0),
     pMVar4 != (MGDJPGGPDJI_o *)0x0)) {
    if ((pMVar4->fields).BDPMJNBHKIJ == 1) {
      pIVar5 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                         (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
      lVar6 = FUN_01bab718(string___TypeInfo,2);
      pSVar7 = IDGOGBNEGAM__ONLBMMFEPOI(2,(MethodInfo *)0x0);
      if (lVar6 != 0) {
        if (*(int *)(lVar6 + 0x18) != 0) {
          *(undefined8 *)(lVar6 + 0x20) = pSVar7;
          thunk_FUN_01c20e04((undefined8 *)(lVar6 + 0x20),pSVar7);
          pSVar7 = IDGOGBNEGAM__ONLBMMFEPOI(1,(MethodInfo *)0x0);
          if (1 < *(uint *)(lVar6 + 0x18)) {
            *(System_String_o **)(lVar6 + 0x28) = pSVar7;
            thunk_FUN_01c20e04();
            uVar3 = StringLiteral_17769;
            if (pIVar5 != (Il2CppObject *)0x0) {
              pIVar10 = pIVar5->klass;
              uVar2._0_1_ = (pIVar10->_2).rank;
              uVar2._1_1_ = (pIVar10->_2).minimumAlignment;
              uVar11 = (ulong)uVar2;
              if (uVar11 != 0) {
                piVar12 = &((pIVar10->_1).interfaceOffsets)->offset;
                do {
                  if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar12 + -2))->interfaceType ==
                      (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
                    pVVar8 = pIVar10->vtable + (*piVar12 + 0xc);
                    goto LAB_034fb0fc;
                  }
                  uVar11 = uVar11 - 1;
                  piVar12 = piVar12 + 4;
                } while (uVar11 != 0);
              }
              pVVar8 = (VirtualInvokeData *)FUN_01b81914(pIVar5,BLEFOFGCKEF_TypeInfo,0xc);
LAB_034fb0fc:
              pSVar7 = (System_String_o *)(*pVVar8->methodPtr)(pIVar5,uVar3,lVar6,pVVar8->method);
              JJPNLEPEAFM__JNDPLPKDPCP
                        (StringLiteral_17850,pSVar7,StringLiteral_17301,StringLiteral_1,
                         (System_Action_object__o *)0x0,1,0,false,false,StringLiteral_1,false,true,
                         true,true,(MethodInfo *)0x0);
              return;
            }
            goto LAB_034fb180;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
    }
    else {
      pNVar9 = JJPNLEPEAFM__JNDPLPKDPCP
                         (StringLiteral_17850,StringLiteral_17327,StringLiteral_9679,
                          StringLiteral_3640,(System_Action_object__o *)0x0,1,0,false,false,
                          StringLiteral_1,true,true,true,true,(MethodInfo *)0x0);
      if (pNVar9 != (Nekki_SF2_GUI_Dialogs_BaseDialog_o *)0x0) {
        bVar1 = (Nekki_SF2_GUI_Dialogs_SimpleDialog_TypeInfo->_2).naturalAligment;
        if (((pNVar9->klass->_2).naturalAligment < bVar1) ||
           ((pNVar9->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
            (Il2CppClass *)Nekki_SF2_GUI_Dialogs_SimpleDialog_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_01babc64();
        }
        __this_01 = (pNVar9->fields)._btnOK;
        IELDNEAAPBE = (System_Action_object__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
        System_Action<object>___ctor();
        if (__this_01 != (LabelButton_o *)0x0) {
          SFButton__AddEventListener((SFButton_o *)__this_01,2,IELDNEAAPBE,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
LAB_034fb180:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

