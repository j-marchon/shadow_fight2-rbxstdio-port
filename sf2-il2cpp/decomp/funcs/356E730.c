// Nekki.SF2.GUI.Menu.MainMenu$$Update @ RVA 0x356E730

void Nekki_SF2_GUI_Menu_MainMenu__Update(Nekki_SF2_GUI_Menu_MainMenu_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  bool bVar2;
  MethodInfo *method_00;
  
                    /* try { // try from 0366e738 to 0376e73f has its CatchHandler @ 03672c04 */
  iVar1 = (__this->fields).BIMMDBGIMFN;
  bVar2 = Nekki_SF2_GUI_Menu_MainMenu__DNLOKLACJHA(__this,method);
                    /* try { // try from 0366e74c to 0376e753 has its CatchHandler @ 03672c00 */
  if ((bool)(char)iVar1 == bVar2) {
    return;
  }
                    /* try { // try from 0366e764 to 0376e76b has its CatchHandler @ 03672bfc */
  Nekki_SF2_GUI_Menu_MainMenu__UpdateMenu(__this,method_00);
  return;
}

