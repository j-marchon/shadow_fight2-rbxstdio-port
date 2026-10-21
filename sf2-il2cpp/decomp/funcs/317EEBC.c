// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanLogoAttributeContainer$$Init @ RVA 0x317EEBC

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoAttributeContainer__Init
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoAttributeContainer_o *__this,
               int32_t NFIICLCMEHI,System_Action_DFHAHEOKHFA__o *DHIFOFDENGG,MethodInfo *method)

{
  Nekki_SF2_GUI_SimpleScroll_o *pNVar1;
  System_Action_BaseScrollItem__o *CJNHFNHJHPE;
  Nekki_SF2_GUI_ResolutionButton_o *pNVar2;
  UnityEngine_Events_UnityAction_o *pUVar3;
  System_Action_DFHAHEOKHFA__o *method_00;
  MethodInfo *method_01;
  UnityEngine_Events_UnityEvent_o *pUVar4;
  undefined8 uVar5;
  
  method_00 = DHIFOFDENGG;
  if ((DAT_045669ac & 1) == 0) {
    FUN_01bab630(&System_Action<BaseScrollItem>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoAttributeContainer_HCOKJNGGENJ__)
    ;
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoAttributeContainer_JLBKGAANIAE__)
    ;
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoAttributeContainer_OnScroll__);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    FUN_01bab630(&StringLiteral_10920);
    FUN_01bab630(&StringLiteral_14092);
    FUN_01bab630(&StringLiteral_10919);
    DAT_045669ac = 1;
  }
  (__this->fields).NEFMLODIKPE = NFIICLCMEHI;
  Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoAttributeContainer__GLOCHFIDALL
            (__this,DHIFOFDENGG,(MethodInfo *)method_00);
  pNVar1 = (__this->fields)._scroll;
  uVar5 = NEON_fmov(0x3f800000,4);
  (__this->fields).FDMLNHPDHKJ = (float)(int)uVar5;
  (__this->fields).JKOANJLODNP = (float)(int)((ulong)uVar5 >> 0x20);
  if (pNVar1 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
    Nekki_SF2_GUI_SimpleScroll__Init(pNVar1,(MethodInfo *)0x0);
    pNVar1 = (__this->fields)._scroll;
    CJNHFNHJHPE = (System_Action_BaseScrollItem__o *)
                  thunk_FUN_01bda818(System_Action<BaseScrollItem>_TypeInfo);
    System_Action<object>___ctor();
    if (pNVar1 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
      Nekki_SF2_GUI_SimpleScroll__add_OnScroll(pNVar1,CJNHFNHJHPE,(MethodInfo *)0x0);
      pNVar2 = (__this->fields)._slideForward;
      if (pNVar2 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) {
        Nekki_SF2_GUI_ResolutionButton__SetPressedSprite
                  (pNVar2,StringLiteral_14092,StringLiteral_10919,(MethodInfo *)0x0);
        pNVar2 = (__this->fields)._slideForward;
        if (pNVar2 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) {
          Nekki_SF2_GUI_ResolutionButton__SetDisabledSprite
                    (pNVar2,StringLiteral_14092,StringLiteral_10920,(MethodInfo *)0x0);
          pNVar2 = (__this->fields)._slideForward;
          if (pNVar2 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) {
            pUVar4 = (UnityEngine_Events_UnityEvent_o *)(pNVar2->fields).super.super.m_OnClick;
            pUVar3 = (UnityEngine_Events_UnityAction_o *)
                     thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
            UnityEngine_Events_UnityAction___ctor();
            if (pUVar4 != (UnityEngine_Events_UnityEvent_o *)0x0) {
              UnityEngine_Events_UnityEvent__AddListener(pUVar4,pUVar3,(MethodInfo *)0x0);
              pNVar2 = (__this->fields)._slideBackward;
              if (pNVar2 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) {
                Nekki_SF2_GUI_ResolutionButton__SetPressedSprite
                          (pNVar2,StringLiteral_14092,StringLiteral_10919,(MethodInfo *)0x0);
                pNVar2 = (__this->fields)._slideBackward;
                if (pNVar2 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) {
                  Nekki_SF2_GUI_ResolutionButton__SetDisabledSprite
                            (pNVar2,StringLiteral_14092,StringLiteral_10920,(MethodInfo *)0x0);
                  pNVar2 = (__this->fields)._slideBackward;
                  if (pNVar2 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) {
                    pUVar4 = (UnityEngine_Events_UnityEvent_o *)
                             (pNVar2->fields).super.super.m_OnClick;
                    pUVar3 = (UnityEngine_Events_UnityAction_o *)
                             thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
                    UnityEngine_Events_UnityAction___ctor();
                    if (pUVar4 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                      method_01 = (MethodInfo *)0x0;
                      UnityEngine_Events_UnityEvent__AddListener(pUVar4,pUVar3,(MethodInfo *)0x0);
                      Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoAttributeContainer__LNAECHIOFNK
                                (__this,true,method_01);
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

