// Nekki.SF2.GUI.Dialogs.SettingsCloudDialog$$GKPJMHOFIOO @ RVA 0x312E070

void Nekki_SF2_GUI_Dialogs_SettingsCloudDialog__GKPJMHOFIOO
               (Nekki_SF2_GUI_Dialogs_SettingsCloudDialog_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_ResolutionButton_o *pNVar1;
  UnityEngine_Events_UnityAction_o *pUVar2;
  UnityEngine_Events_UnityEvent_o *pUVar3;
  
  if ((DAT_045666a7 & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_SettingsCloudDialog_GOEMGHIJHMB__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_SettingsCloudDialog_OENBNJFBLEE__);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    FUN_01bab630(&StringLiteral_9091);
    FUN_01bab630(&StringLiteral_9097);
    FUN_01bab630(&StringLiteral_9090);
    FUN_01bab630(&StringLiteral_14092);
    FUN_01bab630(&StringLiteral_9096);
    DAT_045666a7 = 1;
  }
  pNVar1 = (__this->fields).BtnSave;
  if (pNVar1 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) {
    Nekki_SF2_GUI_ResolutionButton__SetNormalSprite
              (pNVar1,StringLiteral_14092,StringLiteral_9096,(MethodInfo *)0x0);
    pNVar1 = (__this->fields).BtnSave;
    if (pNVar1 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) {
      Nekki_SF2_GUI_ResolutionButton__SetPressedSprite
                (pNVar1,StringLiteral_14092,StringLiteral_9097,(MethodInfo *)0x0);
      pNVar1 = (__this->fields).BtnSave;
      if (pNVar1 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) {
        pUVar3 = (UnityEngine_Events_UnityEvent_o *)(pNVar1->fields).super.super.m_OnClick;
        pUVar2 = (UnityEngine_Events_UnityAction_o *)
                 thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
        UnityEngine_Events_UnityAction___ctor();
        if (pUVar3 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                    /* try { // try from 0322e184 to 0332e18b has its CatchHandler @ 0322e254 */
          UnityEngine_Events_UnityEvent__AddListener(pUVar3,pUVar2,(MethodInfo *)0x0);
          pNVar1 = (__this->fields).BtnLoad;
          if (pNVar1 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) {
                    /* try { // try from 0322e198 to 0332e1a7 has its CatchHandler @ 0322e24c */
            Nekki_SF2_GUI_ResolutionButton__SetNormalSprite
                      (pNVar1,StringLiteral_14092,StringLiteral_9090,(MethodInfo *)0x0);
                    /* try { // try from 0322e1a8 to 0332e1af has its CatchHandler @ 0322e250 */
            pNVar1 = (__this->fields).BtnLoad;
            if (pNVar1 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) {
                    /* try { // try from 0322e1b0 to 0332e1d7 has its CatchHandler @ 0322e258 */
              Nekki_SF2_GUI_ResolutionButton__SetPressedSprite
                        (pNVar1,StringLiteral_14092,StringLiteral_9091,(MethodInfo *)0x0);
              pNVar1 = (__this->fields).BtnLoad;
              if (pNVar1 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) {
                    /* try { // try from 0322e1d8 to 0332e213 has its CatchHandler @ 0322e034 */
                pUVar3 = (UnityEngine_Events_UnityEvent_o *)(pNVar1->fields).super.super.m_OnClick;
                pUVar2 = (UnityEngine_Events_UnityAction_o *)
                         thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
                UnityEngine_Events_UnityAction___ctor();
                if (pUVar3 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                    /* try { // try from 0322e214 to 0332e21b has its CatchHandler @ 0322e3b8 */
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

