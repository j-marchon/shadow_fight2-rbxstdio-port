// TypeDefIndex 1240
// Namespace: Nekki.SF2.GUI.Dialogs.Raids.Clans
// public class BattleRaidCell : BaseScrollItem
// Fields:
//   private static readonly Color MOHHGKNGNLN; // 0x0
//   private RectTransform _root; // 0x130
//   private ResolutionImage _icon; // 0x138
//   private LabelAlias _name; // 0x140
//   private OHDDKGHEEPA _battle; // 0x148
//   private ResolutionImage _danRestrictionIcon; // 0x150
//   private LabelAlias _danRestrictionLabel; // 0x158
//   private bool IBFFNCBFPGB; // 0x160
//   private SimpleScroll PDHMLFAMNCO; // 0x168

// ===== private static void .cctor()  [RVA 0x313CF14]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.BattleRaidCell$$.cctor @ RVA 0x313CF14

void Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidCell___cctor(MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidCell_StaticFields *pNVar1;
  UnityEngine_Color_o UVar2;
  
  if ((DAT_0456673b & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidCell_TypeInfo);
    DAT_0456673b = 1;
  }
  UVar2 = CFBGPBCDAGA__NFFPCFGDOKG(0x1e,0x1e,0x1e,0xff,(MethodInfo *)0x0);
  pNVar1 = Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidCell_TypeInfo->static_fields;
  (pNVar1->MOHHGKNGNLN).fields.r = UVar2.fields.r;
  (pNVar1->MOHHGKNGNLN).fields.g = UVar2.fields.g;
  (pNVar1->MOHHGKNGNLN).fields.b = UVar2.fields.b;
  (pNVar1->MOHHGKNGNLN).fields.a = UVar2.fields.a;
  return;
}


// ===== private void OnClick()  [RVA 0x313CF78]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.BattleRaidCell$$OnClick @ RVA 0x313CF78

void Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidCell__OnClick
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidCell_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_SimpleScroll_o *__this_00;
  
  __this_00 = (__this->fields).PDHMLFAMNCO;
  if (__this_00 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
    Nekki_SF2_GUI_SimpleScroll__ScrollToItem
              (__this_00,(Nekki_SF2_GUI_BaseScrollItem_o *)__this,0.2,5,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public virtual void SetContentScale(float JKOJPEKLBCI)  [RVA 0x313CFA4]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.BattleRaidCell$$SetContentScale @ RVA 0x313CFA4

void Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidCell__SetContentScale
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidCell_o *__this,float JKOJPEKLBCI,
               MethodInfo *method)

{
  UnityEngine_TransformExtensions__SetLocalScale
            ((UnityEngine_Transform_o *)(__this->fields)._root,JKOJPEKLBCI,(MethodInfo *)0x0);
  return;
}


// ===== public FightList GetFight()  [RVA 0x313CFB0]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.BattleRaidCell$$GetFight @ RVA 0x313CFB0

FightList_o *
Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidCell__GetFight
          (Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidCell_o *__this,MethodInfo *method)

{
  FightList_o *pAVar1;
  MethodInfo *extraout_x1;
  OHDDKGHEEPA_o *BANHBMINMMP;
  
  if ((DAT_0456673c & 1) == 0) {
    FUN_01bab630(&GameUtils_TypeInfo);
    DAT_0456673c = 1;
    method = extraout_x1;
  }
  BANHBMINMMP = (__this->fields)._battle;
  if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(GameUtils_TypeInfo,method);
  }
  pAVar1 = GameUtils__PHFFPADFANK((OOMHDDBCBJP_o *)BANHBMINMMP,(MethodInfo *)0x0);
  return pAVar1;
}


// ===== public void Init(GEKCMGLDMEE DKMMBMBMJBO, SimpleScroll MGFBPKIBNJI)  [RVA 0x313D00C]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.BattleRaidCell$$Init @ RVA 0x313D00C

void Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidCell__Init
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidCell_o *__this,
               GEKCMGLDMEE_o *DKMMBMBMJBO,Nekki_SF2_GUI_SimpleScroll_o *MGFBPKIBNJI,
               MethodInfo *method)

