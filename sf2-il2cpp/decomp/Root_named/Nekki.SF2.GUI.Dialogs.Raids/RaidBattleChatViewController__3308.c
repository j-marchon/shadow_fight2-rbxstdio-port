// TypeDefIndex 3308
// Namespace: Nekki.SF2.GUI.Dialogs.Raids
// public class RaidBattleChatViewController : ChatSFViewController
// Fields:

// ===== public void Init(KPBOJBLLKPJ KBIIAPCMIGJ, MKIDEJJPLCE DOOAEHPGKNL)  [RVA 0x3522384]
// Nekki.SF2.GUI.Dialogs.Raids.RaidBattleChatViewController$$Init @ RVA 0x3522384

void Nekki_SF2_GUI_Dialogs_Raids_RaidBattleChatViewController__Init
               (Nekki_SF2_GUI_Dialogs_Raids_RaidBattleChatViewController_o *__this,
               KPBOJBLLKPJ_o *KBIIAPCMIGJ,MKIDEJJPLCE_o *DOOAEHPGKNL,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Dialogs_Raids_ChatSFTabButton_o *pNVar2;
  
  if ((DAT_045689d7 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_045689d7 = 1;
  }
  Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController__Init
            ((Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_o *)__this,KBIIAPCMIGJ,DOOAEHPGKNL,2,
             (MethodInfo *)0x0);
  pNVar2 = (__this->fields).super._tabButton;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar2 = (__this->fields).super._tabButton;
    if (pNVar2 != (Nekki_SF2_GUI_Dialogs_Raids_ChatSFTabButton_o *)0x0) {
      Nekki_SF2_GUI_Dialogs_Raids_ChatSFTabButton__Init(pNVar2,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== public override void UpdateContent(object IMMNELPBGIF)  [RVA 0x3522434]
// Nekki.SF2.GUI.Dialogs.Raids.RaidBattleChatViewController$$UpdateContent @ RVA 0x3522434

void Nekki_SF2_GUI_Dialogs_Raids_RaidBattleChatViewController__UpdateContent
               (Nekki_SF2_GUI_Dialogs_Raids_RaidBattleChatViewController_o *__this,
               Il2CppObject *IMMNELPBGIF,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  RaidManager_o *__this_00;
  Nekki_SF2_GUI_Dialogs_Raids_ChatSFView_o *x;
  Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *__this_01;
  Nekki_SF2_GUI_Dialogs_Raids_ClanQuickRaidAccessView_o *MIJCJJCICDA;
  
  if ((DAT_045689d8 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_ClanQuickRaidAccessView_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_045689d8 = 1;
  }
  Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController__UpdateContent
            ((Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_o *)__this,IMMNELPBGIF,
             (MethodInfo *)0x0);
  bVar2 = KFCFGKEHPNK__PIOIEAEGHCP((MethodInfo *)0x0);
  if (bVar2) {
    bVar2 = false;
  }
  else {
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_00 = HJPEKDOPBHN__FKBPIBLMJEF((MethodInfo *)0x0);
    if (__this_00 == (RaidManager_o *)0x0) goto LAB_036225ec;
    bVar2 = RaidManager__PGFAHOMKNBL(__this_00,(MethodInfo *)0x0);
  }
  bVar3 = KFCFGKEHPNK__OEMIEJCOCDI((MethodInfo *)0x0);
  x = Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController__OFBDOPOJDEH
                ((Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_o *)__this,(MethodInfo *)0x0);
  if (bVar2 == false) {
    Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController__PGEMCFICNLA
              ((Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_o *)__this,(MethodInfo *)0x0);
    return;
  }
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    if (x != (Nekki_SF2_GUI_Dialogs_Raids_ChatSFView_o *)0x0) goto LAB_0362253c;
LAB_0362255c:
    x = (Nekki_SF2_GUI_Dialogs_Raids_ChatSFView_o *)0x0;
  }
  else {
    if (x == (Nekki_SF2_GUI_Dialogs_Raids_ChatSFView_o *)0x0) goto LAB_0362255c;
LAB_0362253c:
    bVar1 = (Nekki_SF2_GUI_Dialogs_Raids_ClanQuickRaidAccessView_TypeInfo->_2).naturalAligment;
    if ((x->klass->_2).naturalAligment < bVar1) goto LAB_0362255c;
    if ((x->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)Nekki_SF2_GUI_Dialogs_Raids_ClanQuickRaidAccessView_TypeInfo) {
      x = (Nekki_SF2_GUI_Dialogs_Raids_ChatSFView_o *)0x0;
    }
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar3 || !bVar2) {
    return;
  }
                    /* try { // try from 03622590 to 037227d7 has its CatchHandler @ 03622590
                       catch() { ... } // from try @ 03622590 with catch @ 03622590
                       catch() { ... } // from try @ 03622950 with catch @ 03622590
                       catch() { ... } // from try @ 03622b5c with catch @ 03622590
                       catch() { ... } // from try @ 03622b64 with catch @ 03622590
                       catch() { ... } // from try @ 03622c64 with catch @ 03622590 */
  if ((Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_01 = Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__get_Instance((MethodInfo *)0x0);
  if (__this_01 != (Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *)0x0) {
    MIJCJJCICDA = Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__CreateClanQuickRaidAccessView
                            (__this_01,__this,(MethodInfo *)0x0);
    Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController__KOJMOHMGLAI
              ((Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_o *)__this,
               (Nekki_SF2_GUI_Dialogs_Raids_ChatSFView_o *)MIJCJJCICDA,false,(MethodInfo *)0x0);
    return;
  }
LAB_036225ec:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void OnCreateRaidPressed()  [RVA 0x35225F0]
// Nekki.SF2.GUI.Dialogs.Raids.RaidBattleChatViewController$$OnCreateRaidPressed @ RVA 0x35225F0

void Nekki_SF2_GUI_Dialogs_Raids_RaidBattleChatViewController__OnCreateRaidPressed
               (Nekki_SF2_GUI_Dialogs_Raids_RaidBattleChatViewController_o *__this,
               MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MKIDEJJPLCE_c *pMVar3;
  ulong uVar4;
  int32_t *piVar5;
  MKIDEJJPLCE_o *pMVar6;
  
  if ((DAT_045689d9 & 1) == 0) {
    FUN_01bab630(&LPGPNBGHDBD_TypeInfo);
    FUN_01bab630(&MKIDEJJPLCE_TypeInfo);
    DAT_045689d9 = 1;
    method = extraout_x1;
  }
  pMVar6 = (__this->fields).super._chatPanel;
  if (pMVar6 != (MKIDEJJPLCE_o *)0x0) {
    pMVar3 = pMVar6->klass;
    uVar1._0_1_ = (pMVar3->_2).rank;
    uVar1._1_1_ = (pMVar3->_2).minimumAlignment;
    uVar4 = (ulong)uVar1;
    if (uVar4 != 0) {
      piVar5 = &((pMVar3->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar5 + -2))->interfaceType ==
            (Il2CppClass *)MKIDEJJPLCE_TypeInfo) {
          pVVar2 = pMVar3->vtable + (*piVar5 + 3);
          goto LAB_03622690;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    pVVar2 = (VirtualInvokeData *)FUN_01b81914(pMVar6,MKIDEJJPLCE_TypeInfo,3);
LAB_03622690:
    (*pVVar2->methodPtr)(pMVar6,pVVar2->method);
    method = extraout_x1_00;
  }
  if ((LPGPNBGHDBD_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(LPGPNBGHDBD_TypeInfo,method);
  }
  LPGPNBGHDBD__CFBCMMEBKHN((MethodInfo *)0x0);
  DialogsOpener__OCOOMCMIGJL((Il2CppObject *)0x0,(MethodInfo *)0x0);
  return;
}


// ===== public override bool IsViewAvailable()  [RVA 0x35226C8]
// Nekki.SF2.GUI.Dialogs.Raids.RaidBattleChatViewController$$IsViewAvailable @ RVA 0x35226C8

bool Nekki_SF2_GUI_Dialogs_Raids_RaidBattleChatViewController__IsViewAvailable
               (Nekki_SF2_GUI_Dialogs_Raids_RaidBattleChatViewController_o *__this,
               MethodInfo *method)

{
  bool_conflict bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  RaidClansManager_o *pEVar6;
  ClanRaidsController_o *__this_00;
  SFRequestSender_o *pKVar7;
  RaidManager_o *__this_01;
  MethodInfo *extraout_x1;
  bool bVar8;
  
  if ((DAT_045689da & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_045689da = 1;
    method = extraout_x1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
  }
  pEVar6 = HJPEKDOPBHN__CEFGBPEHJJG((MethodInfo *)0x0);
  if ((pEVar6 != (RaidClansManager_o *)0x0) &&
     (__this_00 = (pEVar6->fields).GMNJEBCECDA, __this_00 != (ClanRaidsController_o *)0x0)) {
    bVar2 = ClanRaidsController__HOMIFFIACAC(__this_00,(MethodInfo *)0x0);
    bVar3 = KFCFGKEHPNK__PIOIEAEGHCP((MethodInfo *)0x0);
    bVar4 = KFCFGKEHPNK__OEMIEJCOCDI((MethodInfo *)0x0);
    pKVar7 = SFRequestSender__MBHIKFMIDAO((MethodInfo *)0x0);
    if (pKVar7 != (SFRequestSender_o *)0x0) {
      bVar1 = (pKVar7->fields).super._MGGBEPKMPCF_k__BackingField;
      __this_01 = HJPEKDOPBHN__FKBPIBLMJEF((MethodInfo *)0x0);
      if (__this_01 != (RaidManager_o *)0x0) {
        bVar5 = RaidManager__PGFAHOMKNBL(__this_01,(MethodInfo *)0x0);
        bVar8 = false;
        if ((bVar1 != false) && (!bVar2)) {
          bVar8 = (bVar3 || bVar4) || !bVar5;
        }
        return bVar8;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x352279C]
// Nekki.SF2.GUI.Dialogs.Raids.RaidBattleChatViewController$$.ctor @ RVA 0x352279C

void Nekki_SF2_GUI_Dialogs_Raids_RaidBattleChatViewController___ctor
               (Nekki_SF2_GUI_Dialogs_Raids_RaidBattleChatViewController_o *__this,
               MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController___ctor
            ((Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_o *)__this,(MethodInfo *)0x0);
  return;
}

