// Nekki.SF2.GUI.Shop.ShopScene.LEPDJNAKHII$$JGNLNAKOIBF @ RVA 0x343918C

void Nekki_SF2_GUI_Shop_ShopScene_LEPDJNAKHII__JGNLNAKOIBF
               (Nekki_SF2_GUI_Shop_ShopScene_LEPDJNAKHII_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Shop_PerksPanel_o *pNVar2;
  Nekki_SF2_GUI_Shop_ShopScene_EMIGONDJCIG_o *pNVar3;
  
  pNVar3 = (__this->fields).CS___8__locals1;
  if ((pNVar3 != (Nekki_SF2_GUI_Shop_ShopScene_EMIGONDJCIG_o *)0x0) &&
     (pNVar2 = (pNVar3->fields).p_perksPanel, pNVar2 != (Nekki_SF2_GUI_Shop_PerksPanel_o *)0x0)) {
    bVar1 = Nekki_SF2_GUI_Shop_PerksPanel__IsPerkHintShowed
                      (pNVar2,(__this->fields).perk,(MethodInfo *)0x0);
    if (bVar1) {
                    /* try { // try from 035391b4 to 036391bb has its CatchHandler @ 03539274 */
      return;
    }
    pNVar3 = (__this->fields).CS___8__locals1;
    if ((pNVar3 != (Nekki_SF2_GUI_Shop_ShopScene_EMIGONDJCIG_o *)0x0) &&
       (pNVar2 = (pNVar3->fields).p_perksPanel, pNVar2 != (Nekki_SF2_GUI_Shop_PerksPanel_o *)0x0)) {
                    /* try { // try from 035391d0 to 036391df has its CatchHandler @ 0353926c */
      Nekki_SF2_GUI_Shop_PerksPanel__ShowPerkHint
                (pNVar2,(__this->fields).perk,true,true,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

