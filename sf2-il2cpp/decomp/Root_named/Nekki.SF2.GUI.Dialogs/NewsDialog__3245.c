// TypeDefIndex 3245
// Namespace: Nekki.SF2.GUI.Dialogs
// public class NewsDialog : BaseDialog
// Fields:
//   private const int AGPONJOFAML = 5;
//   private const int NIMJOAGDDJB = -500;
//   private const int NKFDPODOEJJ = 1680;
//   private const int FCEBNDBKEED = 480;
//   private const int JBBPPKIAAJB = 100;
//   private const int FFAOBKFHOKO = 640;
//   private const int OKFLPPLHIDK = -640;
//   protected string BPOCMBDOBOC; // 0xC8
//   protected ResolutionImage _picture; // 0xD0
//   protected ResolutionImage _loadingPicture; // 0xD8
//   protected InfoButton _infoButton; // 0xE0
//   private bool IKKPHIEKOEL; // 0xE8
//   protected List<BCGLDKLKKDA> HAGOPBBNBGE; // 0xF0
//   public bool GoShopAfterClose; // 0xF8
//   public string RedirectShopAfterClose; // 0x100
//   public HPPDIEDAKEC SliderType; // 0x108
//   public string BuyItemOnClose; // 0x110
//   public bool CloseOnBuy; // 0x118
//   protected AHOEIGAOKEL LLBENMDKHBK; // 0x120
//   private List<RaidConfig.ENBCJNLAHAC> MIALFHDFIKJ; // 0x128

// ===== private void BMKMFHIABON(object IMMNELPBGIF)  [RVA 0x350C904]
// Nekki.SF2.GUI.Dialogs.NewsDialog$$BMKMFHIABON @ RVA 0x350C904

void Nekki_SF2_GUI_Dialogs_NewsDialog__BMKMFHIABON
               (Nekki_SF2_GUI_Dialogs_NewsDialog_o *__this,Il2CppObject *IMMNELPBGIF,
               MethodInfo *method)

