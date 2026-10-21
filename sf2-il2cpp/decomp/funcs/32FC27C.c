// Nekki.SF2.GUI.Menu.MenuExpPanel$$ShowHint @ RVA 0x32FC27C

void Nekki_SF2_GUI_Menu_MenuExpPanel__ShowHint
               (Nekki_SF2_GUI_Menu_MenuExpPanel_o *__this,System_String_o *EHNFGMGKCHO,
               MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  Nekki_SF2_GUI_LabelAlias_o *pNVar1;
  
  __this_00 = (__this->fields)._hintRootGO;
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__SetActive(__this_00,true,(MethodInfo *)0x0);
                    /* try { // try from 033fc2a4 to 034fc2a7 has its CatchHandler @ 033fc2f8 */
    pNVar1 = (__this->fields)._hintText;
                    /* try { // try from 033fc2a8 to 034fc2ab has its CatchHandler @ 033fc2e4 */
    if (pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    /* try { // try from 033fc2ac to 034fc2af has its CatchHandler @ 033fbeec */
                    /* try { // try from 033fc2b0 to 034fc2b3 has its CatchHandler @ 033fc2c8 */
                    /* try { // try from 033fc2b4 to 034fc2b7 has its CatchHandler @ 033fc2c4 */
                    /* catch() { ... } // from try @ 033fc150 with catch @ 033fc2b8
                       try { // try from 033fc2b8 to 034fc317 has its CatchHandler @ 033fbeec */
                    /* catch() { ... } // from try @ 033fc128 with catch @ 033fc2bc */
      (*(pNVar1->klass->vtable)._75_set_text.methodPtr)
                (pNVar1,EHNFGMGKCHO,(pNVar1->klass->vtable)._75_set_text.method);
                    /* catch() { ... } // from try @ 033fc188 with catch @ 033fc2c0 */
      (__this->fields).HNMHPGBJCPN = 1;
                    /* catch() { ... } // from try @ 033fc2b4 with catch @ 033fc2c4 */
                    /* catch() { ... } // from try @ 033fc2b0 with catch @ 033fc2c8 */
                    /* catch() { ... } // from try @ 033fc130 with catch @ 033fc2cc */
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 033fc1c0 with catch @ 033fc2d0 */
  FUN_01bab8c8();
}

