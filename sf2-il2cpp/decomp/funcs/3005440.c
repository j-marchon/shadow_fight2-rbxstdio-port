// Nekki.SF2.GUI.Shop.InfoPanelContent$$PBPPPILDIBH @ RVA 0x3005440

void Nekki_SF2_GUI_Shop_InfoPanelContent__PBPPPILDIBH
               (Nekki_SF2_GUI_Shop_InfoPanelContent_o *__this,BKKPAKHJDKB_o *MEJOGHDACNG,
               MethodInfo *method)

{
  FAIJGJCCKJC_o *pFVar1;
  JMDPBFOCHHP_ENBCJNLAHAC_o *pJVar2;
  
  if (MEJOGHDACNG == (BKKPAKHJDKB_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pFVar1 = (MEJOGHDACNG->fields).IJDPHADMDKN;
  if (((pFVar1 != (FAIJGJCCKJC_o *)0x0) &&
      (pJVar2 = (pFVar1->fields).FBBBEHLGDJK, pJVar2 != (JMDPBFOCHHP_ENBCJNLAHAC_o *)0x0)) &&
     ((pJVar2->fields).CBKACDJHFNE != false)) {
    Nekki_SF2_GUI_Shop_InfoPanelContent__UpdateContent(__this,(MethodInfo *)MEJOGHDACNG);
    return;
  }
  return;
}

