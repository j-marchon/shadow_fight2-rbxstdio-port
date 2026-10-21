// TypeDefIndex 2652
// Namespace: Nekki.SF2.GUI.Dialogs
// public class CheckTicketsDialog : BaseDialog
// Fields:
//   public const int PORTRAIT_POSITION_X = -500;
//   public const float PORTRAIT_SCALE = 0.9;
//   public ResolutionImage Portrait; // 0xC8
//   public LabelAlias FightRules; // 0xD0
//   public Text PlayerCurrency; // 0xD8
//   public LabelButton BtnQuit; // 0xE0
//   public LabelButton BtnFight; // 0xE8
//   public LabelButton BtnStore; // 0xF0
//   private int NGKGHJDHNCP; // 0xF8
//   private int MDNGKCEFAOI; // 0xFC
//   private MPMBFKHOAKB DKMMBMBMJBO; // 0x100

// ===== protected override void LCGFJKFJKJK(BaseDialog.OFBBBIDKKOD DNBBBGEENMM)  [RVA 0x33B9284]
// Nekki.SF2.GUI.Dialogs.CheckTicketsDialog$$LCGFJKFJKJK @ RVA 0x33B9284

void Nekki_SF2_GUI_Dialogs_CheckTicketsDialog__LCGFJKFJKJK
               (Nekki_SF2_GUI_Dialogs_CheckTicketsDialog_o *__this,int32_t DNBBBGEENMM,
               MethodInfo *method)

