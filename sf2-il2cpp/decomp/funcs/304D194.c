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
    FUN_01bab630(&StringLiteral_1492);
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
                                           (pSVar5,StringLiteral_1492,str2,(MethodInfo *)0x0);
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

