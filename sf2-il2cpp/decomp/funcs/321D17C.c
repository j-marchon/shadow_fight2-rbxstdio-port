// Nekki.SF2.GUI.Pvp.PvpScene$$GKLHECKHOPC @ RVA 0x321D17C

void Nekki_SF2_GUI_Pvp_PvpScene__GKLHECKHOPC
               (Nekki_SF2_GUI_Pvp_PvpScene_o *__this,System_String_o *DDFHMFFIGFG,
               System_String_o *LLMFIICAEAJ,MethodInfo *method)

{
  bool bVar1;
  System_Action_string__string__o *CJNHFNHJHPE;
  System_Action_o *CJNHFNHJHPE_00;
  System_String_o *pSVar2;
  System_Action_string__o *CJNHFNHJHPE_01;
  System_String_o *JPENNNFFCBM;
  System_String_o **ppSVar3;
  MethodInfo *method_00;
  MethodInfo *method_01;
  Nekki_SF2_GUI_Pvp_LocationSelectModule_o *pNVar4;
  Nekki_SF2_GUI_Pvp_RandomSelectionModule_o *pNVar5;
  
  if ((DAT_04566f10 & 1) == 0) {
    FUN_01bab630(&System_Action<string>_TypeInfo);
    FUN_01bab630(&System_Action<string,_string>_TypeInfo);
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Pvp_PvpScene_BNIMKENJJNE__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Pvp_PvpScene_GKLHECKHOPC__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Pvp_PvpScene_HEJEELBDKKD__);
    FUN_01bab630(&StringLiteral_8594);
    FUN_01bab630(&StringLiteral_555);
    DAT_04566f10 = 1;
  }
  pNVar4 = (__this->fields).IIBLCIFHCCF;
  CJNHFNHJHPE = (System_Action_string__string__o *)
                thunk_FUN_01bda818(System_Action<string,_string>_TypeInfo);
  System_Action<object,_object>___ctor();
  if (pNVar4 != (Nekki_SF2_GUI_Pvp_LocationSelectModule_o *)0x0) {
    Nekki_SF2_GUI_Pvp_SelectModule__remove_OnPlayersConfirm
              ((Nekki_SF2_GUI_Pvp_SelectModule_o *)pNVar4,CJNHFNHJHPE,(MethodInfo *)0x0);
    pNVar4 = (__this->fields).IIBLCIFHCCF;
    CJNHFNHJHPE_00 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
    System_Action___ctor();
    if (pNVar4 != (Nekki_SF2_GUI_Pvp_LocationSelectModule_o *)0x0) {
      Nekki_SF2_GUI_Pvp_SelectModule__remove_OnPlayersBack
                ((Nekki_SF2_GUI_Pvp_SelectModule_o *)pNVar4,CJNHFNHJHPE_00,(MethodInfo *)0x0);
      pSVar2 = System_String__Concat
                         (StringLiteral_8594,DDFHMFFIGFG,StringLiteral_555,LLMFIICAEAJ,
                          (MethodInfo *)0x0);
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
      }
      UnityEngine_Debug__Log((Il2CppObject *)pSVar2,(MethodInfo *)0x0);
      if (DDFHMFFIGFG != (System_String_o *)0x0) {
        bVar1 = System_String__Equals(DDFHMFFIGFG,LLMFIICAEAJ,(MethodInfo *)0x0);
        if ((bVar1) ||
           (bVar1 = Nekki_SF2_GUI_Pvp_PvpScene__ABEMBBBAFPP
                              ((Nekki_SF2_GUI_Pvp_PvpScene_o *)0x0,method_00), !bVar1)) {
          ppSVar3 = &(__this->fields).GOGMCKIMHDH;
          *ppSVar3 = DDFHMFFIGFG;
          thunk_FUN_01c20e04(ppSVar3,DDFHMFFIGFG);
          Nekki_SF2_GUI_Pvp_PvpScene__EEGOPNGLBMJ(__this,method_01);
          return;
        }
        pNVar4 = (__this->fields).IIBLCIFHCCF;
        if (pNVar4 != (Nekki_SF2_GUI_Pvp_LocationSelectModule_o *)0x0) {
          Nekki_SF2_GUI_Pvp_SelectModule__RemoveControlListener
                    ((Nekki_SF2_GUI_Pvp_SelectModule_o *)pNVar4,(MethodInfo *)0x0);
          pNVar5 = (__this->fields).FLABENKGFDF;
          CJNHFNHJHPE_01 =
               (System_Action_string__o *)thunk_FUN_01bda818(System_Action<string>_TypeInfo);
          System_Action<object>___ctor();
          if (pNVar5 != (Nekki_SF2_GUI_Pvp_RandomSelectionModule_o *)0x0) {
            Nekki_SF2_GUI_Pvp_RandomSelectionModule__add_OnAnimationEnd
                      (pNVar5,CJNHFNHJHPE_01,(MethodInfo *)0x0);
            pNVar5 = (__this->fields).FLABENKGFDF;
            if (pNVar5 != (Nekki_SF2_GUI_Pvp_RandomSelectionModule_o *)0x0) {
              Nekki_SF2_GUI_UIModule__Activate((Nekki_SF2_GUI_UIModule_o *)pNVar5,(MethodInfo *)0x0)
              ;
              pNVar4 = (__this->fields).IIBLCIFHCCF;
              if (pNVar4 != (Nekki_SF2_GUI_Pvp_LocationSelectModule_o *)0x0) {
                pNVar5 = (__this->fields).FLABENKGFDF;
                pSVar2 = Nekki_SF2_GUI_Pvp_LocationSelectModule__GetSprite
                                   (pNVar4,DDFHMFFIGFG,(MethodInfo *)0x0);
                pNVar4 = (__this->fields).IIBLCIFHCCF;
                if ((pNVar4 != (Nekki_SF2_GUI_Pvp_LocationSelectModule_o *)0x0) &&
                   (JPENNNFFCBM = Nekki_SF2_GUI_Pvp_LocationSelectModule__GetSprite
                                            (pNVar4,LLMFIICAEAJ,(MethodInfo *)0x0),
                   pNVar5 != (Nekki_SF2_GUI_Pvp_RandomSelectionModule_o *)0x0)) {
                  Nekki_SF2_GUI_Pvp_RandomSelectionModule__InitContents
                            (pNVar5,DDFHMFFIGFG,pSVar2,LLMFIICAEAJ,JPENNNFFCBM,(MethodInfo *)0x0);
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

