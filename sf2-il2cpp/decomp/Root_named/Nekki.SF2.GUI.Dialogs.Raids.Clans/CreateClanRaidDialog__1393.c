// TypeDefIndex 1393
// Namespace: Nekki.SF2.GUI.Dialogs.Raids.Clans
// public class CreateClanRaidDialog : ClanBaseDialog
// Fields:
//   private readonly Color FBKHDCFLOGC; // 0xC8
//   private const float IGGOGKJDIKG = 1.2;
//   private const float PHDIILIMDJB = 0.9;
//   private const float CMLPMOIEHOH = 2;
//   private const float IMEHMHKJFDP = 0.05;
//   private const float OBHJOHMLEGJ = 0.1;
//   private const float FDDJMGDEJCF = 3;
//   private const float IGFPPECPCHG = 10;
//   private const float AKGPJFBOKMC = 1.8;
//   private const float PIBFFMELBEN = 1.3;
//   private BattleRaidSlider _battleRaidSlider; // 0xD8
//   private LabelAlias _descriptionLabel; // 0xE0
//   private LabelAlias _shieldLabel; // 0xE8
//   private LabelAlias _timeLabel; // 0xF0
//   private LabelAlias _countMemberLabel; // 0xF8
//   private LabelAlias _unknowLabel; // 0x100
//   private CheckBox _hardModeCheck; // 0x108
//   private SFButton _hintButton; // 0x110
//   private HintBoxAutoKilled _hintPrefab; // 0x118
//   private BattleRaidCell IOOHHPDCNCM; // 0x120
//   private IEnumerator INIKLIGPEHH; // 0x128
//   private float LBKIBHCEOAI; // 0x130
//   private float LLAFFKEMAOI; // 0x134

// ===== protected override void GKPJMHOFIOO()  [RVA 0x3174C20]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.CreateClanRaidDialog$$GKPJMHOFIOO @ RVA 0x3174C20

void Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanRaidDialog__GKPJMHOFIOO
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanRaidDialog_o *__this,MethodInfo *method)

{
  return;
}


// ===== private void EADMNHONGDH()  [RVA 0x3174C24]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.CreateClanRaidDialog$$EADMNHONGDH @ RVA 0x3174C24

void Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanRaidDialog__EADMNHONGDH
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanRaidDialog_o *__this,MethodInfo *method)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  undefined8 uVar4;
  bool bVar5;
  FightList_o *pAVar6;
  System_Collections_Generic_List_object__o *__this_00;
  Nekki_SF2_GUI_Dialogs_BaseDialog_o *pNVar7;
  PlayerData_o *__this_01;
  System_String_o *pSVar8;
  Il2CppObject *pIVar9;
  long lVar10;
  System_String_o *pSVar11;
  VirtualInvokeData *pVVar12;
  RaidConfig_o *__this_02;
  RaidConfig_ENBCJNLAHAC_o *pJVar13;
  System_String_o *pSVar14;
  System_Action_object__o *IELDNEAAPBE;
  RaidPaymentService_o *__this_03;
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
    FUN_01bab630(&StringLiteral_250/*" />"*/);
    FUN_01bab630(&StringLiteral_9679/*"OK"*/);
    FUN_01bab630(&StringLiteral_3640/*"CANCEL"*/);
    FUN_01bab630(&StringLiteral_2422/*"<quad name="*/);
    FUN_01bab630(&StringLiteral_10992/*"RaidsNotEnoughKeysHeader"*/);
    FUN_01bab630(&StringLiteral_2426/*"<quad name=MiscSprites.ruby />"*/);
    FUN_01bab630(&StringLiteral_16813/*"btnEnterNow"*/);
    FUN_01bab630(&StringLiteral_4856/*"CreateClanRaidDialog::BuyKeys: fight is NULL"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    FUN_01bab630(&StringLiteral_10993/*"RaidsNotEnoughKeysText"*/);
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
    if (pAVar6 == (FightList_o *)0x0) {
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Debug__LogError(StringLiteral_4856/*"CreateClanRaidDialog::BuyKeys: fight is NULL"*/,(MethodInfo *)0x0);
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
          if (__this_01 != (PlayerData_o *)0x0) {
            local_54 = PlayerData__APFFEAJBAEK
                                 (__this_01,(System_String_o *)pLVar20,(MethodInfo *)0x0);
            local_58 = *(undefined4 *)&(pNVar7->fields)._btnOK;
            pSVar8 = OFFIONDOEPM__CDGICMOFKHE((System_String_o *)pLVar20,(MethodInfo *)0x0);
            pSVar8 = System_String__Concat
                               (StringLiteral_2422/*"<quad name="*/,pSVar8,StringLiteral_250/*" />"*/,(MethodInfo *)0x0);
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
                      uVar4 = StringLiteral_10993/*"RaidsNotEnoughKeysText"*/;
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
                        pSVar8 = StringLiteral_10992/*"RaidsNotEnoughKeysHeader"*/;
                        __this_02 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
                        if (__this_02 != (RaidConfig_o *)0x0) {
                          pJVar13 = RaidConfig__DIFLKMKBENA
                                              (__this_02,
                                               *(System_String_o **)
                                                &(pNVar7->fields)._hideDialogCanvasBackgnd,false,
                                               (MethodInfo *)0x0);
                          if (pJVar13 == (RaidConfig_ENBCJNLAHAC_o *)0x0) {
                            DialogsOpener__JNDPLPKDPCP
                                      (pSVar8,pSVar11,StringLiteral_9679/*"OK"*/,StringLiteral_1/*""*/,
                                       (System_Action_object__o *)0x0,1,0,false,false,
                                       StringLiteral_1/*""*/,false,true,true,true,(MethodInfo *)0x0);
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
                                *(undefined8 *)(lVar10 + 0x28) = StringLiteral_2426/*"<quad name=MiscSprites.ruby />"*/;
                                thunk_FUN_01c20e04();
                                uVar4 = StringLiteral_16813/*"btnEnterNow"*/;
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
                                  pNVar7 = DialogsOpener__JNDPLPKDPCP
                                                     (pSVar8,pSVar11,pSVar14,StringLiteral_3640/*"CANCEL"*/,
                                                      IELDNEAAPBE,2,1,false,false,StringLiteral_1/*""*/,
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
                                      if (__this_03 != (RaidPaymentService_o *)0x0) {
                                        bVar5 = RaidPaymentService__MIBNBHKOIEI
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


// ===== private void HKFPJNNOBMH()  [RVA 0x31752D0]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.CreateClanRaidDialog$$HKFPJNNOBMH @ RVA 0x31752D0

void Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanRaidDialog__HKFPJNNOBMH
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanRaidDialog_o *__this,MethodInfo *method)

{
  KHLGHHMCKAE_c *pKVar1;
  EZCameraShake_CameraShaker_o *__this_00;
  MethodInfo *method_00;
  GECKDIFJFDH_o *pGVar2;
  float fVar3;
  float fVar4;
  
  if ((DAT_0456694f & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<CameraShaker>__);
    FUN_01bab630(&KHLGHHMCKAE_TypeInfo);
    DAT_0456694f = 1;
  }
  fVar4 = (__this->fields).LBKIBHCEOAI;
  fVar3 = UnityEngine_Time__get_realtimeSinceStartup((MethodInfo *)0x0);
  if (fVar4 < fVar3) {
    EDFDANKEBGF__MGBMHCHNDFI((MethodInfo *)0x0);
    fVar3 = UnityEngine_Time__get_realtimeSinceStartup((MethodInfo *)0x0);
    (__this->fields).LBKIBHCEOAI = fVar3 + 10.0;
  }
  __this_00 = (EZCameraShake_CameraShaker_o *)
              UnityEngine_Component__GetComponent<object>
                        ((UnityEngine_Component_o *)__this,
                         Method_UnityEngine_Component_GetComponent<CameraShaker>__);
  pKVar1 = KHLGHHMCKAE_TypeInfo;
  pGVar2 = KHLGHHMCKAE_TypeInfo->static_fields->MEHPFOODDDE;
  if (pGVar2 != (GECKDIFJFDH_o *)0x0) {
    fVar3 = (pGVar2->fields).MECMNBDAIKA.fields.x;
    fVar4 = (pGVar2->fields).MECMNBDAIKA.fields.y;
    if (__this_00 != (EZCameraShake_CameraShaker_o *)0x0) {
      (__this_00->fields).DefaultPosInfluence.fields.z = (pGVar2->fields).MECMNBDAIKA.fields.z;
      (__this_00->fields).DefaultPosInfluence.fields.x = fVar3;
      (__this_00->fields).DefaultPosInfluence.fields.y = fVar4;
      pGVar2 = pKVar1->static_fields->MEHPFOODDDE;
      if (pGVar2 != (GECKDIFJFDH_o *)0x0) {
        EZCameraShake_CameraShaker__ShakeOnce
                  (__this_00,(pGVar2->fields).DFPBOPOKJEF / 1.8,(pGVar2->fields).ENIBLNOPPGE / 1.3,
                   0.0,(pGVar2->fields).JAODINPKJLN,(MethodInfo *)0x0);
        Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanRaidDialog__DNHHEMBFGFJ(__this,method_00);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void FillSpritesCache()  [RVA 0x31754B4]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.CreateClanRaidDialog$$FillSpritesCache @ RVA 0x31754B4

/* WARNING: Removing unreachable block (ram,0x0327575c) */

void Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanRaidDialog__FillSpritesCache(MethodInfo *method)

{
  byte bVar1;
  Il2CppObject *BANHBMINMMP;
  bool bVar2;
  int iVar3;
  System_Collections_Generic_List_MEJIKMPNBNL__o *__this;
  MEJIKMPNBNL_o *__this_00;
  System_String_o *OOKEKJMFKPE;
  FightList_o *FBFPLEFCDOK;
  System_String_o *HCAAAAMDCNO;
  System_Collections_Generic_List_Enumerator_T__o local_b8;
  System_Collections_Generic_List_Enumerator_T__o local_a0;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  if ((DAT_04566950 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MEJIKMPNBNL>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MEJIKMPNBNL>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MEJIKMPNBNL>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_get_Current__);
    FUN_01bab630(&KKCBGIBKOCP_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<OOMHDDBCBJP>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MEJIKMPNBNL>_GetEnumerator__);
    FUN_01bab630(&SF2Paths_TypeInfo);
    FUN_01bab630(&GameUtils_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&OHDDKGHEEPA_TypeInfo);
    DAT_04566950 = 1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  local_a0.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_a0.fields._index = 0;
  local_a0.fields._version = 0;
  local_a0.fields._current = (Il2CppObject *)0x0;
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this = NLPJLHOEAOE__CJNJOLEKIIK((MethodInfo *)0x0);
  if (__this != (System_Collections_Generic_List_MEJIKMPNBNL__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_b8,(System_Collections_Generic_List_object__o *)__this,
               Method_System_Collections_Generic_List<MEJIKMPNBNL>_GetEnumerator__);
    local_80.fields._index = local_b8.fields._index;
    local_80.fields._version = local_b8.fields._version;
    local_80.fields._list = local_b8.fields._list;
    local_80.fields._current = local_b8.fields._current;
    while( true ) {
      bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_80,
                         Method_System_Collections_Generic_List_Enumerator<MEJIKMPNBNL>_MoveNext__);
      if (!bVar2) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_80,
                   Method_System_Collections_Generic_List_Enumerator<MEJIKMPNBNL>_Dispose__);
        return;
      }
      if ((OOMHDDBCBJP_o *)local_80.fields._current == (OOMHDDBCBJP_o *)0x0) break;
      __this_00 = ((OOMHDDBCBJP_Fields *)((long)local_80.fields._current + 0x10))->IAJPHAAMKPC;
      if (__this_00 == (MEJIKMPNBNL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_b8,(System_Collections_Generic_List_object__o *)__this_00,
                 Method_System_Collections_Generic_List<OOMHDDBCBJP>_GetEnumerator__);
      local_a0.fields._index = local_b8.fields._index;
      local_a0.fields._version = local_b8.fields._version;
      local_a0.fields._list = local_b8.fields._list;
      local_a0.fields._current = local_b8.fields._current;
      while (bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                               (&local_a0,
                                Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_MoveNext__
                               ), BANHBMINMMP = local_a0.fields._current, bVar2) {
        if ((OOMHDDBCBJP_o *)local_a0.fields._current != (OOMHDDBCBJP_o *)0x0) {
          bVar1 = (OHDDKGHEEPA_TypeInfo->_2).naturalAligment;
          if ((((bVar1 <= (((OOMHDDBCBJP_c *)(local_a0.fields._current)->klass)->_2).naturalAligment
                ) && ((((OOMHDDBCBJP_c *)(local_a0.fields._current)->klass)->_2).typeHierarchy
                      [(ulong)bVar1 - 1] == (Il2CppClass *)OHDDKGHEEPA_TypeInfo)) &&
              (((OOMHDDBCBJP_Fields *)((long)local_a0.fields._current + 0x10))->CILMHNDFBPH == false
              )) && (((((OOMHDDBCBJP_Fields *)((long)local_a0.fields._current + 0x10))->HHDBIGKBMEC
                       != false &&
                      (bVar2 = OOMHDDBCBJP__KFMAFEPOEIB
                                         ((OOMHDDBCBJP_o *)local_a0.fields._current,
                                          (MethodInfo *)0x0), !bVar2)) &&
                     (iVar3 = (*(((OOMHDDBCBJP_c *)BANHBMINMMP->klass)->vtable)._15_AAHLCCCONKI.
                                methodPtr)(BANHBMINMMP,
                                           (((OOMHDDBCBJP_c *)BANHBMINMMP->klass)->vtable).
                                           _15_AAHLCCCONKI.method), iVar3 == 2)))) {
            if ((SF2Paths_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            OOKEKJMFKPE = SF2Paths__OPLAHNAJGAJ((MethodInfo *)0x0);
            if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            FBFPLEFCDOK = GameUtils__PHFFPADFANK((OOMHDDBCBJP_o *)BANHBMINMMP,(MethodInfo *)0x0);
            HCAAAAMDCNO = KFCFGKEHPNK__GHLDEKNCIEG(FBFPLEFCDOK,(MethodInfo *)0x0);
            if ((KKCBGIBKOCP_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            KKCBGIBKOCP__NECCNHODCAE(OOKEKJMFKPE,HCAAAAMDCNO,true,(MethodInfo *)0x0);
          }
        }
      }
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_a0,Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_Dispose__)
      ;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override void DLOKPLFDEJA(MGDJPGGPDJI KGCNBJOCNHC)  [RVA 0x3175888]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.CreateClanRaidDialog$$DLOKPLFDEJA @ RVA 0x3175888

void Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanRaidDialog__DLOKPLFDEJA
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanRaidDialog_o *__this,
               MGDJPGGPDJI_o *KGCNBJOCNHC,MethodInfo *method)

{
  bool bVar1;
  PlayerData_o *__this_00;
  int64_t iVar2;
  RaidClansManager_o *pEVar3;
  long lVar4;
  
  if ((DAT_04566951 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&StringLiteral_4855/*"CreateClanRaid"*/);
    DAT_04566951 = 1;
  }
  if (KGCNBJOCNHC != (MGDJPGGPDJI_o *)0x0) {
    lVar4 = (KGCNBJOCNHC->fields).ANAJGHJEEOC;
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_00 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
    if (__this_00 != (PlayerData_o *)0x0) {
      iVar2 = PlayerData__APCMGOCHMGC(__this_00,(MethodInfo *)0x0);
      if (lVar4 == iVar2) {
        if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pEVar3 = HJPEKDOPBHN__CEFGBPEHJJG((MethodInfo *)0x0);
        if (pEVar3 == (RaidClansManager_o *)0x0) goto LAB_03275970;
        bVar1 = DOCPIHOLNOA__BJBGLBAEIJB
                          ((pEVar3->fields).MICFEIBNOLM,StringLiteral_4855/*"CreateClanRaid"*/,
                           (KGCNBJOCNHC->fields).ANAJGHJEEOC,(MethodInfo *)0x0);
        if (bVar1) {
                    /* WARNING: Could not recover jumptable at 0x0327595c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(__this->klass->vtable)._20_Close.methodPtr)
                    (__this,(__this->klass->vtable)._20_Close.method);
          return;
        }
      }
      return;
    }
  }
LAB_03275970:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void CEOEIJFKMOG(object IMMNELPBGIF)  [RVA 0x3175974]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.CreateClanRaidDialog$$CEOEIJFKMOG @ RVA 0x3175974

void Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanRaidDialog__CEOEIJFKMOG
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanRaidDialog_o *__this,
               Il2CppObject *IMMNELPBGIF,MethodInfo *method)

{
  bool bVar1;
  int *piVar2;
  FightList_o *AGONJKOMAAA;
  System_Action_BKKPAKHJDKB__o *CPECAEHDDDB;
  Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidCell_o *pNVar3;
  
  if ((DAT_04566952 & 1) == 0) {
    FUN_01bab630(&System_Action<BKKPAKHJDKB>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanRaidDialog_OGCPNAAGKAK__);
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&LPGPNBGHDBD_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566952 = 1;
  }
  pNVar3 = (__this->fields).IOOHHPDCNCM;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  if (IMMNELPBGIF != (Il2CppObject *)0x0) {
    if ((IMMNELPBGIF->klass->_1).element_class != (int_TypeInfo->_1).element_class) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(IMMNELPBGIF);
    }
    piVar2 = (int *)thunk_FUN_01bda96c();
    if (*piVar2 != 1) {
      return;
    }
    pNVar3 = (__this->fields).IOOHHPDCNCM;
    if (pNVar3 != (Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidCell_o *)0x0) {
      AGONJKOMAAA = Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidCell__GetFight
                              (pNVar3,(MethodInfo *)0x0);
      CPECAEHDDDB = (System_Action_BKKPAKHJDKB__o *)
                    thunk_FUN_01bda818(System_Action<BKKPAKHJDKB>_TypeInfo);
      System_Action<object>___ctor();
      if ((LPGPNBGHDBD_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      LPGPNBGHDBD__CEOEIJFKMOG(AGONJKOMAAA,CPECAEHDDDB,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void GLEOGMBBLNH(CheckBox.EKFFAMKMBIH HJEBKCDDBAB)  [RVA 0x3175AD0]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.CreateClanRaidDialog$$GLEOGMBBLNH @ RVA 0x3175AD0

void Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanRaidDialog__GLEOGMBBLNH
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanRaidDialog_o *__this,int32_t HJEBKCDDBAB
               ,MethodInfo *method)

{
  undefined8 *puVar1;
  Roster_o *pAVar2;
  MethodInfo *method_00;
  
  if ((DAT_04566953 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_10859/*"RaidHardMode"*/);
    FUN_01bab630(&StringLiteral_1606/*"1"*/);
    FUN_01bab630(&StringLiteral_1567/*"0"*/);
    DAT_04566953 = 1;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pAVar2 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (pAVar2 != (Roster_o *)0x0) {
    puVar1 = &StringLiteral_1606/*"1"*/;
    if (HJEBKCDDBAB != 0) {
      puVar1 = &StringLiteral_1567/*"0"*/;
    }
    Roster__LMJFPPDAPBF
              (pAVar2,StringLiteral_10859/*"RaidHardMode"*/,(System_String_o *)*puVar1,0,(MethodInfo *)0x0);
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04565b7d == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b7d = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pAVar2 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if (pAVar2 != (Roster_o *)0x0) {
      CIOBNDOOGIM__BHFGGAKKJKP((CIOBNDOOGIM_o *)pAVar2,false,(MethodInfo *)0x0);
      Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanRaidDialog__JBOPJALGFHH(__this,method_00);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void ILPJLGPGNMC(BattleRaidCell IMMNELPBGIF)  [RVA 0x3175C70]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.CreateClanRaidDialog$$ILPJLGPGNMC @ RVA 0x3175C70

void Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanRaidDialog__ILPJLGPGNMC
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanRaidDialog_o *__this,
               Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidCell_o *IMMNELPBGIF,MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidCell_o **ppNVar1;
  bool_conflict bVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  bool bVar6;
  int32_t iVar7;
  FightList_o *__this_00;
  Il2CppObject *pIVar8;
  long lVar9;
  VirtualInvokeData *pVVar10;
  System_String_o *pSVar11;
  System_Collections_Generic_List_object__o *__this_01;
  GameUtils_HLAKGGFFNAO_o *__this_02;
  HBNENINHPGF_o *pHVar12;
  PlayerData_o *__this_03;
  Nekki_SF2_GUI_LabelAlias_o *pNVar13;
  UnityEngine_GameObject_o *pUVar14;
  undefined8 uVar15;
  int64_t NFBEBOIDJLL;
  MethodInfo *method_00;
  long lVar16;
  Il2CppClass *pIVar17;
  ulong uVar18;
  int32_t *piVar19;
  Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidCell_o *pNVar20;
  OHDDKGHEEPA_o *__this_04;
  undefined8 uVar21;
  System_String_o *KGLJICLJHEL;
  LabelButton_o *pLVar22;
  System_String_o *str1;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o __this_05;
  UnityEngine_Color_o UVar27;
  undefined8 local_80;
  undefined8 uStack_78;
  int32_t local_68;
  int iStack_64;
  
  if ((DAT_04566954 & 1) == 0) {
    FUN_01bab630(&Method_System_Array_Empty<string>__);
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&Method_DJNBJHPDKDP_PHPELPFMOII<ModelParameters>__);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&MainSettings_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<NIAFDKHDBMA>_get_Item__);
    FUN_01bab630(&GameUtils_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_250/*" />"*/);
    FUN_01bab630(&StringLiteral_2436/*"<quad name=RaidMisc.players /> "*/);
    FUN_01bab630(&StringLiteral_16810/*"btnCRstart"*/);
    FUN_01bab630(&StringLiteral_2432/*"<quad name=RaidMisc.clocks /> "*/);
    FUN_01bab630(&StringLiteral_2422/*"<quad name="*/);
    FUN_01bab630(&StringLiteral_5076/*"DanInsufficient"*/);
    FUN_01bab630(&StringLiteral_4404/*"ClanRaidStart"*/);
    FUN_01bab630(&StringLiteral_2086/*":"*/);
    FUN_01bab630(&StringLiteral_17833/*"dlgSpinFirstButton"*/);
    FUN_01bab630(&StringLiteral_2438/*"<quad name=RaidMisc.shield /> "*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04566954 = 1;
  }
  ppNVar1 = &(__this->fields).IOOHHPDCNCM;
  local_68 = 0;
  iStack_64 = 0;
  local_80 = 0;
  uStack_78 = 0;
  (__this->fields).IOOHHPDCNCM = IMMNELPBGIF;
  thunk_FUN_01c20e04(ppNVar1,IMMNELPBGIF);
  pNVar20 = (__this->fields).IOOHHPDCNCM;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar6 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pNVar20,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar6) {
    return;
  }
  pNVar20 = *ppNVar1;
  if (pNVar20 != (Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidCell_o *)0x0) {
    __this_04 = (pNVar20->fields)._battle;
    __this_00 = Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidCell__GetFight
                          (pNVar20,(MethodInfo *)0x0);
    if (__this_04 == (OHDDKGHEEPA_o *)0x0) {
      return;
    }
    if (__this_00 == (FightList_o *)0x0) {
      return;
    }
    pIVar8 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                       (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    lVar9 = Method_System_Array_Empty<string>__;
    lVar16 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
    if (lVar16 == 0) {
      FUN_01b8167c(Method_System_Array_Empty<string>__);
      lVar16 = *(long *)(lVar9 + 0x38);
    }
    lVar16 = *(long *)(lVar16 + 0x10);
    if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
      lVar16 = FUN_01b81620();
    }
    if (*(int *)(lVar16 + 0xe0) == 0) {
      thunk_FUN_01ba7564();
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_01b81620();
    }
    uVar15 = StringLiteral_17833/*"dlgSpinFirstButton"*/;
    if (pIVar8 == (Il2CppObject *)0x0) goto LAB_032764e8;
    pIVar17 = pIVar8->klass;
    uVar21 = **(undefined8 **)(lVar9 + 0xb8);
    uVar3._0_1_ = (pIVar17->_2).rank;
    uVar3._1_1_ = (pIVar17->_2).minimumAlignment;
    uVar18 = (ulong)uVar3;
    if (uVar18 != 0) {
      piVar19 = &((pIVar17->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar19 + -2))->interfaceType ==
            (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
          pVVar10 = pIVar17->vtable + (*piVar19 + 0xc);
          goto LAB_03275ee4;
        }
        uVar18 = uVar18 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar18 != 0);
    }
    pVVar10 = (VirtualInvokeData *)FUN_01b81914(pIVar8,BLEFOFGCKEF_TypeInfo,0xc);
LAB_03275ee4:
    pSVar11 = (System_String_o *)(*pVVar10->methodPtr)(pIVar8,uVar15,uVar21,pVVar10->method);
    bVar6 = FightList__PHEKFMPOHBK(__this_00,(MethodInfo *)0x0);
    if (bVar6) {
      __this_01 = (System_Collections_Generic_List_object__o *)
                  (*(__this_00->klass->vtable)._4_NIKCNPMKAFK.methodPtr)
                            (__this_00,(__this_00->klass->vtable)._4_NIKCNPMKAFK.method);
      if ((__this_01 == (System_Collections_Generic_List_object__o *)0x0) ||
         (pIVar8 = System_Collections_Generic_List<object>__get_Item
                             (__this_01,0,
                              Method_System_Collections_Generic_List<NIAFDKHDBMA>_get_Item__),
         pIVar8 == (Il2CppObject *)0x0)) goto LAB_032764e8;
      KGLJICLJHEL = pIVar8[5].monitor;
      if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_02 = GameUtils_TypeInfo->static_fields->BHAAICEFMBC;
      if ((__this_02 == (GameUtils_HLAKGGFFNAO_o *)0x0) ||
         (pHVar12 = GameUtils_HLAKGGFFNAO__BHJOLIJDBLO(__this_02,KGLJICLJHEL,(MethodInfo *)0x0),
         pHVar12 == (HBNENINHPGF_o *)0x0)) goto LAB_032764e8;
      str1 = (pHVar12->fields)._PGCEKJLODEJ_k__BackingField;
      pIVar8 = System_Collections_Generic_List<object>__get_Item
                         (__this_01,0,Method_System_Collections_Generic_List<NIAFDKHDBMA>_get_Item__
                         );
      if (pIVar8 == (Il2CppObject *)0x0) goto LAB_032764e8;
      iStack_64 = *(int *)&pIVar8[6].klass;
      if (iStack_64 != 0) {
        pIVar8 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                           (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
        lVar9 = FUN_01bab718(string___TypeInfo,2);
        pSVar11 = System_String__Concat(StringLiteral_2422/*"<quad name="*/,str1,StringLiteral_250/*" />"*/,(MethodInfo *)0x0)
        ;
        if (lVar9 == 0) goto LAB_032764e8;
        if (*(int *)(lVar9 + 0x18) == 0) goto LAB_032764ec;
        *(undefined8 *)(lVar9 + 0x20) = pSVar11;
        thunk_FUN_01c20e04((undefined8 *)(lVar9 + 0x20),pSVar11);
        pSVar11 = System_Int32__ToString((int32_t)&iStack_64,(MethodInfo *)0x0);
        if (*(uint *)(lVar9 + 0x18) < 2) goto LAB_032764ec;
        *(System_String_o **)(lVar9 + 0x28) = pSVar11;
        thunk_FUN_01c20e04();
        uVar15 = StringLiteral_16810/*"btnCRstart"*/;
        if (pIVar8 == (Il2CppObject *)0x0) goto LAB_032764e8;
        pIVar17 = pIVar8->klass;
        uVar4._0_1_ = (pIVar17->_2).rank;
        uVar4._1_1_ = (pIVar17->_2).minimumAlignment;
        uVar18 = (ulong)uVar4;
        if (uVar18 != 0) {
          piVar19 = &((pIVar17->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar19 + -2))->interfaceType ==
                (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
              pVVar10 = pIVar17->vtable + (*piVar19 + 0xc);
              goto LAB_03276098;
            }
            uVar18 = uVar18 - 1;
            piVar19 = piVar19 + 4;
          } while (uVar18 != 0);
        }
        pVVar10 = (VirtualInvokeData *)FUN_01b81914(pIVar8,BLEFOFGCKEF_TypeInfo,0xc);
LAB_03276098:
        pSVar11 = (System_String_o *)(*pVVar10->methodPtr)(pIVar8,uVar15,lVar9,pVVar10->method);
        pLVar22 = (__this->fields).super.super.super._btnOK;
        if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo);
        }
        __this_03 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
        if (__this_03 == (PlayerData_o *)0x0) goto LAB_032764e8;
        iVar7 = PlayerData__APFFEAJBAEK(__this_03,KGLJICLJHEL,(MethodInfo *)0x0);
        if (iVar7 < iStack_64) {
          if ((MainSettings_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          UVar27 = MainSettings__IALPNFOEEBP((MethodInfo *)0x0);
          fVar26 = UVar27.fields.a;
          fVar25 = UVar27.fields.b;
          fVar24 = UVar27.fields.g;
          fVar23 = UVar27.fields.r;
        }
        else {
          fVar26 = 1.0;
          fVar23 = 0.0;
          fVar24 = 0.0;
          fVar25 = 0.0;
        }
        if (pLVar22 == (LabelButton_o *)0x0) goto LAB_032764e8;
        UVar27.fields.g = fVar24;
        UVar27.fields.r = fVar23;
        UVar27.fields.a = fVar26;
        UVar27.fields.b = fVar25;
        LabelButton__set_Color(pLVar22,UVar27,(MethodInfo *)0x0);
      }
    }
    if ((*ppNVar1 != (Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidCell_o *)0x0) &&
       (pLVar22 = (__this->fields).super.super.super._btnOK, pLVar22 != (LabelButton_o *)0x0)) {
      bVar2 = ((*ppNVar1)->fields).IBFFNCBFPGB;
      bVar6 = bVar2 == false;
      UnityEngine_UI_Selectable__set_interactable
                ((UnityEngine_UI_Selectable_o *)pLVar22,bVar6,(MethodInfo *)0x0);
      pLVar22 = (__this->fields).super.super.super._btnOK;
      if (pLVar22 != (LabelButton_o *)0x0) {
        LabelButton__set_Text(pLVar22,pSVar11,(MethodInfo *)0x0);
        pNVar13 = (__this->fields)._unknowLabel;
        if ((pNVar13 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
           (pUVar14 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pNVar13,(MethodInfo *)0x0),
           pUVar14 != (UnityEngine_GameObject_o *)0x0)) {
          UnityEngine_GameObject__SetActive(pUVar14,bVar2 != false,(MethodInfo *)0x0);
          pNVar13 = (__this->fields)._descriptionLabel;
          if (bVar2 == false) {
            if (pNVar13 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_032764e8;
            Nekki_SF2_GUI_LabelAlias__set_Alias(pNVar13,StringLiteral_4404/*"ClanRaidStart"*/,(MethodInfo *)0x0);
          }
          else {
            pIVar8 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                               (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
            lVar9 = FUN_01bab718(string___TypeInfo,1);
            local_68 = OHDDKGHEEPA__GOKIINPLKFL(__this_04,(MethodInfo *)0x0);
            pSVar11 = System_Int32__ToString((int32_t)&local_68,(MethodInfo *)0x0);
            if (lVar9 == 0) goto LAB_032764e8;
            if (*(int *)(lVar9 + 0x18) == 0) {
LAB_032764ec:
                    /* WARNING: Subroutine does not return */
              FUN_01bab8d0();
            }
            *(System_String_o **)(lVar9 + 0x20) = pSVar11;
            thunk_FUN_01c20e04();
            uVar15 = StringLiteral_5076/*"DanInsufficient"*/;
            if (pIVar8 == (Il2CppObject *)0x0) goto LAB_032764e8;
            pIVar17 = pIVar8->klass;
            uVar5._0_1_ = (pIVar17->_2).rank;
            uVar5._1_1_ = (pIVar17->_2).minimumAlignment;
            uVar18 = (ulong)uVar5;
            if (uVar18 != 0) {
              piVar19 = &((pIVar17->_1).interfaceOffsets)->offset;
              do {
                if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar19 + -2))->interfaceType ==
                    (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
                    /* try { // try from 03276270 to 033763eb has its CatchHandler @ 03276270
                       catch() { ... } // from try @ 03276270 with catch @ 03276270
                       catch() { ... } // from try @ 03276594 with catch @ 03276270
                       catch() { ... } // from try @ 03276640 with catch @ 03276270
                       catch() { ... } // from try @ 03276648 with catch @ 03276270
                       catch() { ... } // from try @ 03276704 with catch @ 03276270 */
                  pVVar10 = pIVar17->vtable + (*piVar19 + 0xc);
                  goto LAB_03276280;
                }
                uVar18 = uVar18 - 1;
                piVar19 = piVar19 + 4;
              } while (uVar18 != 0);
            }
            pVVar10 = (VirtualInvokeData *)FUN_01b81914(pIVar8,BLEFOFGCKEF_TypeInfo,0xc);
LAB_03276280:
            uVar15 = (*pVVar10->methodPtr)(pIVar8,uVar15,lVar9,pVVar10->method);
            if (pNVar13 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_032764e8;
            (*(pNVar13->klass->vtable)._75_set_text.methodPtr)
                      (pNVar13,uVar15,(pNVar13->klass->vtable)._75_set_text.method);
          }
          iVar7 = FightList__IKDFBAOFNPB(__this_00,(MethodInfo *)0x0);
          if ((bVar2 == false) && (0 < iVar7)) {
            pIVar8 = DJNBJHPDKDP__PHPELPFMOII<object>
                               ((System_Collections_Generic_List_T__o *)
                                (__this_00->fields).MECHOBPGHFJ,
                                Method_DJNBJHPDKDP_PHPELPFMOII<ModelParameters>__);
            pNVar13 = (__this->fields)._shieldLabel;
            if ((pNVar13 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) ||
               (pUVar14 = UnityEngine_Component__get_gameObject
                                    ((UnityEngine_Component_o *)pNVar13,(MethodInfo *)0x0),
               pUVar14 == (UnityEngine_GameObject_o *)0x0)) goto LAB_032764e8;
            method_00 = (MethodInfo *)0x0;
            UnityEngine_GameObject__SetActive(pUVar14,true,(MethodInfo *)0x0);
            if (pIVar8 == (Il2CppObject *)0x0) goto LAB_032764e8;
            uStack_78 = *(undefined8 *)((long)&pIVar8[0x22].klass + 4);
            local_80 = *(undefined8 *)((long)&pIVar8[0x21].monitor + 4);
            pNVar13 = (__this->fields)._shieldLabel;
            __this_05.fields.fakeValue = 0;
            __this_05.fields.fakeValueActive = false;
            __this_05.fields.inited = false;
            __this_05.fields._14_2_ = 0;
            __this_05.fields._0_8_ = &local_80;
            pSVar11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(__this_05,method_00);
            pSVar11 = System_String__Concat(StringLiteral_2438/*"<quad name=RaidMisc.shield /> "*/,pSVar11,(MethodInfo *)0x0);
            if (pNVar13 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_032764e8;
            (*(pNVar13->klass->vtable)._75_set_text.methodPtr)
                      (pNVar13,pSVar11,(pNVar13->klass->vtable)._75_set_text.method);
          }
          else {
            pNVar13 = (__this->fields)._shieldLabel;
            if ((pNVar13 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) ||
               (pUVar14 = UnityEngine_Component__get_gameObject
                                    ((UnityEngine_Component_o *)pNVar13,(MethodInfo *)0x0),
               pUVar14 == (UnityEngine_GameObject_o *)0x0)) goto LAB_032764e8;
            UnityEngine_GameObject__SetActive(pUVar14,false,(MethodInfo *)0x0);
          }
          pNVar13 = (__this->fields)._timeLabel;
          if ((pNVar13 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
             (pUVar14 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)pNVar13,(MethodInfo *)0x0),
             pUVar14 != (UnityEngine_GameObject_o *)0x0)) {
            UnityEngine_GameObject__SetActive(pUVar14,bVar6,(MethodInfo *)0x0);
            if (bVar2 == false) {
              NFBEBOIDJLL = OHDDKGHEEPA__BKDPJMOCMOI(__this_04,(MethodInfo *)0x0);
                    /* try { // try from 032763ec to 03376413 has its CatchHandler @ 03276668 */
              pSVar11 = Nekki_SF2_GUI_TimerLabel__GetTimeString
                                  (NFBEBOIDJLL,true,true,true,false,false,true,StringLiteral_2086/*":"*/,
                                   StringLiteral_1/*""*/,true,true,true,true,true,StringLiteral_1/*""*/,
                                   StringLiteral_1/*""*/,StringLiteral_1/*""*/,3,(MethodInfo *)0x0);
              pNVar13 = (__this->fields)._timeLabel;
              pSVar11 = System_String__Concat(StringLiteral_2432/*"<quad name=RaidMisc.clocks /> "*/,pSVar11,(MethodInfo *)0x0);
              if (pNVar13 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_032764e8;
                    /* try { // try from 03276448 to 03376473 has its CatchHandler @ 03276664 */
              (*(pNVar13->klass->vtable)._75_set_text.methodPtr)
                        (pNVar13,pSVar11,(pNVar13->klass->vtable)._75_set_text.method);
              pNVar13 = (__this->fields)._countMemberLabel;
              local_68 = OHDDKGHEEPA__NLMMJCACKPC(__this_04,(MethodInfo *)0x0);
              pSVar11 = System_Int32__ToString((int32_t)&local_68,(MethodInfo *)0x0);
              pSVar11 = System_String__Concat(StringLiteral_2436/*"<quad name=RaidMisc.players /> "*/,pSVar11,(MethodInfo *)0x0);
              if (pNVar13 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_032764e8;
              (*(pNVar13->klass->vtable)._75_set_text.methodPtr)
                        (pNVar13,pSVar11,(pNVar13->klass->vtable)._75_set_text.method);
            }
            pNVar13 = (__this->fields)._countMemberLabel;
                    /* try { // try from 032764b0 to 03376523 has its CatchHandler @ 03276670 */
            if ((pNVar13 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
               (pUVar14 = UnityEngine_Component__get_gameObject
                                    ((UnityEngine_Component_o *)pNVar13,(MethodInfo *)0x0),
               pUVar14 != (UnityEngine_GameObject_o *)0x0)) {
              UnityEngine_GameObject__SetActive(pUVar14,bVar6,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
LAB_032764e8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void DNHHEMBFGFJ()  [RVA 0x31753E4]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.CreateClanRaidDialog$$DNHHEMBFGFJ @ RVA 0x31753E4

void Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanRaidDialog__DNHHEMBFGFJ
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanRaidDialog_o *__this,MethodInfo *method)

{
  System_Collections_IEnumerator_o **ppSVar1;
  ushort uVar2;
  PBAKFOBIHEG_o *pPVar3;
  VirtualInvokeData *pVVar4;
  PBAKFOBIHEG_c *pPVar5;
  ulong uVar6;
  int32_t *piVar7;
  System_Collections_IEnumerator_o *pSVar8;
  
  if ((DAT_04566955 & 1) == 0) {
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    DAT_04566955 = 1;
  }
  ppSVar1 = &(__this->fields).INIKLIGPEHH;
  if ((__this->fields).INIKLIGPEHH != (System_Collections_IEnumerator_o *)0x0) {
    pPVar3 = CoroutineManager__get_Current((MethodInfo *)0x0);
    if (pPVar3 == (PBAKFOBIHEG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pPVar5 = pPVar3->klass;
    pSVar8 = *ppSVar1;
    uVar2._0_1_ = (pPVar5->_2).rank;
    uVar2._1_1_ = (pPVar5->_2).minimumAlignment;
    uVar6 = (ulong)uVar2;
    if (uVar6 != 0) {
      piVar7 = &((pPVar5->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar7 + -2))->interfaceType ==
            (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
          pVVar4 = pPVar5->vtable + (*piVar7 + 1);
          goto LAB_03275488;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    pVVar4 = (VirtualInvokeData *)FUN_01b81914(pPVar3,PBAKFOBIHEG_TypeInfo,1);
LAB_03275488:
    (*pVVar4->methodPtr)(pPVar3,pSVar8,pVVar4->method);
  }
  *ppSVar1 = (System_Collections_IEnumerator_o *)0x0;
  thunk_FUN_01c20e04(ppSVar1,0);
  return;
}


// ===== protected override void IGDDKJJMDLP()  [RVA 0x31764F0]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.CreateClanRaidDialog$$IGDDKJJMDLP @ RVA 0x31764F0

void Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanRaidDialog__IGDDKJJMDLP
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanRaidDialog_o *__this,MethodInfo *method)

{
  return;
}


// ===== public override void UpdateHeaderPosition()  [RVA 0x31764F4]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.CreateClanRaidDialog$$UpdateHeaderPosition @ RVA 0x31764F4

void Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanRaidDialog__UpdateHeaderPosition
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanRaidDialog_o *__this,MethodInfo *method)

{
  return;
}


// ===== private void KPBJALPCPAP()  [RVA 0x31764F8]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.CreateClanRaidDialog$$KPBJALPCPAP @ RVA 0x31764F8

void Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanRaidDialog__KPBJALPCPAP
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanRaidDialog_o *__this,MethodInfo *method)

{
  bool bVar1;
  FightList_o *FBFPLEFCDOK;
  OHDDKGHEEPA_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  undefined8 *puVar2;
  Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidCell_o *pNVar3;
  
  if ((DAT_04566956 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
                    /* try { // try from 03276524 to 03376533 has its CatchHandler @ 03276658 */
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_4859/*"CreateClanRaidDialog::onEnterPressed fight is NULL"*/);
    FUN_01bab630(&StringLiteral_4858/*"CreateClanRaidDialog::onEnterPressed battle is NULL"*/);
    DAT_04566956 = 1;
    method = extraout_x1;
  }
  pNVar3 = (__this->fields).IOOHHPDCNCM;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
                    /* try { // try from 03276578 to 03376593 has its CatchHandler @ 03276654 */
    return;
  }
  pNVar3 = (__this->fields).IOOHHPDCNCM;
  if (pNVar3 != (Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidCell_o *)0x0) {
    FBFPLEFCDOK = Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidCell__GetFight
                            (pNVar3,(MethodInfo *)0x0);
                    /* try { // try from 03276594 to 03376627 has its CatchHandler @ 03276270 */
    if (FBFPLEFCDOK == (FightList_o *)0x0) {
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      puVar2 = &StringLiteral_4859/*"CreateClanRaidDialog::onEnterPressed fight is NULL"*/;
    }
    else {
      pNVar3 = (__this->fields).IOOHHPDCNCM;
      if (pNVar3 == (Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidCell_o *)0x0) goto LAB_03276630;
      __this_00 = (pNVar3->fields)._battle;
      if (__this_00 != (OHDDKGHEEPA_o *)0x0) {
        bVar1 = OHDDKGHEEPA__EPLDDILOPAJ(__this_00,FBFPLEFCDOK,(MethodInfo *)0x0);
        if (bVar1) {
          Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanRaidDialog__MGLJMKKFNKK(__this,method_00);
          return;
        }
                    /* try { // try from 03276628 to 0337662f has its CatchHandler @ 03276660 */
        Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanRaidDialog__EADMNHONGDH(__this,method_00);
        return;
      }
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      puVar2 = &StringLiteral_4858/*"CreateClanRaidDialog::onEnterPressed battle is NULL"*/;
    }
    UnityEngine_Debug__LogError((Il2CppObject *)*puVar2,(MethodInfo *)0x0);
    return;
  }
LAB_03276630:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03276630 to 03376637 has its CatchHandler @ 0327666c */
  FUN_01bab8c8();
}


// ===== protected override void OnDestroy()  [RVA 0x31767AC]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.CreateClanRaidDialog$$OnDestroy @ RVA 0x31767AC

void Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanRaidDialog__OnDestroy
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanRaidDialog_o *__this,MethodInfo *method)

{
  FKDLCJJOGIP_o *__this_00;
  System_Action_o *CJNHFNHJHPE;
  MethodInfo *method_00;
  
  if ((DAT_04566957 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanRaidDialog_JBOPJALGFHH__);
    DAT_04566957 = 1;
  }
  __this_00 = FKDLCJJOGIP__AIHNLLGNBLC((MethodInfo *)0x0);
  CJNHFNHJHPE = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
  System_Action___ctor();
  if (__this_00 != (FKDLCJJOGIP_o *)0x0) {
    FKDLCJJOGIP__DAGFKDGOBBF(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
    Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanRaidDialog__DNHHEMBFGFJ(__this,method_00);
    Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanBaseDialog__OnDestroy
              ((Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanBaseDialog_o *)__this,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void MGLJMKKFNKK()  [RVA 0x3176634]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.CreateClanRaidDialog$$MGLJMKKFNKK @ RVA 0x3176634

void Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanRaidDialog__MGLJMKKFNKK
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanRaidDialog_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  NDPMLPGANCI_o *pNVar2;
  RaidClansManager_o *pEVar3;
  System_Action_NLFLMJPNOLF__o *IELDNEAAPBE;
  Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidCell_o *pNVar4;
  OHDDKGHEEPA_o *__this_00;
  ClanRaidsController_o *__this_01;
  
                    /* try { // try from 03276638 to 0337663f has its CatchHandler @ 0327665c */
                    /* try { // try from 03276640 to 03376643 has its CatchHandler @ 03276270 */
                    /* try { // try from 03276644 to 03376647 has its CatchHandler @ 03276650 */
                    /* try { // try from 03276648 to 0337667f has its CatchHandler @ 03276270 */
  if ((DAT_04566958 & 1) == 0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03276644 with catch @ 03276650
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03276578 with catch @ 03276654
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03276524 with catch @ 03276658
                        */
    FUN_01bab630(&System_Action<NLFLMJPNOLF>_TypeInfo);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03276638 with catch @ 0327665c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03276628 with catch @ 03276660
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03276448 with catch @ 03276664
                        */
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanRaidDialog_BODABJMGNDG__);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032763ec with catch @ 03276668
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03276630 with catch @ 0327666c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032764b0 with catch @ 03276670
                        */
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
                    /* try { // try from 03276680 to 03376683 has its CatchHandler @ 03276694 */
    FUN_01bab630(&StringLiteral_4857/*"CreateClanRaidDialog::CreateRaid: battle is NULL"*/);
    DAT_04566958 = 1;
  }
                    /* catch() { ... } // from try @ 03276680 with catch @ 03276694 */
  pNVar2 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
                    /* try { // try from 0327669c to 03376703 has its CatchHandler @ 03276718 */
  if (pNVar2 != (NDPMLPGANCI_o *)0x0) {
    iVar1 = NDPMLPGANCI__FFIOCEOHPEM(pNVar2,(MethodInfo *)0x0);
    if (iVar1 != 5) {
      pNVar2 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
      if (pNVar2 == (NDPMLPGANCI_o *)0x0) goto LAB_032767a8;
      NDPMLPGANCI__EKPAFDJIAGI
                (pNVar2,5,(Il2CppObject *)0x0,(System_Action_object__o *)0x0,true,(MethodInfo *)0x0)
      ;
    }
    pNVar4 = (__this->fields).IOOHHPDCNCM;
    if (pNVar4 != (Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidCell_o *)0x0) {
      __this_00 = (pNVar4->fields)._battle;
      if (__this_00 == (OHDDKGHEEPA_o *)0x0) {
        if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        UnityEngine_Debug__LogError(StringLiteral_4857/*"CreateClanRaidDialog::CreateRaid: battle is NULL"*/,(MethodInfo *)0x0);
        return;
      }
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pEVar3 = HJPEKDOPBHN__CEFGBPEHJJG((MethodInfo *)0x0);
                    /* try { // try from 03276704 to 0337670f has its CatchHandler @ 03276270 */
      if (pEVar3 != (RaidClansManager_o *)0x0) {
                    /* try { // try from 03276710 to 03376717 has its CatchHandler @ 03276718 */
        __this_01 = (pEVar3->fields).GMNJEBCECDA;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0327669c with catch @ 03276718
                       catch(type#2 @ 00000000) { ... } // from try @ 03276710 with catch @ 03276718
                        */
        iVar1 = OHDDKGHEEPA__DCAKAGILMOF(__this_00,(MethodInfo *)0x0);
        IELDNEAAPBE = (System_Action_NLFLMJPNOLF__o *)
                      thunk_FUN_01bda818(System_Action<NLFLMJPNOLF>_TypeInfo);
        System_Action<object>___ctor();
        if (__this_01 != (ClanRaidsController_o *)0x0) {
          ClanRaidsController__JHMPJEBHKMP(__this_01,iVar1,IELDNEAAPBE,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
LAB_032767a8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x317685C]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.CreateClanRaidDialog$$.ctor @ RVA 0x317685C

void Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanRaidDialog___ctor
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanRaidDialog_o *__this,MethodInfo *method)

{
  UnityEngine_Color_o UVar1;
  
  UVar1 = CFBGPBCDAGA__NFFPCFGDOKG(0x9b,0x1c,7,0xff,(MethodInfo *)0x0);
  (__this->fields).FBKHDCFLOGC.fields.r = UVar1.fields.r;
  (__this->fields).FBKHDCFLOGC.fields.g = UVar1.fields.g;
  (__this->fields).FBKHDCFLOGC.fields.b = UVar1.fields.b;
  (__this->fields).FBKHDCFLOGC.fields.a = UVar1.fields.a;
  Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanBaseDialog___ctor
            ((Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanBaseDialog_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public void OnHintClicked()  [RVA 0x3176894]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.CreateClanRaidDialog$$OnHintClicked @ RVA 0x3176894

void Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanRaidDialog__OnHintClicked
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanRaidDialog_o *__this,MethodInfo *method)

{
  ushort uVar1;
  Nekki_SF2_GUI_HintBoxAutoKilled_o *pNVar2;
  UnityEngine_GameObject_o *DKIDCBPNMPD;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_RectTransform_o *__this_01;
  PBAKFOBIHEG_o *pPVar4;
  undefined8 uVar5;
  VirtualInvokeData *pVVar6;
  System_Collections_IEnumerator_o *pSVar7;
  MethodInfo *method_00;
  SFButton_o *__this_02;
  PBAKFOBIHEG_c *pPVar8;
  ulong uVar9;
  int32_t *piVar10;
  float fVar11;
  float fVar12;
  UnityEngine_Vector2_o UVar13;
  UnityEngine_Vector3_o UVar14;
  UnityEngine_Vector3_o value;
  
  if ((DAT_04566959 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanRaidDialog_HKFPJNNOBMH__);
    FUN_01bab630(&DLAFGNMCMFA_TypeInfo);
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    FUN_01bab630(&StringLiteral_18730/*"hard_mode_hint"*/);
    DAT_04566959 = 1;
  }
  pNVar2 = (__this->fields)._hintPrefab;
  if (pNVar2 != (Nekki_SF2_GUI_HintBoxAutoKilled_o *)0x0) {
    DKIDCBPNMPD = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0);
    pUVar3 = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    __this_02 = (__this->fields)._hintButton;
    if ((__this_02 != (SFButton_o *)0x0) &&
       (__this_00 = UnityEngine_Component__get_transform
                              ((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0),
       __this_00 != (UnityEngine_Transform_o *)0x0)) {
      UVar14 = UnityEngine_Transform__get_position(__this_00,(MethodInfo *)0x0);
      if ((DLAFGNMCMFA_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (DAT_04566664 == '\0') {
        FUN_01bab630(&DLAFGNMCMFA_TypeInfo);
        DAT_04566664 = '\x01';
      }
      if ((DLAFGNMCMFA_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pNVar2 = Nekki_SF2_GUI_HintBoxAutoKilled__Build
                         (DKIDCBPNMPD,pUVar3,UVar14,DLAFGNMCMFA_TypeInfo->static_fields->KODKKHPADDM
                          ,-1.0,-1.0,(MethodInfo *)0x0);
      if (pNVar2 != (Nekki_SF2_GUI_HintBoxAutoKilled_o *)0x0) {
        Nekki_SF2_GUI_HintBoxAutoKilled__SetDescAlias(pNVar2,StringLiteral_18730/*"hard_mode_hint"*/,(MethodInfo *)0x0);
        Nekki_SF2_GUI_HintBox__UpdateLineSpacing
                  ((Nekki_SF2_GUI_HintBox_o *)pNVar2,(MethodInfo *)0x0);
        pUVar3 = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0);
        if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
          UVar14 = UnityEngine_Transform__get_localPosition(pUVar3,(MethodInfo *)0x0);
          __this_01 = (pNVar2->fields).super._RectTransform;
          if (__this_01 != (UnityEngine_RectTransform_o *)0x0) {
            UVar13 = UnityEngine_RectTransform__get_sizeDelta(__this_01,(MethodInfo *)0x0);
            value.fields.x = UVar14.fields.x + 0.0;
            value.fields.y = UVar14.fields.y + UVar13.fields.y + 75.0;
            value.fields.z = UVar14.fields.z + 0.0;
            UnityEngine_Transform__set_localPosition(pUVar3,value,(MethodInfo *)0x0);
            fVar12 = (__this->fields).LLAFFKEMAOI;
            fVar11 = UnityEngine_Time__get_realtimeSinceStartup((MethodInfo *)0x0);
            if (fVar12 < fVar11) {
              Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanRaidDialog__DNHHEMBFGFJ(__this,method_00);
              pPVar4 = CoroutineManager__get_Current((MethodInfo *)0x0);
              uVar5 = thunk_FUN_01bda818(System_Action_TypeInfo);
              System_Action___ctor();
              if (pPVar4 == (PBAKFOBIHEG_o *)0x0) goto LAB_03276b54;
              pPVar8 = pPVar4->klass;
              uVar1._0_1_ = (pPVar8->_2).rank;
              uVar1._1_1_ = (pPVar8->_2).minimumAlignment;
              uVar9 = (ulong)uVar1;
              if (uVar9 != 0) {
                piVar10 = &((pPVar8->_1).interfaceOffsets)->offset;
                do {
                  if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
                      (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
                    pVVar6 = pPVar8->vtable + (*piVar10 + 2);
                    goto LAB_03276b00;
                  }
                  uVar9 = uVar9 - 1;
                  piVar10 = piVar10 + 4;
                } while (uVar9 != 0);
              }
              pVVar6 = (VirtualInvokeData *)FUN_01b81914(pPVar4,PBAKFOBIHEG_TypeInfo,2);
LAB_03276b00:
              pSVar7 = (System_Collections_IEnumerator_o *)
                       (*pVVar6->methodPtr)(0x3dcccccd,pPVar4,uVar5,pVVar6->method);
              (__this->fields).INIKLIGPEHH = pSVar7;
              thunk_FUN_01c20e04(&(__this->fields).INIKLIGPEHH);
              fVar11 = UnityEngine_Time__get_realtimeSinceStartup((MethodInfo *)0x0);
              (__this->fields).LLAFFKEMAOI = fVar11 + 3.0;
            }
            return;
          }
        }
      }
    }
  }
LAB_03276b54:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void BODABJMGNDG(NLFLMJPNOLF DKMMBMBMJBO)  [RVA 0x3176B58]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.CreateClanRaidDialog$$BODABJMGNDG @ RVA 0x3176B58

void Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanRaidDialog__BODABJMGNDG
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanRaidDialog_o *__this,
               NLFLMJPNOLF_o *DKMMBMBMJBO,MethodInfo *method)

{
  DialogsManager_o *__this_00;
  
  __this_00 = DialogsManager__AIHNLLGNBLC((MethodInfo *)0x0);
  if (__this_00 != (DialogsManager_o *)0x0) {
    DialogsManager__IDKIMGGFFNH(__this_00,(MethodInfo *)0x0);
    DialogsOpener__LKDGKEJFPLL(DKMMBMBMJBO,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override void GLANJNFACKI()  [RVA 0x3176B88]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.CreateClanRaidDialog$$GLANJNFACKI @ RVA 0x3176B88

void Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanRaidDialog__GLANJNFACKI
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanRaidDialog_o *__this,MethodInfo *method)

{
  return;
}


// ===== private void JBOPJALGFHH()  [RVA 0x3175C24]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.CreateClanRaidDialog$$JBOPJALGFHH @ RVA 0x3175C24

void Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanRaidDialog__JBOPJALGFHH
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanRaidDialog_o *__this,MethodInfo *method)

{
  int32_t ADBEOINGPAF;
  Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidSlider_o *pNVar1;
  MethodInfo *in_x2;
  
  pNVar1 = (__this->fields)._battleRaidSlider;
  if (pNVar1 != (Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidSlider_o *)0x0) {
    ADBEOINGPAF = Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidSlider__GetCurrentItemLogicIndex
                            (pNVar1,(MethodInfo *)0x0);
    pNVar1 = (__this->fields)._battleRaidSlider;
    if (pNVar1 != (Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidSlider_o *)0x0) {
      Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidSlider__DeleteAllItems(pNVar1,(MethodInfo *)0x0);
      Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanRaidDialog__LAHOOGJMEIC(__this,ADBEOINGPAF,in_x2);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void LAHOOGJMEIC(int ADBEOINGPAF = 0)  [RVA 0x3176B8C]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.CreateClanRaidDialog$$LAHOOGJMEIC @ RVA 0x3176B8C

/* WARNING: Removing unreachable block (ram,0x03276f00) */

void Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanRaidDialog__LAHOOGJMEIC
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanRaidDialog_o *__this,int32_t ADBEOINGPAF
               ,MethodInfo *method)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  long lVar4;
  Il2CppObject *pIVar5;
  bool bVar6;
  int iVar7;
  System_Collections_Generic_List_GEKCMGLDMEE__o *GHAAKPDHIJJ;
  System_Collections_Generic_List_MEJIKMPNBNL__o *__this_00;
  MEJIKMPNBNL_o *__this_01;
  GEKCMGLDMEE_o *__this_02;
  Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidSlider_o *pNVar8;
  PBAKFOBIHEG_o *pPVar9;
  undefined8 uVar10;
  VirtualInvokeData *pVVar11;
  System_Collections_IEnumerator_o *pSVar12;
  MethodInfo *method_00;
  Nekki_SF2_GUI_Scripts_CheckBox_o *pNVar13;
  GEKCMGLDMEE_array *pGVar14;
  PBAKFOBIHEG_c *pPVar15;
  ulong uVar16;
  int32_t *piVar17;
  System_Collections_Generic_List_Enumerator_T__o local_b8;
  System_Collections_Generic_List_Enumerator_T__o local_a0;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  if ((DAT_0456695a & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanRaidDialog_HKFPJNNOBMH__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MEJIKMPNBNL>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MEJIKMPNBNL>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MEJIKMPNBNL>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_get_Current__);
    FUN_01bab630(&GEKCMGLDMEE_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<GEKCMGLDMEE>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OOMHDDBCBJP>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MEJIKMPNBNL>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<GEKCMGLDMEE>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<GEKCMGLDMEE>_get_Count__);
    FUN_01bab630(&System_Collections_Generic_List<GEKCMGLDMEE>_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&OHDDKGHEEPA_TypeInfo);
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    DAT_0456695a = 1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  local_a0.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_a0.fields._index = 0;
  local_a0.fields._version = 0;
  local_a0.fields._current = (Il2CppObject *)0x0;
  GHAAKPDHIJJ = (System_Collections_Generic_List_GEKCMGLDMEE__o *)
                thunk_FUN_01bda818(System_Collections_Generic_List<GEKCMGLDMEE>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)GHAAKPDHIJJ,
             Method_System_Collections_Generic_List<GEKCMGLDMEE>__ctor__);
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = NLPJLHOEAOE__CJNJOLEKIIK((MethodInfo *)0x0);
  if (__this_00 != (System_Collections_Generic_List_MEJIKMPNBNL__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_b8,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<MEJIKMPNBNL>_GetEnumerator__);
    local_80.fields._index = local_b8.fields._index;
    local_80.fields._version = local_b8.fields._version;
    local_80.fields._list = local_b8.fields._list;
    local_80.fields._current = local_b8.fields._current;
    while (bVar6 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_80,
                              Method_System_Collections_Generic_List_Enumerator<MEJIKMPNBNL>_MoveNext__
                             ), bVar6) {
      if ((OHDDKGHEEPA_o *)local_80.fields._current == (OHDDKGHEEPA_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      __this_01 = (((OHDDKGHEEPA_Fields *)((long)local_80.fields._current + 0x10))->super).
                  IAJPHAAMKPC;
      if (__this_01 == (MEJIKMPNBNL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_b8,(System_Collections_Generic_List_object__o *)__this_01,
                 Method_System_Collections_Generic_List<OOMHDDBCBJP>_GetEnumerator__);
      local_a0.fields._index = local_b8.fields._index;
      local_a0.fields._version = local_b8.fields._version;
      local_a0.fields._list = local_b8.fields._list;
      local_a0.fields._current = local_b8.fields._current;
      while (bVar6 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                               (&local_a0,
                                Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_MoveNext__
                               ), pIVar5 = local_a0.fields._current, bVar6) {
        if ((OHDDKGHEEPA_o *)local_a0.fields._current != (OHDDKGHEEPA_o *)0x0) {
          bVar1 = (OHDDKGHEEPA_TypeInfo->_2).naturalAligment;
          if ((bVar1 <= (((OHDDKGHEEPA_c *)(local_a0.fields._current)->klass)->_2).naturalAligment)
             && ((((OHDDKGHEEPA_c *)(local_a0.fields._current)->klass)->_2).typeHierarchy
                 [(ulong)bVar1 - 1] == (Il2CppClass *)OHDDKGHEEPA_TypeInfo)) {
            iVar7 = ((OHDDKGHEEPA_Fields *)((long)local_a0.fields._current + 0x10))->
                    _DNENMENCFFI_k__BackingField;
            if (iVar7 == 2) {
              bVar6 = true;
            }
            else if (iVar7 == 1) {
              pNVar13 = (__this->fields)._hardModeCheck;
              if (pNVar13 == (Nekki_SF2_GUI_Scripts_CheckBox_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              bVar6 = (pNVar13->fields).OIKLOAGFFGO == 0;
            }
            else if (iVar7 == 0) {
              pNVar13 = (__this->fields)._hardModeCheck;
              if (pNVar13 == (Nekki_SF2_GUI_Scripts_CheckBox_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              bVar6 = (pNVar13->fields).OIKLOAGFFGO == 1;
            }
            else {
              bVar6 = false;
            }
            if (((((bVar6 & ((((OHDDKGHEEPA_Fields *)((long)local_a0.fields._current + 0x10))->super
                             ).CILMHNDFBPH ^ 0xffU)) != 0) &&
                 ((((OHDDKGHEEPA_Fields *)((long)local_a0.fields._current + 0x10))->super).
                  HHDBIGKBMEC != false)) &&
                (bVar6 = OOMHDDBCBJP__KFMAFEPOEIB
                                   ((OOMHDDBCBJP_o *)local_a0.fields._current,(MethodInfo *)0x0),
                !bVar6)) &&
               (iVar7 = (*(((OHDDKGHEEPA_c *)pIVar5->klass)->vtable)._15_AAHLCCCONKI.methodPtr)
                                  (pIVar5,(((OHDDKGHEEPA_c *)pIVar5->klass)->vtable)._15_AAHLCCCONKI
                                          .method), iVar7 == 2)) {
              __this_02 = (GEKCMGLDMEE_o *)thunk_FUN_01bda818(GEKCMGLDMEE_TypeInfo);
              GEKCMGLDMEE___ctor(__this_02,(MethodInfo *)0x0);
              if (__this_02 == (GEKCMGLDMEE_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              (__this_02->fields).CCJJPOBJFIF = (OHDDKGHEEPA_o *)pIVar5;
              thunk_FUN_01c20e04(&__this_02->fields,pIVar5);
              lVar4 = Method_System_Collections_Generic_List<GEKCMGLDMEE>_Add__;
              if (GHAAKPDHIJJ == (System_Collections_Generic_List_GEKCMGLDMEE__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              pGVar14 = (GHAAKPDHIJJ->fields)._items;
              (GHAAKPDHIJJ->fields)._version = (GHAAKPDHIJJ->fields)._version + 1;
              if (pGVar14 == (GEKCMGLDMEE_array *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              uVar3 = (GHAAKPDHIJJ->fields)._size;
              if (uVar3 < (uint)pGVar14->max_length) {
                (GHAAKPDHIJJ->fields)._size = uVar3 + 1;
                pGVar14->m_Items[(int)uVar3] = __this_02;
                thunk_FUN_01c20e04(pGVar14->m_Items + (int)uVar3,__this_02);
              }
              else {
                System_Collections_Generic_List<object>__AddWithResize
                          ((System_Collections_Generic_List_object__o *)GHAAKPDHIJJ,
                           (Il2CppObject *)__this_02,
                           *(MethodInfo_26E4DAC **)
                            (*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
              }
            }
          }
        }
      }
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_a0,Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_Dispose__)
      ;
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_80,Method_System_Collections_Generic_List_Enumerator<MEJIKMPNBNL>_Dispose__);
    pNVar8 = (__this->fields)._battleRaidSlider;
    if (pNVar8 != (Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidSlider_o *)0x0) {
      Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidSlider__SetFocusesScales
                (pNVar8,1.2,0.9,(MethodInfo *)0x0);
      pNVar8 = (__this->fields)._battleRaidSlider;
      if (((pNVar8 != (Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidSlider_o *)0x0) &&
          (Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidSlider__SetItems
                     (pNVar8,GHAAKPDHIJJ,(MethodInfo *)0x0),
          GHAAKPDHIJJ != (System_Collections_Generic_List_GEKCMGLDMEE__o *)0x0)) &&
         (pNVar8 = (__this->fields)._battleRaidSlider,
         pNVar8 != (Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidSlider_o *)0x0)) {
        if ((GHAAKPDHIJJ->fields)._size <= ADBEOINGPAF) {
          ADBEOINGPAF = 0;
        }
        Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidSlider__ScrollToItem
                  (pNVar8,ADBEOINGPAF,0.0,(MethodInfo *)0x0);
        pNVar13 = (__this->fields)._hardModeCheck;
        if (pNVar13 != (Nekki_SF2_GUI_Scripts_CheckBox_o *)0x0) {
          if ((pNVar13->fields).OIKLOAGFFGO == 0) {
            Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanRaidDialog__DNHHEMBFGFJ(__this,method_00);
            pPVar9 = CoroutineManager__get_Current((MethodInfo *)0x0);
            uVar10 = thunk_FUN_01bda818(System_Action_TypeInfo);
            System_Action___ctor();
            if (pPVar9 == (PBAKFOBIHEG_o *)0x0) goto LAB_03277100;
            pPVar15 = pPVar9->klass;
            uVar2._0_1_ = (pPVar15->_2).rank;
            uVar2._1_1_ = (pPVar15->_2).minimumAlignment;
            uVar16 = (ulong)uVar2;
            if (uVar16 != 0) {
              piVar17 = &((pPVar15->_1).interfaceOffsets)->offset;
              do {
                if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar17 + -2))->interfaceType ==
                    (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
                  pVVar11 = pPVar15->vtable + (*piVar17 + 2);
                  goto LAB_03277084;
                }
                uVar16 = uVar16 - 1;
                piVar17 = piVar17 + 4;
              } while (uVar16 != 0);
            }
            pVVar11 = (VirtualInvokeData *)FUN_01b81914(pPVar9,PBAKFOBIHEG_TypeInfo,2);
LAB_03277084:
            pSVar12 = (System_Collections_IEnumerator_o *)
                      (*pVVar11->methodPtr)(0x3d4ccccd,pPVar9,uVar10,pVVar11->method);
            (__this->fields).INIKLIGPEHH = pSVar12;
            thunk_FUN_01c20e04(&(__this->fields).INIKLIGPEHH);
          }
          return;
        }
      }
    }
  }
LAB_03277100:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void OGCPNAAGKAK(BKKPAKHJDKB IMMNELPBGIF)  [RVA 0x3177198]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.CreateClanRaidDialog$$OGCPNAAGKAK @ RVA 0x3177198

void Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanRaidDialog__OGCPNAAGKAK
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanRaidDialog_o *__this,
               BKKPAKHJDKB_o *IMMNELPBGIF,MethodInfo *method)

{
  if ((IMMNELPBGIF != (BKKPAKHJDKB_o *)0x0) && ((IMMNELPBGIF->fields).HHJIJKJCEOF == 0)) {
    Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanRaidDialog__MGLJMKKFNKK
              (__this,(MethodInfo *)IMMNELPBGIF);
    return;
  }
  return;
}


// ===== protected override void LCGFJKFJKJK(BaseDialog.OFBBBIDKKOD DNBBBGEENMM)  [RVA 0x31771AC]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.CreateClanRaidDialog$$LCGFJKFJKJK @ RVA 0x31771AC

void Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanRaidDialog__LCGFJKFJKJK
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanRaidDialog_o *__this,int32_t DNBBBGEENMM
               ,MethodInfo *method)

{
  return;
}


// ===== public override void Init(object IMMNELPBGIF)  [RVA 0x31771B0]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.CreateClanRaidDialog$$Init @ RVA 0x31771B0

void Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanRaidDialog__Init
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanRaidDialog_o *__this,
               Il2CppObject *IMMNELPBGIF,MethodInfo *method)

{
  bool bVar1;
  LabelButton_o *pLVar2;
  System_Action_object__o *IELDNEAAPBE;
  UnityEngine_Events_UnityAction_o *call;
  Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidSlider_o *pNVar3;
  System_Action_BattleRaidCell__o *CJNHFNHJHPE;
  FKDLCJJOGIP_o *__this_00;
  System_Action_o *CJNHFNHJHPE_00;
  Roster_o *__this_01;
  MEMHEPBAJJA_HIAEDCDJJDJ_o *pMVar4;
  System_Action_CheckBox_EKFFAMKMBIH__o *CJNHFNHJHPE_01;
  uint CJNHFNHJHPE_02;
  MethodInfo *method_00;
  BHEDGAKGKPO_StaticFields *pBVar5;
  SFButton_o *pSVar6;
  Nekki_SF2_GUI_LabelAlias_o *pNVar7;
  UnityEngine_Events_UnityEvent_o *__this_02;
  Nekki_SF2_GUI_Scripts_CheckBox_o *pNVar8;
  
  if ((DAT_0456695b & 1) == 0) {
    FUN_01bab630(&System_Action<CheckBox_EKFFAMKMBIH>_TypeInfo);
    FUN_01bab630(&System_Action<object>_TypeInfo);
    FUN_01bab630(&System_Action<BattleRaidCell>_TypeInfo);
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&BHEDGAKGKPO_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanRaidDialog_GLEOGMBBLNH__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanRaidDialog_ILPJLGPGNMC__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanRaidDialog_JBOPJALGFHH__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanRaidDialog_KPBJALPCPAP__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    FUN_01bab630(&StringLiteral_9679/*"OK"*/);
    FUN_01bab630(&StringLiteral_3640/*"CANCEL"*/);
    FUN_01bab630(&StringLiteral_16006/*"_RaidHardMode"*/);
    FUN_01bab630(&StringLiteral_4376/*"ClanChooseBoss"*/);
    FUN_01bab630(&StringLiteral_17833/*"dlgSpinFirstButton"*/);
    FUN_01bab630(&StringLiteral_1606/*"1"*/);
    FUN_01bab630(&StringLiteral_2492/*"???"*/);
    DAT_0456695b = 1;
  }
  Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanBaseDialog__GIENGNEGHPJ
            ((Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanBaseDialog_o *)__this,StringLiteral_4376/*"ClanChooseBoss"*/,
             StringLiteral_9679/*"OK"*/,StringLiteral_3640/*"CANCEL"*/,0,(MethodInfo *)0x0);
  pNVar7 = (__this->fields)._unknowLabel;
  if ((BHEDGAKGKPO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (pNVar7 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
    pBVar5 = BHEDGAKGKPO_TypeInfo->static_fields;
    (*(pNVar7->klass->vtable)._23_set_color.methodPtr)
              ((pBVar5->FHIAKPJBBCB).fields.r,(pBVar5->FHIAKPJBBCB).fields.g,
               (pBVar5->FHIAKPJBBCB).fields.b,(pBVar5->FHIAKPJBBCB).fields.a,pNVar7,
               (pNVar7->klass->vtable)._23_set_color.method);
    pNVar7 = (__this->fields)._unknowLabel;
    if (pNVar7 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
      (*(pNVar7->klass->vtable)._75_set_text.methodPtr)
                (pNVar7,StringLiteral_2492/*"???"*/,(pNVar7->klass->vtable)._75_set_text.method);
      pLVar2 = (__this->fields).super.super.super._btnCancel;
      if (pLVar2 != (LabelButton_o *)0x0) {
        LabelButton__set_Alias(pLVar2,StringLiteral_3640/*"CANCEL"*/,(MethodInfo *)0x0);
        pLVar2 = (__this->fields).super.super.super._btnCancel;
        IELDNEAAPBE = (System_Action_object__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
        System_Action<object>___ctor();
        if (pLVar2 != (LabelButton_o *)0x0) {
          SFButton__AddEventListener((SFButton_o *)pLVar2,2,IELDNEAAPBE,(MethodInfo *)0x0);
          pLVar2 = (__this->fields).super.super.super._btnOK;
          if (pLVar2 != (LabelButton_o *)0x0) {
            LabelButton__set_Alias(pLVar2,StringLiteral_17833/*"dlgSpinFirstButton"*/,(MethodInfo *)0x0);
            pLVar2 = (__this->fields).super.super.super._btnOK;
            if (pLVar2 != (LabelButton_o *)0x0) {
              __this_02 = (UnityEngine_Events_UnityEvent_o *)
                          (pLVar2->fields).super.super.super.m_OnClick;
              call = (UnityEngine_Events_UnityAction_o *)
                     thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
              UnityEngine_Events_UnityAction___ctor();
              if (__this_02 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                UnityEngine_Events_UnityEvent__AddListener(__this_02,call,(MethodInfo *)0x0);
                pNVar3 = (__this->fields)._battleRaidSlider;
                if (pNVar3 != (Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidSlider_o *)0x0) {
                  Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidSlider__Init
                            (pNVar3,(__this->fields)._hardModeCheck,(MethodInfo *)0x0);
                  pNVar3 = (__this->fields)._battleRaidSlider;
                  CJNHFNHJHPE = (System_Action_BattleRaidCell__o *)
                                thunk_FUN_01bda818(System_Action<BattleRaidCell>_TypeInfo);
                  System_Action<object>___ctor();
                  if (pNVar3 != (Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidSlider_o *)0x0) {
                    Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidSlider__add_OnSelectedCellAction
                              (pNVar3,CJNHFNHJHPE,(MethodInfo *)0x0);
                    __this_00 = FKDLCJJOGIP__AIHNLLGNBLC((MethodInfo *)0x0);
                    CJNHFNHJHPE_00 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
                    System_Action___ctor();
                    if (__this_00 != (FKDLCJJOGIP_o *)0x0) {
                      FKDLCJJOGIP__AJLLLOFFOHF(__this_00,CJNHFNHJHPE_00,(MethodInfo *)0x0);
                      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                        thunk_FUN_01ba7564();
                      }
                      if (DAT_04565b7d == '\0') {
                        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                        DAT_04565b7d = '\x01';
                      }
                      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                        thunk_FUN_01ba7564();
                      }
                      __this_01 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
                      if (__this_01 != (Roster_o *)0x0) {
                        pMVar4 = Roster__HKIEGNBOFCD
                                           (__this_01,StringLiteral_16006/*"_RaidHardMode"*/,0,(MethodInfo *)0x0);
                        pNVar8 = (__this->fields)._hardModeCheck;
                        if (pMVar4 == (MEMHEPBAJJA_HIAEDCDJJDJ_o *)0x0) {
                          CJNHFNHJHPE_02 = 1;
                        }
                        else {
                          bVar1 = System_String__op_Equality
                                            ((pMVar4->fields).JAICMIMBIOA,StringLiteral_1606/*"1"*/,
                                             (MethodInfo *)0x0);
                          CJNHFNHJHPE_02 = ~(uint)bVar1 & 1;
                        }
                        if (pNVar8 != (Nekki_SF2_GUI_Scripts_CheckBox_o *)0x0) {
                          Nekki_SF2_GUI_Scripts_CheckBox__set_State
                                    (pNVar8,CJNHFNHJHPE_02,(MethodInfo *)0x0);
                          pNVar8 = (__this->fields)._hardModeCheck;
                          CJNHFNHJHPE_01 =
                               (System_Action_CheckBox_EKFFAMKMBIH__o *)
                               thunk_FUN_01bda818(System_Action<CheckBox_EKFFAMKMBIH>_TypeInfo);
                          System_Action<Int32Enum>___ctor();
                          if (pNVar8 != (Nekki_SF2_GUI_Scripts_CheckBox_o *)0x0) {
                            method_00 = (MethodInfo *)0x0;
                            Nekki_SF2_GUI_Scripts_CheckBox__add_OnChangedState
                                      (pNVar8,CJNHFNHJHPE_01,(MethodInfo *)0x0);
                            pNVar8 = (__this->fields)._hardModeCheck;
                            if (pNVar8 != (Nekki_SF2_GUI_Scripts_CheckBox_o *)0x0) {
                              (pNVar8->fields).super._glowTime = 2.0;
                              pSVar6 = (__this->fields)._hintButton;
                              if (pSVar6 != (SFButton_o *)0x0) {
                                (pSVar6->fields)._glowTime = 2.0;
                                Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanRaidDialog__LAHOOGJMEIC
                                          (__this,0,method_00);
                                return;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

