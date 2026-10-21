// Nekki.SF2.GUI.Menu.MenuExpPanel$$HideHint @ RVA 0x32FC1B8

void Nekki_SF2_GUI_Menu_MenuExpPanel__HideHint
               (Nekki_SF2_GUI_Menu_MenuExpPanel_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  
                    /* try { // try from 033fc1c0 to 034fc1cb has its CatchHandler @ 033fc2d0 */
  __this_00 = (__this->fields)._hintRootGO;
  (__this->fields).HNMHPGBJCPN = 0;
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
                    /* try { // try from 033fc1cc to 034fc2a3 has its CatchHandler @ 033fbeec */
    UnityEngine_GameObject__SetActive(__this_00,false,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

