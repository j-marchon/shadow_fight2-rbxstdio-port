// Nekki.SF2.GUI.Shop.ShopScene$$GoToSlider @ RVA 0x3432304

void Nekki_SF2_GUI_Shop_ShopScene__GoToSlider
               (Nekki_SF2_GUI_Shop_ShopScene_o *__this,int32_t JOIKOKOCFGP,bool MGFBPKIBNJI,
               MethodInfo *method)

{
  int32_t CJNHFNHJHPE;
  Nekki_SF2_GUI_Shop_ShopBottomPanel_o *__this_00;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)(ulong)MGFBPKIBNJI;
  if ((DAT_045681a6 & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Common_BottomPanel<POIJDKLHHKO>_ScrollToItem__);
    DAT_045681a6 = 1;
  }
  CJNHFNHJHPE = BKBFFEJEBAI__PPGMDDODKFG(JOIKOKOCFGP,(MethodInfo *)0x0);
  Nekki_SF2_GUI_Shop_ShopScene__set_CurrentSection(__this,CJNHFNHJHPE,method_00);
  if (MGFBPKIBNJI) {
    __this_00 = (__this->fields).GJIPOBCNEPG;
    if (__this_00 != (Nekki_SF2_GUI_Shop_ShopBottomPanel_o *)0x0) {
      Nekki_SF2_GUI_Common_BottomPanel<Int32Enum>__ScrollToItem
                ((Nekki_SF2_GUI_Common_BottomPanel_T__o *)__this_00,(__this->fields).AIAODGKGPEI,
                 Method_Nekki_SF2_GUI_Common_BottomPanel<POIJDKLHHKO>_ScrollToItem__);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

