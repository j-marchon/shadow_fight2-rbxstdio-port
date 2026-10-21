// Nekki.SF2.GUI.Menu.MenuExpPanel$$Update @ RVA 0x32FC544

void Nekki_SF2_GUI_Menu_MenuExpPanel__Update
               (Nekki_SF2_GUI_Menu_MenuExpPanel_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *method_00;
  int iVar2;
  
  iVar2 = (__this->fields).HNMHPGBJCPN;
  if (iVar2 < 1) {
    bVar1 = UnityEngine_Input__get_anyKeyDown((MethodInfo *)0x0);
                    /* try { // try from 033fc560 to 034fc56b has its CatchHandler @ 033fc5d0 */
    if (bVar1) {
                    /* try { // try from 033fc56c to 034fc5af has its CatchHandler @ 033fc364 */
      Nekki_SF2_GUI_Menu_MenuExpPanel__HideHint(__this,method_00);
      return;
    }
    iVar2 = (__this->fields).HNMHPGBJCPN;
  }
  (__this->fields).HNMHPGBJCPN = iVar2 + -1;
  return;
}

