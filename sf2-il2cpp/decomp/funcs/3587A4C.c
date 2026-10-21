// Nekki.SF2.GUI.Map.MapScene$$DPGDEMPNFLD @ RVA 0x3587A4C

void Nekki_SF2_GUI_Map_MapScene__DPGDEMPNFLD
               (Nekki_SF2_GUI_Map_MapScene_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Map_MapContainer_o *pNVar1;
  System_Action_OOMHDDBCBJP__o *CJNHFNHJHPE;
  System_Action_ZoneScrollItem__o *CJNHFNHJHPE_00;
  System_Action_o *pSVar2;
  
  if ((DAT_04568d05 & 1) == 0) {
    FUN_01bab630(&System_Action<OOMHDDBCBJP>_TypeInfo);
    FUN_01bab630(&System_Action<ZoneScrollItem>_TypeInfo);
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_MapScene_DJLEFJMMCMA__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_MapScene_OnClickBattle__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_MapScene_OnStorySliderScroll__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_MapScene_PMPKEJKFNOE__);
    DAT_04568d05 = 1;
  }
  pNVar1 = (Nekki_SF2_GUI_Map_MapContainer_o *)(__this->fields).DGPJKBMBBNN;
  if (pNVar1 != (Nekki_SF2_GUI_Map_MapContainer_o *)0x0) {
    Nekki_SF2_GUI_Map_MapContainer__AddStoryZones(pNVar1,(MethodInfo *)0x0);
    pNVar1 = (Nekki_SF2_GUI_Map_MapContainer_o *)(__this->fields).DGPJKBMBBNN;
    CJNHFNHJHPE = (System_Action_OOMHDDBCBJP__o *)
                  thunk_FUN_01bda818(System_Action<OOMHDDBCBJP>_TypeInfo);
    System_Action<object>___ctor();
    if (pNVar1 != (Nekki_SF2_GUI_Map_MapContainer_o *)0x0) {
      Nekki_SF2_GUI_Map_MapContainer__add_OnBattleClicked(pNVar1,CJNHFNHJHPE,(MethodInfo *)0x0);
      pNVar1 = (Nekki_SF2_GUI_Map_MapContainer_o *)(__this->fields).DGPJKBMBBNN;
      CJNHFNHJHPE_00 =
           (System_Action_ZoneScrollItem__o *)
           thunk_FUN_01bda818(System_Action<ZoneScrollItem>_TypeInfo);
      System_Action<object>___ctor();
      if (pNVar1 != (Nekki_SF2_GUI_Map_MapContainer_o *)0x0) {
        Nekki_SF2_GUI_Map_MapContainer__add_OnZoneSelected(pNVar1,CJNHFNHJHPE_00,(MethodInfo *)0x0);
        pNVar1 = (Nekki_SF2_GUI_Map_MapContainer_o *)(__this->fields).DGPJKBMBBNN;
        pSVar2 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
        System_Action___ctor();
        if (pNVar1 != (Nekki_SF2_GUI_Map_MapContainer_o *)0x0) {
          Nekki_SF2_GUI_Map_MapContainer__add_OnOpened(pNVar1,pSVar2,(MethodInfo *)0x0);
          pNVar1 = (Nekki_SF2_GUI_Map_MapContainer_o *)(__this->fields).DGPJKBMBBNN;
          pSVar2 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
          System_Action___ctor();
          if (pNVar1 != (Nekki_SF2_GUI_Map_MapContainer_o *)0x0) {
            Nekki_SF2_GUI_Map_MapContainer__add_OnClosed(pNVar1,pSVar2,(MethodInfo *)0x0);
            pNVar1 = (Nekki_SF2_GUI_Map_MapContainer_o *)(__this->fields).DGPJKBMBBNN;
            if (pNVar1 != (Nekki_SF2_GUI_Map_MapContainer_o *)0x0) {
              Nekki_SF2_GUI_Map_MapContainer__Close(pNVar1,(MethodInfo *)0x0);
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

