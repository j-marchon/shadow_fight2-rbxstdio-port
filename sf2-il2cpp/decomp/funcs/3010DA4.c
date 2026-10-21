// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanRaidPartyPlayerCell$$DNFIBMGKICI @ RVA 0x3010DA4

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyPlayerCell__DNFIBMGKICI
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyPlayerCell_o *__this,
               MethodInfo *method)

{
  ushort uVar1;
  undefined8 uVar2;
  Il2CppObject *pIVar3;
  long lVar4;
  VirtualInvokeData *pVVar5;
  EEOMEMBBGNA_o *pEVar6;
  CJFBGEEIPBA_o *__this_00;
  System_String_o *EHNFGMGKCHO;
  System_Action_object__o *IELDNEAAPBE;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  ACHLOMELAJE_o *pAVar7;
  GKLPDMLELJF_o *pGVar8;
  Il2CppClass *pIVar9;
  ulong uVar10;
  int32_t *piVar11;
  
  if ((DAT_04565ba9 & 1) == 0) {
    FUN_01bab630(&System_Action<object>_TypeInfo);
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyPlayerCell_JHEAGBBIBOJ__);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_17779);
    FUN_01bab630(&StringLiteral_9679);
    FUN_01bab630(&StringLiteral_3640);
    FUN_01bab630(&StringLiteral_17850);
    FUN_01bab630(&StringLiteral_17329);
    DAT_04565ba9 = 1;
    method = extraout_x1;
  }
  if ((__this->fields).DICNIMJBGML == (GKLPDMLELJF_o *)0x0) {
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
    method = extraout_x1_02;
  }
  pAVar7 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (pAVar7 != (ACHLOMELAJE_o *)0x0) {
    if ((pAVar7->fields).ELDIKKDLPDN == false) {
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
      }
      pEVar6 = HJPEKDOPBHN__CEFGBPEHJJG((MethodInfo *)0x0);
      if (((pEVar6 != (EEOMEMBBGNA_o *)0x0) &&
          (pGVar8 = (__this->fields).DICNIMJBGML, pGVar8 != (GKLPDMLELJF_o *)0x0)) &&
         (__this_00 = (pEVar6->fields).GMNJEBCECDA, __this_00 != (CJFBGEEIPBA_o *)0x0)) {
        CJFBGEEIPBA__HKPDBKGKBOO
                  (__this_00,(pGVar8->fields).ANAJGHJEEOC,(System_Action_NLFLMJPNOLF__o *)0x0,
                   (MethodInfo *)0x0);
LAB_0311108c:
        EDFDANKEBGF__NEOHABBBGKE(1.0,(MethodInfo *)0x0);
        return;
      }
    }
    else {
      pIVar3 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                         (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
      lVar4 = FUN_01bab718(string___TypeInfo,1);
      pGVar8 = (__this->fields).DICNIMJBGML;
      if ((pGVar8 != (GKLPDMLELJF_o *)0x0) && (lVar4 != 0)) {
        if (*(int *)(lVar4 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8d0();
        }
        *(System_String_o **)(lVar4 + 0x20) = (pGVar8->fields).LLBEKLPKDHK;
        thunk_FUN_01c20e04();
        uVar2 = StringLiteral_17329;
        if (pIVar3 != (Il2CppObject *)0x0) {
          pIVar9 = pIVar3->klass;
          uVar1._0_1_ = (pIVar9->_2).rank;
          uVar1._1_1_ = (pIVar9->_2).minimumAlignment;
          uVar10 = (ulong)uVar1;
          if (uVar10 != 0) {
            piVar11 = &((pIVar9->_1).interfaceOffsets)->offset;
            do {
              if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar11 + -2))->interfaceType ==
                  (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
                pVVar5 = pIVar9->vtable + (*piVar11 + 0xc);
                goto LAB_03110fdc;
              }
              uVar10 = uVar10 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar10 != 0);
          }
          pVVar5 = (VirtualInvokeData *)FUN_01b81914(pIVar3,BLEFOFGCKEF_TypeInfo,0xc);
LAB_03110fdc:
          EHNFGMGKCHO = (System_String_o *)(*pVVar5->methodPtr)(pIVar3,uVar2,lVar4,pVVar5->method);
          IELDNEAAPBE = (System_Action_object__o *)
                        thunk_FUN_01bda818(System_Action<object>_TypeInfo);
          System_Action<object>___ctor();
          JJPNLEPEAFM__JNDPLPKDPCP
                    (StringLiteral_17850,EHNFGMGKCHO,StringLiteral_9679,StringLiteral_3640,
                     IELDNEAAPBE,0,5,true,false,StringLiteral_17779,false,true,true,true,
                     (MethodInfo *)0x0);
          goto LAB_0311108c;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

