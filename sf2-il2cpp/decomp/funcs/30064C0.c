// Nekki.SF2.GUI.Shop.InfoPanelContent$$AOHAKEEHGKG @ RVA 0x30064C0

void Nekki_SF2_GUI_Shop_InfoPanelContent__AOHAKEEHGKG
               (Nekki_SF2_GUI_Shop_InfoPanelContent_o *__this,IconLabelButton_o *BECCOGAMKJL,
               int64_t PGGOPJDLPDI,UnityEngine_Color_o EFJKPCADGJH,MethodInfo *method)

{
  System_String_o *EHNFGMGKCHO;
  MethodInfo *in_x4;
  
  if ((DAT_04565b4c & 1) == 0) {
    FUN_01bab630(&BJFCCEEPHOF_TypeInfo);
    DAT_04565b4c = 1;
  }
  if (0 < PGGOPJDLPDI) {
    if ((BJFCCEEPHOF_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    EHNFGMGKCHO = BJFCCEEPHOF__POMAAOILGAL(PGGOPJDLPDI,(MethodInfo *)0x0);
    Nekki_SF2_GUI_Shop_InfoPanelContent__AOHAKEEHGKG
              (__this,BECCOGAMKJL,EHNFGMGKCHO,EFJKPCADGJH,false,in_x4);
    return;
  }
  return;
}

