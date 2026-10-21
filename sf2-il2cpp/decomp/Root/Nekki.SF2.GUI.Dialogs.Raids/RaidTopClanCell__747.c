// TypeDefIndex 747
// Namespace: Nekki.SF2.GUI.Dialogs.Raids
// public class RaidTopClanCell : BaseScrollItem
// Fields:
//   private ResolutionImage _myClanIndicator; // 0x130
//   private LabelAlias _clanPos; // 0x138
//   private RectTransform _clanLogoMountRoot; // 0x140
//   private LabelAlias _clanName; // 0x148
//   private SFButton _clanButton; // 0x150
//   private LabelAlias _capacityLabel; // 0x158
//   private LabelAlias _ratingLabel; // 0x160
//   private ResolutionImage _ratingImage; // 0x168
//   private ResolutionImage _linePic; // 0x170
//   private ResolutionImage _frameTracery; // 0x178
//   private float _heightWithLine; // 0x180
//   private float _heightRegular; // 0x184
//   private ClanLogoImage FDOKACGMDHB; // 0x188
//   private CBPENMDOJDB FBILHKCKHEJ; // 0x190
//   private static readonly Vector2 LGDJILHAHJB; // 0x0

// ===== private static void .cctor()  [RVA 0x304CBE0]
// Nekki.SF2.GUI.Dialogs.Raids.RaidTopClanCell$$.cctor @ RVA 0x304CBE0

void Nekki_SF2_GUI_Dialogs_Raids_RaidTopClanCell___cctor(MethodInfo *method)

{
  if ((DAT_04565e17 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_RaidTopClanCell_TypeInfo);
    DAT_04565e17 = 1;
  }
  (Nekki_SF2_GUI_Dialogs_Raids_RaidTopClanCell_TypeInfo->static_fields->LGDJILHAHJB).fields =
       (UnityEngine_Vector2_Fields)0x42780000441d8000;
  return;
}


// ===== private void LOILKHCEIOM()  [RVA 0x304CC30]
// Nekki.SF2.GUI.Dialogs.Raids.RaidTopClanCell$$LOILKHCEIOM @ RVA 0x304CC30

void Nekki_SF2_GUI_Dialogs_Raids_RaidTopClanCell__LOILKHCEIOM
               (Nekki_SF2_GUI_Dialogs_Raids_RaidTopClanCell_o *__this,MethodInfo *method)

