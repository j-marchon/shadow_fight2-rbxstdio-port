// Nekki.SF2.GUI.Dialogs.Raids.Clans.MainClanDialog$$EIOBMJIMBPM @ RVA 0x329C500

void Nekki_SF2_GUI_Dialogs_Raids_Clans_MainClanDialog__EIOBMJIMBPM
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_MainClanDialog_o *__this,MethodInfo *method)

{
  FEKEAPCCOOB_o **ppFVar1;
  Nekki_SF2_GUI_ResolutionButton_o *pNVar2;
  FEKEAPCCOOB_o *pFVar3;
  TabView_o *FNCBJFJMIPB;
  MethodInfo *pMVar4;
  
  if ((DAT_045673a2 & 1) == 0) {
    FUN_01bab630(&FEKEAPCCOOB_TypeInfo);
    FUN_01bab630(&StringLiteral_10813);
    FUN_01bab630(&StringLiteral_14092);
    DAT_045673a2 = 1;
  }
  if ((__this->fields).HIOOMAJPEJP != (FEKEAPCCOOB_o *)0x0) {
    return;
  }
  pNVar2 = (__this->fields)._membersButton;
  if (pNVar2 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) {
    Nekki_SF2_GUI_ResolutionButton__SetHighlightedSprite
              (pNVar2,StringLiteral_14092,StringLiteral_10813,(MethodInfo *)0x0);
    pNVar2 = (__this->fields)._membersButton;
    if (pNVar2 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) {
      Nekki_SF2_GUI_ResolutionButton__SetPressedSprite
                (pNVar2,StringLiteral_14092,StringLiteral_10813,(MethodInfo *)0x0);
      pNVar2 = (__this->fields)._membersButton;
      if (pNVar2 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) {
        Nekki_SF2_GUI_ResolutionButton__SetDisabledSprite
                  (pNVar2,StringLiteral_14092,StringLiteral_10813,(MethodInfo *)0x0);
        pNVar2 = (__this->fields)._clanInfoButton;
        if (pNVar2 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) {
          Nekki_SF2_GUI_ResolutionButton__SetHighlightedSprite
                    (pNVar2,StringLiteral_14092,StringLiteral_10813,(MethodInfo *)0x0);
          pNVar2 = (__this->fields)._clanInfoButton;
          if (pNVar2 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) {
            Nekki_SF2_GUI_ResolutionButton__SetPressedSprite
                      (pNVar2,StringLiteral_14092,StringLiteral_10813,(MethodInfo *)0x0);
            pNVar2 = (__this->fields)._clanInfoButton;
            if (pNVar2 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) {
              Nekki_SF2_GUI_ResolutionButton__SetDisabledSprite
                        (pNVar2,StringLiteral_14092,StringLiteral_10813,(MethodInfo *)0x0);
              pNVar2 = (__this->fields)._clanFindButton;
              if (pNVar2 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) {
                Nekki_SF2_GUI_ResolutionButton__SetHighlightedSprite
                          (pNVar2,StringLiteral_14092,StringLiteral_10813,(MethodInfo *)0x0);
                pNVar2 = (__this->fields)._clanFindButton;
                if (pNVar2 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) {
                  Nekki_SF2_GUI_ResolutionButton__SetPressedSprite
                            (pNVar2,StringLiteral_14092,StringLiteral_10813,(MethodInfo *)0x0);
                  pNVar2 = (__this->fields)._clanFindButton;
                  if (pNVar2 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) {
                    ppFVar1 = &(__this->fields).HIOOMAJPEJP;
                    Nekki_SF2_GUI_ResolutionButton__SetDisabledSprite
                              (pNVar2,StringLiteral_14092,StringLiteral_10813,(MethodInfo *)0x0);
                    pFVar3 = (FEKEAPCCOOB_o *)thunk_FUN_01bda818(FEKEAPCCOOB_TypeInfo);
                    FEKEAPCCOOB___ctor(pFVar3,(MethodInfo *)0x0);
                    *ppFVar1 = pFVar3;
                    thunk_FUN_01c20e04(ppFVar1,pFVar3);
                    if (*ppFVar1 != (FEKEAPCCOOB_o *)0x0) {
                      pMVar4 = (MethodInfo *)0x0;
                      FEKEAPCCOOB__GIENGNEGHPJ(*ppFVar1,(JEFOMACMAAD_o *)__this,(MethodInfo *)0x0);
                      pFVar3 = (__this->fields).HIOOMAJPEJP;
                      pNVar2 = (__this->fields)._membersButton;
                      pMVar4 = (MethodInfo *)
                               Nekki_SF2_GUI_Dialogs_Raids_Clans_MainClanDialog__NBMBGKIMBBE
                                         (__this,0,pMVar4);
                      if (pFVar3 != (FEKEAPCCOOB_o *)0x0) {
                        FEKEAPCCOOB__GDCPIEANEJF
                                  (pFVar3,(UnityEngine_UI_Button_o *)pNVar2,(TabView_o *)pMVar4,
                                   (MethodInfo *)0x0);
                        pFVar3 = (__this->fields).HIOOMAJPEJP;
                        pNVar2 = (__this->fields)._clanInfoButton;
                        pMVar4 = (MethodInfo *)
                                 Nekki_SF2_GUI_Dialogs_Raids_Clans_MainClanDialog__NBMBGKIMBBE
                                           (__this,1,pMVar4);
                        if (pFVar3 != (FEKEAPCCOOB_o *)0x0) {
                          FEKEAPCCOOB__GDCPIEANEJF
                                    (pFVar3,(UnityEngine_UI_Button_o *)pNVar2,(TabView_o *)pMVar4,
                                     (MethodInfo *)0x0);
                          if ((__this->fields)._LLDCLDBEMKA_k__BackingField == false) {
                            return;
                          }
                          pFVar3 = (__this->fields).HIOOMAJPEJP;
                          pNVar2 = (__this->fields)._clanFindButton;
                          FNCBJFJMIPB = Nekki_SF2_GUI_Dialogs_Raids_Clans_MainClanDialog__NBMBGKIMBBE
                                                  (__this,2,pMVar4);
                          if (pFVar3 != (FEKEAPCCOOB_o *)0x0) {
                            FEKEAPCCOOB__GDCPIEANEJF
                                      (pFVar3,(UnityEngine_UI_Button_o *)pNVar2,FNCBJFJMIPB,
                                       (MethodInfo *)0x0);
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

