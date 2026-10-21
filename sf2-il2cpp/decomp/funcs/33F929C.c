// Nekki.SF2.GUI.Dialogs.Raids.Clans.MembersClanView$$FBMBIMMAPCI @ RVA 0x33F929C

void Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanView__FBMBIMMAPCI
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanView_o *__this,
               IDGOGBNEGAM_o *IMMNELPBGIF,MethodInfo *method)

{
  int iVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  System_String_o *KHPLLCKLJKO;
  undefined8 uVar5;
  undefined8 uVar6;
  Il2CppObject *pIVar7;
  long lVar8;
  VirtualInvokeData *pVVar9;
  System_String_o *EHNFGMGKCHO;
  System_Action_object__o *IELDNEAAPBE;
  Nekki_SF2_GUI_Dialogs_BaseDialog_o *pNVar10;
  LabelButton_o *__this_00;
  Il2CppClass *pIVar11;
  ulong uVar12;
  int32_t *piVar13;
  System_String_o *KCFLBKINDFM;
  IDGOGBNEGAM_o **ppIVar14;
  
  if ((DAT_04567fa6 & 1) == 0) {
    FUN_01bab630(&System_Action<object>_TypeInfo);
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanView_CKFBJDMPHLA__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanView_ELPDKEKBAMO__);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_SimpleDialog_TypeInfo);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_9679);
    FUN_01bab630(&StringLiteral_3640);
    FUN_01bab630(&StringLiteral_17330);
    FUN_01bab630(&StringLiteral_17850);
    FUN_01bab630(&StringLiteral_17815);
    FUN_01bab630(&StringLiteral_1);
    FUN_01bab630(&StringLiteral_20441);
    DAT_04567fa6 = 1;
  }
  ppIVar14 = &(__this->fields).FANGHLLLOLB;
  *ppIVar14 = IMMNELPBGIF;
  thunk_FUN_01c20e04(ppIVar14,IMMNELPBGIF);
  KCFLBKINDFM = StringLiteral_9679;
  KHPLLCKLJKO = StringLiteral_3640;
  if (*ppIVar14 != (IDGOGBNEGAM_o *)0x0) {
    iVar1 = ((*ppIVar14)->fields).LLNMDPPIGLF;
    pIVar7 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                       (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    lVar8 = FUN_01bab718(string___TypeInfo,1);
    if ((*ppIVar14 != (IDGOGBNEGAM_o *)0x0) && (lVar8 != 0)) {
      if (*(int *)(lVar8 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
      *(System_String_o **)(lVar8 + 0x20) = ((*ppIVar14)->fields).JIJLBFGKNJK;
      thunk_FUN_01c20e04();
      uVar6 = StringLiteral_17815;
      uVar5 = StringLiteral_17330;
      if (pIVar7 != (Il2CppObject *)0x0) {
        if (iVar1 == 2) {
          pIVar11 = pIVar7->klass;
          uVar3._0_1_ = (pIVar11->_2).rank;
          uVar3._1_1_ = (pIVar11->_2).minimumAlignment;
          uVar12 = (ulong)uVar3;
          if (uVar12 != 0) {
            piVar13 = &((pIVar11->_1).interfaceOffsets)->offset;
            do {
              if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar13 + -2))->interfaceType ==
                  (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
                pVVar9 = pIVar11->vtable + (*piVar13 + 0xc);
                goto LAB_034f94d4;
              }
              uVar12 = uVar12 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar12 != 0);
          }
          pVVar9 = (VirtualInvokeData *)FUN_01b81914(pIVar7,BLEFOFGCKEF_TypeInfo,0xc);
LAB_034f94d4:
          EHNFGMGKCHO = (System_String_o *)(*pVVar9->methodPtr)(pIVar7,uVar6,lVar8,pVVar9->method);
          KCFLBKINDFM = StringLiteral_20441;
        }
        else {
          pIVar11 = pIVar7->klass;
          uVar4._0_1_ = (pIVar11->_2).rank;
          uVar4._1_1_ = (pIVar11->_2).minimumAlignment;
          uVar12 = (ulong)uVar4;
          if (uVar12 != 0) {
            piVar13 = &((pIVar11->_1).interfaceOffsets)->offset;
            do {
              if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar13 + -2))->interfaceType ==
                  (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
                pVVar9 = pIVar11->vtable + (*piVar13 + 0xc);
                goto LAB_034f9514;
              }
              uVar12 = uVar12 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar12 != 0);
          }
          pVVar9 = (VirtualInvokeData *)FUN_01b81914(pIVar7,BLEFOFGCKEF_TypeInfo,0xc);
LAB_034f9514:
          EHNFGMGKCHO = (System_String_o *)(*pVVar9->methodPtr)(pIVar7,uVar5,lVar8,pVVar9->method);
        }
        IELDNEAAPBE = (System_Action_object__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
        System_Action<object>___ctor();
        pNVar10 = JJPNLEPEAFM__JNDPLPKDPCP
                            (StringLiteral_17850,EHNFGMGKCHO,KCFLBKINDFM,KHPLLCKLJKO,
                             (System_Action_object__o *)0x0,0,5,false,false,StringLiteral_1,false,
                             true,true,true,(MethodInfo *)0x0);
        if (pNVar10 != (Nekki_SF2_GUI_Dialogs_BaseDialog_o *)0x0) {
          bVar2 = (Nekki_SF2_GUI_Dialogs_SimpleDialog_TypeInfo->_2).naturalAligment;
          if (((pNVar10->klass->_2).naturalAligment < bVar2) ||
             ((pNVar10->klass->_2).typeHierarchy[(ulong)bVar2 - 1] !=
              (Il2CppClass *)Nekki_SF2_GUI_Dialogs_SimpleDialog_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
            FUN_01babc64();
          }
          __this_00 = (pNVar10->fields)._btnOK;
          if (__this_00 != (LabelButton_o *)0x0) {
            SFButton__AddEventListener((SFButton_o *)__this_00,2,IELDNEAAPBE,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

