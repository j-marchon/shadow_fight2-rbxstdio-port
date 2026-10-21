// Nekki.SF2.GUI.Pvp.LocationSelectModule$$SetSecondPlayerAvailable @ RVA 0x31ACC4C

void Nekki_SF2_GUI_Pvp_LocationSelectModule__SetSecondPlayerAvailable
               (Nekki_SF2_GUI_Pvp_LocationSelectModule_o *__this,bool EHJMCCFLOLK,MethodInfo *method
               )

{
  bool bVar1;
  long lVar2;
  Nekki_SF2_GUI_Pvp_PlayerMenu_o *__this_00;
  Nekki_SF2_GUI_Pvp_PvPHintController_o *__this_01;
  
  if ((DAT_04566b54 & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<PvpScene>_get_Current__);
    FUN_01bab630(&StringLiteral_10598);
    DAT_04566b54 = 1;
  }
  Nekki_SF2_GUI_Pvp_SelectModule__SetSecondPlayerAvailable
            ((Nekki_SF2_GUI_Pvp_SelectModule_o *)__this,EHJMCCFLOLK,(MethodInfo *)0x0);
  bVar1 = Nekki_SF2_GUI_UIModule__get_IsActive((Nekki_SF2_GUI_UIModule_o *)__this,(MethodInfo *)0x0)
  ;
  if (!bVar1) {
    return;
  }
  lVar2 = *(long *)(Method_Nekki_SF2_GUI_Scene<PvpScene>_get_Current__ + 0x20);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01b81620();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01b81620();
  }
  if ((**(long **)(lVar2 + 0xb8) != 0) &&
     (__this_00 = *(Nekki_SF2_GUI_Pvp_PlayerMenu_o **)(**(long **)(lVar2 + 0xb8) + 0x90),
     __this_00 != (Nekki_SF2_GUI_Pvp_PlayerMenu_o *)0x0)) {
    Nekki_SF2_GUI_Pvp_PlayerMenu__SetHeader(__this_00,StringLiteral_10598,(MethodInfo *)0x0);
    lVar2 = *(long *)(Method_Nekki_SF2_GUI_Scene<PvpScene>_get_Current__ + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01b81620();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01b81620();
    }
    if ((**(long **)(lVar2 + 0xb8) != 0) &&
       (__this_01 = *(Nekki_SF2_GUI_Pvp_PvPHintController_o **)(**(long **)(lVar2 + 0xb8) + 200),
       __this_01 != (Nekki_SF2_GUI_Pvp_PvPHintController_o *)0x0)) {
      Nekki_SF2_GUI_Pvp_PvPHintController__set_IsSinglePlayer
                (__this_01,(bool)(~EHJMCCFLOLK & 1),(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