{
  UnityEngine_Events_UnityAction_o *pUVar1;
  Il2CppObject *pIVar2;
  System_String_o *pSVar3;
  DOPEEDABNEK_o *__this_00;
  HOOAAGABMBL_o *pHVar4;
  Il2CppObject *arg1;
  LabelButton_o *pLVar5;
  UnityEngine_Events_UnityEvent_o *pUVar6;
  int64_t local_70;
  int64_t iStack_68;
  int64_t iStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  int32_t local_34;
  
  if ((DAT_04567d90 & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_CheckTicketsDialog_AJIKGMMOPBK__,DNBBBGEENMM);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_CheckTicketsDialog_ICPFKKMIELD__);
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    FUN_01bab630(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    FUN_01bab630(&StringLiteral_21201/*"startFightFor{{img::MiscSprites.ticket}}{{{0}}}"*/);
    FUN_01bab630(&StringLiteral_17794/*"dlgForButton{{img::MiscSprites.ticket}}{{{0}}}{{img::MiscSprites.ruby}}{{{1}}}"*/);
    FUN_01bab630(&StringLiteral_10075/*"Pack_Tickets"*/);
    DAT_04567d90 = 1;
  }
  pLVar5 = (__this->fields).BtnQuit;
  if (pLVar5 != (LabelButton_o *)0x0) {
    pUVar6 = (UnityEngine_Events_UnityEvent_o *)(pLVar5->fields).super.super.super.m_OnClick;
    pUVar1 = (UnityEngine_Events_UnityAction_o *)
             thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
    UnityEngine_Events_UnityAction___ctor();
    if (pUVar6 != (UnityEngine_Events_UnityEvent_o *)0x0) {
      UnityEngine_Events_UnityEvent__AddListener(pUVar6,pUVar1,(MethodInfo *)0x0);
      local_34 = (__this->fields).NGKGHJDHNCP;
      pLVar5 = (__this->fields).BtnFight;
      pIVar2 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_34);
      pSVar3 = System_String__Format(StringLiteral_21201/*"startFightFor{{img::MiscSprites.ticket}}{{{0}}}"*/,pIVar2,(MethodInfo *)0x0);
      if (pLVar5 != (LabelButton_o *)0x0) {
        LabelButton__set_Alias(pLVar5,pSVar3,(MethodInfo *)0x0);
        pLVar5 = (__this->fields).BtnFight;
        if (pLVar5 != (LabelButton_o *)0x0) {
          UnityEngine_UI_Selectable__set_interactable
                    ((UnityEngine_UI_Selectable_o *)pLVar5,
                     (__this->fields).NGKGHJDHNCP <= (__this->fields).MDNGKCEFAOI,(MethodInfo *)0x0)
          ;
          pLVar5 = (__this->fields).BtnFight;
          if (pLVar5 != (LabelButton_o *)0x0) {
            pUVar6 = (UnityEngine_Events_UnityEvent_o *)(pLVar5->fields).super.super.super.m_OnClick
            ;
            pUVar1 = (UnityEngine_Events_UnityAction_o *)
                     thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
            UnityEngine_Events_UnityAction___ctor();
            if (pUVar6 != (UnityEngine_Events_UnityEvent_o *)0x0) {
              UnityEngine_Events_UnityEvent__AddListener(pUVar6,pUVar1,(MethodInfo *)0x0);
              if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              if (DAT_04563eaa == '\0') {
                FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                DAT_04563eaa = '\x01';
              }
              if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
              if ((__this_00 != (DOPEEDABNEK_o *)0x0) &&
                 (pHVar4 = DOPEEDABNEK__CKKIPBAIEMN(__this_00,StringLiteral_10075/*"Pack_Tickets"*/,(MethodInfo *)0x0)
                 , pHVar4 != (HOOAAGABMBL_o *)0x0)) {
                local_50._0_4_ =
                     (pHVar4->fields)._OJGPBEFJPKN_k__BackingField.fields.currentCryptoKey;
                local_50._4_4_ = (pHVar4->fields)._OJGPBEFJPKN_k__BackingField.fields.hiddenValue;
                uStack_48._0_4_ = (pHVar4->fields)._OJGPBEFJPKN_k__BackingField.fields.fakeValue;
                uStack_48._4_1_ =
                     (pHVar4->fields)._OJGPBEFJPKN_k__BackingField.fields.fakeValueActive;
                uStack_48._5_1_ = (pHVar4->fields)._OJGPBEFJPKN_k__BackingField.fields.inited;
                uStack_48._6_2_ =
                     *(undefined2 *)&(pHVar4->fields)._OJGPBEFJPKN_k__BackingField.fields.field_0xe;
                pLVar5 = (__this->fields).BtnStore;
                pIVar2 = (Il2CppObject *)
                         thunk_FUN_01bda448(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                            &local_50);
                iStack_68 = (pHVar4->fields)._AHMCDBKNKAJ_k__BackingField.fields.hiddenValue;
                local_70 = (pHVar4->fields)._AHMCDBKNKAJ_k__BackingField.fields.currentCryptoKey;
                uStack_58._0_1_ =
                     (pHVar4->fields)._AHMCDBKNKAJ_k__BackingField.fields.fakeValueActive;
                uStack_58._1_1_ = (pHVar4->fields)._AHMCDBKNKAJ_k__BackingField.fields.inited;
                uStack_58._2_6_ =
                     *(undefined6 *)&(pHVar4->fields)._AHMCDBKNKAJ_k__BackingField.fields.field_0x1a
                ;
                iStack_60 = (pHVar4->fields)._AHMCDBKNKAJ_k__BackingField.fields.fakeValue;
                arg1 = (Il2CppObject *)
                       thunk_FUN_01bda448(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
                                          &local_70);
                pSVar3 = System_String__Format(StringLiteral_17794/*"dlgForButton{{img::MiscSprites.ticket}}{{{0}}}{{img::MiscSprites.ruby}}{{{1}}}"*/,pIVar2,arg1,(MethodInfo *)0x0);
                if (pLVar5 != (LabelButton_o *)0x0) {
                  LabelButton__set_Alias(pLVar5,pSVar3,(MethodInfo *)0x0);
                  return;
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


// ===== public override void Init(object IMMNELPBGIF)  [RVA 0x33B9530]
// Nekki.SF2.GUI.Dialogs.CheckTicketsDialog$$Init @ RVA 0x33B9530

void Nekki_SF2_GUI_Dialogs_CheckTicketsDialog__Init
               (Nekki_SF2_GUI_Dialogs_CheckTicketsDialog_o *__this,Il2CppObject *IMMNELPBGIF,
               MethodInfo *method)

{
  byte bVar1;
  bool_conflict bVar2;
  MPMBFKHOAKB_c *pMVar3;
  int32_t iVar4;
  AFFHKININGD_o *__this_00;
  ACHLOMELAJE_o *__this_01;
  MPMBFKHOAKB_o *pMVar5;
  MPMBFKHOAKB_o **ppMVar6;
  
  if ((DAT_04567d91 & 1) == 0) {
    FUN_01bab630(&MPMBFKHOAKB_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_9679/*"OK"*/);
    FUN_01bab630(&StringLiteral_3640/*"CANCEL"*/);
    FUN_01bab630(&StringLiteral_3107/*"AscensionTicket"*/);
    DAT_04567d91 = 1;
  }
  pMVar3 = MPMBFKHOAKB_TypeInfo;
  if (IMMNELPBGIF == (Il2CppObject *)0x0) {
    (__this->fields).DKMMBMBMJBO = (MPMBFKHOAKB_o *)0x0;
LAB_034b9600:
    ppMVar6 = &(__this->fields).DKMMBMBMJBO;
    thunk_FUN_01c20e04(ppMVar6,IMMNELPBGIF);
    pMVar5 = *ppMVar6;
    if (pMVar5 != (MPMBFKHOAKB_o *)0x0) {
      bVar2 = (pMVar5->fields).MIMPBIMAAHL;
      (__this->fields).super.IsQuestDialog = true;
      (__this->fields).super.IsIgnoreBack = bVar2;
      Nekki_SF2_GUI_Dialogs_BaseDialog__GIENGNEGHPJ
                ((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)__this,(pMVar5->fields).IKIINEOIIAK,
                 StringLiteral_9679/*"OK"*/,StringLiteral_3640/*"CANCEL"*/,0,(MethodInfo *)0x0);
      pMVar5 = (__this->fields).DKMMBMBMJBO;
      if ((pMVar5 != (MPMBFKHOAKB_o *)0x0) &&
         (__this_00 = (pMVar5->fields).FAMILKPGDOC, __this_00 != (AFFHKININGD_o *)0x0)) {
        iVar4 = AFFHKININGD__FCKMLBIPLDK(__this_00,StringLiteral_3107/*"AscensionTicket"*/,(MethodInfo *)0x0);
        (__this->fields).NGKGHJDHNCP = iVar4;
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
        if (__this_01 != (ACHLOMELAJE_o *)0x0) {
          iVar4 = ACHLOMELAJE__FCPIAEEKGEL(__this_01,StringLiteral_3107/*"AscensionTicket"*/,(MethodInfo *)0x0);
          (__this->fields).MDNGKCEFAOI = iVar4;
          return;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  bVar1 = (MPMBFKHOAKB_TypeInfo->_2).naturalAligment;
  if ((bVar1 <= (IMMNELPBGIF->klass->_2).naturalAligment) &&
     ((IMMNELPBGIF->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
      (Il2CppClass *)MPMBFKHOAKB_TypeInfo)) {
    (__this->fields).DKMMBMBMJBO = (MPMBFKHOAKB_o *)IMMNELPBGIF;
    if ((bVar1 <= (IMMNELPBGIF->klass->_2).naturalAligment) &&
       ((IMMNELPBGIF->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == (Il2CppClass *)pMVar3))
    goto LAB_034b9600;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01babc64(IMMNELPBGIF);
}


// ===== protected override void GLJGIJNALCA()  [RVA 0x33B96FC]
// Nekki.SF2.GUI.Dialogs.CheckTicketsDialog$$GLJGIJNALCA @ RVA 0x33B96FC

void Nekki_SF2_GUI_Dialogs_CheckTicketsDialog__GLJGIJNALCA
               (Nekki_SF2_GUI_Dialogs_CheckTicketsDialog_o *__this,MethodInfo *method)

{
  return;
}


// ===== public override void UpdateHeaderPosition()  [RVA 0x33B9700]
// Nekki.SF2.GUI.Dialogs.CheckTicketsDialog$$UpdateHeaderPosition @ RVA 0x33B9700

void Nekki_SF2_GUI_Dialogs_CheckTicketsDialog__UpdateHeaderPosition
               (Nekki_SF2_GUI_Dialogs_CheckTicketsDialog_o *__this,MethodInfo *method)

{
  return;
}


// ===== private void ICPFKKMIELD()  [RVA 0x33B9704]
// Nekki.SF2.GUI.Dialogs.CheckTicketsDialog$$ICPFKKMIELD @ RVA 0x33B9704

void Nekki_SF2_GUI_Dialogs_CheckTicketsDialog__ICPFKKMIELD
               (Nekki_SF2_GUI_Dialogs_CheckTicketsDialog_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  undefined4 local_24;
  
  if ((DAT_04567d92 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_BaseDialog_DCGLMJMGGDC_TypeInfo);
    DAT_04567d92 = 1;
  }
  local_24 = 0;
  uVar1 = thunk_FUN_01bda448(Nekki_SF2_GUI_Dialogs_BaseDialog_DCGLMJMGGDC_TypeInfo,&local_24);
  (*(__this->klass->vtable)._13_OnClose.methodPtr)
            (__this,uVar1,(__this->klass->vtable)._13_OnClose.method);
  return;
}


// ===== protected override void GKPJMHOFIOO()  [RVA 0x33B9774]
// Nekki.SF2.GUI.Dialogs.CheckTicketsDialog$$GKPJMHOFIOO @ RVA 0x33B9774

void Nekki_SF2_GUI_Dialogs_CheckTicketsDialog__GKPJMHOFIOO
               (Nekki_SF2_GUI_Dialogs_CheckTicketsDialog_o *__this,MethodInfo *method)

{
  AFFHKININGD_o *__this_00;
  System_String_o *pSVar1;
  MPMBFKHOAKB_o *pMVar2;
  Nekki_SF2_GUI_LabelAlias_o *__this_01;
  UnityEngine_UI_Text_o *pUVar3;
  
  if ((DAT_04567d93 & 1) == 0) {
    FUN_01bab630(&StringLiteral_6179/*"FULL_DESCRIPTION_"*/);
    DAT_04567d93 = 1;
  }
  (*(__this->klass->vtable)._34_KLPHOMAJAGO.methodPtr)
            (__this,(__this->klass->vtable)._34_KLPHOMAJAGO.method);
  pMVar2 = (__this->fields).DKMMBMBMJBO;
  if ((pMVar2 != (MPMBFKHOAKB_o *)0x0) &&
     (__this_00 = (pMVar2->fields).FAMILKPGDOC, __this_00 != (AFFHKININGD_o *)0x0)) {
    __this_01 = (__this->fields).FightRules;
    pSVar1 = AFFHKININGD__CJPIFPJMENP(__this_00,(MethodInfo *)0x0);
    pSVar1 = System_String__Concat(StringLiteral_6179/*"FULL_DESCRIPTION_"*/,pSVar1,(MethodInfo *)0x0);
    if (__this_01 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
      Nekki_SF2_GUI_LabelAlias__set_Alias(__this_01,pSVar1,(MethodInfo *)0x0);
      pUVar3 = (__this->fields).PlayerCurrency;
      pSVar1 = System_Int32__ToString((int)__this + 0xfc,(MethodInfo *)0x0);
      if (pUVar3 != (UnityEngine_UI_Text_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x034b9830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(pUVar3->klass->vtable)._75_set_text.methodPtr)
                  (pUVar3,pSVar1,(pUVar3->klass->vtable)._75_set_text.method);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected virtual void KLPHOMAJAGO()  [RVA 0x33B9838]
// Nekki.SF2.GUI.Dialogs.CheckTicketsDialog$$KLPHOMAJAGO @ RVA 0x33B9838

void Nekki_SF2_GUI_Dialogs_CheckTicketsDialog__KLPHOMAJAGO
               (Nekki_SF2_GUI_Dialogs_CheckTicketsDialog_o *__this,MethodInfo *method)

{
  System_String_array *pSVar1;
  System_String_o *pSVar2;
  System_String_array *pSVar3;
  UnityEngine_Transform_o *pUVar4;
  MPMBFKHOAKB_o *pMVar5;
  il2cpp_array_size_t iVar6;
  System_String_o *pSVar7;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar8;
  UnityEngine_Vector3_o value;
  
  if ((DAT_04567d94 & 1) == 0) {
    FUN_01bab630(&Method_System_Linq_Enumerable_Last<string>__);
    FUN_01bab630(&MGENAMAJALB_TypeInfo);
    DAT_04567d94 = 1;
  }
  pMVar5 = (__this->fields).DKMMBMBMJBO;
  if ((pMVar5 != (MPMBFKHOAKB_o *)0x0) &&
     (pSVar7 = (pMVar5->fields).JMMIJNFKAAN, pSVar7 != (System_String_o *)0x0)) {
    pSVar1 = System_String__Split(pSVar7,0x7c,0,(MethodInfo *)0x0);
    pNVar8 = (__this->fields).Portrait;
    if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(MGENAMAJALB_TypeInfo);
    }
    pSVar2 = MGENAMAJALB__OPLAHNAJGAJ((MethodInfo *)0x0);
    if (pNVar8 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
      *(System_String_o **)&(pNVar8->fields).super.m_PixelsPerUnitMultiplier = pSVar2;
      thunk_FUN_01c20e04(&(pNVar8->fields).super.m_PixelsPerUnitMultiplier);
      pNVar8 = (__this->fields).Portrait;
      pSVar3 = System_String__Split(pSVar7,0x2f,0,(MethodInfo *)0x0);
      pSVar7 = (System_String_o *)
               System_Linq_Enumerable__Last<object>
                         ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar3,
                          Method_System_Linq_Enumerable_Last<string>__);
      if ((pSVar7 != (System_String_o *)0x0) &&
         (pSVar3 = System_String__Split(pSVar7,0x2e,0,(MethodInfo *)0x0),
         pSVar3 != (System_String_array *)0x0)) {
        if ((int)pSVar3->max_length == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8d0();
        }
        if (((pNVar8 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
            (Nekki_SF2_GUI_ResolutionImage__set_SpriteName
                       (pNVar8,pSVar3->m_Items[0],(MethodInfo *)0x0),
            pSVar1 != (System_String_array *)0x0)) &&
           (pNVar8 = (__this->fields).Portrait, pNVar8 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0)) {
          iVar6 = pSVar1->max_length;
          pUVar4 = UnityEngine_Component__get_transform
                             ((UnityEngine_Component_o *)pNVar8,(MethodInfo *)0x0);
          UnityEngine_TransformExtensions__SetLocalPositionY(pUVar4,0.0,(MethodInfo *)0x0);
          pNVar8 = (__this->fields).Portrait;
          if (pNVar8 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
            pUVar4 = UnityEngine_Component__get_transform
                               ((UnityEngine_Component_o *)pNVar8,(MethodInfo *)0x0);
            UnityEngine_TransformExtensions__SetLocalPositionX(pUVar4,-500.0,(MethodInfo *)0x0);
            pNVar8 = (__this->fields).Portrait;
            if (pNVar8 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
              (*(pNVar8->klass->vtable)._45_SetNativeSize.methodPtr)
                        (pNVar8,(pNVar8->klass->vtable)._45_SetNativeSize.method);
              pNVar8 = (__this->fields).Portrait;
              if ((pNVar8 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
                 (pUVar4 = UnityEngine_Component__get_transform
                                     ((UnityEngine_Component_o *)pNVar8,(MethodInfo *)0x0),
                 pUVar4 != (UnityEngine_Transform_o *)0x0)) {
                value.fields.x = *(undefined4 *)(&DAT_00d81a30 + (ulong)(1 < (int)iVar6) * 4);
                value.fields.y = 1.8;
                value.fields.z = 0.0;
                UnityEngine_Transform__set_localScale(pUVar4,value,(MethodInfo *)0x0);
                return;
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


// ===== public void .ctor()  [RVA 0x33B99E0]
// Nekki.SF2.GUI.Dialogs.CheckTicketsDialog$$.ctor @ RVA 0x33B99E0

void Nekki_SF2_GUI_Dialogs_CheckTicketsDialog___ctor
               (Nekki_SF2_GUI_Dialogs_CheckTicketsDialog_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_BaseDialog___ctor
            ((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== protected override void OnDestroy()  [RVA 0x33B99E8]
// Nekki.SF2.GUI.Dialogs.CheckTicketsDialog$$OnDestroy @ RVA 0x33B99E8

void Nekki_SF2_GUI_Dialogs_CheckTicketsDialog__OnDestroy
               (Nekki_SF2_GUI_Dialogs_CheckTicketsDialog_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Button_ButtonClickedEvent_o *pUVar1;
  LabelButton_o *pLVar2;
  
  Nekki_SF2_GUI_Dialogs_BaseDialog__OnDestroy
            ((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)__this,(MethodInfo *)0x0);
  pLVar2 = (__this->fields).BtnQuit;
  if ((pLVar2 != (LabelButton_o *)0x0) &&
     (pUVar1 = (pLVar2->fields).super.super.super.m_OnClick,
     pUVar1 != (UnityEngine_UI_Button_ButtonClickedEvent_o *)0x0)) {
    UnityEngine_Events_UnityEventBase__RemoveAllListeners
              ((UnityEngine_Events_UnityEventBase_o *)pUVar1,(MethodInfo *)0x0);
    pLVar2 = (__this->fields).BtnFight;
    if ((pLVar2 != (LabelButton_o *)0x0) &&
       (pUVar1 = (pLVar2->fields).super.super.super.m_OnClick,
       pUVar1 != (UnityEngine_UI_Button_ButtonClickedEvent_o *)0x0)) {
      UnityEngine_Events_UnityEventBase__RemoveAllListeners
                ((UnityEngine_Events_UnityEventBase_o *)pUVar1,(MethodInfo *)0x0);
      pLVar2 = (__this->fields).BtnStore;
      if ((pLVar2 != (LabelButton_o *)0x0) &&
         (pUVar1 = (pLVar2->fields).super.super.super.m_OnClick,
         pUVar1 != (UnityEngine_UI_Button_ButtonClickedEvent_o *)0x0)) {
        UnityEngine_Events_UnityEventBase__RemoveAllListeners
                  ((UnityEngine_Events_UnityEventBase_o *)pUVar1,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override void GLANJNFACKI()  [RVA 0x33B9A48]
// Nekki.SF2.GUI.Dialogs.CheckTicketsDialog$$GLANJNFACKI @ RVA 0x33B9A48

void Nekki_SF2_GUI_Dialogs_CheckTicketsDialog__GLANJNFACKI
               (Nekki_SF2_GUI_Dialogs_CheckTicketsDialog_o *__this,MethodInfo *method)

{
  return;
}


// ===== public void UpdateDialog()  [RVA 0x33B9A4C]
// Nekki.SF2.GUI.Dialogs.CheckTicketsDialog$$UpdateDialog @ RVA 0x33B9A4C

void Nekki_SF2_GUI_Dialogs_CheckTicketsDialog__UpdateDialog
               (Nekki_SF2_GUI_Dialogs_CheckTicketsDialog_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  ACHLOMELAJE_o *__this_00;
  System_String_o *pSVar2;
  LabelButton_o *__this_01;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  int32_t *piVar3;
  UnityEngine_UI_Text_o *pUVar4;
  
  if ((DAT_04567d95 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_3107/*"AscensionTicket"*/);
    DAT_04567d95 = 1;
    method = extraout_x1;
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
  }
  __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (__this_00 != (ACHLOMELAJE_o *)0x0) {
    iVar1 = ACHLOMELAJE__FCPIAEEKGEL(__this_00,StringLiteral_3107/*"AscensionTicket"*/,(MethodInfo *)0x0);
    piVar3 = &(__this->fields).MDNGKCEFAOI;
    *piVar3 = iVar1;
    pUVar4 = (__this->fields).PlayerCurrency;
    pSVar2 = System_Int32__ToString((int32_t)piVar3,(MethodInfo *)0x0);
    if (pUVar4 != (UnityEngine_UI_Text_o *)0x0) {
      (*(pUVar4->klass->vtable)._75_set_text.methodPtr)
                (pUVar4,pSVar2,(pUVar4->klass->vtable)._75_set_text.method);
      __this_01 = (__this->fields).BtnFight;
      if (__this_01 != (LabelButton_o *)0x0) {
        UnityEngine_UI_Selectable__set_interactable
                  ((UnityEngine_UI_Selectable_o *)__this_01,
                   (__this->fields).NGKGHJDHNCP <= (__this->fields).MDNGKCEFAOI,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void AJIKGMMOPBK()  [RVA 0x33B9B4C]
// Nekki.SF2.GUI.Dialogs.CheckTicketsDialog$$AJIKGMMOPBK @ RVA 0x33B9B4C

void Nekki_SF2_GUI_Dialogs_CheckTicketsDialog__AJIKGMMOPBK
               (Nekki_SF2_GUI_Dialogs_CheckTicketsDialog_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  undefined4 local_24;
  
  if ((DAT_04567d96 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_BaseDialog_DCGLMJMGGDC_TypeInfo);
    DAT_04567d96 = 1;
  }
  local_24 = 0;
  uVar1 = thunk_FUN_01bda448(Nekki_SF2_GUI_Dialogs_BaseDialog_DCGLMJMGGDC_TypeInfo,&local_24);
  (*(__this->klass->vtable)._13_OnClose.methodPtr)
            (__this,uVar1,(__this->klass->vtable)._13_OnClose.method);
  return;
}

