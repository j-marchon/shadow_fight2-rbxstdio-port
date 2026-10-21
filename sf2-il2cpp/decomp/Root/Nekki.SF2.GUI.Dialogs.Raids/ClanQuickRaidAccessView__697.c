// TypeDefIndex 697
// Namespace: Nekki.SF2.GUI.Dialogs.Raids
// public class ClanQuickRaidAccessView : ChatSFView
// Fields:
//   private LabelAlias _descriptionLabel; // 0x30
//   private LabelButton _raidButton; // 0x38
//   private RaidBattleChatViewController KKKFAIEIDAI; // 0x40

// ===== public override void Init(ChatSFViewController GDGNEIBAJLB)  [RVA 0x3034738]
// Nekki.SF2.GUI.Dialogs.Raids.ClanQuickRaidAccessView$$Init @ RVA 0x3034738

void Nekki_SF2_GUI_Dialogs_Raids_ClanQuickRaidAccessView__Init
               (Nekki_SF2_GUI_Dialogs_Raids_ClanQuickRaidAccessView_o *__this,
               Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_o *GDGNEIBAJLB,MethodInfo *method)

{
  byte bVar1;
  Nekki_SF2_GUI_Dialogs_Raids_RaidBattleChatViewController_c *pNVar2;
  Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_o **ppNVar3;
  Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_o *pNVar4;
  
  if ((DAT_04565d2d & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_RaidBattleChatViewController_TypeInfo);
    DAT_04565d2d = 1;
  }
  ppNVar3 = &(__this->fields).super.FLLHHEODKPH;
  *ppNVar3 = GDGNEIBAJLB;
  thunk_FUN_01c20e04(ppNVar3,GDGNEIBAJLB);
  pNVar2 = Nekki_SF2_GUI_Dialogs_Raids_RaidBattleChatViewController_TypeInfo;
  if (GDGNEIBAJLB == (Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_o *)0x0) {
    GDGNEIBAJLB = (Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_o *)0x0;
    (__this->fields).KKKFAIEIDAI = (Nekki_SF2_GUI_Dialogs_Raids_RaidBattleChatViewController_o *)0x0
    ;
  }
  else {
    bVar1 = (Nekki_SF2_GUI_Dialogs_Raids_RaidBattleChatViewController_TypeInfo->_2).naturalAligment;
    if ((GDGNEIBAJLB->klass->_2).naturalAligment < bVar1) {
      pNVar4 = (Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_o *)0x0;
    }
    else {
      pNVar4 = GDGNEIBAJLB;
      if ((GDGNEIBAJLB->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)Nekki_SF2_GUI_Dialogs_Raids_RaidBattleChatViewController_TypeInfo) {
        pNVar4 = (Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_o *)0x0;
      }
    }
    (__this->fields).KKKFAIEIDAI =
         (Nekki_SF2_GUI_Dialogs_Raids_RaidBattleChatViewController_o *)pNVar4;
    if ((GDGNEIBAJLB->klass->_2).naturalAligment < bVar1) {
      GDGNEIBAJLB = (Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_o *)0x0;
    }
    else if ((GDGNEIBAJLB->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)pNVar2) {
      GDGNEIBAJLB = (Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_o *)0x0;
    }
  }
  thunk_FUN_01c20e04(&(__this->fields).KKKFAIEIDAI,GDGNEIBAJLB);
  Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanRaidDialog__FillSpritesCache((MethodInfo *)0x0);
  return;
}


// ===== public void OnCreateRaidPressed()  [RVA 0x303480C]
// Nekki.SF2.GUI.Dialogs.Raids.ClanQuickRaidAccessView$$OnCreateRaidPressed @ RVA 0x303480C

void Nekki_SF2_GUI_Dialogs_Raids_ClanQuickRaidAccessView__OnCreateRaidPressed
               (Nekki_SF2_GUI_Dialogs_Raids_ClanQuickRaidAccessView_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Dialogs_Raids_RaidBattleChatViewController_o *pNVar2;
  
  if ((DAT_04565d2e & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04565d2e = 1;
    method = extraout_x1;
  }
  pNVar2 = (__this->fields).KKKFAIEIDAI;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar2 = (__this->fields).KKKFAIEIDAI;
    if (pNVar2 != (Nekki_SF2_GUI_Dialogs_Raids_RaidBattleChatViewController_o *)0x0) {
      Nekki_SF2_GUI_Dialogs_Raids_RaidBattleChatViewController__OnCreateRaidPressed
                (pNVar2,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== public void .ctor()  [RVA 0x3034890]
// Nekki.SF2.GUI.Dialogs.Raids.ClanQuickRaidAccessView$$.ctor @ RVA 0x3034890

void Nekki_SF2_GUI_Dialogs_Raids_ClanQuickRaidAccessView___ctor
               (Nekki_SF2_GUI_Dialogs_Raids_ClanQuickRaidAccessView_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_Raids_ChatSFView___ctor
            ((Nekki_SF2_GUI_Dialogs_Raids_ChatSFView_o *)__this,(MethodInfo *)0x0);
  return;
}

