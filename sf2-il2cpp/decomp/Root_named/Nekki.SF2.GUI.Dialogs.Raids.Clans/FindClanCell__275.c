// TypeDefIndex 275
// Namespace: Nekki.SF2.GUI.Dialogs.Raids.Clans
// public class FindClanCell : BaseScrollItem
// Fields:
//   private LabelAlias _levelCount; // 0x130
//   private RectTransform _clanLogoMountRoot; // 0x138
//   private SFButton _clanNameButton; // 0x140
//   private LabelAlias _clanNameText; // 0x148
//   private LabelAlias _rating; // 0x150
//   private LabelAlias _members; // 0x158
//   private Image _background; // 0x160
//   private ResolutionImage _selectMyClan; // 0x168
//   private const float AKOJCLKIFBI = 1.4;
//   private bool DGNFDMNJKJM; // 0x170
//   private CBPENMDOJDB MFONGMAPLFG; // 0x178
//   private ClanLogoImage FDOKACGMDHB; // 0x180

// ===== public void Init(CBPENMDOJDB ADHJMIOENHG, bool ECHNGCOEOEB)  [RVA 0x32324B8]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.FindClanCell$$Init @ RVA 0x32324B8

void Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanCell__Init
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanCell_o *__this,CBPENMDOJDB_o *ADHJMIOENHG,
               bool ECHNGCOEOEB,MethodInfo *method)

