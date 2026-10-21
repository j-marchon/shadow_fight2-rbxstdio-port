// Nekki.SF2.GUI.Map.MapScene$$AFIFPAJFKAA @ RVA 0x3587878

void Nekki_SF2_GUI_Map_MapScene__AFIFPAJFKAA
               (Nekki_SF2_GUI_Map_MapScene_o *__this,MethodInfo *method)

{
  System_Action_o *pSVar1;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  Nekki_SF2_GUI_RaidMapUIModule_o *pNVar2;
  Nekki_SF2_GUI_Map_RaidToggleButton_o *pNVar3;
  
  if ((DAT_04568d04 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_MapScene_GHCILGEAFOP__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_MapScene_GoToRaidClick__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_MapScene_NMADEIOJKKC__);
    DAT_04568d04 = 1;
    method = extraout_x1;
  }
  pNVar2 = (__this->fields).FMIFNIIJJNK;
  if (pNVar2 != (Nekki_SF2_GUI_RaidMapUIModule_o *)0x0) {
    pNVar3 = (pNVar2->fields).RaidToggleButton;
    pSVar1 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo,method);
    System_Action___ctor();
    if (pNVar3 != (Nekki_SF2_GUI_Map_RaidToggleButton_o *)0x0) {
      Nekki_SF2_GUI_Map_RaidToggleButton__add_OnGoToStoryClick(pNVar3,pSVar1,(MethodInfo *)0x0);
      pNVar2 = (__this->fields).FMIFNIIJJNK;
      if (pNVar2 != (Nekki_SF2_GUI_RaidMapUIModule_o *)0x0) {
        pNVar3 = (pNVar2->fields).RaidToggleButton;
        pSVar1 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
        System_Action___ctor();
        if (pNVar3 != (Nekki_SF2_GUI_Map_RaidToggleButton_o *)0x0) {
          Nekki_SF2_GUI_Map_RaidToggleButton__add_OnGoToRaidClick(pNVar3,pSVar1,(MethodInfo *)0x0);
          pNVar2 = (__this->fields).FMIFNIIJJNK;
          if (pNVar2 != (Nekki_SF2_GUI_RaidMapUIModule_o *)0x0) {
            pNVar3 = (pNVar2->fields).RaidToggleButton;
            pSVar1 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
            System_Action___ctor();
            if (pNVar3 != (Nekki_SF2_GUI_Map_RaidToggleButton_o *)0x0) {
              Nekki_SF2_GUI_Map_RaidToggleButton__add_OnScrollRaidMapUp
                        (pNVar3,pSVar1,(MethodInfo *)0x0);
              Nekki_SF2_GUI_Map_MapScene__UpdateRaidToggleBtn_EnableAndActive(__this,method_00);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

