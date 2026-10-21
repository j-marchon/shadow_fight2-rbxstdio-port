// Nekki.SF2.GUI.Menu.MainMenu$$JGOEDIHMJLB @ RVA 0x356D664

void Nekki_SF2_GUI_Menu_MainMenu__JGOEDIHMJLB
               (Nekki_SF2_GUI_Menu_MainMenu_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  UnityEngine_Events_UnityAction_o *pUVar2;
  Nekki_SF2_GUI_LabelAlias_o *pNVar3;
  UnityEngine_Events_UnityEvent_o *pUVar4;
  Nekki_SF2_GUI_Common_SectionButton_o *pNVar5;
  
                    /* try { // try from 0366d67c to 0376d687 has its CatchHandler @ 03673800 */
  if ((DAT_04568c36 & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Menu_MainMenu_DDEINGLCJHA__);
                    /* try { // try from 0366d694 to 0376d6a3 has its CatchHandler @ 03673814 */
    FUN_01bab630(&Method_Nekki_SF2_GUI_Menu_MainMenu_GOFBJJGMEKC__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Menu_MainMenu_KKMHIKAOKKH__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Menu_MainMenu_MGMMDJKPOCJ__);
                    /* try { // try from 0366d6b0 to 0376d6b7 has its CatchHandler @ 036737a0 */
    FUN_01bab630(&Method_Nekki_SF2_GUI_Menu_MainMenu_NEDGKDBLFJC__);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
                    /* try { // try from 0366d6c8 to 0376d6cf has its CatchHandler @ 036737f8 */
    FUN_01bab630(&StringLiteral_8964);
                    /* try { // try from 0366d6dc to 0376d6e3 has its CatchHandler @ 036737dc */
    FUN_01bab630(&StringLiteral_8965);
    FUN_01bab630(&StringLiteral_14092);
    DAT_04568c36 = 1;
  }
                    /* try { // try from 0366d6f4 to 0376d6fb has its CatchHandler @ 036737c8 */
  pNVar3 = (__this->fields)._menuLabel;
                    /* try { // try from 0366d6fc to 0376d70f has its CatchHandler @ 036737f0 */
  pSVar1 = MEJPIPJPKNP__GDFIHPLOOGM(3,(MethodInfo *)0x0);
  if (pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    /* try { // try from 0366d71c to 0376d71f has its CatchHandler @ 036737c4 */
    Nekki_SF2_GUI_ResolutionButton__SetHighlightedSprite
              ((Nekki_SF2_GUI_ResolutionButton_o *)pNVar3,StringLiteral_14092,pSVar1,
               (MethodInfo *)0x0);
    pNVar3 = (__this->fields)._menuLabel;
                    /* try { // try from 0366d730 to 0376d737 has its CatchHandler @ 036737ec */
    pSVar1 = MEJPIPJPKNP__HLKGHMBHAEF(3,(MethodInfo *)0x0);
    if (pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    /* try { // try from 0366d744 to 0376d74b has its CatchHandler @ 036737a4 */
      Nekki_SF2_GUI_ResolutionButton__SetPressedSprite
                ((Nekki_SF2_GUI_ResolutionButton_o *)pNVar3,StringLiteral_14092,pSVar1,
                 (MethodInfo *)0x0);
      pNVar3 = (__this->fields)._menuLabel;
      pSVar1 = MEJPIPJPKNP__NABCOFEDBGM(3,(MethodInfo *)0x0);
                    /* try { // try from 0366d75c to 0376d763 has its CatchHandler @ 036737a8 */
      if (pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    /* try { // try from 0366d770 to 0376d777 has its CatchHandler @ 036737b4 */
        Nekki_SF2_GUI_ResolutionButton__SetDisabledSprite
                  ((Nekki_SF2_GUI_ResolutionButton_o *)pNVar3,StringLiteral_14092,pSVar1,
                   (MethodInfo *)0x0);
        pNVar3 = (__this->fields)._menuLabel;
        if (pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    /* try { // try from 0366d788 to 0376d78f has its CatchHandler @ 036737f4 */
          pUVar4 = *(UnityEngine_Events_UnityEvent_o **)
                    &(pNVar3->fields).super.super.m_DisableFontTextureRebuiltCallback;
                    /* try { // try from 0366d790 to 0376d79f has its CatchHandler @ 036737b0 */
          pUVar2 = (UnityEngine_Events_UnityAction_o *)
                   thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
          UnityEngine_Events_UnityAction___ctor();
          if (pUVar4 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                    /* try { // try from 0366d7b0 to 0376d7b7 has its CatchHandler @ 036737e4 */
            UnityEngine_Events_UnityEvent__AddListener(pUVar4,pUVar2,(MethodInfo *)0x0);
            pNVar5 = (__this->fields).btnDojo;
                    /* try { // try from 0366d7c8 to 0376d7cf has its CatchHandler @ 036737ac */
            pSVar1 = MEJPIPJPKNP__GDFIHPLOOGM(5,(MethodInfo *)0x0);
            if (pNVar5 != (Nekki_SF2_GUI_Common_SectionButton_o *)0x0) {
                    /* try { // try from 0366d7dc to 0376d7e3 has its CatchHandler @ 036737bc */
              Nekki_SF2_GUI_ResolutionButton__SetHighlightedSprite
                        ((Nekki_SF2_GUI_ResolutionButton_o *)pNVar5,StringLiteral_14092,pSVar1,
                         (MethodInfo *)0x0);
              pNVar5 = (__this->fields).btnDojo;
                    /* try { // try from 0366d7f4 to 0376d7fb has its CatchHandler @ 036737b8 */
              pSVar1 = MEJPIPJPKNP__HLKGHMBHAEF(5,(MethodInfo *)0x0);
              if (pNVar5 != (Nekki_SF2_GUI_Common_SectionButton_o *)0x0) {
                    /* try { // try from 0366d7fc to 0376d827 has its CatchHandler @ 036737fc */
                Nekki_SF2_GUI_ResolutionButton__SetPressedSprite
                          ((Nekki_SF2_GUI_ResolutionButton_o *)pNVar5,StringLiteral_14092,pSVar1,
                           (MethodInfo *)0x0);
                pNVar5 = (__this->fields).btnDojo;
                pSVar1 = MEJPIPJPKNP__NABCOFEDBGM(5,(MethodInfo *)0x0);
                if (pNVar5 != (Nekki_SF2_GUI_Common_SectionButton_o *)0x0) {
                    /* try { // try from 0366d828 to 0376d84f has its CatchHandler @ 03673804 */
                  Nekki_SF2_GUI_ResolutionButton__SetDisabledSprite
                            ((Nekki_SF2_GUI_ResolutionButton_o *)pNVar5,StringLiteral_14092,pSVar1,
                             (MethodInfo *)0x0);
                  pNVar5 = (__this->fields).btnDojo;
                  if (pNVar5 != (Nekki_SF2_GUI_Common_SectionButton_o *)0x0) {
                    pUVar4 = (UnityEngine_Events_UnityEvent_o *)
                             (pNVar5->fields).super.super.super.m_OnClick;
                    pUVar2 = (UnityEngine_Events_UnityAction_o *)
                             thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
                    /* try { // try from 0366d85c to 0376d863 has its CatchHandler @ 036737e8 */
                    UnityEngine_Events_UnityAction___ctor();
                    if (pUVar4 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                    /* try { // try from 0366d874 to 0376d87b has its CatchHandler @ 036737e0 */
                      UnityEngine_Events_UnityEvent__AddListener(pUVar4,pUVar2,(MethodInfo *)0x0);
                      pNVar5 = (__this->fields).btnMap;
                    /* try { // try from 0366d888 to 0376d88f has its CatchHandler @ 036737c0 */
                      pSVar1 = MEJPIPJPKNP__GDFIHPLOOGM(4,(MethodInfo *)0x0);
                      if (pNVar5 != (Nekki_SF2_GUI_Common_SectionButton_o *)0x0) {
                    /* try { // try from 0366d8a0 to 0376d8a7 has its CatchHandler @ 036737d8 */
                        Nekki_SF2_GUI_ResolutionButton__SetHighlightedSprite
                                  ((Nekki_SF2_GUI_ResolutionButton_o *)pNVar5,StringLiteral_14092,
                                   pSVar1,(MethodInfo *)0x0);
                        pNVar5 = (__this->fields).btnMap;
                    /* try { // try from 0366d8a8 to 0376d8b7 has its CatchHandler @ 036737d4 */
                        pSVar1 = MEJPIPJPKNP__HLKGHMBHAEF(4,(MethodInfo *)0x0);
                        if (pNVar5 != (Nekki_SF2_GUI_Common_SectionButton_o *)0x0) {
                    /* try { // try from 0366d8bc to 0376d8df has its CatchHandler @ 0367380c */
                          Nekki_SF2_GUI_ResolutionButton__SetPressedSprite
                                    ((Nekki_SF2_GUI_ResolutionButton_o *)pNVar5,StringLiteral_14092,
                                     pSVar1,(MethodInfo *)0x0);
                          pNVar5 = (__this->fields).btnMap;
                          pSVar1 = MEJPIPJPKNP__NABCOFEDBGM(4,(MethodInfo *)0x0);
                          if (pNVar5 != (Nekki_SF2_GUI_Common_SectionButton_o *)0x0) {
                    /* try { // try from 0366d8ec to 0376d8f3 has its CatchHandler @ 0367379c */
                            Nekki_SF2_GUI_ResolutionButton__SetDisabledSprite
                                      ((Nekki_SF2_GUI_ResolutionButton_o *)pNVar5,
                                       StringLiteral_14092,pSVar1,(MethodInfo *)0x0);
                            pNVar5 = (__this->fields).btnMap;
                            if (pNVar5 != (Nekki_SF2_GUI_Common_SectionButton_o *)0x0) {
                    /* try { // try from 0366d8fc to 0376d903 has its CatchHandler @ 0367378c */
                              pUVar4 = (UnityEngine_Events_UnityEvent_o *)
                                       (pNVar5->fields).super.super.super.m_OnClick;
                              pUVar2 = (UnityEngine_Events_UnityAction_o *)
                                       thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
                    /* try { // try from 0366d910 to 0376d917 has its CatchHandler @ 03673798 */
                    /* try { // try from 0366d920 to 0376d927 has its CatchHandler @ 03673794 */
                              UnityEngine_Events_UnityAction___ctor();
                              if (pUVar4 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                    /* try { // try from 0366d928 to 0376d937 has its CatchHandler @ 03673790 */
                                UnityEngine_Events_UnityEvent__AddListener
                                          (pUVar4,pUVar2,(MethodInfo *)0x0);
                                pNVar5 = (__this->fields).btnShop;
                    /* try { // try from 0366d93c to 0376d95f has its CatchHandler @ 03673808 */
                                pSVar1 = MEJPIPJPKNP__GDFIHPLOOGM(7,(MethodInfo *)0x0);
                                if (pNVar5 != (Nekki_SF2_GUI_Common_SectionButton_o *)0x0) {
                                  Nekki_SF2_GUI_ResolutionButton__SetHighlightedSprite
                                            ((Nekki_SF2_GUI_ResolutionButton_o *)pNVar5,
                                             StringLiteral_14092,pSVar1,(MethodInfo *)0x0);
                                  pNVar5 = (__this->fields).btnShop;
                                  pSVar1 = MEJPIPJPKNP__HLKGHMBHAEF(7,(MethodInfo *)0x0);
                                  if (pNVar5 != (Nekki_SF2_GUI_Common_SectionButton_o *)0x0) {
                                    Nekki_SF2_GUI_ResolutionButton__SetPressedSprite
                                              ((Nekki_SF2_GUI_ResolutionButton_o *)pNVar5,
                                               StringLiteral_14092,pSVar1,(MethodInfo *)0x0);
                    /* try { // try from 0366d988 to 0376d98f has its CatchHandler @ 03673318 */
                                    pNVar5 = (__this->fields).btnShop;
                                    pSVar1 = MEJPIPJPKNP__NABCOFEDBGM(7,(MethodInfo *)0x0);
                                    if (pNVar5 != (Nekki_SF2_GUI_Common_SectionButton_o *)0x0) {
                    /* try { // try from 0366d9ac to 0376d9b3 has its CatchHandler @ 03673214 */
                                      Nekki_SF2_GUI_ResolutionButton__SetDisabledSprite
                                                ((Nekki_SF2_GUI_ResolutionButton_o *)pNVar5,
                                                 StringLiteral_14092,pSVar1,(MethodInfo *)0x0);
                                      pNVar5 = (__this->fields).btnShop;
                                      if (pNVar5 != (Nekki_SF2_GUI_Common_SectionButton_o *)0x0) {
                                        pUVar4 = (UnityEngine_Events_UnityEvent_o *)
                                                 (pNVar5->fields).super.super.super.m_OnClick;
                    /* try { // try from 0366d9c4 to 0376d9cb has its CatchHandler @ 03673210 */
                                        pUVar2 = (UnityEngine_Events_UnityAction_o *)
                                                 thunk_FUN_01bda818(
                                                  UnityEngine_Events_UnityAction_TypeInfo);
                    /* try { // try from 0366d9d8 to 0376d9df has its CatchHandler @ 0367320c */
                                        UnityEngine_Events_UnityAction___ctor();
                                        if (pUVar4 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                    /* try { // try from 0366d9f0 to 0376d9f7 has its CatchHandler @ 03673208 */
                                          UnityEngine_Events_UnityEvent__AddListener
                                                    (pUVar4,pUVar2,(MethodInfo *)0x0);
                                          pNVar5 = (__this->fields).btnProfile;
                    /* try { // try from 0366d9f8 to 0376da07 has its CatchHandler @ 03673204 */
                                          if (pNVar5 != (Nekki_SF2_GUI_Common_SectionButton_o *)0x0)
                                          {
                                            Nekki_SF2_GUI_ResolutionButton__SetHighlightedSprite
                                                      ((Nekki_SF2_GUI_ResolutionButton_o *)pNVar5,
                                                       StringLiteral_14092,StringLiteral_8965,
                                                       (MethodInfo *)0x0);
                                            pNVar5 = (__this->fields).btnProfile;
                    /* try { // try from 0366da18 to 0376da1f has its CatchHandler @ 03673200 */
                                            if (pNVar5 != (Nekki_SF2_GUI_Common_SectionButton_o *)
                                                          0x0) {
                                              Nekki_SF2_GUI_ResolutionButton__SetPressedSprite
                                                        ((Nekki_SF2_GUI_ResolutionButton_o *)pNVar5,
                                                         StringLiteral_14092,StringLiteral_8964,
                                                         (MethodInfo *)0x0);
                                              pNVar5 = (__this->fields).btnProfile;
                    /* try { // try from 0366da38 to 0376da3b has its CatchHandler @ 03672d60 */
                                              if (pNVar5 != (Nekki_SF2_GUI_Common_SectionButton_o *)
                                                            0x0) {
                    /* try { // try from 0366da3c to 0376da77 has its CatchHandler @ 0367339c */
                                                pUVar4 = (UnityEngine_Events_UnityEvent_o *)
                                                         (pNVar5->fields).super.super.super.
                                                         m_OnClick;
                                                pUVar2 = (UnityEngine_Events_UnityAction_o *)
                                                         thunk_FUN_01bda818(
                                                  UnityEngine_Events_UnityAction_TypeInfo);
                                                UnityEngine_Events_UnityAction___ctor();
                                                if (pUVar4 != (UnityEngine_Events_UnityEvent_o *)0x0
                                                   ) {
                                                  UnityEngine_Events_UnityEvent__AddListener
                                                            (pUVar4,pUVar2,(MethodInfo *)0x0);
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
                    /* try { // try from 0366da84 to 0376da93 has its CatchHandler @ 036731fc */
  FUN_01bab8c8();
}

