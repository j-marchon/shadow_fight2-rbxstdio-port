// Nekki.SF2.GUI.Pvp.PvpScene$$.cctor @ RVA 0x321D50C

void Nekki_SF2_GUI_Pvp_PvpScene___cctor(MethodInfo *method)

{
  NLIDHEAMLMC_o *pNVar1;
  NLIDHEAMLMC_o **ppNVar2;
  
  if ((DAT_04566f13 & 1) == 0) {
    FUN_01bab630(&NLIDHEAMLMC_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo);
    DAT_04566f13 = 1;
  }
  Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo->static_fields->forceOpenCharacters = false;
  pNVar1 = (NLIDHEAMLMC_o *)thunk_FUN_01bda818(NLIDHEAMLMC_TypeInfo);
  NLIDHEAMLMC___ctor(pNVar1,0,2,0,(MethodInfo *)0x0);
  ppNVar2 = &Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo->static_fields->DHDNCFLOPNH;
  *ppNVar2 = pNVar1;
  thunk_FUN_01c20e04(ppNVar2,pNVar1);
  pNVar1 = (NLIDHEAMLMC_o *)thunk_FUN_01bda818(NLIDHEAMLMC_TypeInfo);
  NLIDHEAMLMC___ctor(pNVar1,1,2,1,(MethodInfo *)0x0);
  ppNVar2 = &Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo->static_fields->IHDCFNPHCHM;
  *ppNVar2 = pNVar1;
  thunk_FUN_01c20e04(ppNVar2,pNVar1);
  return;
}

