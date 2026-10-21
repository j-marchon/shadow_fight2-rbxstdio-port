// Nekki.SF2.GUI.Fight.IconAndText$$SetBestFit @ RVA 0x3519D20

void Nekki_SF2_GUI_Fight_IconAndText__SetBestFit
               (Nekki_SF2_GUI_Fight_IconAndText_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  Nekki_SF2_GUI_LabelAliasLE_o *__this_00;
  
  __this_00 = (__this->fields).text;
                    /* try { // try from 03619d28 to 03719dbf has its CatchHandler @ 03619d28
                       catch() { ... } // from try @ 03619d28 with catch @ 03619d28
                       catch() { ... } // from try @ 03619dec with catch @ 03619d28
                       catch() { ... } // from try @ 03619e2c with catch @ 03619d28
                       catch() { ... } // from try @ 03619e54 with catch @ 03619d28
                       catch() { ... } // from try @ 03619e90 with catch @ 03619d28 */
  if (__this_00 != (Nekki_SF2_GUI_LabelAliasLE_o *)0x0) {
    UnityEngine_UI_Text__set_resizeTextForBestFit
              ((UnityEngine_UI_Text_o *)__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

