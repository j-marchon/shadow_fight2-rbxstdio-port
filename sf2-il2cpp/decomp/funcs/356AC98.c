// Nekki.SF2.GUI.Menu.MainMenu$$UpdateCurrentButton @ RVA 0x356AC98

void Nekki_SF2_GUI_Menu_MainMenu__UpdateCurrentButton
               (Nekki_SF2_GUI_Menu_MainMenu_o *__this,int32_t KGBNBLGMCBF,MethodInfo *method)

{
  Nekki_SF2_GUI_LabelAlias_o *BECCOGAMKJL;
  Nekki_SF2_GUI_LabelAlias_o **ppNVar1;
  
  if ((__this->fields).super.__IsReleased_k__BackingField != false) {
    return;
  }
  BECCOGAMKJL = (Nekki_SF2_GUI_LabelAlias_o *)0x0;
  switch(KGBNBLGMCBF) {
  case 3:
    ppNVar1 = &(__this->fields)._menuLabel;
    break;
  case 4:
    ppNVar1 = (Nekki_SF2_GUI_LabelAlias_o **)&(__this->fields).btnMap;
    break;
  case 5:
    ppNVar1 = (Nekki_SF2_GUI_LabelAlias_o **)&(__this->fields).btnDojo;
    break;
  default:
    goto switchD_0366acc8_caseD_6;
  case 7:
    ppNVar1 = (Nekki_SF2_GUI_LabelAlias_o **)&(__this->fields).btnShop;
  }
  BECCOGAMKJL = *ppNVar1;
switchD_0366acc8_caseD_6:
  Nekki_SF2_GUI_Menu_MainMenu__SetCurrentButton
            (__this,(Nekki_SF2_GUI_Common_SectionButton_o *)BECCOGAMKJL,method);
  return;
}

