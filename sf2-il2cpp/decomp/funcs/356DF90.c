// Nekki.SF2.GUI.Menu.MainMenu$$GetButtonFromScreen @ RVA 0x356DF90

Nekki_SF2_GUI_Common_SectionButton_o *
Nekki_SF2_GUI_Menu_MainMenu__GetButtonFromScreen
          (Nekki_SF2_GUI_Menu_MainMenu_o *__this,int32_t KGBNBLGMCBF,MethodInfo *method)

{
  Nekki_SF2_GUI_Common_SectionButton_o *pNVar1;
  
  if ((__this->fields).super.__IsReleased_k__BackingField != false) {
    return (Nekki_SF2_GUI_Common_SectionButton_o *)0x0;
  }
  pNVar1 = (Nekki_SF2_GUI_Common_SectionButton_o *)0x0;
                    /* try { // try from 0366dfb0 to 0376dfb7 has its CatchHandler @ 036731d8 */
                    /* try { // try from 0366dfc8 to 0376dfcf has its CatchHandler @ 036731d4 */
  switch(KGBNBLGMCBF) {
  case 3:
                    /* try { // try from 0366dfd0 to 0376dfdf has its CatchHandler @ 036731d0 */
    return (Nekki_SF2_GUI_Common_SectionButton_o *)(__this->fields)._menuLabel;
  case 4:
    return (__this->fields).btnMap;
  case 5:
    return (__this->fields).btnDojo;
  case 7:
    pNVar1 = (__this->fields).btnShop;
  }
  return pNVar1;
}

