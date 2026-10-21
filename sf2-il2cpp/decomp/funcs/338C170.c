// Nekki.SF2.GUI.Menu.MenuScroll$$OnMenuBtnClick @ RVA 0x338C170

void Nekki_SF2_GUI_Menu_MenuScroll__OnMenuBtnClick
               (Nekki_SF2_GUI_Menu_MenuScroll_o *__this,MethodInfo *method)

{
  float LNEPMKENPBG;
  
  if ((__this->fields).KDBFJLCCJHC == false) {
    LNEPMKENPBG = (__this->fields).FDFCNIMNHFK;
    (__this->fields).KDBFJLCCJHC = true;
  }
  else {
    (__this->fields).KDBFJLCCJHC = false;
    LNEPMKENPBG = 0.0;
  }
  Nekki_SF2_GUI_Menu_MenuScroll__AEEDBFCIFIA(__this,LNEPMKENPBG,0.3,method);
  EDFDANKEBGF__EBPFDOEIBEH(1.0,(MethodInfo *)0x0);
  return;
}

