// Nekki.SF2.GUI.Dialogs.Raids.RaidLeaguesDialog$$CFPJAFNAAME @ RVA 0x31008EC

void Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesDialog__CFPJAFNAAME
               (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesDialog_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_ResolutionButton_o *pNVar1;
  UnityEngine_Events_UnityAction_o *pUVar2;
  UnityEngine_Events_UnityEvent_o *pUVar3;
  
  if ((DAT_045664bd & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesDialog_IKJKPJABNMD__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesDialog_LODMBBHOHPM__);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    FUN_01bab630(&StringLiteral_10973);
    FUN_01bab630(&StringLiteral_10974);
    FUN_01bab630(&StringLiteral_14092);
    DAT_045664bd = 1;
  }
  (*(__this->klass->vtable)._27_LCGFJKFJKJK.methodPtr)
            (__this,2,(__this->klass->vtable)._27_LCGFJKFJKJK.method);
  pNVar1 = (__this->fields)._btnOldLeague;
  if (pNVar1 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) {
    Nekki_SF2_GUI_ResolutionButton__SetPressedSprite
              (pNVar1,StringLiteral_14092,StringLiteral_10974,(MethodInfo *)0x0);
    pNVar1 = (__this->fields)._btnOldLeague;
    if (pNVar1 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) {
      Nekki_SF2_GUI_ResolutionButton__SetDisabledSprite
                (pNVar1,StringLiteral_14092,StringLiteral_10973,(MethodInfo *)0x0);
      pNVar1 = (__this->fields)._btnOldLeague;
      if (pNVar1 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) {
        pUVar3 = (UnityEngine_Events_UnityEvent_o *)(pNVar1->fields).super.super.m_OnClick;
        pUVar2 = (UnityEngine_Events_UnityAction_o *)
                 thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
        UnityEngine_Events_UnityAction___ctor();
        if (pUVar3 != (UnityEngine_Events_UnityEvent_o *)0x0) {
          UnityEngine_Events_UnityEvent__AddListener(pUVar3,pUVar2,(MethodInfo *)0x0);
          pNVar1 = (__this->fields)._btnCurrentLeague;
          if (pNVar1 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) {
            Nekki_SF2_GUI_ResolutionButton__SetPressedSprite
                      (pNVar1,StringLiteral_14092,StringLiteral_10974,(MethodInfo *)0x0);
            pNVar1 = (__this->fields)._btnCurrentLeague;
            if (pNVar1 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) {
              Nekki_SF2_GUI_ResolutionButton__SetDisabledSprite
                        (pNVar1,StringLiteral_14092,StringLiteral_10973,(MethodInfo *)0x0);
              pNVar1 = (__this->fields)._btnCurrentLeague;
              if (pNVar1 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) {
                pUVar3 = (UnityEngine_Events_UnityEvent_o *)(pNVar1->fields).super.super.m_OnClick;
                pUVar2 = (UnityEngine_Events_UnityAction_o *)
                         thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
                UnityEngine_Events_UnityAction___ctor();
                if (pUVar3 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                  UnityEngine_Events_UnityEvent__AddListener(pUVar3,pUVar2,(MethodInfo *)0x0);
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

