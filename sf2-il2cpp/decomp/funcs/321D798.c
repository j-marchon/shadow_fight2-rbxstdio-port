// Nekki.SF2.GUI.Pvp.PvpScene$$.ctor @ RVA 0x321D798

void Nekki_SF2_GUI_Pvp_PvpScene___ctor(Nekki_SF2_GUI_Pvp_PvpScene_o *__this,MethodInfo *method)

{
  if ((DAT_04566f17 & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<PvpScene>__ctor__);
    DAT_04566f17 = 1;
  }
  Nekki_SF2_GUI_Scene<object>___ctor
            ((Nekki_SF2_GUI_Scene_T__o *)__this,Method_Nekki_SF2_GUI_Scene<PvpScene>__ctor__);
  return;
}

