// Nekki.SF2.GUI.Shop.ItemsPanel$$get_IsEmpty @ RVA 0x310E580

bool Nekki_SF2_GUI_Shop_ItemsPanel__get_IsEmpty
               (Nekki_SF2_GUI_Shop_ItemsPanel_o *__this,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_04566566 & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_OBECCOPBADO<HOOAAGABMBL>__);
    DAT_04566566 = 1;
  }
  bVar1 = DJNBJHPDKDP__OBECCOPBADO<object>
                    ((System_Collections_Generic_List_T__o *)(__this->fields).BAADKBDJJPJ,
                     Method_DJNBJHPDKDP_OBECCOPBADO<HOOAAGABMBL>__);
  return bVar1;
}

