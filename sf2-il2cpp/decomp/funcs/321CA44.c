// Nekki.SF2.GUI.Pvp.PvpScene$$PNPIHIBJKLO @ RVA 0x321CA44

void Nekki_SF2_GUI_Pvp_PvpScene__PNPIHIBJKLO
               (Nekki_SF2_GUI_Pvp_PvpScene_o *__this,System_String_o *NEBFODGJBJM,
               System_String_o *IJIHFOFKBAI,MethodInfo *method)

{
  System_Action_string__string__o *pSVar1;
  Nekki_SF2_GUI_Pvp_LocationSelectModule_o *pNVar2;
  System_Action_o *CJNHFNHJHPE;
  System_String_o **ppSVar3;
  Nekki_SF2_GUI_Pvp_CharacterSelectModule_o *pNVar4;
  
  if ((DAT_04566f0d & 1) == 0) {
    FUN_01bab630(&System_Action<string,_string>_TypeInfo);
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Pvp_PvpScene_BNIMKENJJNE__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Pvp_PvpScene_GKLHECKHOPC__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Pvp_PvpScene_PNPIHIBJKLO__);
    DAT_04566f0d = 1;
  }
  pNVar4 = (__this->fields).MPPLJPIAGDK;
  pSVar1 = (System_Action_string__string__o *)
           thunk_FUN_01bda818(System_Action<string,_string>_TypeInfo);
  System_Action<object,_object>___ctor();
  if (pNVar4 != (Nekki_SF2_GUI_Pvp_CharacterSelectModule_o *)0x0) {
    Nekki_SF2_GUI_Pvp_SelectModule__remove_OnPlayersConfirm
              ((Nekki_SF2_GUI_Pvp_SelectModule_o *)pNVar4,pSVar1,(MethodInfo *)0x0);
    pNVar4 = (__this->fields).MPPLJPIAGDK;
    if (pNVar4 != (Nekki_SF2_GUI_Pvp_CharacterSelectModule_o *)0x0) {
      Nekki_SF2_GUI_UIModule__DeActivate((Nekki_SF2_GUI_UIModule_o *)pNVar4,(MethodInfo *)0x0);
      pNVar2 = (__this->fields).IIBLCIFHCCF;
      if (pNVar2 != (Nekki_SF2_GUI_Pvp_LocationSelectModule_o *)0x0) {
        Nekki_SF2_GUI_UIModule__Activate((Nekki_SF2_GUI_UIModule_o *)pNVar2,(MethodInfo *)0x0);
        pNVar2 = (__this->fields).IIBLCIFHCCF;
        pSVar1 = (System_Action_string__string__o *)
                 thunk_FUN_01bda818(System_Action<string,_string>_TypeInfo);
        System_Action<object,_object>___ctor();
        if (pNVar2 != (Nekki_SF2_GUI_Pvp_LocationSelectModule_o *)0x0) {
          Nekki_SF2_GUI_Pvp_SelectModule__add_OnPlayersConfirm
                    ((Nekki_SF2_GUI_Pvp_SelectModule_o *)pNVar2,pSVar1,(MethodInfo *)0x0);
          pNVar2 = (__this->fields).IIBLCIFHCCF;
          CJNHFNHJHPE = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
          System_Action___ctor();
          if (pNVar2 != (Nekki_SF2_GUI_Pvp_LocationSelectModule_o *)0x0) {
            Nekki_SF2_GUI_Pvp_SelectModule__add_OnPlayersBack
                      ((Nekki_SF2_GUI_Pvp_SelectModule_o *)pNVar2,CJNHFNHJHPE,(MethodInfo *)0x0);
            ppSVar3 = &(__this->fields).JANJPDGLLNE;
            *ppSVar3 = NEBFODGJBJM;
            thunk_FUN_01c20e04(ppSVar3,NEBFODGJBJM);
            ppSVar3 = &(__this->fields).IDPEJMKPFNA;
            *ppSVar3 = IJIHFOFKBAI;
            thunk_FUN_01c20e04(ppSVar3,IJIHFOFKBAI);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