{
  EEOMEMBBGNA_o *__this_00;
  MethodInfo *extraout_x1;
  CBPENMDOJDB_o *pCVar1;
  
  if ((DAT_04565e18 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_04565e18 = 1;
    method = extraout_x1;
  }
  if ((__this->fields).FBILHKCKHEJ == (CBPENMDOJDB_o *)0x0) {
    return;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
  }
  __this_00 = HJPEKDOPBHN__CEFGBPEHJJG((MethodInfo *)0x0);
  pCVar1 = (__this->fields).FBILHKCKHEJ;
  if ((pCVar1 != (CBPENMDOJDB_o *)0x0) && (__this_00 != (EEOMEMBBGNA_o *)0x0)) {
    EEOMEMBBGNA__ILINPANMKLF(__this_00,(pCVar1->fields).ADEIKPGDIPM,(MethodInfo *)0x0);
    EDFDANKEBGF__NEOHABBBGKE(1.0,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void KGLAFCCENFA(int HIMHBEENEIF)  [RVA 0x304CCC0]
// Nekki.SF2.GUI.Dialogs.Raids.RaidTopClanCell$$KGLAFCCENFA @ RVA 0x304CCC0

void Nekki_SF2_GUI_Dialogs_Raids_RaidTopClanCell__KGLAFCCENFA
               (Nekki_SF2_GUI_Dialogs_Raids_RaidTopClanCell_o *__this,int32_t HIMHBEENEIF,
               MethodInfo *method)

{
  int32_t iVar1;
  System_String_o *pSVar2;
  Nekki_SF2_GUI_LabelAlias_o *pNVar3;
  MethodInfo *method_00;
  Nekki_SF2_GUI_LabelAlias_c *pNVar4;
  int32_t local_24;
  
  local_24 = HIMHBEENEIF;
  if ((DAT_04565e19 & 1) == 0) {
    FUN_01bab630(&LPGPNBGHDBD_TypeInfo);
    FUN_01bab630(&StringLiteral_1223/*"-"*/);
    DAT_04565e19 = 1;
  }
  pSVar2 = StringLiteral_1223/*"-"*/;
  if (0 < HIMHBEENEIF) {
    pSVar2 = System_Int32__ToString((int32_t)&local_24,(MethodInfo *)0x0);
  }
  pNVar3 = (__this->fields)._clanPos;
  if (pNVar3 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(0,pSVar2);
  }
  pNVar4 = pNVar3->klass;
                    /* try { // try from 0314cd3c to 0324ceeb has its CatchHandler @ 0314cd3c
                       catch() { ... } // from try @ 0314cd3c with catch @ 0314cd3c
                       catch() { ... } // from try @ 0314cf08 with catch @ 0314cd3c
                       catch() { ... } // from try @ 0314cf38 with catch @ 0314cd3c
                       catch() { ... } // from try @ 0314cf74 with catch @ 0314cd3c */
  method_00 = (pNVar4->vtable)._75_set_text.method;
  (*(pNVar4->vtable)._75_set_text.methodPtr)();
  iVar1 = local_24;
  if ((LPGPNBGHDBD_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  iVar1 = LPGPNBGHDBD__CJPODFGPDFI(iVar1,(MethodInfo *)0x0);
  Nekki_SF2_GUI_Dialogs_Raids_RaidTopClanCell__KANCOIBLNKP(__this,iVar1,method_00);
  return;
}


// ===== private void IDCALAONCCE(bool CJNHFNHJHPE)  [RVA 0x304CFC0]
// Nekki.SF2.GUI.Dialogs.Raids.RaidTopClanCell$$IDCALAONCCE @ RVA 0x304CFC0

void Nekki_SF2_GUI_Dialogs_Raids_RaidTopClanCell__IDCALAONCCE
               (Nekki_SF2_GUI_Dialogs_Raids_RaidTopClanCell_o *__this,bool CJNHFNHJHPE,
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
  
  if ((DAT_04565e1a & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04565e1a = 1;
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
    bVar2 = Nekki_SF2_GUI_Dialogs_Raids_RaidTopClanCell__IDNHDAOBNAM(__this,method_00);
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
        pCVar3 = (__this->fields).FBILHKCKHEJ;
        if (pCVar3 != (CBPENMDOJDB_o *)0x0) {
          pCVar4 = KFCFGKEHPNK__LEIGOOFFFPE
                             ((UnityEngine_Transform_o *)(__this->fields)._clanLogoMountRoot,
                              (pCVar3->fields).JAAACMPGMKJ,0,1.0,(MethodInfo *)0x0);
          (__this->fields).FDOKACGMDHB = pCVar4;
          thunk_FUN_01c20e04(ppCVar1,pCVar4);
          return;
        }
      }
    }
    else {
      pCVar3 = (__this->fields).FBILHKCKHEJ;
      if (pCVar3 != (CBPENMDOJDB_o *)0x0) {
        KFCFGKEHPNK__CJFHNCGHAPF(*ppCVar1,(pCVar3->fields).JAAACMPGMKJ,0,1.0,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x304D180]
// Nekki.SF2.GUI.Dialogs.Raids.RaidTopClanCell$$.ctor @ RVA 0x304D180

void Nekki_SF2_GUI_Dialogs_Raids_RaidTopClanCell___ctor
               (Nekki_SF2_GUI_Dialogs_Raids_RaidTopClanCell_o *__this,MethodInfo *method)

{
  (__this->fields)._heightWithLine = 150.0;
  (__this->fields)._heightRegular = 125.0;
  Nekki_SF2_GUI_BaseScrollItem___ctor((Nekki_SF2_GUI_BaseScrollItem_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public void ReInit(int HIMHBEENEIF, CBPENMDOJDB PBNPKBJKFHE)  [RVA 0x304D194]
// Nekki.SF2.GUI.Dialogs.Raids.RaidTopClanCell$$ReInit @ RVA 0x304D194

void Nekki_SF2_GUI_Dialogs_Raids_RaidTopClanCell__ReInit
               (Nekki_SF2_GUI_Dialogs_Raids_RaidTopClanCell_o *__this,int32_t HIMHBEENEIF,
               CBPENMDOJDB_o *PBNPKBJKFHE,MethodInfo *method)

{
  int32_t OJDBABKBAFA;
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_RectTransform_o *__this_01;
  UnityEngine_UI_Button_ButtonClickedEvent_o *__this_02;
  UnityEngine_Events_UnityAction_o *call;
  System_Action_o *pSVar1;
  EEGDOGKBLNG_o *__this_03;
  int64_t iVar2;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar3;
  UnityEngine_GameObject_o *pUVar4;
  System_String_o *pSVar5;
  System_String_o *str2;
  MethodInfo *method_00;
  SFButton_o *pSVar6;
  UnityEngine_Events_UnityEvent_o *__this_04;
  Nekki_SF2_GUI_LabelAlias_o *pNVar7;
  long lVar8;
  UnityEngine_Vector2_o UVar9;
  uint32_t local_48;
  int32_t local_44;
  
                    /* try { // try from 0314d19c to 0324d1ef has its CatchHandler @ 0314d19c
                       catch() { ... } // from try @ 0314d19c with catch @ 0314d19c
                       catch() { ... } // from try @ 0314d20c with catch @ 0314d19c
                       catch() { ... } // from try @ 0314d23c with catch @ 0314d19c
                       catch() { ... } // from try @ 0314d280 with catch @ 0314d19c */
  if ((DAT_04565e1b & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&LPGPNBGHDBD_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_RaidTopClanCell_ACOAGJEJKMO__);
                    /* try { // try from 0314d1f0 to 0324d20b has its CatchHandler @ 0314d20c */
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_RaidTopClanCell_LOILKHCEIOM__);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0314d1f0 with catch @ 0314d20c
                       try { // try from 0314d20c to 0324d223 has its CatchHandler @ 0314d19c */
    FUN_01bab630(&StringLiteral_1492/*"/"*/);
    DAT_04565e1b = 1;
  }
                    /* try { // try from 0314d224 to 0324d23b has its CatchHandler @ 0314d278 */
  local_48 = 0;
  __this_00 = Nekki_SF2_GUI_BaseScrollItem__get_RectTransform
                        ((Nekki_SF2_GUI_BaseScrollItem_o *)__this,(MethodInfo *)0x0);
  __this_01 = Nekki_SF2_GUI_BaseScrollItem__get_RectTransform
                        ((Nekki_SF2_GUI_BaseScrollItem_o *)__this,(MethodInfo *)0x0);
                    /* try { // try from 0314d23c to 0324d267 has its CatchHandler @ 0314d19c */
  if (__this_01 != (UnityEngine_RectTransform_o *)0x0) {
    UVar9 = UnityEngine_RectTransform__get_sizeDelta(__this_01,(MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
      UVar9.fields.y = (__this->fields)._heightRegular;
      UnityEngine_RectTransform__set_sizeDelta(__this_00,UVar9,(MethodInfo *)0x0);
      (__this->fields).FBILHKCKHEJ = PBNPKBJKFHE;
                    /* try { // try from 0314d268 to 0324d277 has its CatchHandler @ 0314d278 */
      thunk_FUN_01c20e04(&(__this->fields).FBILHKCKHEJ,PBNPKBJKFHE);
      if ((__this->fields).FBILHKCKHEJ == (CBPENMDOJDB_o *)0x0) {
        return;
      }
      pSVar6 = (__this->fields)._clanButton;
                    /* catch() { ... } // from try @ 0314d224 with catch @ 0314d278
                       catch() { ... } // from try @ 0314d268 with catch @ 0314d278 */
                    /* try { // try from 0314d27c to 0324d27f has its CatchHandler @ 0314d288 */
                    /* try { // try from 0314d280 to 0324d28b has its CatchHandler @ 0314d19c */
      if ((pSVar6 != (SFButton_o *)0x0) &&
         (__this_02 = (pSVar6->fields).super.m_OnClick,
         __this_02 != (UnityEngine_UI_Button_ButtonClickedEvent_o *)0x0)) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0314d27c with catch @ 0314d288
                        */
        UnityEngine_Events_UnityEventBase__RemoveAllListeners
                  ((UnityEngine_Events_UnityEventBase_o *)__this_02,(MethodInfo *)0x0);
        pSVar6 = (__this->fields)._clanButton;
        if (pSVar6 != (SFButton_o *)0x0) {
          __this_04 = (UnityEngine_Events_UnityEvent_o *)(pSVar6->fields).super.m_OnClick;
          call = (UnityEngine_Events_UnityAction_o *)
                 thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
          UnityEngine_Events_UnityAction___ctor();
          if (__this_04 != (UnityEngine_Events_UnityEvent_o *)0x0) {
            UnityEngine_Events_UnityEvent__AddListener(__this_04,call,(MethodInfo *)0x0);
            pNVar7 = (__this->fields)._ratingLabel;
            pSVar1 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
            System_Action___ctor();
            if (pNVar7 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
              Nekki_SF2_GUI_TextPic__remove_OnBoundsUpdated
                        ((Nekki_SF2_GUI_TextPic_o *)pNVar7,pSVar1,(MethodInfo *)0x0);
              pNVar7 = (__this->fields)._ratingLabel;
              pSVar1 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
              System_Action___ctor();
              if (pNVar7 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                method_00 = (MethodInfo *)0x0;
                Nekki_SF2_GUI_TextPic__add_OnBoundsUpdated
                          ((Nekki_SF2_GUI_TextPic_o *)pNVar7,pSVar1,(MethodInfo *)0x0);
                Nekki_SF2_GUI_Dialogs_Raids_RaidTopClanCell__KGLAFCCENFA
                          (__this,HIMHBEENEIF,method_00);
                if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564();
                }
                __this_03 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
                if (((__this_03 != (EEGDOGKBLNG_o *)0x0) &&
                    (iVar2 = EEGDOGKBLNG__PALANAIJAFE(__this_03,(MethodInfo *)0x0),
                    PBNPKBJKFHE != (CBPENMDOJDB_o *)0x0)) &&
                   (pNVar3 = (__this->fields)._myClanIndicator,
                   pNVar3 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0)) {
                  lVar8 = (PBNPKBJKFHE->fields).ADEIKPGDIPM;
                  pUVar4 = UnityEngine_Component__get_gameObject
                                     ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0);
                  if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
                    UnityEngine_GameObject__SetActive(pUVar4,iVar2 == lVar8,(MethodInfo *)0x0);
                    pNVar7 = (__this->fields)._ratingLabel;
                    OJDBABKBAFA = (PBNPKBJKFHE->fields).NLLKMEMKBAF;
                    if ((LPGPNBGHDBD_TypeInfo->_2).cctor_finished == 0) {
                      thunk_FUN_01ba7564();
                    }
                    pSVar5 = LPGPNBGHDBD__LLOLNNDDPFM(OJDBABKBAFA,(MethodInfo *)0x0);
                    if (pNVar7 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                      (*(pNVar7->klass->vtable)._75_set_text.methodPtr)
                                (pNVar7,pSVar5,(pNVar7->klass->vtable)._75_set_text.method);
                      pNVar7 = (__this->fields)._clanName;
                      if (pNVar7 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                        (*(pNVar7->klass->vtable)._75_set_text.methodPtr)
                                  (pNVar7,(PBNPKBJKFHE->fields).GJNOEAKNMOG,
                                   (pNVar7->klass->vtable)._75_set_text.method);
                        local_44 = (PBNPKBJKFHE->fields).GOBHKPNEJFN;
                        pNVar7 = (__this->fields)._capacityLabel;
                        pSVar5 = System_Int32__ToString((int32_t)&local_44,(MethodInfo *)0x0);
                        local_48 = KFCFGKEHPNK__FGFOHBLCFKD
                                             ((PBNPKBJKFHE->fields).DIILCCNFMEB,(MethodInfo *)0x0);
                        str2 = System_UInt32__ToString((uint32_t)&local_48,(MethodInfo *)0x0);
                        pSVar5 = System_String__Concat
                                           (pSVar5,StringLiteral_1492/*"/"*/,str2,(MethodInfo *)0x0);
                        if (pNVar7 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                          (*(pNVar7->klass->vtable)._75_set_text.methodPtr)
                                    (pNVar7,pSVar5,(pNVar7->klass->vtable)._75_set_text.method);
                          pNVar3 = (__this->fields)._linePic;
                          if ((pNVar3 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
                             (pUVar4 = UnityEngine_Component__get_gameObject
                                                 ((UnityEngine_Component_o *)pNVar3,
                                                  (MethodInfo *)0x0),
                             pUVar4 != (UnityEngine_GameObject_o *)0x0)) {
                            UnityEngine_GameObject__SetActive(pUVar4,false,(MethodInfo *)0x0);
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
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void EnableVisibility(bool CJNHFNHJHPE)  [RVA 0x304D4DC]
// Nekki.SF2.GUI.Dialogs.Raids.RaidTopClanCell$$EnableVisibility @ RVA 0x304D4DC

void Nekki_SF2_GUI_Dialogs_Raids_RaidTopClanCell__EnableVisibility
               (Nekki_SF2_GUI_Dialogs_Raids_RaidTopClanCell_o *__this,bool CJNHFNHJHPE,
               MethodInfo *method)

{
  bool CJNHFNHJHPE_00;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)0x0;
  CJNHFNHJHPE_00 = (__this->fields).FBILHKCKHEJ != (CBPENMDOJDB_o *)0x0 && CJNHFNHJHPE;
  Nekki_SF2_GUI_BaseScrollItem__EnableVisibility
            ((Nekki_SF2_GUI_BaseScrollItem_o *)__this,CJNHFNHJHPE_00,(MethodInfo *)0x0);
  Nekki_SF2_GUI_Dialogs_Raids_RaidTopClanCell__IDCALAONCCE(__this,CJNHFNHJHPE_00,method_00);
  return;
}


// ===== private void ACOAGJEJKMO()  [RVA 0x304D518]
// Nekki.SF2.GUI.Dialogs.Raids.RaidTopClanCell$$ACOAGJEJKMO @ RVA 0x304D518

void Nekki_SF2_GUI_Dialogs_Raids_RaidTopClanCell__ACOAGJEJKMO
               (Nekki_SF2_GUI_Dialogs_Raids_RaidTopClanCell_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_ResolutionImage_o *pNVar1;
  UnityEngine_RectTransform_o *rt;
  UnityEngine_RectTransform_o *pUVar2;
  Nekki_SF2_GUI_LabelAlias_o *pNVar3;
  UnityEngine_Vector2_o UVar4;
  UnityEngine_Vector2_o UVar5;
  UnityEngine_Vector3_o UVar6;
  
  pNVar1 = (__this->fields)._ratingImage;
  if (pNVar1 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
    rt = UnityEngine_UI_Graphic__get_rectTransform
                   ((UnityEngine_UI_Graphic_o *)pNVar1,(MethodInfo *)0x0);
    pNVar1 = (__this->fields)._ratingImage;
    if ((pNVar1 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
       (pUVar2 = UnityEngine_UI_Graphic__get_rectTransform
                           ((UnityEngine_UI_Graphic_o *)pNVar1,(MethodInfo *)0x0),
       pUVar2 != (UnityEngine_RectTransform_o *)0x0)) {
      UVar4 = UnityEngine_RectTransform__get_sizeDelta(pUVar2,(MethodInfo *)0x0);
      pNVar3 = (__this->fields)._ratingLabel;
      if (pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
        UVar6 = Nekki_SF2_GUI_TextPic__LocalTextMeshBounds_Anchored
                          ((Nekki_SF2_GUI_TextPic_o *)pNVar3,3,(MethodInfo *)0x0);
        pNVar3 = (__this->fields)._ratingLabel;
        if ((pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
           (pUVar2 = UnityEngine_UI_Graphic__get_rectTransform
                               ((UnityEngine_UI_Graphic_o *)pNVar3,(MethodInfo *)0x0),
           pUVar2 != (UnityEngine_RectTransform_o *)0x0)) {
          UVar5 = UnityEngine_RectTransform__get_anchoredPosition(pUVar2,(MethodInfo *)0x0);
          UnityEngine_TransformExtensions__SetAnchoredPositionX
                    (rt,UVar4.fields.x * -0.5 + 5.0 + UVar6.fields.x + UVar5.fields.x,
                     (MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private bool IDNHDAOBNAM()  [RVA 0x304D0D8]
// Nekki.SF2.GUI.Dialogs.Raids.RaidTopClanCell$$IDNHDAOBNAM @ RVA 0x304D0D8

bool Nekki_SF2_GUI_Dialogs_Raids_RaidTopClanCell__IDNHDAOBNAM
               (Nekki_SF2_GUI_Dialogs_Raids_RaidTopClanCell_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  CBPENMDOJDB_o *pCVar2;
  ClanLogoImage_o *pCVar3;
  
  if ((DAT_04565e1c & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04565e1c = 1;
    method = extraout_x1;
  }
  if ((__this->fields).FBILHKCKHEJ == (CBPENMDOJDB_o *)0x0) {
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
      pCVar2 = (__this->fields).FBILHKCKHEJ;
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


// ===== private bool GFBIBAJEMFM()  [RVA 0x304D4CC]
// Nekki.SF2.GUI.Dialogs.Raids.RaidTopClanCell$$GFBIBAJEMFM @ RVA 0x304D4CC

bool Nekki_SF2_GUI_Dialogs_Raids_RaidTopClanCell__GFBIBAJEMFM
               (Nekki_SF2_GUI_Dialogs_Raids_RaidTopClanCell_o *__this,MethodInfo *method)

{
  return (__this->fields).FBILHKCKHEJ == (CBPENMDOJDB_o *)0x0;
}


// ===== private void KANCOIBLNKP(BIBLCFCAMHG ACCIHBHMFPN)  [RVA 0x304CD8C]
// Nekki.SF2.GUI.Dialogs.Raids.RaidTopClanCell$$KANCOIBLNKP @ RVA 0x304CD8C

void Nekki_SF2_GUI_Dialogs_Raids_RaidTopClanCell__KANCOIBLNKP
               (Nekki_SF2_GUI_Dialogs_Raids_RaidTopClanCell_o *__this,int32_t ACCIHBHMFPN,
               MethodInfo *method)

{
  bool bVar1;
  System_String_o *CJNHFNHJHPE;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_RectTransform_o *__this_02;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar2;
  UnityEngine_Vector3_StaticFields *pUVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar8;
  UnityEngine_Vector2_o value;
  UnityEngine_Vector3_o value_00;
  
  if ((DAT_04565e1d & 1) == 0) {
    FUN_01bab630(&FGKGKDEJCOG_TypeInfo);
    FUN_01bab630(&LPGPNBGHDBD_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_RaidTopClanCell_TypeInfo);
    DAT_04565e1d = 1;
  }
  if ((LPGPNBGHDBD_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  CJNHFNHJHPE = LPGPNBGHDBD__ELADHNOAPBC(ACCIHBHMFPN,(MethodInfo *)0x0);
  bVar1 = PCOEHCPGBBG__BDLEIEHBFAD(CJNHFNHJHPE,(MethodInfo *)0x0);
  pNVar2 = (__this->fields)._frameTracery;
  if ((pNVar2 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
     (__this_00 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
     __this_00 != (UnityEngine_GameObject_o *)0x0)) {
    if (bVar1) {
      UnityEngine_GameObject__SetActive(__this_00,false,(MethodInfo *)0x0);
    }
    else {
      UnityEngine_GameObject__SetActive(__this_00,true,(MethodInfo *)0x0);
      pNVar2 = (__this->fields)._frameTracery;
      if (pNVar2 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_0314cfbc;
      Nekki_SF2_GUI_ResolutionImage__set_SpriteName(pNVar2,CJNHFNHJHPE,(MethodInfo *)0x0);
    }
    pNVar2 = (__this->fields)._frameTracery;
    if (pNVar2 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
      __this_01 = UnityEngine_Component__get_transform
                            ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0);
      if (DAT_0455fa7f == '\0') {
        FUN_01bab630(&UnityEngine_Vector3_TypeInfo);
        DAT_0455fa7f = '\x01';
      }
      pUVar3 = UnityEngine_Vector3_TypeInfo->static_fields;
      uVar6 = (pUVar3->oneVector).fields.x;
      uVar7 = (pUVar3->oneVector).fields.y;
      fVar8 = (pUVar3->oneVector).fields.z;
      if ((FGKGKDEJCOG_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (DAT_04565e5d == '\0') {
        FUN_01bab630(&FGKGKDEJCOG_TypeInfo);
        DAT_04565e5d = '\x01';
      }
      if ((FGKGKDEJCOG_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 0314ceec to 0324cf07 has its CatchHandler @ 0314cf08 */
        thunk_FUN_01ba7564();
      }
      if (__this_01 != (UnityEngine_Transform_o *)0x0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0314ceec with catch @ 0314cf08
                       try { // try from 0314cf08 to 0324cf1f has its CatchHandler @ 0314cd3c */
        fVar4 = FGKGKDEJCOG_TypeInfo->static_fields->CHCLEFKLOKH;
        value_00.fields.z = (fVar8 + fVar8) * fVar4;
        value_00.fields.x = ((float)uVar6 + (float)uVar6) * fVar4;
        value_00.fields.y = ((float)uVar7 + (float)uVar7) * fVar4;
        UnityEngine_Transform__set_localScale(__this_01,value_00,(MethodInfo *)0x0);
                    /* try { // try from 0314cf20 to 0324cf37 has its CatchHandler @ 0314cf6c */
        pNVar2 = (__this->fields)._frameTracery;
        if (pNVar2 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
          __this_02 = UnityEngine_UI_Graphic__get_rectTransform
                                ((UnityEngine_UI_Graphic_o *)pNVar2,(MethodInfo *)0x0);
                    /* try { // try from 0314cf38 to 0324cf5b has its CatchHandler @ 0314cd3c */
          if ((Nekki_SF2_GUI_Dialogs_Raids_RaidTopClanCell_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564(Nekki_SF2_GUI_Dialogs_Raids_RaidTopClanCell_TypeInfo);
          }
                    /* try { // try from 0314cf5c to 0324cf6b has its CatchHandler @ 0314cf6c */
          fVar8 = (Nekki_SF2_GUI_Dialogs_Raids_RaidTopClanCell_TypeInfo->static_fields->LGDJILHAHJB)
                  .fields.x;
          fVar4 = (Nekki_SF2_GUI_Dialogs_Raids_RaidTopClanCell_TypeInfo->static_fields->LGDJILHAHJB)
                  .fields.y;
          if (DAT_04565e5d == '\0') {
                    /* catch() { ... } // from try @ 0314cf20 with catch @ 0314cf6c
                       catch() { ... } // from try @ 0314cf5c with catch @ 0314cf6c */
            FUN_01bab630(&FGKGKDEJCOG_TypeInfo);
                    /* try { // try from 0314cf70 to 0324cf73 has its CatchHandler @ 0314cf7c */
                    /* try { // try from 0314cf74 to 0324cf7f has its CatchHandler @ 0314cd3c */
            DAT_04565e5d = '\x01';
          }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0314cf70 with catch @ 0314cf7c
                        */
          if ((FGKGKDEJCOG_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          if (__this_02 != (UnityEngine_RectTransform_o *)0x0) {
            fVar5 = FGKGKDEJCOG_TypeInfo->static_fields->CHCLEFKLOKH;
            value.fields.y = fVar4 / fVar5;
            value.fields.x = fVar8 / fVar5;
            UnityEngine_RectTransform__set_sizeDelta(__this_02,value,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
LAB_0314cfbc:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void ShowTopGroupSeparator()  [RVA 0x304D5C8]
// Nekki.SF2.GUI.Dialogs.Raids.RaidTopClanCell$$ShowTopGroupSeparator @ RVA 0x304D5C8

void Nekki_SF2_GUI_Dialogs_Raids_RaidTopClanCell__ShowTopGroupSeparator
               (Nekki_SF2_GUI_Dialogs_Raids_RaidTopClanCell_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_ResolutionImage_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_RectTransform_o *__this_02;
  UnityEngine_RectTransform_o *__this_03;
  UnityEngine_Vector2_o UVar1;
  
  __this_00 = (__this->fields)._linePic;
  if ((__this_00 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
     (__this_01 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
     __this_01 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(__this_01,true,(MethodInfo *)0x0);
    __this_02 = Nekki_SF2_GUI_BaseScrollItem__get_RectTransform
                          ((Nekki_SF2_GUI_BaseScrollItem_o *)__this,(MethodInfo *)0x0);
    __this_03 = Nekki_SF2_GUI_BaseScrollItem__get_RectTransform
                          ((Nekki_SF2_GUI_BaseScrollItem_o *)__this,(MethodInfo *)0x0);
    if (__this_03 != (UnityEngine_RectTransform_o *)0x0) {
      UVar1 = UnityEngine_RectTransform__get_sizeDelta(__this_03,(MethodInfo *)0x0);
      if (__this_02 != (UnityEngine_RectTransform_o *)0x0) {
        UVar1.fields.y = (__this->fields)._heightWithLine;
        UnityEngine_RectTransform__set_sizeDelta(__this_02,UVar1,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