{
                    /* WARNING: Could not recover jumptable at 0x0360c910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(__this->klass->vtable)._20_Close.methodPtr)(__this,(__this->klass->vtable)._20_Close.method);
  return;
}


// ===== protected virtual void CFPJAFNAAME()  [RVA 0x350C914]
// Nekki.SF2.GUI.Dialogs.NewsDialog$$CFPJAFNAAME @ RVA 0x350C914

void Nekki_SF2_GUI_Dialogs_NewsDialog__CFPJAFNAAME
               (Nekki_SF2_GUI_Dialogs_NewsDialog_o *__this,MethodInfo *method)

{
  int32_t length;
  int iVar1;
  uint uVar2;
  long lVar3;
  bool bVar4;
  System_Collections_Generic_List_BCGLDKLKKDA__o *__this_00;
  Il2CppObject *pIVar5;
  Nekki_SF2_GUI_InfoButton_o *pNVar6;
  UnityEngine_GameObject_o *pUVar7;
  LabelButton_o *pLVar8;
  System_Action_object__o *pSVar9;
  UnityEngine_Transform_o *pUVar10;
  SFRequestSender_o *pKVar11;
  RaidConfig_o *__this_01;
  RaidConfig_ENBCJNLAHAC_o *item;
  System_Collections_Generic_List_JMDPBFOCHHP_ENBCJNLAHAC__o *pSVar12;
  RaidConfig_ENBCJNLAHAC_array *pJVar13;
  Il2CppClass *__this_02;
  AHOEIGAOKEL_o *pAVar14;
  float fVar15;
  float ECCPLAMGAKE;
  UnityEngine_Vector3_o UVar16;
  System_Collections_Generic_List_Enumerator_T__o local_88;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  
  if ((DAT_045688d4 & 1) == 0) {
    FUN_01bab630(&System_Action<object>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<FLCGGKEODNC>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<FLCGGKEODNC>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<FLCGGKEODNC>_get_Current__);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<RaidConfig_ENBCJNLAHAC>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<RaidConfig_ENBCJNLAHAC>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<FLCGGKEODNC>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BCGLDKLKKDA>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<FLCGGKEODNC>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<RaidConfig_ENBCJNLAHAC>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BCGLDKLKKDA>_get_Item__);
    DAT_045688d4 = 1;
  }
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).HAGOPBBNBGE;
  if (__this_00 != (System_Collections_Generic_List_BCGLDKLKKDA__o *)0x0) {
    if ((__this_00->fields)._size == 0) {
      return;
    }
    pIVar5 = System_Collections_Generic_List<object>__get_Item
                       ((System_Collections_Generic_List_object__o *)__this_00,0,
                        Method_System_Collections_Generic_List<BCGLDKLKKDA>_get_Item__);
    if (((pIVar5 != (Il2CppObject *)0x0) &&
        (__this_02 = pIVar5[6].klass, __this_02 != (Il2CppClass *)0x0)) &&
       (pNVar6 = (__this->fields)._infoButton, pNVar6 != (Nekki_SF2_GUI_InfoButton_o *)0x0)) {
      iVar1 = *(int *)&(__this_02->_1).namespaze;
      pUVar7 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pNVar6,(MethodInfo *)0x0);
      if (pUVar7 != (UnityEngine_GameObject_o *)0x0) {
        UnityEngine_GameObject__SetActive(pUVar7,false,(MethodInfo *)0x0);
        pLVar8 = (__this->fields).super._btnOK;
        if ((pLVar8 != (LabelButton_o *)0x0) &&
           (pUVar7 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pLVar8,(MethodInfo *)0x0),
           pUVar7 != (UnityEngine_GameObject_o *)0x0)) {
          UnityEngine_GameObject__SetActive(pUVar7,true,(MethodInfo *)0x0);
          pLVar8 = (__this->fields).super._btnOK;
          if (pLVar8 != (LabelButton_o *)0x0) {
            SFButton__RemoveAllEventListener((SFButton_o *)pLVar8,(MethodInfo *)0x0);
            pLVar8 = (__this->fields).super._btnOK;
            pSVar9 = (System_Action_object__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
            System_Action<object>___ctor();
            if (pLVar8 != (LabelButton_o *)0x0) {
              SFButton__AddEventListener((SFButton_o *)pLVar8,2,pSVar9,(MethodInfo *)0x0);
              pLVar8 = (__this->fields).super._btnOK;
              if (pLVar8 != (LabelButton_o *)0x0) {
                pUVar10 = UnityEngine_Component__get_transform
                                    ((UnityEngine_Component_o *)pLVar8,(MethodInfo *)0x0);
                UnityEngine_TransformExtensions__SetLocalPositionY(pUVar10,-500.0,(MethodInfo *)0x0)
                ;
                if (iVar1 < 1) {
                  return;
                }
                pLVar8 = (__this->fields).super._btnOK;
                if ((pLVar8 != (LabelButton_o *)0x0) &&
                   (pUVar7 = UnityEngine_Component__get_gameObject
                                       ((UnityEngine_Component_o *)pLVar8,(MethodInfo *)0x0),
                   pUVar7 != (UnityEngine_GameObject_o *)0x0)) {
                  UnityEngine_GameObject__SetActive(pUVar7,false,(MethodInfo *)0x0);
                  fVar15 = (float)(iVar1 * 100 + (iVar1 + 1) * 0x1e0);
                  ECCPLAMGAKE = fVar15 / (float)(iVar1 + 1);
                  if (iVar1 == 1) {
                    pLVar8 = (__this->fields).super._btnOK;
                    if ((pLVar8 == (LabelButton_o *)0x0) ||
                       (pUVar10 = UnityEngine_Component__get_transform
                                            ((UnityEngine_Component_o *)pLVar8,(MethodInfo *)0x0),
                       pUVar10 == (UnityEngine_Transform_o *)0x0)) goto LAB_0360cdc0;
                    UVar16 = UnityEngine_Transform__get_localPosition(pUVar10,(MethodInfo *)0x0);
                    fVar15 = UVar16.fields.x;
                  }
                  else {
                    fVar15 = ECCPLAMGAKE + fVar15 * -0.5;
                  }
                  pAVar14 = (__this->fields).LLBENMDKHBK;
                  pUVar7 = UnityEngine_Component__get_gameObject
                                     ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                  pSVar9 = (System_Action_object__o *)
                           thunk_FUN_01bda818(System_Action<object>_TypeInfo);
                  System_Action<object>___ctor();
                  if (pAVar14 != (AHOEIGAOKEL_o *)0x0) {
                    AHOEIGAOKEL__GIENGNEGHPJ
                              (pAVar14,fVar15,-500.0,ECCPLAMGAKE,pUVar7,pSVar9,__this,
                               (MethodInfo *)0x0);
                    pSVar12 = (__this->fields).MIALFHDFIKJ;
                    if (pSVar12 != (System_Collections_Generic_List_JMDPBFOCHHP_ENBCJNLAHAC__o *)0x0
                       ) {
                      length = (pSVar12->fields)._size;
                      (pSVar12->fields)._size = 0;
                      (pSVar12->fields)._version = (pSVar12->fields)._version + 1;
                      if (0 < length) {
                        System_Array__Clear((System_Array_o *)(pSVar12->fields)._items,0,length,
                                            (MethodInfo *)0x0);
                      }
                      System_Collections_Generic_List<object>__GetEnumerator
                                (&local_88,(System_Collections_Generic_List_object__o *)__this_02,
                                 Method_System_Collections_Generic_List<FLCGGKEODNC>_GetEnumerator__
                                );
                      local_70.fields._index = local_88.fields._index;
                      local_70.fields._version = local_88.fields._version;
                      local_70.fields._list = local_88.fields._list;
                      local_70.fields._current = local_88.fields._current;
                      fVar15 = 0.0;
                      while (bVar4 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                               (&local_70,
                                                Method_System_Collections_Generic_List_Enumerator<FLCGGKEODNC>_MoveNext__
                                               ), pIVar5 = local_70.fields._current, bVar4) {
                        if ((FLCGGKEODNC_o *)local_70.fields._current == (FLCGGKEODNC_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                          FUN_01bab8c8();
                        }
                        if (((FLCGGKEODNC_Fields *)((long)local_70.fields._current + 0x10))->
                            HPPDIEDAKEC == 8) {
                          pKVar11 = SFRequestSender__MBHIKFMIDAO((MethodInfo *)0x0);
                          if (pKVar11 == (SFRequestSender_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                            FUN_01bab8c8();
                          }
                          if ((pKVar11->fields).super._KKNAFGJEFJG_k__BackingField == false) {
                            ((FLCGGKEODNC_Fields *)((long)pIVar5 + 0x10))->KMJPPCLIEDG = false;
                          }
                        }
                        if (((FLCGGKEODNC_Fields *)((long)pIVar5 + 0x10))->KMJPPCLIEDG == false) {
                          bVar4 = PCOEHCPGBBG__BDLEIEHBFAD
                                            (((FLCGGKEODNC_Fields *)((long)pIVar5 + 0x10))->
                                             DMMDLLBOHNP,(MethodInfo *)0x0);
                          if (!bVar4) {
                            fVar15 = fVar15 + 0.5;
                          }
                        }
                        else {
                          fVar15 = fVar15 + 1.0;
                          if (((FLCGGKEODNC_Fields *)((long)pIVar5 + 0x10))->HPPDIEDAKEC == 8) {
                            if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
                              thunk_FUN_01ba7564();
                            }
                            __this_01 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
                            if (__this_01 == (RaidConfig_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                              FUN_01bab8c8();
                            }
                            item = RaidConfig__DIFLKMKBENA
                                             (__this_01,
                                              ((FLCGGKEODNC_Fields *)((long)pIVar5 + 0x10))->
                                              DMMDLLBOHNP,false,(MethodInfo *)0x0);
                            lVar3 = 
                            Method_System_Collections_Generic_List<RaidConfig_ENBCJNLAHAC>_Add__;
                            if (item == (RaidConfig_ENBCJNLAHAC_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                              FUN_01bab8c8();
                            }
                            if ((item->fields).NIHFMGMHLBN != false) {
                              pSVar12 = (__this->fields).MIALFHDFIKJ;
                              if (pSVar12 ==
                                  (System_Collections_Generic_List_JMDPBFOCHHP_ENBCJNLAHAC__o *)0x0)
                              {
                    /* WARNING: Subroutine does not return */
                                FUN_01bab8c8();
                              }
                              pJVar13 = (pSVar12->fields)._items;
                              (pSVar12->fields)._version = (pSVar12->fields)._version + 1;
                              if (pJVar13 == (RaidConfig_ENBCJNLAHAC_array *)0x0) {
                    /* WARNING: Subroutine does not return */
                                FUN_01bab8c8();
                              }
                              uVar2 = (pSVar12->fields)._size;
                              if (uVar2 < (uint)pJVar13->max_length) {
                                (pSVar12->fields)._size = uVar2 + 1;
                                pJVar13->m_Items[(int)uVar2] = item;
                                thunk_FUN_01c20e04(pJVar13->m_Items + (int)uVar2);
                              }
                              else {
                                System_Collections_Generic_List<object>__AddWithResize
                                          ((System_Collections_Generic_List_object__o *)pSVar12,
                                           (Il2CppObject *)item,
                                           *(MethodInfo_26E4DAC **)
                                            (*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
                              }
                            }
                          }
                        }
                        pAVar14 = (__this->fields).LLBENMDKHBK;
                        if (pAVar14 == (AHOEIGAOKEL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                          FUN_01bab8c8();
                        }
                        AHOEIGAOKEL__BPHHDPIFBOO(pAVar14,(FLCGGKEODNC_o *)pIVar5,(MethodInfo *)0x0);
                      }
                      System_Collections_Generic_List_Enumerator<object>__Dispose
                                (&local_70,
                                 Method_System_Collections_Generic_List_Enumerator<FLCGGKEODNC>_Dispose__
                                );
                      pNVar6 = (__this->fields)._infoButton;
                      (__this->fields).CloseOnBuy = fVar15 <= 1.0;
                      if (pNVar6 != (Nekki_SF2_GUI_InfoButton_o *)0x0) {
                        pUVar7 = UnityEngine_Component__get_gameObject
                                           ((UnityEngine_Component_o *)pNVar6,(MethodInfo *)0x0);
                        pSVar12 = (__this->fields).MIALFHDFIKJ;
                        if ((pSVar12 !=
                             (System_Collections_Generic_List_JMDPBFOCHHP_ENBCJNLAHAC__o *)0x0) &&
                           (pUVar7 != (UnityEngine_GameObject_o *)0x0)) {
                          UnityEngine_GameObject__SetActive
                                    (pUVar7,0 < (pSVar12->fields)._size,(MethodInfo *)0x0);
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
LAB_0360cdc0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x350CE80]
// Nekki.SF2.GUI.Dialogs.NewsDialog$$.ctor @ RVA 0x350CE80

void Nekki_SF2_GUI_Dialogs_NewsDialog___ctor
               (Nekki_SF2_GUI_Dialogs_NewsDialog_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_BCGLDKLKKDA__o *__this_00;
  System_Collections_Generic_List_BCGLDKLKKDA__o **ppSVar1;
  AHOEIGAOKEL_o *__this_01;
  System_Collections_Generic_List_JMDPBFOCHHP_ENBCJNLAHAC__o *__this_02;
  
  if ((DAT_045688d5 & 1) == 0) {
    FUN_01bab630(&AHOEIGAOKEL_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<BCGLDKLKKDA>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<RaidConfig_ENBCJNLAHAC>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<BCGLDKLKKDA>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<RaidConfig_ENBCJNLAHAC>_TypeInfo);
    FUN_01bab630(&string_TypeInfo);
    DAT_045688d5 = 1;
  }
  (__this->fields).BPOCMBDOBOC = string_TypeInfo->static_fields->Empty;
  thunk_FUN_01c20e04();
  __this_00 = (System_Collections_Generic_List_BCGLDKLKKDA__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<BCGLDKLKKDA>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<BCGLDKLKKDA>__ctor__);
  ppSVar1 = &(__this->fields).HAGOPBBNBGE;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  (__this->fields).CloseOnBuy = true;
  __this_01 = (AHOEIGAOKEL_o *)thunk_FUN_01bda818(AHOEIGAOKEL_TypeInfo);
  AHOEIGAOKEL___ctor(__this_01,(MethodInfo *)0x0);
  (__this->fields).LLBENMDKHBK = __this_01;
  thunk_FUN_01c20e04(&(__this->fields).LLBENMDKHBK,__this_01);
  __this_02 = (System_Collections_Generic_List_JMDPBFOCHHP_ENBCJNLAHAC__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<RaidConfig_ENBCJNLAHAC>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_02,
             Method_System_Collections_Generic_List<RaidConfig_ENBCJNLAHAC>__ctor__);
  (__this->fields).MIALFHDFIKJ = __this_02;
  thunk_FUN_01c20e04(&(__this->fields).MIALFHDFIKJ,__this_02);
  Nekki_SF2_GUI_Dialogs_BaseDialog___ctor
            ((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== protected virtual void LAIDOAAOECP(object IMMNELPBGIF)  [RVA 0x350CFD0]
// Nekki.SF2.GUI.Dialogs.NewsDialog$$LAIDOAAOECP @ RVA 0x350CFD0

void Nekki_SF2_GUI_Dialogs_NewsDialog__LAIDOAAOECP
               (Nekki_SF2_GUI_Dialogs_NewsDialog_o *__this,Il2CppObject *IMMNELPBGIF,
               MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_Core_Quests_QuestsManager_o *pNVar2;
  PKHMIGFEJCL_o *pPVar3;
  System_String_o *url;
  
  if ((DAT_045688d6 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Application_TypeInfo);
    DAT_045688d6 = 1;
  }
  bVar1 = PCOEHCPGBBG__EDHHJAMCOJH((__this->fields).BPOCMBDOBOC,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  url = (__this->fields).BPOCMBDOBOC;
  if ((UnityEngine_Application_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  UnityEngine_Application__OpenURL(url,(MethodInfo *)0x0);
  pNVar2 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
  if ((pNVar2 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) &&
     (pPVar3 = (pNVar2->fields).QuestParameters, pPVar3 != (PKHMIGFEJCL_o *)0x0)) {
    (pPVar3->fields).JEMIJCDAKLB = (__this->fields).BPOCMBDOBOC;
    thunk_FUN_01c20e04();
    pNVar2 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
    if (pNVar2 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
      Nekki_SF2_Core_Quests_QuestsManager__ScheduleAndRunQuests(pNVar2,0x50,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void Init(object IMMNELPBGIF)  [RVA 0x350D084]
// Nekki.SF2.GUI.Dialogs.NewsDialog$$Init @ RVA 0x350D084

void Nekki_SF2_GUI_Dialogs_NewsDialog__Init
               (Nekki_SF2_GUI_Dialogs_NewsDialog_o *__this,Il2CppObject *IMMNELPBGIF,
               MethodInfo *method)

{
  byte bVar1;
  Nekki_SF2_GUI_ResolutionImage_o *__this_00;
  SFButton_o *__this_01;
  System_Action_object__o *pSVar2;
  Nekki_SF2_GUI_InfoButton_o *__this_02;
  
  if ((DAT_045688d7 & 1) == 0) {
    FUN_01bab630(&System_Action<object>_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<SFButton>__);
    FUN_01bab630(&JOAIBHHONIM_TypeInfo);
    FUN_01bab630(&StringLiteral_9679/*"OK"*/);
    FUN_01bab630(&StringLiteral_3640/*"CANCEL"*/);
    FUN_01bab630(&StringLiteral_17803/*"dlgNewsTitle"*/);
    DAT_045688d7 = 1;
  }
  if (IMMNELPBGIF != (Il2CppObject *)0x0) {
    bVar1 = (JOAIBHHONIM_TypeInfo->_2).naturalAligment;
    if (((IMMNELPBGIF->klass->_2).naturalAligment < bVar1) ||
       ((IMMNELPBGIF->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)JOAIBHHONIM_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(IMMNELPBGIF);
    }
    (__this->fields).HAGOPBBNBGE =
         (System_Collections_Generic_List_BCGLDKLKKDA__o *)IMMNELPBGIF[1].klass;
    thunk_FUN_01c20e04();
  }
  (__this->fields).super.IsQuestDialog = true;
  Nekki_SF2_GUI_Dialogs_BaseDialog__GIENGNEGHPJ
            ((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)__this,StringLiteral_17803/*"dlgNewsTitle"*/,StringLiteral_9679/*"OK"*/,
             StringLiteral_3640/*"CANCEL"*/,1,(MethodInfo *)0x0);
  __this_00 = (__this->fields)._picture;
  if (__this_00 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
    __this_01 = (SFButton_o *)
                UnityEngine_Component__GetComponent<object>
                          ((UnityEngine_Component_o *)__this_00,
                           Method_UnityEngine_Component_GetComponent<SFButton>__);
    pSVar2 = (System_Action_object__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
    System_Action<object>___ctor();
    if (__this_01 != (SFButton_o *)0x0) {
      SFButton__AddEventListener(__this_01,0,pSVar2,(MethodInfo *)0x0);
      __this_02 = (__this->fields)._infoButton;
      pSVar2 = (System_Action_object__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
      System_Action<object>___ctor();
      if (__this_02 != (Nekki_SF2_GUI_InfoButton_o *)0x0) {
        SFButton__AddEventListener((SFButton_o *)__this_02,2,pSVar2,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override void Start()  [RVA 0x350D22C]
// Nekki.SF2.GUI.Dialogs.NewsDialog$$Start @ RVA 0x350D22C

void Nekki_SF2_GUI_Dialogs_NewsDialog__Start
               (Nekki_SF2_GUI_Dialogs_NewsDialog_o *__this,MethodInfo *method)

{
  (*(__this->klass->vtable)._18_GLANJNFACKI.methodPtr)
            (__this,(__this->klass->vtable)._18_GLANJNFACKI.method);
  (*(__this->klass->vtable)._30_EJHAPHAHMHG.methodPtr)
            (__this,(__this->fields).super.DMNJBHNNEKI,
             (__this->klass->vtable)._30_EJHAPHAHMHG.method);
  (*(__this->klass->vtable)._27_LCGFJKFJKJK.methodPtr)
            (__this,(ulong)(uint)(__this->fields).super.JOLPNMNNKCJ,
             (__this->klass->vtable)._27_LCGFJKFJKJK.method);
                    /* WARNING: Could not recover jumptable at 0x0360d288. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(__this->klass->vtable)._32_GKPJMHOFIOO.methodPtr)
            (__this,(__this->klass->vtable)._32_GKPJMHOFIOO.method);
  return;
}


// ===== private void Update()  [RVA 0x350D28C]
// Nekki.SF2.GUI.Dialogs.NewsDialog$$Update @ RVA 0x350D28C

void Nekki_SF2_GUI_Dialogs_NewsDialog__Update
               (Nekki_SF2_GUI_Dialogs_NewsDialog_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_ResolutionImage_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  float fVar1;
  
  if ((__this->fields).IKKPHIEKOEL == false) {
    return;
  }
  __this_00 = (__this->fields)._loadingPicture;
  if (__this_00 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
    __this_01 = UnityEngine_Component__get_transform
                          ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
    fVar1 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_Transform_o *)0x0) {
      UnityEngine_Transform__Rotate(__this_01,0.0,fVar1 * 20.0,0.0,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void JFLKNDOKBLP(object ELACKBJPMNB)  [RVA 0x350D2E8]
// Nekki.SF2.GUI.Dialogs.NewsDialog$$JFLKNDOKBLP @ RVA 0x350D2E8

void Nekki_SF2_GUI_Dialogs_NewsDialog__JFLKNDOKBLP
               (Nekki_SF2_GUI_Dialogs_NewsDialog_o *__this,Il2CppObject *ELACKBJPMNB,
               MethodInfo *method)

{
  int *piVar1;
  AHOEIGAOKEL_o *__this_00;
  
  if ((DAT_045688d8 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_BaseDialog_DCGLMJMGGDC_TypeInfo);
    DAT_045688d8 = 1;
  }
  if (ELACKBJPMNB != (Il2CppObject *)0x0) {
    if ((ELACKBJPMNB->klass->_1).element_class !=
        (Nekki_SF2_GUI_Dialogs_BaseDialog_DCGLMJMGGDC_TypeInfo->_1).element_class) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(ELACKBJPMNB);
    }
    piVar1 = (int *)thunk_FUN_01bda96c(ELACKBJPMNB);
    if (*piVar1 == 0) {
      return;
    }
    __this_00 = (__this->fields).LLBENMDKHBK;
    if (__this_00 != (AHOEIGAOKEL_o *)0x0) {
      AHOEIGAOKEL__HCNNHNAIJFB(__this_00,ELACKBJPMNB,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected virtual void MKLEJABEFLH(bool CJNHFNHJHPE)  [RVA 0x350D380]
// Nekki.SF2.GUI.Dialogs.NewsDialog$$MKLEJABEFLH @ RVA 0x350D380

void Nekki_SF2_GUI_Dialogs_NewsDialog__MKLEJABEFLH
               (Nekki_SF2_GUI_Dialogs_NewsDialog_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  Nekki_SF2_GUI_ResolutionImage_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  
  __this_00 = (__this->fields)._loadingPicture;
  if ((__this_00 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
     (__this_01 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
     __this_01 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(__this_01,CJNHFNHJHPE,(MethodInfo *)0x0);
                    /* try { // try from 0360d3b4 to 0370d48b has its CatchHandler @ 0360d3b4
                       catch() { ... } // from try @ 0360d3b4 with catch @ 0360d3b4
                       catch() { ... } // from try @ 0360d53c with catch @ 0360d3b4
                       catch() { ... } // from try @ 0360d57c with catch @ 0360d3b4
                       catch() { ... } // from try @ 0360d5f0 with catch @ 0360d3b4
                       catch() { ... } // from try @ 0360d638 with catch @ 0360d3b4
                       catch() { ... } // from try @ 0360d674 with catch @ 0360d3b4 */
    (__this->fields).IKKPHIEKOEL = CJNHFNHJHPE;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override void EJHAPHAHMHG(string EHNFGMGKCHO)  [RVA 0x350D3C8]
// Nekki.SF2.GUI.Dialogs.NewsDialog$$EJHAPHAHMHG @ RVA 0x350D3C8

void Nekki_SF2_GUI_Dialogs_NewsDialog__EJHAPHAHMHG
               (Nekki_SF2_GUI_Dialogs_NewsDialog_o *__this,System_String_o *EHNFGMGKCHO,
               MethodInfo *method)

{
  System_String_o *CJNHFNHJHPE;
  bool bVar1;
  Nekki_SF2_GUI_LabelAlias_o *pNVar2;
  UnityEngine_Transform_o *transform;
  UnityEngine_Transform_o *__this_00;
  Nekki_SF2_GUI_ResolutionImage_o *__this_01;
  UnityEngine_Vector3_o UVar3;
  
  if ((DAT_045688d9 & 1) == 0) {
    FUN_01bab630(&StringLiteral_17803/*"dlgNewsTitle"*/);
    DAT_045688d9 = 1;
  }
  pNVar2 = (__this->fields).super._header;
  if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
    Nekki_SF2_GUI_LabelAlias__Clear(pNVar2,(MethodInfo *)0x0);
    bVar1 = PCOEHCPGBBG__BDLEIEHBFAD(EHNFGMGKCHO,(MethodInfo *)0x0);
    pNVar2 = (__this->fields).super._header;
    if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
      CJNHFNHJHPE = StringLiteral_17803/*"dlgNewsTitle"*/;
      if (!bVar1) {
        CJNHFNHJHPE = EHNFGMGKCHO;
      }
      Nekki_SF2_GUI_LabelAlias__set_Alias(pNVar2,CJNHFNHJHPE,(MethodInfo *)0x0);
      pNVar2 = (__this->fields).super._header;
      if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
        transform = UnityEngine_Component__get_transform
                              ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0);
        __this_01 = (__this->fields).super._topStripe;
        if ((__this_01 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
           (__this_00 = UnityEngine_Component__get_transform
                                  ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0),
           __this_00 != (UnityEngine_Transform_o *)0x0)) {
          UVar3 = UnityEngine_Transform__get_localPosition(__this_00,(MethodInfo *)0x0);
          UnityEngine_TransformExtensions__SetLocalPositionY
                    (transform,UVar3.fields.y + 5.0,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0360d48c to 0370d493 has its CatchHandler @ 0360d624 */
  FUN_01bab8c8();
}


// ===== public override void OnClose(object IMMNELPBGIF)  [RVA 0x350D490]
// Nekki.SF2.GUI.Dialogs.NewsDialog$$OnClose @ RVA 0x350D490

void Nekki_SF2_GUI_Dialogs_NewsDialog__OnClose
               (Nekki_SF2_GUI_Dialogs_NewsDialog_o *__this,Il2CppObject *IMMNELPBGIF,
               MethodInfo *method)

{
  System_String_o **ppSVar1;
  int iVar2;
  bool bVar3;
  Il2CppObject *__this_00;
  HOOAAGABMBL_o *IKKAMAMLIKA;
  RaidConfig_o *__this_01;
  RaidConfig_ENBCJNLAHAC_o *pJVar4;
  Roster_o *pAVar5;
  System_Action_object__o *IELDNEAAPBE;
  int64_t iVar6;
  Nekki_SF2_GUI_Dialogs_ChooseBuyItemDialog_o *x;
  FAIJGJCCKJC_o *__this_02;
  AHOEIGAOKEL_o *__this_03;
  System_Collections_Generic_List_BCGLDKLKKDA__o *pSVar7;
  System_String_o *CJNPBEJHHLF;
  void **ppvVar8;
  
                    /* try { // try from 0360d4a8 to 0370d4ab has its CatchHandler @ 0360d600 */
                    /* try { // try from 0360d4ac to 0370d4b3 has its CatchHandler @ 0360d61c */
  if ((DAT_045688da & 1) == 0) {
                    /* try { // try from 0360d4c0 to 0370d4cb has its CatchHandler @ 0360d620 */
    FUN_01bab630(&System_Action<object>_TypeInfo);
                    /* try { // try from 0360d4d4 to 0370d4db has its CatchHandler @ 0360d608 */
    FUN_01bab630(&FAIJGJCCKJC_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<BCGLDKLKKDA>_get_Count__);
                    /* try { // try from 0360d4f0 to 0370d4f7 has its CatchHandler @ 0360d558 */
    FUN_01bab630(&GameUtils_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                    /* try { // try from 0360d50c to 0370d50f has its CatchHandler @ 0360d550 */
                    /* try { // try from 0360d510 to 0370d517 has its CatchHandler @ 0360d554 */
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_NewsDialog_OEMPAFGAOKB_CEDJCLMHADC__);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_NewsDialog_OEMPAFGAOKB_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_045688da = 1;
  }
                    /* try { // try from 0360d534 to 0370d53b has its CatchHandler @ 0360d604 */
  __this_00 = (Il2CppObject *)
              thunk_FUN_01bda818(Nekki_SF2_GUI_Dialogs_NewsDialog_OEMPAFGAOKB_TypeInfo);
                    /* try { // try from 0360d53c to 0370d577 has its CatchHandler @ 0360d3b4 */
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 == (Il2CppObject *)0x0) goto LAB_0360d8f8;
                    /* catch() { ... } // from try @ 0360d50c with catch @ 0360d550 */
  __this_00[1].klass = (Il2CppClass *)__this;
                    /* catch() { ... } // from try @ 0360d510 with catch @ 0360d554 */
                    /* catch() { ... } // from try @ 0360d4f0 with catch @ 0360d558 */
  thunk_FUN_01c20e04(__this_00 + 1,__this);
  bVar3 = PCOEHCPGBBG__BDLEIEHBFAD((__this->fields).BuyItemOnClose,(MethodInfo *)0x0);
  if (!bVar3) {
    iVar2 = (__this->fields).SliderType;
    ppSVar1 = &(__this->fields).BuyItemOnClose;
                    /* try { // try from 0360d578 to 0370d57b has its CatchHandler @ 0360d5f4 */
    if (iVar2 == 8) {
                    /* catch() { ... } // from try @ 0360d5c4 with catch @ 0360d60c */
                    /* catch() { ... } // from try @ 0360d5c0 with catch @ 0360d610 */
                    /* catch() { ... } // from try @ 0360d5bc with catch @ 0360d614 */
                    /* catch() { ... } // from try @ 0360d5b8 with catch @ 0360d618 */
                    /* catch() { ... } // from try @ 0360d4ac with catch @ 0360d61c */
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 0360d4c0 with catch @ 0360d620 */
        thunk_FUN_01ba7564();
      }
                    /* catch() { ... } // from try @ 0360d48c with catch @ 0360d624 */
      __this_01 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
      if (__this_01 == (RaidConfig_o *)0x0) goto LAB_0360d8f8;
                    /* try { // try from 0360d634 to 0370d637 has its CatchHandler @ 0360d664 */
                    /* try { // try from 0360d638 to 0370d66b has its CatchHandler @ 0360d3b4 */
      pJVar4 = RaidConfig__DIFLKMKBENA(__this_01,*ppSVar1,false,(MethodInfo *)0x0);
      ppvVar8 = &__this_00[1].monitor;
      *ppvVar8 = pJVar4;
      thunk_FUN_01c20e04(ppvVar8,pJVar4);
      *ppSVar1 = (System_String_o *)0x0;
      thunk_FUN_01c20e04(ppSVar1,0);
                    /* catch() { ... } // from try @ 0360d634 with catch @ 0360d664 */
                    /* try { // try from 0360d66c to 0370d673 has its CatchHandler @ 0360d688 */
                    /* try { // try from 0360d674 to 0370d67f has its CatchHandler @ 0360d3b4 */
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
                    /* try { // try from 0360d680 to 0370d687 has its CatchHandler @ 0360d688 */
      if (DAT_04565b7d == '\0') {
                    /* catch() { ... } // from try @ 0360d5d4 with catch @ 0360d688
                       catch() { ... } // from try @ 0360d66c with catch @ 0360d688
                       catch() { ... } // from try @ 0360d680 with catch @ 0360d688 */
        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
        DAT_04565b7d = '\x01';
      }
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if ((*ppvVar8 == (void *)0x0) ||
         (pAVar5 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField,
         pAVar5 == (Roster_o *)0x0)) goto LAB_0360d8f8;
      bVar3 = Roster__MIFEPGNGDON
                        (pAVar5,(long)*(int *)((long)*ppvVar8 + 0x38),(MethodInfo *)0x0);
      if (*ppvVar8 == (void *)0x0) goto LAB_0360d8f8;
      iVar2 = *(int *)((long)*ppvVar8 + 0x38);
      if (bVar3) {
        IELDNEAAPBE = (System_Action_object__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
        System_Action<object>___ctor();
        DialogsOpener__JHMPDKFFLPN(0,1,(long)iVar2,IELDNEAAPBE,0,*ppSVar1,false,(MethodInfo *)0x0);
        return;
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
      pAVar5 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
      if (pAVar5 == (Roster_o *)0x0) goto LAB_0360d8f8;
      iVar6 = Roster__HEHFNBKGJLP(pAVar5,(MethodInfo *)0x0);
      if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(GameUtils_TypeInfo);
      }
      x = GameUtils__NAHBGMCPFGG(iVar2 - (int)iVar6,(MethodInfo *)0x0);
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
      }
      bVar3 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (!bVar3) {
        return;
      }
      pJVar4 = *ppvVar8;
      __this_02 = (FAIJGJCCKJC_o *)thunk_FUN_01bda818(FAIJGJCCKJC_TypeInfo);
      FAIJGJCCKJC___ctor(__this_02,pJVar4,(MethodInfo *)0x0);
      if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      GameUtils__IAGKBFCKFKB
                ((HOOAAGABMBL_o *)__this_02,2,1,(System_Action_BKKPAKHJDKB__o *)0x0,true,
                 (MethodInfo *)0x0);
    }
    else {
                    /* try { // try from 0360d57c to 0370d5b7 has its CatchHandler @ 0360d3b4 */
      if (iVar2 == 6) {
        CJNPBEJHHLF = *ppSVar1;
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        IKKAMAMLIKA = NLPJLHOEAOE__FEHJLBEGAPO(CJNPBEJHHLF,(MethodInfo *)0x0);
                    /* try { // try from 0360d5b8 to 0370d5bb has its CatchHandler @ 0360d618 */
                    /* try { // try from 0360d5bc to 0370d5bf has its CatchHandler @ 0360d614 */
                    /* try { // try from 0360d5c0 to 0370d5c3 has its CatchHandler @ 0360d610 */
        if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 0360d5c4 to 0370d5cb has its CatchHandler @ 0360d60c */
          thunk_FUN_01ba7564(GameUtils_TypeInfo);
        }
                    /* try { // try from 0360d5d4 to 0370d5ef has its CatchHandler @ 0360d688 */
        GameUtils__IAGKBFCKFKB
                  (IKKAMAMLIKA,3,1,(System_Action_BKKPAKHJDKB__o *)0x0,true,(MethodInfo *)0x0);
        *ppSVar1 = (System_String_o *)0x0;
                    /* try { // try from 0360d5f0 to 0370d633 has its CatchHandler @ 0360d3b4 */
                    /* catch() { ... } // from try @ 0360d578 with catch @ 0360d5f4 */
                    /* catch() { ... } // from try @ 0360d4a8 with catch @ 0360d600 */
                    /* catch() { ... } // from try @ 0360d534 with catch @ 0360d604 */
                    /* catch() { ... } // from try @ 0360d4d4 with catch @ 0360d608 */
        thunk_FUN_01c20e04(ppSVar1,0);
        return;
      }
    }
  }
  __this_03 = (__this->fields).LLBENMDKHBK;
  if (__this_03 != (AHOEIGAOKEL_o *)0x0) {
    AHOEIGAOKEL__HOFDLJKJEAJ(__this_03,(MethodInfo *)0x0);
    pSVar7 = (__this->fields).HAGOPBBNBGE;
    if (pSVar7 != (System_Collections_Generic_List_BCGLDKLKKDA__o *)0x0) {
      if ((pSVar7->fields)._size != 0) {
        (*(__this->klass->vtable)._34_CFPJAFNAAME.methodPtr)
                  (__this,(__this->klass->vtable)._34_CFPJAFNAAME.method);
                    /* WARNING: Could not recover jumptable at 0x0360d8a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(__this->klass->vtable)._32_GKPJMHOFIOO.methodPtr)
                  (__this,(__this->klass->vtable)._32_GKPJMHOFIOO.method);
        return;
      }
      if ((__this->fields).GoShopAfterClose != false) {
        HCAICJLDDJO__MPOLDGKHPMF
                  ((__this->fields).SliderType,(__this->fields).RedirectShopAfterClose,
                   (MethodInfo *)0x0);
      }
                    /* try { // try from 0360d8bc to 0370da53 has its CatchHandler @ 0360d8bc
                       catch() { ... } // from try @ 0360d8bc with catch @ 0360d8bc
                       catch() { ... } // from try @ 0360dc54 with catch @ 0360d8bc
                       catch() { ... } // from try @ 0360dd10 with catch @ 0360d8bc
                       catch() { ... } // from try @ 0360dd18 with catch @ 0360d8bc
                       catch() { ... } // from try @ 0360de0c with catch @ 0360d8bc */
      Nekki_SF2_GUI_Dialogs_BaseDialog__OnClose
                ((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)__this,IMMNELPBGIF,(MethodInfo *)0x0);
      return;
    }
  }
LAB_0360d8f8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void GPAJFKADBKK(BKKPAKHJDKB MEJOGHDACNG)  [RVA 0x350D904]
// Nekki.SF2.GUI.Dialogs.NewsDialog$$GPAJFKADBKK @ RVA 0x350D904

void Nekki_SF2_GUI_Dialogs_NewsDialog__GPAJFKADBKK
               (Nekki_SF2_GUI_Dialogs_NewsDialog_o *__this,BKKPAKHJDKB_o *MEJOGHDACNG,
               MethodInfo *method)

{
  DialogsManager_o *pGVar1;
  System_Action_T__o *IELDNEAAPBE;
  FAIJGJCCKJC_o *pFVar2;
  RaidConfig_ENBCJNLAHAC_o *pJVar3;
  Nekki_SF2_GUI_Dialogs_BaseDialog_o *__this_00;
  ushort local_24 [2];
  
  if ((DAT_045688db & 1) == 0) {
    FUN_01bab630(&System_Action<object>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_NewsDialog_BMKMFHIABON__);
    FUN_01bab630(&Method_System_Nullable<bool>_GetValueOrDefault__);
    FUN_01bab630(&Method_System_Nullable<bool>__ctor__);
    FUN_01bab630(&Method_System_Nullable<bool>_get_HasValue__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_SFMonoBehaviour<object>_AddEventListener__);
    DAT_045688db = 1;
  }
  (__this->fields).GoShopAfterClose = true;
  if ((__this->fields).CloseOnBuy != false) {
    if (MEJOGHDACNG == (BKKPAKHJDKB_o *)0x0) {
LAB_0360da4c:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pFVar2 = (MEJOGHDACNG->fields).IJDPHADMDKN;
    if ((pFVar2 != (FAIJGJCCKJC_o *)0x0) &&
       (pJVar3 = (pFVar2->fields).FBBBEHLGDJK, pJVar3 != (RaidConfig_ENBCJNLAHAC_o *)0x0)) {
      local_24[0] = 0;
      System_Nullable<bool>___ctor
                ((System_Nullable_bool__o)SUB82(local_24,0),(pJVar3->fields).CBKACDJHFNE,
                 Method_System_Nullable<bool>__ctor__);
      if (((local_24[0] & 0xff) != 0) && (0xff < local_24[0])) {
        pGVar1 = DialogsManager__AIHNLLGNBLC((MethodInfo *)0x0);
        if (pGVar1 != (DialogsManager_o *)0x0) {
          __this_00 = (pGVar1->fields)._AOOFDKJAALA_k__BackingField;
          IELDNEAAPBE = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
          System_Action<object>___ctor();
          if (__this_00 != (Nekki_SF2_GUI_Dialogs_BaseDialog_o *)0x0) {
            Nekki_SF2_GUI_SFMonoBehaviour<object>__AddEventListener
                      ((Nekki_SF2_GUI_SFMonoBehaviour_object__o *)__this_00,0,IELDNEAAPBE,
                       Method_Nekki_SF2_GUI_SFMonoBehaviour<object>_AddEventListener__);
            return;
          }
        }
        goto LAB_0360da4c;
      }
    }
    (*(__this->klass->vtable)._20_Close.methodPtr)(__this,(__this->klass->vtable)._20_Close.method);
  }
  return;
}


// ===== protected virtual void PMPHFMLFFKA(object IMMNELPBGIF)  [RVA 0x350DA50]
// Nekki.SF2.GUI.Dialogs.NewsDialog$$PMPHFMLFFKA @ RVA 0x350DA50

void Nekki_SF2_GUI_Dialogs_NewsDialog__PMPHFMLFFKA
               (Nekki_SF2_GUI_Dialogs_NewsDialog_o *__this,Il2CppObject *IMMNELPBGIF,
               MethodInfo *method)

{
  System_Collections_Generic_List_JMDPBFOCHHP_ENBCJNLAHAC__o *pSVar1;
  RaidConfig_ENBCJNLAHAC_o *LMMIEAICFHL;
  RaidConfig_ENBCJNLAHAC_o *EAFJFDILLHK;
  System_Action_object__o *IELDNEAAPBE;
  
                    /* try { // try from 0360da54 to 0370da7b has its CatchHandler @ 0360dd5c */
  if ((DAT_045688dc & 1) == 0) {
    FUN_01bab630(&System_Action<object>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<RaidConfig_ENBCJNLAHAC>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<RaidConfig_ENBCJNLAHAC>_get_Item__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_NewsDialog_JFLKNDOKBLP__);
    FUN_01bab630(&StringLiteral_1/*""*/);
                    /* try { // try from 0360dab0 to 0370dadb has its CatchHandler @ 0360dd58 */
    DAT_045688dc = 1;
  }
  pSVar1 = (__this->fields).MIALFHDFIKJ;
  if (pSVar1 != (System_Collections_Generic_List_JMDPBFOCHHP_ENBCJNLAHAC__o *)0x0) {
    LMMIEAICFHL = (RaidConfig_ENBCJNLAHAC_o *)
                  System_Collections_Generic_List<object>__get_Item
                            ((System_Collections_Generic_List_object__o *)pSVar1,0,
                             Method_System_Collections_Generic_List<RaidConfig_ENBCJNLAHAC>_get_Item__
                            );
    pSVar1 = (__this->fields).MIALFHDFIKJ;
    if (pSVar1 != (System_Collections_Generic_List_JMDPBFOCHHP_ENBCJNLAHAC__o *)0x0) {
      if ((pSVar1->fields)._size < 2) {
        EAFJFDILLHK = (RaidConfig_ENBCJNLAHAC_o *)0x0;
      }
      else {
        EAFJFDILLHK = (RaidConfig_ENBCJNLAHAC_o *)
                      System_Collections_Generic_List<object>__get_Item
                                ((System_Collections_Generic_List_object__o *)pSVar1,1,
                                 Method_System_Collections_Generic_List<RaidConfig_ENBCJNLAHAC>_get_Item__
                                );
                    /* try { // try from 0360db18 to 0370db23 has its CatchHandler @ 0360dd50 */
      }
      IELDNEAAPBE = (System_Action_object__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
                    /* try { // try from 0360db28 to 0370db2f has its CatchHandler @ 0360dd4c */
      System_Action<object>___ctor();
                    /* try { // try from 0360db40 to 0370db47 has its CatchHandler @ 0360dd2c */
                    /* try { // try from 0360db58 to 0370db5f has its CatchHandler @ 0360dd30 */
                    /* try { // try from 0360db64 to 0370db6b has its CatchHandler @ 0360dd24 */
      DialogsOpener__FOMGGGJEKEA
                (LMMIEAICFHL,EAFJFDILLHK,IELDNEAAPBE,StringLiteral_1/*""*/,StringLiteral_1/*""*/,true,1,2,
                 (System_String_o *)0x0,(System_String_o *)0x0,1,1,false,(MethodInfo *)0x0);
                    /* try { // try from 0360db7c to 0370db83 has its CatchHandler @ 0360dd34 */
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override void LCGFJKFJKJK(BaseDialog.OFBBBIDKKOD DNBBBGEENMM)  [RVA 0x350DB94]
// Nekki.SF2.GUI.Dialogs.NewsDialog$$LCGFJKFJKJK @ RVA 0x350DB94

void Nekki_SF2_GUI_Dialogs_NewsDialog__LCGFJKFJKJK
               (Nekki_SF2_GUI_Dialogs_NewsDialog_o *__this,int32_t DNBBBGEENMM,MethodInfo *method)

{
                    /* try { // try from 0360db94 to 0370db9b has its CatchHandler @ 0360dd3c */
                    /* try { // try from 0360dba0 to 0370dbbb has its CatchHandler @ 0360dd40 */
  Nekki_SF2_GUI_Dialogs_BaseDialog__LCGFJKFJKJK
            ((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)__this,DNBBBGEENMM,(MethodInfo *)0x0);
                    /* WARNING: Could not recover jumptable at 0x0360dbb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(__this->klass->vtable)._34_CFPJAFNAAME.methodPtr)
            (__this,(__this->klass->vtable)._34_CFPJAFNAAME.method);
  return;
}


// ===== protected override void GLANJNFACKI()  [RVA 0x350DBBC]
// Nekki.SF2.GUI.Dialogs.NewsDialog$$GLANJNFACKI @ RVA 0x350DBBC

void Nekki_SF2_GUI_Dialogs_NewsDialog__GLANJNFACKI
               (Nekki_SF2_GUI_Dialogs_NewsDialog_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_ResolutionImage_o *pNVar1;
  UnityEngine_Transform_o *pUVar2;
  
  Nekki_SF2_GUI_Dialogs_BaseDialog__GLANJNFACKI
            ((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)__this,(MethodInfo *)0x0);
  pNVar1 = (__this->fields).super._topStripe;
  if (pNVar1 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
                    /* try { // try from 0360dbd4 to 0370dc53 has its CatchHandler @ 0360dd54 */
    pUVar2 = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)pNVar1,(MethodInfo *)0x0);
    UnityEngine_TransformExtensions__SetLocalPositionY(pUVar2,640.0,(MethodInfo *)0x0);
    pNVar1 = (__this->fields).super._bottomStripe;
    if (pNVar1 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
      pUVar2 = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)pNVar1,(MethodInfo *)0x0);
      UnityEngine_TransformExtensions__SetLocalPositionY(pUVar2,-640.0,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override void GKPJMHOFIOO()  [RVA 0x350DC14]
// Nekki.SF2.GUI.Dialogs.NewsDialog$$GKPJMHOFIOO @ RVA 0x350DC14

void Nekki_SF2_GUI_Dialogs_NewsDialog__GKPJMHOFIOO
               (Nekki_SF2_GUI_Dialogs_NewsDialog_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar2;
  UnityEngine_GameObject_o *__this_00;
  Il2CppObject *item;
  System_Collections_Generic_List_BCGLDKLKKDA__o *pSVar3;
  System_String_o **ppSVar4;
  UnityEngine_Object_o *x;
  
  if ((DAT_045688dd & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<BCGLDKLKKDA>_Remove__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BCGLDKLKKDA>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BCGLDKLKKDA>_get_Item__);
                    /* try { // try from 0360dc54 to 0370dcf3 has its CatchHandler @ 0360d8bc */
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_045688dd = 1;
  }
  pNVar2 = (__this->fields)._picture;
  if (pNVar2 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
    __this_00 = UnityEngine_Component__get_gameObject
                          ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0);
    pSVar3 = (__this->fields).HAGOPBBNBGE;
    if ((pSVar3 != (System_Collections_Generic_List_BCGLDKLKKDA__o *)0x0) &&
       (__this_00 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(__this_00,0 < (pSVar3->fields)._size,(MethodInfo *)0x0);
      pSVar3 = (__this->fields).HAGOPBBNBGE;
      if (pSVar3 != (System_Collections_Generic_List_BCGLDKLKKDA__o *)0x0) {
        if ((pSVar3->fields)._size < 1) {
                    /* catch() { ... } // from try @ 0360dab0 with catch @ 0360dd58 */
                    /* catch() { ... } // from try @ 0360da54 with catch @ 0360dd5c */
                    /* catch() { ... } // from try @ 0360dcf4 with catch @ 0360dd60 */
          return;
        }
        item = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar3,0,
                          Method_System_Collections_Generic_List<BCGLDKLKKDA>_get_Item__);
        if (item != (Il2CppObject *)0x0) {
          (*(__this->klass->vtable)._30_EJHAPHAHMHG.methodPtr)
                    (__this,item[4].klass,(__this->klass->vtable)._30_EJHAPHAHMHG.method);
          ppSVar4 = &(__this->fields).BPOCMBDOBOC;
          *ppSVar4 = (System_String_o *)item[1].klass;
          thunk_FUN_01c20e04(ppSVar4);
          pSVar3 = (__this->fields).HAGOPBBNBGE;
                    /* try { // try from 0360dcf4 to 0370dcfb has its CatchHandler @ 0360dd60 */
          if (pSVar3 != (System_Collections_Generic_List_BCGLDKLKKDA__o *)0x0) {
                    /* try { // try from 0360dcfc to 0370dcff has its CatchHandler @ 0360dd48 */
                    /* try { // try from 0360dd00 to 0370dd03 has its CatchHandler @ 0360dd44 */
                    /* try { // try from 0360dd04 to 0370dd07 has its CatchHandler @ 0360dd38 */
                    /* try { // try from 0360dd08 to 0370dd0b has its CatchHandler @ 0360dd28 */
                    /* try { // try from 0360dd0c to 0370dd0f has its CatchHandler @ 0360dd44 */
                    /* try { // try from 0360dd10 to 0370dd13 has its CatchHandler @ 0360d8bc */
            System_Collections_Generic_List<object>__Remove
                      ((System_Collections_Generic_List_object__o *)pSVar3,item,
                       Method_System_Collections_Generic_List<BCGLDKLKKDA>_Remove__);
                    /* try { // try from 0360dd14 to 0370dd17 has its CatchHandler @ 0360dd20 */
                    /* try { // try from 0360dd18 to 0370dd77 has its CatchHandler @ 0360d8bc */
            x = item[2].monitor;
                    /* catch() { ... } // from try @ 0360dd14 with catch @ 0360dd20 */
            if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 0360db64 with catch @ 0360dd24 */
              thunk_FUN_01ba7564();
            }
                    /* catch() { ... } // from try @ 0360dd08 with catch @ 0360dd28 */
                    /* catch() { ... } // from try @ 0360db40 with catch @ 0360dd2c */
                    /* catch() { ... } // from try @ 0360db58 with catch @ 0360dd30 */
                    /* catch() { ... } // from try @ 0360db7c with catch @ 0360dd34 */
            bVar1 = UnityEngine_Object__op_Inequality
                              (x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 0360dd04 with catch @ 0360dd38 */
            if (!bVar1) {
                    /* try { // try from 0360dd78 to 0370dd7b has its CatchHandler @ 0360dd8c */
                    /* WARNING: Could not recover jumptable at 0x0360dd80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(__this->klass->vtable)._36_MKLEJABEFLH.methodPtr)
                        (__this,1,(__this->klass->vtable)._36_MKLEJABEFLH.method);
              return;
            }
                    /* catch() { ... } // from try @ 0360db94 with catch @ 0360dd3c */
            pNVar2 = (__this->fields)._picture;
                    /* catch() { ... } // from try @ 0360dba0 with catch @ 0360dd40 */
            if (pNVar2 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
                    /* catch() { ... } // from try @ 0360dd00 with catch @ 0360dd44
                       catch() { ... } // from try @ 0360dd0c with catch @ 0360dd44 */
                    /* catch() { ... } // from try @ 0360dcfc with catch @ 0360dd48 */
                    /* catch() { ... } // from try @ 0360db28 with catch @ 0360dd4c */
                    /* catch() { ... } // from try @ 0360db18 with catch @ 0360dd50 */
                    /* catch() { ... } // from try @ 0360dbd4 with catch @ 0360dd54 */
              UnityEngine_UI_Image__set_sprite
                        ((UnityEngine_UI_Image_o *)pNVar2,item[2].monitor,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void APJCIKLILGP(object EHGPPHGLHHC, FAIJGJCCKJC IHGFKLOLPOK)  [RVA 0x350DD88]
// Nekki.SF2.GUI.Dialogs.NewsDialog$$APJCIKLILGP @ RVA 0x350DD88

void Nekki_SF2_GUI_Dialogs_NewsDialog__APJCIKLILGP
               (Nekki_SF2_GUI_Dialogs_NewsDialog_o *__this,Il2CppObject *EHGPPHGLHHC,
               FAIJGJCCKJC_o *IHGFKLOLPOK,MethodInfo *method)

{
  int *piVar1;
  System_Action_BKKPAKHJDKB__o *BLMFLPJJMPF;
  MethodInfo *method_00;
  
                    /* catch() { ... } // from try @ 0360dd78 with catch @ 0360dd8c */
                    /* try { // try from 0360dd9c to 0370de0b has its CatchHandler @ 0360de20 */
  if ((DAT_045688de & 1) == 0) {
    FUN_01bab630(&System_Action<BKKPAKHJDKB>_TypeInfo);
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_NewsDialog_GPAJFKADBKK__);
    DAT_045688de = 1;
  }
  if (EHGPPHGLHHC != (Il2CppObject *)0x0) {
    if ((EHGPPHGLHHC->klass->_1).element_class != (int_TypeInfo->_1).element_class) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(EHGPPHGLHHC);
    }
    piVar1 = (int *)thunk_FUN_01bda96c();
                    /* try { // try from 0360de0c to 0370de17 has its CatchHandler @ 0360d8bc */
    if (0 < *piVar1) {
      if (IHGFKLOLPOK != (FAIJGJCCKJC_o *)0x0) {
                    /* try { // try from 0360de18 to 0370de1f has its CatchHandler @ 0360de20 */
        (__this->fields).RedirectShopAfterClose =
             (IHGFKLOLPOK->fields).super._COIPKAKHDFP_k__BackingField;
                    /* catch() { ... } // from try @ 0360dd9c with catch @ 0360de20
                       catch() { ... } // from try @ 0360de18 with catch @ 0360de20 */
        thunk_FUN_01c20e04(&(__this->fields).RedirectShopAfterClose);
        BLMFLPJJMPF = (System_Action_BKKPAKHJDKB__o *)
                      thunk_FUN_01bda818(System_Action<BKKPAKHJDKB>_TypeInfo);
        method_00 = Method_Nekki_SF2_GUI_Dialogs_NewsDialog_GPAJFKADBKK__;
        System_Action<object>___ctor();
        AMIINPEKKFB__AOBOOIINCOA((HOOAAGABMBL_o *)IHGFKLOLPOK,BLMFLPJJMPF,method_00);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
  return;
}

