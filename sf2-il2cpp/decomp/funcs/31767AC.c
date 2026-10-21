// Nekki.SF2.GUI.Dialogs.Raids.Clans.CreateClanRaidDialog$$OnDestroy @ RVA 0x31767AC

void Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanRaidDialog__OnDestroy
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanRaidDialog_o *__this,MethodInfo *method)

{
  FKDLCJJOGIP_o *__this_00;
  System_Action_o *CJNHFNHJHPE;
  MethodInfo *method_00;
  
  if ((DAT_04566957 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanRaidDialog_JBOPJALGFHH__);
    DAT_04566957 = 1;
  }
  __this_00 = FKDLCJJOGIP__AIHNLLGNBLC((MethodInfo *)0x0);
  CJNHFNHJHPE = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
  System_Action___ctor();
  if (__this_00 != (FKDLCJJOGIP_o *)0x0) {
    FKDLCJJOGIP__DAGFKDGOBBF(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
    Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanRaidDialog__DNHHEMBFGFJ(__this,method_00);
    Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanBaseDialog__OnDestroy
              ((Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanBaseDialog_o *)__this,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