{
  CBPENMDOJDB_o **ppCVar1;
  int32_t CJNHFNHJHPE;
  bool bVar2;
  System_String_o *pSVar3;
  System_String_o *str2;
  UnityEngine_GameObject_o *__this_00;
  PlayerData_o *__this_01;
  int64_t iVar4;
  UnityEngine_UI_Button_ButtonClickedEvent_o *__this_02;
  UnityEngine_Events_UnityAction_o *call;
  MethodInfo *method_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_01;
  CBPENMDOJDB_o *pCVar5;
  SFButton_o *pSVar6;
  UnityEngine_Events_UnityEvent_o *__this_03;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar7;
  Nekki_SF2_GUI_LabelAlias_o *pNVar8;
  int32_t local_38;
  uint32_t local_34;
  
  if ((DAT_04566fe6 & 1) == 0) {
    FUN_01bab630(&BJFCCEEPHOF_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanCell_KGNBJLLJHOC__);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    FUN_01bab630(&StringLiteral_1492/*"/"*/);
    DAT_04566fe6 = 1;
  }
  ppCVar1 = &(__this->fields).MFONGMAPLFG;
  local_34 = 0;
  (__this->fields).MFONGMAPLFG = ADHJMIOENHG;
  thunk_FUN_01c20e04(ppCVar1,ADHJMIOENHG);
  (__this->fields).DGNFDMNJKJM = ECHNGCOEOEB;
  Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanCell__MLIDFAMHJKI(__this,method_00);
  pCVar5 = (__this->fields).MFONGMAPLFG;
  if (pCVar5 != (CBPENMDOJDB_o *)0x0) {
    local_38 = (pCVar5->fields).DIILCCNFMEB;
    pNVar8 = (__this->fields)._levelCount;
    pSVar3 = System_Int32__ToString((int32_t)&local_38,(MethodInfo *)0x0);
    if (pNVar8 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
      (*(pNVar8->klass->vtable)._75_set_text.methodPtr)
                (pNVar8,pSVar3,(pNVar8->klass->vtable)._75_set_text.method);
      pCVar5 = (__this->fields).MFONGMAPLFG;
      if ((pCVar5 != (CBPENMDOJDB_o *)0x0) &&
         (pNVar8 = (__this->fields)._clanNameText, pNVar8 != (Nekki_SF2_GUI_LabelAlias_o *)0x0)) {
        (*(pNVar8->klass->vtable)._75_set_text.methodPtr)
                  (pNVar8,(pCVar5->fields).GJNOEAKNMOG,(pNVar8->klass->vtable)._75_set_text.method);
        if (*ppCVar1 != (CBPENMDOJDB_o *)0x0) {
          local_38 = ((*ppCVar1)->fields).GOBHKPNEJFN;
          pSVar3 = System_Int32__ToString((int32_t)&local_38,(MethodInfo *)0x0);
          if (*ppCVar1 != (CBPENMDOJDB_o *)0x0) {
            local_34 = KFCFGKEHPNK__FGFOHBLCFKD(((*ppCVar1)->fields).DIILCCNFMEB,(MethodInfo *)0x0);
            str2 = System_UInt32__ToString((uint32_t)&local_34,(MethodInfo *)0x0);
            pNVar8 = (__this->fields)._members;
            pSVar3 = System_String__Concat(pSVar3,StringLiteral_1492/*"/"*/,str2,(MethodInfo *)0x0);
            if (pNVar8 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
              (*(pNVar8->klass->vtable)._75_set_text.methodPtr)
                        (pNVar8,pSVar3,(pNVar8->klass->vtable)._75_set_text.method);
              pCVar5 = (__this->fields).MFONGMAPLFG;
              if (pCVar5 != (CBPENMDOJDB_o *)0x0) {
                pNVar8 = (__this->fields)._rating;
                CJNHFNHJHPE = (pCVar5->fields).NLLKMEMKBAF;
                method_01 = extraout_x1;
                if ((BJFCCEEPHOF_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564();
                  method_01 = extraout_x1_00;
                }
                pSVar3 = BJFCCEEPHOF__POMAAOILGAL(CJNHFNHJHPE,method_01);
                if (pNVar8 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                  (*(pNVar8->klass->vtable)._75_set_text.methodPtr)
                            (pNVar8,pSVar3,(pNVar8->klass->vtable)._75_set_text.method);
                  pNVar7 = (__this->fields)._selectMyClan;
                  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                    thunk_FUN_01ba7564();
                  }
                  bVar2 = UnityEngine_Object__op_Inequality
                                    ((UnityEngine_Object_o *)pNVar7,(UnityEngine_Object_o *)0x0,
                                     (MethodInfo *)0x0);
                  if (bVar2) {
                    pNVar7 = (__this->fields)._selectMyClan;
                    if (pNVar7 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_0333278c;
                    __this_00 = UnityEngine_Component__get_gameObject
                                          ((UnityEngine_Component_o *)pNVar7,(MethodInfo *)0x0);
                    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
                      thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo);
                    }
                    __this_01 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
                    if (((__this_01 == (PlayerData_o *)0x0) ||
                        (iVar4 = PlayerData__PALANAIJAFE(__this_01,(MethodInfo *)0x0),
                        ADHJMIOENHG == (CBPENMDOJDB_o *)0x0)) ||
                       (__this_00 == (UnityEngine_GameObject_o *)0x0)) goto LAB_0333278c;
                    UnityEngine_GameObject__SetActive
                              (__this_00,iVar4 == (ADHJMIOENHG->fields).ADEIKPGDIPM,
                               (MethodInfo *)0x0);
                  }
                  pSVar6 = (__this->fields)._clanNameButton;
                  if ((pSVar6 != (SFButton_o *)0x0) &&
                     (__this_02 = (pSVar6->fields).super.m_OnClick,
                     __this_02 != (UnityEngine_UI_Button_ButtonClickedEvent_o *)0x0)) {
                    UnityEngine_Events_UnityEventBase__RemoveAllListeners
                              ((UnityEngine_Events_UnityEventBase_o *)__this_02,(MethodInfo *)0x0);
                    pSVar6 = (__this->fields)._clanNameButton;
                    if (pSVar6 != (SFButton_o *)0x0) {
                      __this_03 = (UnityEngine_Events_UnityEvent_o *)
                                  (pSVar6->fields).super.m_OnClick;
                      call = (UnityEngine_Events_UnityAction_o *)
                             thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
                      UnityEngine_Events_UnityAction___ctor();
                      if (__this_03 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                        UnityEngine_Events_UnityEvent__AddListener(__this_03,call,(MethodInfo *)0x0)
                        ;
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
LAB_0333278c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private bool IDNHDAOBNAM()  [RVA 0x3232894]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.FindClanCell$$IDNHDAOBNAM @ RVA 0x3232894

bool Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanCell__IDNHDAOBNAM
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanCell_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  CBPENMDOJDB_o *pCVar2;
  ClanLogoImage_o *pCVar3;
  
  if ((DAT_04566fe7 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566fe7 = 1;
    method = extraout_x1;
  }
  if ((__this->fields).MFONGMAPLFG == (CBPENMDOJDB_o *)0x0) {
    bVar1 = false;
  }
  else {
    pCVar3 = (__this->fields).FDOKACGMDHB;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pCVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (!bVar1) {
      pCVar2 = (__this->fields).MFONGMAPLFG;
      if ((pCVar2 != (CBPENMDOJDB_o *)0x0) &&
         (pCVar3 = (__this->fields).FDOKACGMDHB, pCVar3 != (ClanLogoImage_o *)0x0)) {
        bVar1 = ClanLogoImage__NeedUpdate(pCVar3,(pCVar2->fields).JAAACMPGMKJ,0,(MethodInfo *)0x0);
        return bVar1;
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = true;
  }
  return bVar1;
}


// ===== private void KGNBJLLJHOC()  [RVA 0x323293C]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.FindClanCell$$KGNBJLLJHOC @ RVA 0x323293C

void Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanCell__KGNBJLLJHOC
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanCell_o *__this,MethodInfo *method)

{
  RaidClansManager_o *__this_00;
  MethodInfo *extraout_x1;
  CBPENMDOJDB_o *pCVar1;
  
  if ((DAT_04566fe8 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_04566fe8 = 1;
    method = extraout_x1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
  }
  __this_00 = HJPEKDOPBHN__CEFGBPEHJJG((MethodInfo *)0x0);
  pCVar1 = (__this->fields).MFONGMAPLFG;
  if ((pCVar1 != (CBPENMDOJDB_o *)0x0) && (__this_00 != (RaidClansManager_o *)0x0)) {
    RaidClansManager__ILINPANMKLF(__this_00,(pCVar1->fields).ADEIKPGDIPM,(MethodInfo *)0x0);
    EDFDANKEBGF__NEOHABBBGKE(1.0,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x32329B8]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.FindClanCell$$.ctor @ RVA 0x32329B8

void Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanCell___ctor
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanCell_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_BaseScrollItem___ctor((Nekki_SF2_GUI_BaseScrollItem_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private void MLIDFAMHJKI()  [RVA 0x3232790]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.FindClanCell$$MLIDFAMHJKI @ RVA 0x3232790

void Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanCell__MLIDFAMHJKI
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanCell_o *__this,MethodInfo *method)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  bool_conflict bVar5;
  bool bVar6;
  MethodInfo *extraout_x1;
  BHEDGAKGKPO_StaticFields *pBVar7;
  UnityEngine_UI_Image_o *pUVar8;
  
  if ((DAT_04566fe9 & 1) == 0) {
    FUN_01bab630(&BHEDGAKGKPO_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566fe9 = 1;
    method = extraout_x1;
  }
  pUVar8 = (__this->fields)._background;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar6 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar6) {
    pUVar8 = (__this->fields)._background;
    bVar5 = (__this->fields).DGNFDMNJKJM;
    if ((BHEDGAKGKPO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (pUVar8 != (UnityEngine_UI_Image_o *)0x0) {
      bVar6 = bVar5 != false;
      lVar1 = 0xe4;
      if (bVar6) {
        lVar1 = 0xd4;
      }
      lVar2 = 0xe0;
      if (bVar6) {
        lVar2 = 0xd0;
      }
      lVar3 = 0xdc;
      if (bVar6) {
        lVar3 = 0xcc;
      }
      pBVar7 = BHEDGAKGKPO_TypeInfo->static_fields;
      lVar4 = 0xd8;
      if (bVar6) {
        lVar4 = 200;
      }
                    /* WARNING: Could not recover jumptable at 0x03332880. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(pUVar8->klass->vtable)._23_set_color.methodPtr)
                (*(undefined4 *)((long)&(pBVar7->GNNEMOOOOCI).fields.r + lVar4),
                 *(undefined4 *)((long)&(pBVar7->GNNEMOOOOCI).fields.r + lVar3),
                 *(undefined4 *)((long)&(pBVar7->GNNEMOOOOCI).fields.r + lVar2),
                 *(undefined4 *)((long)&(pBVar7->GNNEMOOOOCI).fields.r + lVar1),pUVar8,
                 (pUVar8->klass->vtable)._23_set_color.method);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== private void IDCALAONCCE(bool CJNHFNHJHPE)  [RVA 0x32329C0]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.FindClanCell$$IDCALAONCCE @ RVA 0x32329C0

void Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanCell__IDCALAONCCE
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanCell_o *__this,bool CJNHFNHJHPE,
               MethodInfo *method)

{
  ClanLogoImage_o **ppCVar1;
  bool bVar2;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_RectTransform_o *__this_01;
  UnityEngine_Transform_o *root;
  MethodInfo *method_00;
  CBPENMDOJDB_o *pCVar3;
  ClanLogoImage_o *pCVar4;
  
  if ((DAT_04566fea & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566fea = 1;
  }
  if (!CJNHFNHJHPE) {
    return;
  }
  __this_00 = UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    bVar2 = UnityEngine_GameObject__get_activeInHierarchy(__this_00,(MethodInfo *)0x0);
    if (!bVar2) {
      return;
    }
    bVar2 = Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanCell__IDNHDAOBNAM(__this,method_00);
    if (!bVar2) {
      return;
    }
    pCVar4 = (__this->fields).FDOKACGMDHB;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    ppCVar1 = &(__this->fields).FDOKACGMDHB;
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pCVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (bVar2) {
      __this_01 = (__this->fields)._clanLogoMountRoot;
      if (__this_01 != (UnityEngine_RectTransform_o *)0x0) {
        root = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
        UnityEngine_TransformExtensions__DeleteAllChildrenObjects(root,(MethodInfo *)0x0);
        pCVar3 = (__this->fields).MFONGMAPLFG;
        if (pCVar3 != (CBPENMDOJDB_o *)0x0) {
          pCVar4 = KFCFGKEHPNK__LEIGOOFFFPE
                             ((UnityEngine_Transform_o *)(__this->fields)._clanLogoMountRoot,
                              (pCVar3->fields).JAAACMPGMKJ,0,1.4,(MethodInfo *)0x0);
          (__this->fields).FDOKACGMDHB = pCVar4;
          thunk_FUN_01c20e04(ppCVar1,pCVar4);
          return;
        }
      }
    }
    else {
      pCVar3 = (__this->fields).MFONGMAPLFG;
      if (pCVar3 != (CBPENMDOJDB_o *)0x0) {
        KFCFGKEHPNK__CJFHNCGHAPF(*ppCVar1,(pCVar3->fields).JAAACMPGMKJ,0,1.4,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void EnableVisibility(bool CJNHFNHJHPE)  [RVA 0x3232AE0]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.FindClanCell$$EnableVisibility @ RVA 0x3232AE0

void Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanCell__EnableVisibility
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanCell_o *__this,bool CJNHFNHJHPE,
               MethodInfo *method)

{
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)0x0;
  Nekki_SF2_GUI_BaseScrollItem__EnableVisibility
            ((Nekki_SF2_GUI_BaseScrollItem_o *)__this,CJNHFNHJHPE,(MethodInfo *)0x0);
  Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanCell__IDCALAONCCE(__this,CJNHFNHJHPE,method_00);
  return;
}

