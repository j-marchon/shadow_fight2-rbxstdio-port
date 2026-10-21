// Nekki.SF2.GUI.Dialogs.Raids.RaidPlayerScreen$$JDGPBNKJFBK @ RVA 0x356A540

Nekki_SF2_GUI_ResolutionButton_o *
Nekki_SF2_GUI_Dialogs_Raids_RaidPlayerScreen__JDGPBNKJFBK
          (Nekki_SF2_GUI_Dialogs_Raids_RaidPlayerScreen_o *__this,
          Nekki_SF2_GUI_ResolutionButton_o *BECCOGAMKJL,System_String_o *DDKFBMKMBOF,
          MethodInfo *method)

{
  System_String_o *HCAAAAMDCNO;
  System_String_o *HCAAAAMDCNO_00;
  System_String_o *pSVar1;
  UnityEngine_UI_Button_ButtonClickedEvent_o *__this_00;
  
  if ((DAT_04568c23 & 1) == 0) {
    FUN_01bab630(&StringLiteral_15915);
    FUN_01bab630(&StringLiteral_15912);
    FUN_01bab630(&StringLiteral_14092);
    FUN_01bab630(&StringLiteral_15914);
    FUN_01bab630(&StringLiteral_10864);
    DAT_04568c23 = 1;
  }
  pSVar1 = StringLiteral_10864;
  HCAAAAMDCNO = System_String__Concat
                          (StringLiteral_10864,DDKFBMKMBOF,StringLiteral_15912,(MethodInfo *)0x0);
  HCAAAAMDCNO_00 = System_String__Concat(pSVar1,DDKFBMKMBOF,StringLiteral_15914,(MethodInfo *)0x0);
  pSVar1 = System_String__Concat(pSVar1,DDKFBMKMBOF,StringLiteral_15915,(MethodInfo *)0x0);
  if (BECCOGAMKJL != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) {
    Nekki_SF2_GUI_ResolutionButton__SetNormalSprite
              (BECCOGAMKJL,StringLiteral_14092,HCAAAAMDCNO,(MethodInfo *)0x0);
    Nekki_SF2_GUI_ResolutionButton__SetPressedSprite
              (BECCOGAMKJL,StringLiteral_14092,HCAAAAMDCNO_00,(MethodInfo *)0x0);
    Nekki_SF2_GUI_ResolutionButton__SetHighlightedSprite
              (BECCOGAMKJL,StringLiteral_14092,pSVar1,(MethodInfo *)0x0);
    Nekki_SF2_GUI_ResolutionButton__SetDisabledSprite
              (BECCOGAMKJL,StringLiteral_14092,pSVar1,(MethodInfo *)0x0);
    UnityEngine_UI_Selectable__set_interactable
              ((UnityEngine_UI_Selectable_o *)BECCOGAMKJL,true,(MethodInfo *)0x0);
    __this_00 = (BECCOGAMKJL->fields).super.super.m_OnClick;
    if (__this_00 != (UnityEngine_UI_Button_ButtonClickedEvent_o *)0x0) {
      UnityEngine_Events_UnityEventBase__RemoveAllListeners
                ((UnityEngine_Events_UnityEventBase_o *)__this_00,(MethodInfo *)0x0);
      return BECCOGAMKJL;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

