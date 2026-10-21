// TypeDefIndex 116
// Namespace: Nekki.SF2.GUI.Dialogs.Raids.Clans
// public class ClanRaidPartyPlayerCell : BaseScrollItem
// Fields:
//   private ResolutionImage _status; // 0x130
//   private ResolutionImage _playerDan; // 0x138
//   private LabelAlias _playerDanNumber; // 0x140
//   private SFButton _playerNameBtn; // 0x148
//   private LabelAlias _playerName; // 0x150
//   private SFButton _kickButton; // 0x158
//   private GKLPDMLELJF DICNIMJBGML; // 0x160

// ===== public void SetKickable(bool CKPLGFKDOHC)  [RVA 0x30107B8]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanRaidPartyPlayerCell$$SetKickable @ RVA 0x30107B8

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyPlayerCell__SetKickable
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyPlayerCell_o *__this,bool CKPLGFKDOHC
               ,MethodInfo *method)

{
  SFButton_o *pSVar1;
  UnityEngine_GameObject_o *__this_00;
  
                    /* try { // try from 031107b8 to 032107bb has its CatchHandler @ 031107bc */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031107b8 with catch @ 031107bc
                       try { // try from 031107bc to 032107eb has its CatchHandler @ 0311066c */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031106c4 with catch @ 031107c0
                       catch(type#1 @ 03f99f68) { ... } // from try @ 03110700 with catch @ 031107c0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03110720 with catch @ 031107c4
                        */
  if ((__this->fields).DICNIMJBGML == (GKLPDMLELJF_o *)0x0) {
                    /* try { // try from 03110818 to 0321082f has its CatchHandler @ 03110844 */
    return;
  }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031107b4 with catch @ 031107cc
                        */
  pSVar1 = (__this->fields)._kickButton;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031106d4 with catch @ 031107d0
                        */
  if ((pSVar1 != (SFButton_o *)0x0) &&
     (__this_00 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)pSVar1,(MethodInfo *)0x0),
     __this_00 != (UnityEngine_GameObject_o *)0x0)) {
                    /* try { // try from 031107ec to 032107ef has its CatchHandler @ 03110800 */
    UnityEngine_GameObject__SetActive(__this_00,CKPLGFKDOHC,(MethodInfo *)0x0);
    pSVar1 = (__this->fields)._kickButton;
    if (pSVar1 != (SFButton_o *)0x0) {
                    /* catch() { ... } // from try @ 031107ec with catch @ 03110800 */
      UnityEngine_UI_Selectable__set_interactable
                ((UnityEngine_UI_Selectable_o *)pSVar1,CKPLGFKDOHC,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void JHEAGBBIBOJ(object IMMNELPBGIF)  [RVA 0x3010830]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanRaidPartyPlayerCell$$JHEAGBBIBOJ @ RVA 0x3010830

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyPlayerCell__JHEAGBBIBOJ
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyPlayerCell_o *__this,
               Il2CppObject *IMMNELPBGIF,MethodInfo *method)

{
  int iVar1;
  int *piVar2;
  ACHLOMELAJE_o *__this_00;
  EEOMEMBBGNA_o *pEVar3;
  CJFBGEEIPBA_o *__this_01;
  GKLPDMLELJF_o *pGVar4;
  
                    /* try { // try from 03110830 to 0321083b has its CatchHandler @ 0311066c */
                    /* try { // try from 0311083c to 03210843 has its CatchHandler @ 03110844 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03110818 with catch @ 03110844
                       catch(type#2 @ 00000000) { ... } // from try @ 0311083c with catch @ 03110844
                        */
                    /* try { // try from 03110848 to 03210897 has its CatchHandler @ 03110848
                       catch() { ... } // from try @ 03110848 with catch @ 03110848
                       catch() { ... } // from try @ 031108e0 with catch @ 03110848
                       catch() { ... } // from try @ 03110930 with catch @ 03110848
                       catch() { ... } // from try @ 03110994 with catch @ 03110848 */
  if ((DAT_04565ba6 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565ba6 = 1;
  }
  if ((IMMNELPBGIF == (Il2CppObject *)0x0) || ((__this->fields).DICNIMJBGML == (GKLPDMLELJF_o *)0x0)
     ) {
    return;
  }
                    /* try { // try from 03110898 to 0321089b has its CatchHandler @ 03110930 */
  if ((IMMNELPBGIF->klass->_1).element_class != (int_TypeInfo->_1).element_class) {
                    /* WARNING: Subroutine does not return */
    FUN_01babc64(IMMNELPBGIF);
  }
                    /* try { // try from 031108a8 to 032108b3 has its CatchHandler @ 03110938 */
  piVar2 = (int *)thunk_FUN_01bda96c();
  iVar1 = *piVar2;
  if (iVar1 - 3U < 2) {
                    /* try { // try from 031108cc to 032108cf has its CatchHandler @ 0311093c */
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
                    /* try { // try from 031108d4 to 032108df has its CatchHandler @ 03110934 */
    if (DAT_04565b7d == '\0') {
                    /* try { // try from 031108e0 to 0321092b has its CatchHandler @ 03110848 */
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b7d = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if (__this_00 != (ACHLOMELAJE_o *)0x0) {
      ACHLOMELAJE__EBDABMENDJP(__this_00,iVar1 != 3,(MethodInfo *)0x0);
      return;
    }
  }
  else {
                    /* try { // try from 0311092c to 0321092f has its CatchHandler @ 0311093c */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03110898 with catch @ 03110930
                       try { // try from 03110930 to 03210953 has its CatchHandler @ 03110848 */
    if (iVar1 != 1) {
      return;
    }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031108d4 with catch @ 03110934
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031108a8 with catch @ 03110938
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031108cc with catch @ 0311093c
                       catch(type#1 @ 03f99f68) { ... } // from try @ 0311092c with catch @ 0311093c
                        */
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pEVar3 = HJPEKDOPBHN__CEFGBPEHJJG((MethodInfo *)0x0);
                    /* try { // try from 03110954 to 03210957 has its CatchHandler @ 03110964 */
                    /* catch() { ... } // from try @ 03110954 with catch @ 03110964 */
    if (((pEVar3 != (EEOMEMBBGNA_o *)0x0) &&
        (pGVar4 = (__this->fields).DICNIMJBGML, pGVar4 != (GKLPDMLELJF_o *)0x0)) &&
       (__this_01 = (pEVar3->fields).GMNJEBCECDA, __this_01 != (CJFBGEEIPBA_o *)0x0)) {
                    /* try { // try from 0311097c to 03210993 has its CatchHandler @ 031109a8 */
      CJFBGEEIPBA__HKPDBKGKBOO
                (__this_01,(pGVar4->fields).ANAJGHJEEOC,(System_Action_NLFLMJPNOLF__o *)0x0,
                 (MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void Init(GKLPDMLELJF HEHMPFLAEGE)  [RVA 0x3010994]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanRaidPartyPlayerCell$$Init @ RVA 0x3010994

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyPlayerCell__Init
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyPlayerCell_o *__this,
               GKLPDMLELJF_o *HEHMPFLAEGE,MethodInfo *method)

{
  GKLPDMLELJF_o **ppGVar1;
  UnityEngine_UI_Button_ButtonClickedEvent_o *pUVar2;
  UnityEngine_Events_UnityAction_o *pUVar3;
  Nekki_SF2_GUI_LabelAlias_o *pNVar4;
  System_String_o *pSVar5;
  PLIIGOCLJDL_o *__this_00;
  UnityEngine_GameObject_o *pUVar6;
  MethodInfo *method_00;
  SFButton_o *pSVar7;
  GKLPDMLELJF_o *pGVar8;
  UnityEngine_Events_UnityEvent_o *pUVar9;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar10;
  int32_t local_34;
  
                    /* try { // try from 03110994 to 0321099f has its CatchHandler @ 03110848 */
                    /* try { // try from 031109a0 to 032109a7 has its CatchHandler @ 031109a8 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0311097c with catch @ 031109a8
                       catch(type#2 @ 00000000) { ... } // from try @ 031109a0 with catch @ 031109a8
                        */
  if ((DAT_04565ba7 & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyPlayerCell_DNFIBMGKICI__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyPlayerCell_KGNBJLLJHOC__);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    DAT_04565ba7 = 1;
  }
  ppGVar1 = &(__this->fields).DICNIMJBGML;
  (__this->fields).DICNIMJBGML = HEHMPFLAEGE;
  thunk_FUN_01c20e04(ppGVar1,HEHMPFLAEGE);
  if ((__this->fields).DICNIMJBGML == (GKLPDMLELJF_o *)0x0) {
    pNVar10 = (__this->fields)._status;
    if ((pNVar10 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
       (pUVar6 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar10,(MethodInfo *)0x0),
       pUVar6 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(pUVar6,false,(MethodInfo *)0x0);
      pNVar10 = (__this->fields)._playerDan;
      if ((pNVar10 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
         (pUVar6 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pNVar10,(MethodInfo *)0x0),
         pUVar6 != (UnityEngine_GameObject_o *)0x0)) {
        UnityEngine_GameObject__SetActive(pUVar6,false,(MethodInfo *)0x0);
        pNVar4 = (__this->fields)._playerDanNumber;
        if ((pNVar4 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
           (pUVar6 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0),
           pUVar6 != (UnityEngine_GameObject_o *)0x0)) {
          UnityEngine_GameObject__SetActive(pUVar6,false,(MethodInfo *)0x0);
          pSVar7 = (__this->fields)._playerNameBtn;
          if ((pSVar7 != (SFButton_o *)0x0) &&
             (pUVar6 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)pSVar7,(MethodInfo *)0x0),
             pUVar6 != (UnityEngine_GameObject_o *)0x0)) {
            UnityEngine_GameObject__SetActive(pUVar6,false,(MethodInfo *)0x0);
            pNVar4 = (__this->fields)._playerName;
            if ((pNVar4 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
               (pUVar6 = UnityEngine_Component__get_gameObject
                                   ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0),
               pUVar6 != (UnityEngine_GameObject_o *)0x0)) {
              UnityEngine_GameObject__SetActive(pUVar6,false,(MethodInfo *)0x0);
              pSVar7 = (__this->fields)._kickButton;
              if ((pSVar7 != (SFButton_o *)0x0) &&
                 (pUVar6 = UnityEngine_Component__get_gameObject
                                     ((UnityEngine_Component_o *)pSVar7,(MethodInfo *)0x0),
                 pUVar6 != (UnityEngine_GameObject_o *)0x0)) {
                UnityEngine_GameObject__SetActive(pUVar6,false,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
  else {
    pSVar7 = (__this->fields)._playerNameBtn;
    if ((pSVar7 != (SFButton_o *)0x0) &&
       (pUVar2 = (pSVar7->fields).super.m_OnClick,
       pUVar2 != (UnityEngine_UI_Button_ButtonClickedEvent_o *)0x0)) {
      UnityEngine_Events_UnityEventBase__RemoveAllListeners
                ((UnityEngine_Events_UnityEventBase_o *)pUVar2,(MethodInfo *)0x0);
      pSVar7 = (__this->fields)._playerNameBtn;
      if (pSVar7 != (SFButton_o *)0x0) {
        pUVar9 = (UnityEngine_Events_UnityEvent_o *)(pSVar7->fields).super.m_OnClick;
        pUVar3 = (UnityEngine_Events_UnityAction_o *)
                 thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
        UnityEngine_Events_UnityAction___ctor();
        if (pUVar9 != (UnityEngine_Events_UnityEvent_o *)0x0) {
          UnityEngine_Events_UnityEvent__AddListener(pUVar9,pUVar3,(MethodInfo *)0x0);
          pSVar7 = (__this->fields)._kickButton;
          if ((pSVar7 != (SFButton_o *)0x0) &&
             (pUVar2 = (pSVar7->fields).super.m_OnClick,
             pUVar2 != (UnityEngine_UI_Button_ButtonClickedEvent_o *)0x0)) {
            UnityEngine_Events_UnityEventBase__RemoveAllListeners
                      ((UnityEngine_Events_UnityEventBase_o *)pUVar2,(MethodInfo *)0x0);
            pSVar7 = (__this->fields)._kickButton;
            if (pSVar7 != (SFButton_o *)0x0) {
              pUVar9 = (UnityEngine_Events_UnityEvent_o *)(pSVar7->fields).super.m_OnClick;
              pUVar3 = (UnityEngine_Events_UnityAction_o *)
                       thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
              UnityEngine_Events_UnityAction___ctor();
              if (pUVar9 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                UnityEngine_Events_UnityEvent__AddListener(pUVar9,pUVar3,(MethodInfo *)0x0);
                pSVar7 = (__this->fields)._kickButton;
                if (pSVar7 != (SFButton_o *)0x0) {
                  UnityEngine_UI_Selectable__set_interactable
                            ((UnityEngine_UI_Selectable_o *)pSVar7,true,(MethodInfo *)0x0);
                  pGVar8 = (__this->fields).DICNIMJBGML;
                  if ((pGVar8 != (GKLPDMLELJF_o *)0x0) &&
                     (pNVar4 = (__this->fields)._playerName,
                     pNVar4 != (Nekki_SF2_GUI_LabelAlias_o *)0x0)) {
                    (*(pNVar4->klass->vtable)._75_set_text.methodPtr)
                              (pNVar4,(pGVar8->fields).LLBEKLPKDHK,
                               (pNVar4->klass->vtable)._75_set_text.method);
                    pGVar8 = (__this->fields).DICNIMJBGML;
                    if (pGVar8 != (GKLPDMLELJF_o *)0x0) {
                      local_34 = (pGVar8->fields).PEBHLKLGDBM;
                      pNVar4 = (__this->fields)._playerDanNumber;
                      pSVar5 = System_Int32__ToString((int32_t)&local_34,(MethodInfo *)0x0);
                      if (pNVar4 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                        (*(pNVar4->klass->vtable)._75_set_text.methodPtr)
                                  (pNVar4,pSVar5,(pNVar4->klass->vtable)._75_set_text.method);
                        pNVar10 = (__this->fields)._playerDan;
                        if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
                          thunk_FUN_01ba7564();
                        }
                        __this_00 = HJPEKDOPBHN__NKPPBANIAFK((MethodInfo *)0x0);
                        pGVar8 = *ppGVar1;
                        if (((pGVar8 != (GKLPDMLELJF_o *)0x0) && (__this_00 != (PLIIGOCLJDL_o *)0x0)
                            ) && (pSVar5 = PLIIGOCLJDL__PAHKCILGFIK
                                                     (__this_00,(pGVar8->fields).ANAJGHJEEOC,
                                                      (MethodInfo *)0x0),
                                 pNVar10 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0)) {
                          Nekki_SF2_GUI_ResolutionImage__set_SpriteName
                                    (pNVar10,pSVar5,(MethodInfo *)0x0);
                          Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyPlayerCell__FDFHMHPOHKA
                                    (__this,method_00);
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
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void KGNBJLLJHOC()  [RVA 0x3010D14]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanRaidPartyPlayerCell$$KGNBJLLJHOC @ RVA 0x3010D14

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyPlayerCell__KGNBJLLJHOC
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyPlayerCell_o *__this,
               MethodInfo *method)

{
  PEEIMHCMDND_o *__this_00;
  MethodInfo *extraout_x1;
  GKLPDMLELJF_o *pGVar1;
  
  if ((DAT_04565ba8 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_04565ba8 = 1;
    method = extraout_x1;
  }
  if ((__this->fields).DICNIMJBGML == (GKLPDMLELJF_o *)0x0) {
    return;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
  }
  __this_00 = HJPEKDOPBHN__JHBLAJKKPFG((MethodInfo *)0x0);
  pGVar1 = (__this->fields).DICNIMJBGML;
  if ((pGVar1 != (GKLPDMLELJF_o *)0x0) && (__this_00 != (PEEIMHCMDND_o *)0x0)) {
    PEEIMHCMDND__JDONKPBCNLL(__this_00,(pGVar1->fields).ANAJGHJEEOC,(MethodInfo *)0x0);
    EDFDANKEBGF__NEOHABBBGKE(1.0,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void DNFIBMGKICI()  [RVA 0x3010DA4]
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
    FUN_01bab630(&StringLiteral_17779/*"dlgDontShowAgain"*/);
    FUN_01bab630(&StringLiteral_9679/*"OK"*/);
    FUN_01bab630(&StringLiteral_3640/*"CANCEL"*/);
    FUN_01bab630(&StringLiteral_17850/*"dlgWarning"*/);
    FUN_01bab630(&StringLiteral_17329/*"confirmRaidKick"*/);
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
        uVar2 = StringLiteral_17329/*"confirmRaidKick"*/;
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
                    (StringLiteral_17850/*"dlgWarning"*/,EHNFGMGKCHO,StringLiteral_9679/*"OK"*/,StringLiteral_3640/*"CANCEL"*/,
                     IELDNEAAPBE,0,5,true,false,StringLiteral_17779/*"dlgDontShowAgain"*/,false,true,true,true,
                     (MethodInfo *)0x0);
          goto LAB_0311108c;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x30110B0]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanRaidPartyPlayerCell$$.ctor @ RVA 0x30110B0

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyPlayerCell___ctor
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyPlayerCell_o *__this,
               MethodInfo *method)

{
  Nekki_SF2_GUI_BaseScrollItem___ctor((Nekki_SF2_GUI_BaseScrollItem_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private void FDFHMHPOHKA()  [RVA 0x3010C74]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanRaidPartyPlayerCell$$FDFHMHPOHKA @ RVA 0x3010C74

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyPlayerCell__FDFHMHPOHKA
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyPlayerCell_o *__this,
               MethodInfo *method)

{
  uint uVar1;
  Nekki_SF2_GUI_ResolutionImage_o *__this_00;
  MethodInfo *extraout_x1;
  GKLPDMLELJF_o *pGVar2;
  undefined8 *puVar3;
  
  if ((DAT_04565baa & 1) == 0) {
    FUN_01bab630(&StringLiteral_9089/*"MiscSprites.indicatorRed"*/);
    FUN_01bab630(&StringLiteral_9085/*"MiscSprites.indicatorGreen"*/);
    DAT_04565baa = 1;
    method = extraout_x1;
  }
  pGVar2 = (__this->fields).DICNIMJBGML;
  if (pGVar2 == (GKLPDMLELJF_o *)0x0) {
    return;
  }
  uVar1 = (pGVar2->fields).PFJPLCAIGJH;
  if (uVar1 == 1) {
    __this_00 = (__this->fields)._status;
    if (__this_00 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
LAB_03110d10:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8(0,method);
    }
    puVar3 = &StringLiteral_9089/*"MiscSprites.indicatorRed"*/;
  }
  else {
    if ((uVar1 & 0xfffffffe) != 2) {
      return;
    }
    __this_00 = (__this->fields)._status;
    if (__this_00 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_03110d10;
    puVar3 = &StringLiteral_9085/*"MiscSprites.indicatorGreen"*/;
  }
  Nekki_SF2_GUI_ResolutionImage__set_SpriteName
            (__this_00,(System_String_o *)*puVar3,(MethodInfo *)0x0);
  return;
}


// ===== public bool IsEmpty()  [RVA 0x3010820]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanRaidPartyPlayerCell$$IsEmpty @ RVA 0x3010820

bool Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyPlayerCell__IsEmpty
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyPlayerCell_o *__this,
               MethodInfo *method)

{
  return (__this->fields).DICNIMJBGML == (GKLPDMLELJF_o *)0x0;
}

