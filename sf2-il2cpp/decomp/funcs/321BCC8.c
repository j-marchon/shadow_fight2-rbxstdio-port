// Nekki.SF2.GUI.Pvp.PvpScene$$DDNKEKIOAMP @ RVA 0x321BCC8

void Nekki_SF2_GUI_Pvp_PvpScene__DDNKEKIOAMP
               (NLIDHEAMLMC_o *OCMMDIHLKMH,NLIDHEAMLMC_o *KGLKIBKGEKC,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  
  method_00 = (MethodInfo *)KGLKIBKGEKC;
  if ((DAT_04566f18 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo);
    DAT_04566f18 = 1;
    method_00 = extraout_x1;
  }
  while( true ) {
    if ((Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
      method_00 = extraout_x1_00;
    }
    Nekki_SF2_GUI_Pvp_PvpScene__BMLHIMIGOLP(OCMMDIHLKMH,method_00);
    if (OCMMDIHLKMH == (NLIDHEAMLMC_o *)0x0) break;
    bVar1 = NLIDHEAMLMC__LJEPFPBMNFM(OCMMDIHLKMH,KGLKIBKGEKC,(MethodInfo *)0x0);
    method_00 = extraout_x1_01;
    if (!bVar1) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

