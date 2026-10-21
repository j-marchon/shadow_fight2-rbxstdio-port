// Nekki.SF2.GUI.Dialogs.Raids.Clans.CreateClanRaidDialog$$EADMNHONGDH @ RVA 0x3174C24

void Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanRaidDialog__EADMNHONGDH
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanRaidDialog_o *__this,MethodInfo *method)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  undefined8 uVar4;
  bool bVar5;
  AFFHKININGD_o *pAVar6;
  System_Collections_Generic_List_object__o *__this_00;
  Nekki_SF2_GUI_Dialogs_BaseDialog_o *pNVar7;
  EEGDOGKBLNG_o *__this_01;
  System_String_o *pSVar8;
  Il2CppObject *pIVar9;
  long lVar10;
  System_String_o *pSVar11;
  VirtualInvokeData *pVVar12;
  JMDPBFOCHHP_o *__this_02;
  JMDPBFOCHHP_ENBCJNLAHAC_o *pJVar13;
  System_String_o *pSVar14;
  System_Action_object__o *IELDNEAAPBE;
  ADJEBFOPFFF_o *__this_03;
  MethodInfo *extraout_x1;
  Il2CppClass *pIVar15;
  ulong uVar16;
  int32_t *piVar17;
  int32_t *piVar18;
  Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidCell_o *pNVar19;
  LabelButton_o *pLVar20;
  undefined4 local_58;
  int32_t local_54;
  
  if ((DAT_0456694e & 1) == 0) {
    FUN_01bab630(&System_Action<object>_TypeInfo);
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanRaidDialog_CEOEIJFKMOG__);
    FUN_01bab630(&Method_DJNBJHPDKDP_OBECCOPBADO<NIAFDKHDBMA>__);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&FPLOLKHJIAF_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<NIAFDKHDBMA>_get_Item__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_SimpleDialog_TypeInfo);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_250);
    FUN_01bab630(&StringLiteral_9679);
    FUN_01bab630(&StringLiteral_3640);
    FUN_01bab630(&StringLiteral_2422);
    FUN_01bab630(&StringLiteral_10992);
    FUN_01bab630(&StringLiteral_2426);
    FUN_01bab630(&StringLiteral_16813);
    FUN_01bab630(&StringLiteral_4856);
    FUN_01bab630(&StringLiteral_1);
    FUN_01bab630(&StringLiteral_10993);
    DAT_0456694e = 1;
    method = extraout_x1;
  }
  local_54 = 0;
  pNVar19 = (__this->fields).IOOHHPDCNCM;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar5 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pNVar19,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar5) {
    pNVar19 = (__this->fields).IOOHHPDCNCM;
    if (pNVar19 == (Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidCell_o *)0x0) goto LAB_032752c0;
    pAVar6 = Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidCell__GetFight(pNVar19,(MethodInfo *)0x0);
    if (pAVar6 == (AFFHKININGD_o *)0x0) {
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Debug__LogError(StringLiteral_4856,(MethodInfo *)0x0);
    }
    else {
      __this_00 = (System_Collections_Generic_List_object__o *)
                  (*(pAVar6->klass->vtable)._4_NIKCNPMKAFK.methodPtr)
                            (pAVar6,(pAVar6->klass->vtable)._4_NIKCNPMKAFK.method);
      bVar5 = DJNBJHPDKDP__OBECCOPBADO<object>
                        ((System_Collections_Generic_List_T__o *)__this_00,
                         Method_DJNBJHPDKDP_OBECCOPBADO<NIAFDKHDBMA>__);
      if (!bVar5) {
        if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_032752c0;
        pNVar7 = (Nekki_SF2_GUI_Dialogs_BaseDialog_o *)
                 System_Collections_Generic_List<object>__get_Item
                           (__this_00,0,
                            Method_System_Collections_Generic_List<NIAFDKHDBMA>_get_Item__);
        if (pNVar7 != (Nekki_SF2_GUI_Dialogs_BaseDialog_o *)0x0) {
          bVar1 = (FPLOLKHJIAF_TypeInfo->_2).naturalAligment;
          if (((((Il2CppClass *)pNVar7->klass)->_2).naturalAligment < bVar1) ||
             ((((Il2CppClass *)pNVar7->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] !=
              (Il2CppClass *)FPLOLKHJIAF_TypeInfo)) {
LAB_032752cc:
                    /* WARNING: Subroutine does not return */
            FUN_01babc64(pNVar7);
          }
          pLVar20 = (pNVar7->fields)._btnCancel;
          if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          __this_01 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
          if (__this_01 != (EEGDOGKBLNG_o *)0x0) {
            local_54 = EEGDOGKBLNG__APFFEAJBAEK
                                 (__this_01,(System_String_o *)pLVar20,(MethodInfo *)0x0);
            local_58 = *(undefined4 *)&(pNVar7->fields)._btnOK;
            pSVar8 = OFFIONDOEPM__CDGICMOFKHE((System_String_o *)pLVar20,(MethodInfo *)0x0);
            pSVar8 = System_String__Concat
                               (StringLiteral_2422,pSVar8,StringLiteral_250,(MethodInfo *)0x0);
            pIVar9 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                               (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
            lVar10 = FUN_01bab718(string___TypeInfo,4);
            pSVar11 = System_Int32__ToString((int32_t)&local_58,(MethodInfo *)0x0);
            if (lVar10 != 0) {
              if (*(int *)(lVar10 + 0x18) != 0) {
                *(undefined8 *)(lVar10 + 0x20) = pSVar11;
                thunk_FUN_01c20e04((undefined8 *)(lVar10 + 0x20),pSVar11);
                if (1 < *(uint *)(lVar10 + 0x18)) {
                  *(undefined8 *)(lVar10 + 0x28) = pSVar8;
                  thunk_FUN_01c20e04((undefined8 *)(lVar10 + 0x28),pSVar8);
                  pSVar11 = System_Int32__ToString((int32_t)&local_54,(MethodInfo *)0x0);
                  if (2 < *(uint *)(lVar10 + 0x18)) {
                    *(undefined8 *)(lVar10 + 0x30) = pSVar11;
                    thunk_FUN_01c20e04((undefined8 *)(lVar10 + 0x30),pSVar11);
                    if (3 < *(uint *)(lVar10 + 0x18)) {
                      *(undefined8 *)(lVar10 + 0x38) = pSVar8;
                      thunk_FUN_01c20e04((undefined8 *)(lVar10 + 0x38),pSVar8);
                      uVar4 = StringLiteral_10993;
                      if (pIVar9 != (Il2CppObject *)0x0) {
                        pIVar15 = pIVar9->klass;
                        uVar2._0_1_ = (pIVar15->_2).rank;
                        uVar2._1_1_ = (pIVar15->_2).minimumAlignment;
                        uVar16 = (ulong)uVar2;
                        if (uVar16 != 0) {
                          piVar17 = &((pIVar15->_1).interfaceOffsets)->offset;
                          do {
                            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar17 + -2))->interfaceType
                                == (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
                              pVVar12 = pIVar15->vtable + (*piVar17 + 0xc);
                              goto LAB_03275014;
                            }
                            uVar16 = uVar16 - 1;
                            piVar17 = piVar17 + 4;
                          } while (uVar16 != 0);
                        }
                        pVVar12 = (VirtualInvokeData *)FUN_01b81914(pIVar9,BLEFOFGCKEF_TypeInfo,0xc)
                        ;
LAB_03275014:
                        pSVar11 = (System_String_o *)
                                  (*pVVar12->methodPtr)(pIVar9,uVar4,lVar10,pVVar12->method);
                        pSVar8 = StringLiteral_10992;
                        __this_02 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
                        if (__this_02 != (JMDPBFOCHHP_o *)0x0) {
                          pJVar13 = JMDPBFOCHHP__DIFLKMKBENA
                                              (__this_02,
                                               *(System_String_o **)
                                                &(pNVar7->fields)._hideDialogCanvasBackgnd,false,
                                               (MethodInfo *)0x0);
                          if (pJVar13 == (JMDPBFOCHHP_ENBCJNLAHAC_o *)0x0) {
                            JJPNLEPEAFM__JNDPLPKDPCP
                                      (pSVar8,pSVar11,StringLiteral_9679,StringLiteral_1,
                                       (System_Action_object__o *)0x0,1,0,false,false,
                                       StringLiteral_1,false,true,true,true,(MethodInfo *)0x0);
                            return;
                          }
                          pIVar9 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                                             (
                                             Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__
                                             );
                          lVar10 = FUN_01bab718(string___TypeInfo,2);
                          piVar17 = &(pJVar13->fields).NGMFKGGBHND;
                          pSVar14 = System_Int32__ToString((int32_t)piVar17,(MethodInfo *)0x0);
                          if (lVar10 != 0) {
                            if (*(int *)(lVar10 + 0x18) != 0) {
                              *(undefined8 *)(lVar10 + 0x20) = pSVar14;
                              thunk_FUN_01c20e04((undefined8 *)(lVar10 + 0x20),pSVar14);
                              if (1 < *(uint *)(lVar10 + 0x18)) {
                                *(undefined8 *)(lVar10 + 0x28) = StringLiteral_2426;
                                thunk_FUN_01c20e04();
                                uVar4 = StringLiteral_16813;
                                if (pIVar9 != (Il2CppObject *)0x0) {
                                  pIVar15 = pIVar9->klass;
                                  uVar3._0_1_ = (pIVar15->_2).rank;
                                  uVar3._1_1_ = (pIVar15->_2).minimumAlignment;
                                  uVar16 = (ulong)uVar3;
                                  if (uVar16 != 0) {
                                    piVar18 = &((pIVar15->_1).interfaceOffsets)->offset;
                                    do {
                                      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar18 + -2))->
                                          interfaceType == (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
                                        pVVar12 = pIVar15->vtable + (*piVar18 + 0xc);
                                        goto LAB_03275188;
                                      }
                                      uVar16 = uVar16 - 1;
                                      piVar18 = piVar18 + 4;
                                    } while (uVar16 != 0);
                                  }
                                  pVVar12 = (VirtualInvokeData *)
                                            FUN_01b81914(pIVar9,BLEFOFGCKEF_TypeInfo,0xc);
LAB_03275188:
                                  pSVar14 = (System_String_o *)
                                            (*pVVar12->methodPtr)
                                                      (pIVar9,uVar4,lVar10,pVVar12->method);
                                  IELDNEAAPBE = (System_Action_object__o *)
                                                thunk_FUN_01bda818(System_Action<object>_TypeInfo);
                                  System_Action<object>___ctor();
                                  pNVar7 = JJPNLEPEAFM__JNDPLPKDPCP
                                                     (pSVar8,pSVar11,pSVar14,StringLiteral_3640,
                                                      IELDNEAAPBE,2,1,false,false,StringLiteral_1,
                                                      false,false,true,true,(MethodInfo *)0x0);
                                  if (pNVar7 != (Nekki_SF2_GUI_Dialogs_BaseDialog_o *)0x0) {
                                    bVar1 = (Nekki_SF2_GUI_Dialogs_SimpleDialog_TypeInfo->_2).
                                            naturalAligment;
                                    if (((pNVar7->klass->_2).naturalAligment < bVar1) ||
                                       ((pNVar7->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
                                        (Il2CppClass *)Nekki_SF2_GUI_Dialogs_SimpleDialog_TypeInfo))
                                    goto LAB_032752cc;
                                    pLVar20 = (pNVar7->fields)._btnOK;
                                    if (pLVar20 != (LabelButton_o *)0x0) {
                                      LabelButton__set_Text(pLVar20,pSVar14,(MethodInfo *)0x0);
                                      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
                                        thunk_FUN_01ba7564();
                                      }
                                      __this_03 = HJPEKDOPBHN__EKIJCGJLILF((MethodInfo *)0x0);
                                      if (__this_03 != (ADJEBFOPFFF_o *)0x0) {
                                        bVar5 = ADJEBFOPFFF__MIBNBHKOIEI
                                                          (__this_03,*piVar17,false,
                                                           (MethodInfo *)0x0);
                                        if (bVar5) {
                                          return;
                                        }
                                        LabelButton__set_Color
                                                  (pLVar20,(UnityEngine_Color_o)
                                                           (__this->fields).FBKHDCFLOGC.fields,
                                                   (MethodInfo *)0x0);
                                        return;
                                      }
                                    }
                                  }
                                }
                                goto LAB_032752c0;
                              }
                            }
                            goto LAB_032752c4;
                          }
                        }
                      }
                      goto LAB_032752c0;
                    }
                  }
                }
              }
LAB_032752c4:
                    /* WARNING: Subroutine does not return */
              FUN_01bab8d0();
            }
          }
LAB_032752c0:
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
      }
    }
  }
  return;
}

