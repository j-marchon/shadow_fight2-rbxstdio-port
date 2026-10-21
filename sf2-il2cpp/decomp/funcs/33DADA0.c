// Nekki.SF2.GUI.Shop.Forge.ForgePanel$$ScrollToRecipe @ RVA 0x33DADA0

void Nekki_SF2_GUI_Shop_Forge_ForgePanel__ScrollToRecipe
               (Nekki_SF2_GUI_Shop_Forge_ForgePanel_o *__this,GGLKHCAIGDI_o *NDLOGJOGFCA,
               MethodInfo *method)

{
  bool bVar1;
  int32_t JDEFJPHCNMM;
  Nekki_SF2_GUI_TableView_o *__this_00;
  GGLKHCAIGDI_o **ppGVar2;
  
  if ((DAT_04567e6e & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_OBECCOPBADO<GGLKHCAIGDI>__);
    DAT_04567e6e = 1;
  }
  if (((__this->fields).NBAADNACNDJ == 0) &&
     (bVar1 = DJNBJHPDKDP__OBECCOPBADO<object>
                        ((System_Collections_Generic_List_T__o *)(__this->fields).OKIANCELJJF,
                         Method_DJNBJHPDKDP_OBECCOPBADO<GGLKHCAIGDI>__), !bVar1)) {
    ppGVar2 = &(__this->fields).DMAFCPPFLEN;
    *ppGVar2 = (GGLKHCAIGDI_o *)0x0;
    thunk_FUN_01c20e04(ppGVar2,0);
    JDEFJPHCNMM = Nekki_SF2_GUI_Shop_Forge_ForgePanel__NMPMNEEHKEL(__this,NDLOGJOGFCA,method);
    __this_00 = (__this->fields)._TableView;
    if (__this_00 != (Nekki_SF2_GUI_TableView_o *)0x0) {
      Nekki_SF2_GUI_TableView__ScrollToCell(__this_00,JDEFJPHCNMM,0.0,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  ppGVar2 = &(__this->fields).DMAFCPPFLEN;
  *ppGVar2 = NDLOGJOGFCA;
  thunk_FUN_01c20e04(ppGVar2,NDLOGJOGFCA);
  return;
}

