// Nekki.SF2.GUI.Dialogs.Raids.RaidLeaderboardView$$Init @ RVA 0x3324808

void Nekki_SF2_GUI_Dialogs_Raids_RaidLeaderboardView__Init
               (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaderboardView_o *__this,
               Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController_o *FLMDMALCFNA,
               Nekki_SF2_GUI_LabelAlias_o *BIMIBKKLPLB,
               Nekki_SF2_GUI_Scripts_LoadingCircle_o *JMBOIPJLIDO,
               Nekki_SF2_GUI_SimpleScroll_o *MGFBPKIBNJI,MethodInfo *method)

{
  Nekki_SF2_GUI_Scripts_LoadingCircle_o **ppNVar1;
  Nekki_SF2_GUI_LabelAlias_o **ppNVar2;
  Nekki_SF2_GUI_SimpleScroll_o **ppNVar3;
  
  if ((__this->fields)._BLOJFJIFDAE_k__BackingField != false) {
    return;
  }
  (__this->fields)._BLOJFJIFDAE_k__BackingField = true;
  (__this->fields).OMMHPJLPJGL = FLMDMALCFNA;
  thunk_FUN_01c20e04();
  ppNVar1 = &(__this->fields).PGEOMGONABB;
  *ppNVar1 = JMBOIPJLIDO;
  thunk_FUN_01c20e04(ppNVar1,JMBOIPJLIDO);
  ppNVar2 = &(__this->fields).JICANOFGOJF;
  *ppNVar2 = BIMIBKKLPLB;
  thunk_FUN_01c20e04(ppNVar2,BIMIBKKLPLB);
  ppNVar3 = &(__this->fields).PDHMLFAMNCO;
  *ppNVar3 = MGFBPKIBNJI;
  thunk_FUN_01c20e04(ppNVar3,MGFBPKIBNJI);
  return;
}

