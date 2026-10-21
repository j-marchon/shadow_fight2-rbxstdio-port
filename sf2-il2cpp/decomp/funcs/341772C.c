// Nekki.SF2.GUI.Map.InfoBattle$$GEDBBEMEAKB @ RVA 0x341772C

void Nekki_SF2_GUI_Map_InfoBattle__GEDBBEMEAKB
               (Nekki_SF2_GUI_Map_InfoBattle_o *__this,FPLOLKHJIAF_o *GOAHBPBJCKC,MethodInfo *method
               )

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  undefined8 uVar4;
  bool bVar5;
  EEGDOGKBLNG_o *__this_00;
  Il2CppObject *pIVar6;
  long lVar7;
  System_String_o *pSVar8;
  VirtualInvokeData *pVVar9;
  JMDPBFOCHHP_o *__this_01;
  JMDPBFOCHHP_ENBCJNLAHAC_o *pJVar10;
  System_String_o *pSVar11;
  System_Action_object__o *IELDNEAAPBE;
  Nekki_SF2_GUI_Dialogs_BaseDialog_o *pNVar12;
  ADJEBFOPFFF_o *__this_02;
  Il2CppClass *pIVar13;
  ulong uVar14;
  int32_t *piVar15;
  int32_t *piVar16;
  LabelButton_o *__this_03;
  System_String_o *pSVar17;
  UnityEngine_Color_o CJNHFNHJHPE;
  int32_t local_58;
  int32_t iStack_54;
  
  if ((DAT_045680b8 & 1) == 0) {
    FUN_01bab630(&System_Action<object>_TypeInfo);
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_InfoBattle_CEOEIJFKMOG__);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_SimpleDialog_TypeInfo);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_9679);
    FUN_01bab630(&StringLiteral_3640);
    FUN_01bab630(&StringLiteral_7512);
    FUN_01bab630(&StringLiteral_2428);
    FUN_01bab630(&StringLiteral_2422);
    FUN_01bab630(&StringLiteral_270);
    FUN_01bab630(&StringLiteral_10992);
    FUN_01bab630(&StringLiteral_16813);
    FUN_01bab630(&StringLiteral_1);
    FUN_01bab630(&StringLiteral_10993);
    DAT_045680b8 = 1;
  }
  if (GOAHBPBJCKC == (FPLOLKHJIAF_o *)0x0) {
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__LogError(StringLiteral_7512,(MethodInfo *)0x0);
    return;
  }
  pSVar17 = (GOAHBPBJCKC->fields).super.MLNFANFAMOO;
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
  if (__this_00 != (EEGDOGKBLNG_o *)0x0) {
    iStack_54 = EEGDOGKBLNG__APFFEAJBAEK(__this_00,pSVar17,(MethodInfo *)0x0);
    local_58 = (GOAHBPBJCKC->fields).super.DKOHFAHBPPE;
    pSVar17 = OFFIONDOEPM__CDGICMOFKHE(pSVar17,(MethodInfo *)0x0);
    pSVar17 = System_String__Concat(StringLiteral_2422,pSVar17,StringLiteral_270,(MethodInfo *)0x0);
    pIVar6 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                       (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    lVar7 = FUN_01bab718(string___TypeInfo,4);
    pSVar8 = System_Int32__ToString((int32_t)&local_58,(MethodInfo *)0x0);
    if (lVar7 != 0) {
      if (*(int *)(lVar7 + 0x18) != 0) {
        *(undefined8 *)(lVar7 + 0x20) = pSVar8;
        thunk_FUN_01c20e04((undefined8 *)(lVar7 + 0x20),pSVar8);
        if (1 < *(uint *)(lVar7 + 0x18)) {
          *(undefined8 *)(lVar7 + 0x28) = pSVar17;
          thunk_FUN_01c20e04((undefined8 *)(lVar7 + 0x28),pSVar17);
          pSVar8 = System_Int32__ToString((int32_t)&iStack_54,(MethodInfo *)0x0);
          if (2 < *(uint *)(lVar7 + 0x18)) {
            *(undefined8 *)(lVar7 + 0x30) = pSVar8;
            thunk_FUN_01c20e04((undefined8 *)(lVar7 + 0x30),pSVar8);
            if (3 < *(uint *)(lVar7 + 0x18)) {
              *(undefined8 *)(lVar7 + 0x38) = pSVar17;
              thunk_FUN_01c20e04((undefined8 *)(lVar7 + 0x38),pSVar17);
              uVar4 = StringLiteral_10993;
              if (pIVar6 != (Il2CppObject *)0x0) {
                pIVar13 = pIVar6->klass;
                uVar2._0_1_ = (pIVar13->_2).rank;
                uVar2._1_1_ = (pIVar13->_2).minimumAlignment;
                uVar14 = (ulong)uVar2;
                if (uVar14 != 0) {
                  piVar15 = &((pIVar13->_1).interfaceOffsets)->offset;
                  do {
                    if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar15 + -2))->interfaceType ==
                        (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
                      pVVar9 = pIVar13->vtable + (*piVar15 + 0xc);
                      goto LAB_03517a1c;
                    }
                    uVar14 = uVar14 - 1;
                    piVar15 = piVar15 + 4;
                  } while (uVar14 != 0);
                }
                pVVar9 = (VirtualInvokeData *)FUN_01b81914(pIVar6,BLEFOFGCKEF_TypeInfo,0xc);
LAB_03517a1c:
                pSVar8 = (System_String_o *)(*pVVar9->methodPtr)(pIVar6,uVar4,lVar7,pVVar9->method);
                pSVar17 = StringLiteral_10992;
                __this_01 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
                if (__this_01 != (JMDPBFOCHHP_o *)0x0) {
                  pJVar10 = JMDPBFOCHHP__DIFLKMKBENA
                                      (__this_01,(GOAHBPBJCKC->fields).GMILEGDKKPL,false,
                                       (MethodInfo *)0x0);
                  if (pJVar10 == (JMDPBFOCHHP_ENBCJNLAHAC_o *)0x0) {
                    JJPNLEPEAFM__JNDPLPKDPCP
                              (pSVar17,pSVar8,StringLiteral_9679,StringLiteral_1,
                               (System_Action_object__o *)0x0,1,0,false,false,StringLiteral_1,false,
                               true,true,true,(MethodInfo *)0x0);
                    return;
                  }
                  pIVar6 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                                     (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
                  lVar7 = FUN_01bab718(string___TypeInfo,2);
                  piVar15 = &(pJVar10->fields).NGMFKGGBHND;
                  pSVar11 = System_Int32__ToString((int32_t)piVar15,(MethodInfo *)0x0);
                  if (lVar7 != 0) {
                    if (*(int *)(lVar7 + 0x18) != 0) {
                      *(undefined8 *)(lVar7 + 0x20) = pSVar11;
                      thunk_FUN_01c20e04((undefined8 *)(lVar7 + 0x20),pSVar11);
                      if (1 < *(uint *)(lVar7 + 0x18)) {
                        *(undefined8 *)(lVar7 + 0x28) = StringLiteral_2428;
                        thunk_FUN_01c20e04();
                        uVar4 = StringLiteral_16813;
                        if (pIVar6 != (Il2CppObject *)0x0) {
                          pIVar13 = pIVar6->klass;
                          uVar3._0_1_ = (pIVar13->_2).rank;
                          uVar3._1_1_ = (pIVar13->_2).minimumAlignment;
                          uVar14 = (ulong)uVar3;
                          if (uVar14 != 0) {
                            piVar16 = &((pIVar13->_1).interfaceOffsets)->offset;
                            do {
                              if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar16 + -2))->
                                  interfaceType == (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
                                pVVar9 = pIVar13->vtable + (*piVar16 + 0xc);
                                goto LAB_03517b88;
                              }
                              uVar14 = uVar14 - 1;
                              piVar16 = piVar16 + 4;
                            } while (uVar14 != 0);
                          }
                          pVVar9 = (VirtualInvokeData *)
                                   FUN_01b81914(pIVar6,BLEFOFGCKEF_TypeInfo,0xc);
LAB_03517b88:
                          pSVar11 = (System_String_o *)
                                    (*pVVar9->methodPtr)(pIVar6,uVar4,lVar7,pVVar9->method);
                          IELDNEAAPBE = (System_Action_object__o *)
                                        thunk_FUN_01bda818(System_Action<object>_TypeInfo);
                          System_Action<object>___ctor();
                          pNVar12 = JJPNLEPEAFM__JNDPLPKDPCP
                                              (pSVar17,pSVar8,pSVar11,StringLiteral_3640,IELDNEAAPBE
                                               ,2,1,false,false,StringLiteral_1,false,false,true,
                                               true,(MethodInfo *)0x0);
                          if (pNVar12 != (Nekki_SF2_GUI_Dialogs_BaseDialog_o *)0x0) {
                            bVar1 = (Nekki_SF2_GUI_Dialogs_SimpleDialog_TypeInfo->_2).
                                    naturalAligment;
                            if (((pNVar12->klass->_2).naturalAligment < bVar1) ||
                               ((pNVar12->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
                                (Il2CppClass *)Nekki_SF2_GUI_Dialogs_SimpleDialog_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
                              FUN_01babc64();
                            }
                            __this_03 = (pNVar12->fields)._btnOK;
                            if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
                              thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo);
                            }
                            __this_02 = HJPEKDOPBHN__EKIJCGJLILF((MethodInfo *)0x0);
                            if (__this_02 != (ADJEBFOPFFF_o *)0x0) {
                              bVar5 = ADJEBFOPFFF__MIBNBHKOIEI
                                                (__this_02,*piVar15,false,(MethodInfo *)0x0);
                              if (!bVar5) {
                                CJNHFNHJHPE = CFBGPBCDAGA__NFFPCFGDOKG
                                                        (0x9b,0x1c,7,0xff,(MethodInfo *)0x0);
                                if (__this_03 == (LabelButton_o *)0x0) goto LAB_03517ce0;
                                LabelButton__set_Color(__this_03,CJNHFNHJHPE,(MethodInfo *)0x0);
                              }
                              return;
                            }
                          }
                        }
                        goto LAB_03517ce0;
                      }
                    }
                    goto LAB_03517ce4;
                  }
                }
              }
              goto LAB_03517ce0;
            }
          }
        }
      }
LAB_03517ce4:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
  }
LAB_03517ce0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

