// TypeDefIndex 1689
// Namespace: Nekki.SF2.GUI.Dialogs.Raids
// public class ClanJoinInfoView : ChatSFView
// Fields:
//   private LabelAlias _common_discription; // 0x30
//   private LabelButton _search_button; // 0x38
//   private LabelAlias _search_discription; // 0x40
//   private LabelButton _create_button; // 0x48
//   private LabelAlias _create_discription; // 0x50
//   private ClanChatViewController AEDDGLGAJPK; // 0x58

// ===== public override void Init(ChatSFViewController ELHFHAPBFMI)  [RVA 0x31D0BC8]
// Nekki.SF2.GUI.Dialogs.Raids.ClanJoinInfoView$$Init @ RVA 0x31D0BC8

void Nekki_SF2_GUI_Dialogs_Raids_ClanJoinInfoView__Init
               (Nekki_SF2_GUI_Dialogs_Raids_ClanJoinInfoView_o *__this,
               Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_o *ELHFHAPBFMI,MethodInfo *method)

{
  byte bVar1;
  Nekki_SF2_GUI_Dialogs_Raids_ClanChatViewController_c *pNVar2;
  Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_o **ppNVar3;
  Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_o *pNVar4;
  
  if ((DAT_04566ca1 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_ClanChatViewController_TypeInfo);
    DAT_04566ca1 = 1;
  }
  ppNVar3 = &(__this->fields).super.FLLHHEODKPH;
  *ppNVar3 = ELHFHAPBFMI;
  thunk_FUN_01c20e04(ppNVar3,ELHFHAPBFMI);
  pNVar2 = Nekki_SF2_GUI_Dialogs_Raids_ClanChatViewController_TypeInfo;
  if (ELHFHAPBFMI == (Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_o *)0x0) {
    ELHFHAPBFMI = (Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_o *)0x0;
    (__this->fields).AEDDGLGAJPK = (Nekki_SF2_GUI_Dialogs_Raids_ClanChatViewController_o *)0x0;
  }
  else {
    bVar1 = (Nekki_SF2_GUI_Dialogs_Raids_ClanChatViewController_TypeInfo->_2).naturalAligment;
    if ((ELHFHAPBFMI->klass->_2).naturalAligment < bVar1) {
      pNVar4 = (Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_o *)0x0;
    }
    else {
      pNVar4 = ELHFHAPBFMI;
      if ((ELHFHAPBFMI->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)Nekki_SF2_GUI_Dialogs_Raids_ClanChatViewController_TypeInfo) {
        pNVar4 = (Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_o *)0x0;
      }
    }
    (__this->fields).AEDDGLGAJPK = (Nekki_SF2_GUI_Dialogs_Raids_ClanChatViewController_o *)pNVar4;
    if ((ELHFHAPBFMI->klass->_2).naturalAligment < bVar1) {
      ELHFHAPBFMI = (Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_o *)0x0;
    }
    else if ((ELHFHAPBFMI->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)pNVar2) {
      ELHFHAPBFMI = (Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_o *)0x0;
    }
  }
  thunk_FUN_01c20e04(&(__this->fields).AEDDGLGAJPK,ELHFHAPBFMI);
  return;
}


// ===== public void OnFindClanPressed()  [RVA 0x31D0C94]
// Nekki.SF2.GUI.Dialogs.Raids.ClanJoinInfoView$$OnFindClanPressed @ RVA 0x31D0C94

void Nekki_SF2_GUI_Dialogs_Raids_ClanJoinInfoView__OnFindClanPressed
               (Nekki_SF2_GUI_Dialogs_Raids_ClanJoinInfoView_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Dialogs_Raids_ClanChatViewController_o *pNVar2;
  
  if ((DAT_04566ca2 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566ca2 = 1;
    method = extraout_x1;
  }
  pNVar2 = (__this->fields).AEDDGLGAJPK;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar2 = (__this->fields).AEDDGLGAJPK;
    if (pNVar2 != (Nekki_SF2_GUI_Dialogs_Raids_ClanChatViewController_o *)0x0) {
      Nekki_SF2_GUI_Dialogs_Raids_ClanChatViewController__OnFindClanPressed
                (pNVar2,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== public void OnCreateClanPressed()  [RVA 0x31D0D18]
// Nekki.SF2.GUI.Dialogs.Raids.ClanJoinInfoView$$OnCreateClanPressed @ RVA 0x31D0D18

void Nekki_SF2_GUI_Dialogs_Raids_ClanJoinInfoView__OnCreateClanPressed
               (Nekki_SF2_GUI_Dialogs_Raids_ClanJoinInfoView_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Dialogs_Raids_ClanChatViewController_o *pNVar2;
  
  if ((DAT_04566ca3 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566ca3 = 1;
    method = extraout_x1;
  }
  pNVar2 = (__this->fields).AEDDGLGAJPK;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar2 = (__this->fields).AEDDGLGAJPK;
    if (pNVar2 != (Nekki_SF2_GUI_Dialogs_Raids_ClanChatViewController_o *)0x0) {
      Nekki_SF2_GUI_Dialogs_Raids_ClanChatViewController__OnCreateClanPressed
                (pNVar2,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== public void .ctor()  [RVA 0x31D0D9C]
// Nekki.SF2.GUI.Dialogs.Raids.ClanJoinInfoView$$.ctor @ RVA 0x31D0D9C

void Nekki_SF2_GUI_Dialogs_Raids_ClanJoinInfoView___ctor
               (Nekki_SF2_GUI_Dialogs_Raids_ClanJoinInfoView_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_Raids_ChatSFView___ctor
            ((Nekki_SF2_GUI_Dialogs_Raids_ChatSFView_o *)__this,(MethodInfo *)0x0);
  return;
}