{
  System_String_o *pSVar1;
  Nekki_SF2_GUI_LabelAlias_o *pNVar2;
  UnityEngine_UI_Button_ButtonClickedEvent_o *__this_00;
  UnityEngine_Events_UnityAction_o *call;
  MethodInfo *method_00;
  BHEDGAKGKPO_StaticFields *pBVar3;
  UnityEngine_Events_UnityEvent_o *__this_01;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar4;
  
  if ((DAT_0456673d & 1) == 0) {
    FUN_01bab630(&BHEDGAKGKPO_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidCell_OnClick__);
    FUN_01bab630(&SF2Paths_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    FUN_01bab630(&StringLiteral_3442/*"BattleRaidCell "*/);
    FUN_01bab630(&StringLiteral_10927/*"RaidMisc.locked_dan.png"*/);
    FUN_01bab630(&StringLiteral_1567/*"0"*/);
    DAT_0456673d = 1;
  }
  pNVar4 = (__this->fields)._icon;
  if (pNVar4 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
    *(undefined1 *)&(pNVar4->fields)._SpriteName = 1;
    if ((SF2Paths_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar1 = SF2Paths__OPLAHNAJGAJ((MethodInfo *)0x0);
    *(System_String_o **)&(pNVar4->fields).super.m_PixelsPerUnitMultiplier = pSVar1;
    thunk_FUN_01c20e04(&(pNVar4->fields).super.m_PixelsPerUnitMultiplier);
    pNVar2 = (__this->fields)._name;
    if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
      Nekki_SF2_GUI_LabelAlias__Clear(pNVar2,(MethodInfo *)0x0);
      pNVar2 = (__this->fields)._name;
      if ((BHEDGAKGKPO_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
        pBVar3 = BHEDGAKGKPO_TypeInfo->static_fields;
        (*(pNVar2->klass->vtable)._23_set_color.methodPtr)
                  ((pBVar3->FHIAKPJBBCB).fields.r,(pBVar3->FHIAKPJBBCB).fields.g,
                   (pBVar3->FHIAKPJBBCB).fields.b,(pBVar3->FHIAKPJBBCB).fields.a,pNVar2,
                   (pNVar2->klass->vtable)._23_set_color.method);
        pNVar4 = (__this->fields)._danRestrictionIcon;
        if (pNVar4 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
          Nekki_SF2_GUI_ResolutionImage__set_SpriteName
                    (pNVar4,StringLiteral_10927/*"RaidMisc.locked_dan.png"*/,(MethodInfo *)0x0);
          pNVar2 = (__this->fields)._danRestrictionLabel;
          if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
            pBVar3 = BHEDGAKGKPO_TypeInfo->static_fields;
            (*(pNVar2->klass->vtable)._23_set_color.methodPtr)
                      ((pBVar3->FHIAKPJBBCB).fields.r,(pBVar3->FHIAKPJBBCB).fields.g,
                       (pBVar3->FHIAKPJBBCB).fields.b,(pBVar3->FHIAKPJBBCB).fields.a,pNVar2,
                       (pNVar2->klass->vtable)._23_set_color.method);
            pNVar2 = (__this->fields)._danRestrictionLabel;
            if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
              method_00 = (pNVar2->klass->vtable)._75_set_text.method;
              (*(pNVar2->klass->vtable)._75_set_text.methodPtr)(pNVar2,StringLiteral_1567/*"0"*/);
              if (DKMMBMBMJBO != (GEKCMGLDMEE_o *)0x0) {
                Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidCell__ONFCBLFMGHN
                          (__this,(DKMMBMBMJBO->fields).CCJJPOBJFIF,method_00);
                (__this->fields).PDHMLFAMNCO = MGFBPKIBNJI;
                thunk_FUN_01c20e04(&(__this->fields).PDHMLFAMNCO,MGFBPKIBNJI);
                __this_00 = (__this->fields).super.super.m_OnClick;
                if (__this_00 != (UnityEngine_UI_Button_ButtonClickedEvent_o *)0x0) {
                  UnityEngine_Events_UnityEventBase__RemoveAllListeners
                            ((UnityEngine_Events_UnityEventBase_o *)__this_00,(MethodInfo *)0x0);
                  __this_01 = (UnityEngine_Events_UnityEvent_o *)
                              (__this->fields).super.super.m_OnClick;
                  call = (UnityEngine_Events_UnityAction_o *)
                         thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
                  UnityEngine_Events_UnityAction___ctor();
                  if (__this_01 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                    UnityEngine_Events_UnityEvent__AddListener(__this_01,call,(MethodInfo *)0x0);
                    pNVar4 = (__this->fields)._icon;
                    if (pNVar4 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
                      pSVar1 = System_String__Concat
                                         (StringLiteral_3442/*"BattleRaidCell "*/,(pNVar4->fields)._TexturePath,
                                          (MethodInfo *)0x0);
                      UnityEngine_Object__set_name
                                ((UnityEngine_Object_o *)__this,pSVar1,(MethodInfo *)0x0);
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
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void ONFCBLFMGHN(OHDDKGHEEPA DKMMBMBMJBO)  [RVA 0x313D23C]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.BattleRaidCell$$ONFCBLFMGHN @ RVA 0x313D23C

void Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidCell__ONFCBLFMGHN
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidCell_o *__this,
               OHDDKGHEEPA_o *DKMMBMBMJBO,MethodInfo *method)

{
  FightList_o *FBFPLEFCDOK;
  System_String_o *CJNHFNHJHPE;
  Nekki_SF2_GUI_LabelAlias_o *__this_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  OHDDKGHEEPA_o *pOVar1;
  Nekki_SF2_GUI_ResolutionImage_o *__this_01;
  
  (__this->fields)._battle = DKMMBMBMJBO;
  thunk_FUN_01c20e04(&(__this->fields)._battle);
  if ((__this->fields)._battle == (OHDDKGHEEPA_o *)0x0) {
    return;
  }
  __this_01 = (__this->fields)._icon;
  FBFPLEFCDOK = Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidCell__GetFight(__this,method_00);
  CJNHFNHJHPE = KFCFGKEHPNK__GHLDEKNCIEG(FBFPLEFCDOK,(MethodInfo *)0x0);
  if (__this_01 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
    Nekki_SF2_GUI_ResolutionImage__set_SpriteName(__this_01,CJNHFNHJHPE,(MethodInfo *)0x0);
    pOVar1 = (__this->fields)._battle;
    if ((pOVar1 != (OHDDKGHEEPA_o *)0x0) &&
       (__this_00 = (__this->fields)._name, __this_00 != (Nekki_SF2_GUI_LabelAlias_o *)0x0)) {
      Nekki_SF2_GUI_LabelAlias__set_Alias
                (__this_00,(pOVar1->fields).super.FHPNAJENHNG,(MethodInfo *)0x0);
      Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidCell__FOBFPEHKHAF(__this,method_01);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x313D428]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.BattleRaidCell$$.ctor @ RVA 0x313D428

void Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidCell___ctor
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidCell_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_BaseScrollItem___ctor((Nekki_SF2_GUI_BaseScrollItem_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private void FOBFPEHKHAF()  [RVA 0x313D2C0]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.BattleRaidCell$$FOBFPEHKHAF @ RVA 0x313D2C0

void Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidCell__FOBFPEHKHAF
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidCell_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  int32_t iVar2;
  OHDDKGHEEPA_o *__this_00;
  PlayerData_o *__this_01;
  UnityEngine_GameObject_o *pUVar3;
  System_String_o *pSVar4;
  Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidCell_StaticFields *pNVar5;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar6;
  Nekki_SF2_GUI_LabelAlias_o *pNVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  int32_t local_24;
  
  if ((DAT_0456673e & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidCell_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_0456673e = 1;
  }
  __this_00 = (__this->fields)._battle;
  if (__this_00 != (OHDDKGHEEPA_o *)0x0) {
    iVar1 = OHDDKGHEEPA__GOKIINPLKFL(__this_00,(MethodInfo *)0x0);
    local_24 = iVar1;
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo);
    }
    __this_01 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
    if (__this_01 != (PlayerData_o *)0x0) {
      iVar2 = PlayerData__IGIHHCEONEM(__this_01,(MethodInfo *)0x0);
      pNVar6 = (__this->fields)._icon;
      fVar11 = 1.0;
      fVar10 = 1.0;
      fVar9 = 1.0;
      fVar8 = 1.0;
      (__this->fields).IBFFNCBFPGB = iVar2 < iVar1;
      if (iVar2 < iVar1) {
        if ((Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidCell_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(0x3f800000,0x3f800000,0x3f800000,0x3f800000);
        }
        pNVar5 = Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidCell_TypeInfo->static_fields;
        fVar8 = (pNVar5->MOHHGKNGNLN).fields.r;
        fVar9 = (pNVar5->MOHHGKNGNLN).fields.g;
        fVar10 = (pNVar5->MOHHGKNGNLN).fields.b;
        fVar11 = (pNVar5->MOHHGKNGNLN).fields.a;
      }
      if (pNVar6 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
        (*(pNVar6->klass->vtable)._23_set_color.methodPtr)
                  (fVar8,fVar9,fVar10,fVar11,pNVar6,(pNVar6->klass->vtable)._23_set_color.method);
        pNVar6 = (__this->fields)._danRestrictionIcon;
        if ((pNVar6 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
           (pUVar3 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pNVar6,(MethodInfo *)0x0),
           pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
          UnityEngine_GameObject__SetActive(pUVar3,(__this->fields).IBFFNCBFPGB,(MethodInfo *)0x0);
          pNVar7 = (__this->fields)._danRestrictionLabel;
          pSVar4 = System_Int32__ToString((int32_t)&local_24,(MethodInfo *)0x0);
          if (pNVar7 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
            (*(pNVar7->klass->vtable)._75_set_text.methodPtr)
                      (pNVar7,pSVar4,(pNVar7->klass->vtable)._75_set_text.method);
            pNVar7 = (__this->fields)._danRestrictionLabel;
            if ((pNVar7 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
               (pUVar3 = UnityEngine_Component__get_gameObject
                                   ((UnityEngine_Component_o *)pNVar7,(MethodInfo *)0x0),
               pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
              UnityEngine_GameObject__SetActive
                        (pUVar3,(__this->fields).IBFFNCBFPGB,(MethodInfo *)0x0);
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


// ===== public OHDDKGHEEPA GetBattle()  [RVA 0x313D430]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.BattleRaidCell$$GetBattle @ RVA 0x313D430

OHDDKGHEEPA_o *
Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidCell__GetBattle
          (Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidCell_o *__this,MethodInfo *method)

{
  return (__this->fields)._battle;
}


// ===== public bool IsDanRestriction()  [RVA 0x313D438]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.BattleRaidCell$$IsDanRestriction @ RVA 0x313D438

bool Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidCell__IsDanRestriction
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidCell_o *__this,MethodInfo *method)

{
  return (__this->fields).IBFFNCBFPGB;
}

