// Nekki.SF2.GUI.Dialogs.Raids.Clans.MembersClanView$$FLKLDPLINHL @ RVA 0x33FA214

void Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanView__FLKLDPLINHL
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanView_o *__this,
               IDGOGBNEGAM_o *IMMNELPBGIF,MethodInfo *method)

{
  byte bVar1;
  ushort uVar2;
  undefined8 uVar3;
  Il2CppObject *pIVar4;
  long lVar5;
  VirtualInvokeData *pVVar6;
  System_String_o *EHNFGMGKCHO;
  Nekki_SF2_GUI_Dialogs_BaseDialog_o *pNVar7;
  System_Action_object__o *IELDNEAAPBE;
  Il2CppClass *pIVar8;
  ulong uVar9;
  int32_t *piVar10;
  LabelButton_o *__this_00;
  IDGOGBNEGAM_o **ppIVar11;
  
  if ((DAT_04567fb0 & 1) == 0) {
    FUN_01bab630(&System_Action<object>_TypeInfo);
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanView_ADMKHKNFDHC__);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_SimpleDialog_TypeInfo);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_9679);
    FUN_01bab630(&StringLiteral_3640);
    FUN_01bab630(&StringLiteral_17850);
    FUN_01bab630(&StringLiteral_17326);
    FUN_01bab630(&StringLiteral_1);
    DAT_04567fb0 = 1;
  }
  ppIVar11 = &(__this->fields).FANGHLLLOLB;
  *ppIVar11 = IMMNELPBGIF;
  thunk_FUN_01c20e04(ppIVar11,IMMNELPBGIF);
  pIVar4 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                     (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
  lVar5 = FUN_01bab718(string___TypeInfo,1);
  if ((*ppIVar11 != (IDGOGBNEGAM_o *)0x0) && (lVar5 != 0)) {
    if (*(int *)(lVar5 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    *(System_String_o **)(lVar5 + 0x20) = ((*ppIVar11)->fields).JIJLBFGKNJK;
    thunk_FUN_01c20e04();
    uVar3 = StringLiteral_17326;
    if (pIVar4 != (Il2CppObject *)0x0) {
      pIVar8 = pIVar4->klass;
      uVar2._0_1_ = (pIVar8->_2).rank;
      uVar2._1_1_ = (pIVar8->_2).minimumAlignment;
      uVar9 = (ulong)uVar2;
      if (uVar9 != 0) {
        piVar10 = &((pIVar8->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
              (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
            pVVar6 = pIVar8->vtable + (*piVar10 + 0xc);
            goto LAB_034fa3bc;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      pVVar6 = (VirtualInvokeData *)FUN_01b81914(pIVar4,BLEFOFGCKEF_TypeInfo,0xc);
LAB_034fa3bc:
      EHNFGMGKCHO = (System_String_o *)(*pVVar6->methodPtr)(pIVar4,uVar3,lVar5,pVVar6->method);
      pNVar7 = JJPNLEPEAFM__JNDPLPKDPCP
                         (StringLiteral_17850,EHNFGMGKCHO,StringLiteral_9679,StringLiteral_3640,
                          (System_Action_object__o *)0x0,0,5,false,false,StringLiteral_1,false,true,
                          true,true,(MethodInfo *)0x0);
      if (pNVar7 != (Nekki_SF2_GUI_Dialogs_BaseDialog_o *)0x0) {
        bVar1 = (Nekki_SF2_GUI_Dialogs_SimpleDialog_TypeInfo->_2).naturalAligment;
        if (((pNVar7->klass->_2).naturalAligment < bVar1) ||
           ((pNVar7->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
            (Il2CppClass *)Nekki_SF2_GUI_Dialogs_SimpleDialog_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_01babc64();
        }
        __this_00 = (pNVar7->fields)._btnOK;
        IELDNEAAPBE = (System_Action_object__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
        System_Action<object>___ctor();
        if (__this_00 != (LabelButton_o *)0x0) {
          SFButton__AddEventListener((SFButton_o *)__this_00,2,IELDNEAAPBE,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

