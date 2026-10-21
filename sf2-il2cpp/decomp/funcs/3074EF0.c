// Nekki.SF2.GUI.Dialogs.Raids.RaidTopHundredDialog$$CFPJAFNAAME @ RVA 0x3074EF0

void Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog__CFPJAFNAAME
               (Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_ResolutionButton_o *pNVar1;
  UnityEngine_Events_UnityAction_o *pUVar2;
  UnityEngine_Events_UnityEvent_o *pUVar3;
  
  if ((DAT_04565f97 & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog_JIIJKJFBMJM__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog_PCAFDGPFDMF__);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    FUN_01bab630(&StringLiteral_10978);
    FUN_01bab630(&StringLiteral_10973);
    FUN_01bab630(&StringLiteral_10974);
    FUN_01bab630(&StringLiteral_14092);
    DAT_04565f97 = 1;
  }
  (*(__this->klass->vtable)._27_LCGFJKFJKJK.methodPtr)
            (__this,2,(__this->klass->vtable)._27_LCGFJKFJKJK.method);
  pNVar1 = (__this->fields)._btnPrevSeasonLeaderboard;
  if (pNVar1 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) {
    Nekki_SF2_GUI_ResolutionButton__SetPressedSprite
              (pNVar1,StringLiteral_14092,StringLiteral_10974,(MethodInfo *)0x0);
    pNVar1 = (__this->fields)._btnPrevSeasonLeaderboard;
    if (pNVar1 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) {
      Nekki_SF2_GUI_ResolutionButton__SetDisabledSprite
                (pNVar1,StringLiteral_14092,StringLiteral_10973,(MethodInfo *)0x0);
      pNVar1 = (__this->fields)._btnPrevSeasonLeaderboard;
      if (pNVar1 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) {
        pUVar3 = (UnityEngine_Events_UnityEvent_o *)(pNVar1->fields).super.super.m_OnClick;
        pUVar2 = (UnityEngine_Events_UnityAction_o *)
                 thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
        UnityEngine_Events_UnityAction___ctor();
        if (pUVar3 != (UnityEngine_Events_UnityEvent_o *)0x0) {
          UnityEngine_Events_UnityEvent__AddListener(pUVar3,pUVar2,(MethodInfo *)0x0);
          pNVar1 = (__this->fields)._btnCurSeasonLeaderboard;
          if (pNVar1 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) {
            Nekki_SF2_GUI_ResolutionButton__SetPressedSprite
                      (pNVar1,StringLiteral_14092,StringLiteral_10974,(MethodInfo *)0x0);
            pNVar1 = (__this->fields)._btnCurSeasonLeaderboard;
            if (pNVar1 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) {
              Nekki_SF2_GUI_ResolutionButton__SetDisabledSprite
                        (pNVar1,StringLiteral_14092,StringLiteral_10973,(MethodInfo *)0x0);
              pNVar1 = (__this->fields)._btnCurSeasonLeaderboard;
              if (pNVar1 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) {
                pUVar3 = (UnityEngine_Events_UnityEvent_o *)(pNVar1->fields).super.super.m_OnClick;
                pUVar2 = (UnityEngine_Events_UnityAction_o *)
                         thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
                UnityEngine_Events_UnityAction___ctor();
                if (pUVar3 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                  UnityEngine_Events_UnityEvent__AddListener(pUVar3,pUVar2,(MethodInfo *)0x0);
                  pNVar1 = (__this->fields)._btnTopPlayers;
                  if (pNVar1 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) {
                    Nekki_SF2_GUI_ResolutionButton__SetPressedSprite
                              (pNVar1,StringLiteral_14092,StringLiteral_10978,(MethodInfo *)0x0);
                    pNVar1 = (__this->fields)._btnTopClans;
                    if (pNVar1 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) {
                      Nekki_SF2_GUI_ResolutionButton__SetPressedSprite
                                (pNVar1,StringLiteral_14092,StringLiteral_10978,(MethodInfo *)0x0);
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

