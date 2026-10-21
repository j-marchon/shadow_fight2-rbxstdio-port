// Nekki.SF2.GUI.Dialogs.SettingsAdvancedDialog$$FJCMEBJDHPB @ RVA 0x358E84C

void Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog__FJCMEBJDHPB
               (Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog_o *__this,MethodInfo *method)

{
  bool value;
  int32_t GMGGINDHNPI;
  Nekki_SF2_GUI_ResolutionButton_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  
  __this_00 = (__this->fields).btnLocationResolution;
  if (__this_00 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) {
    __this_01 = UnityEngine_Component__get_gameObject
                          ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
                    /* try { // try from 0368e864 to 0378e867 has its CatchHandler @ 0368e8a8 */
                    /* try { // try from 0368e868 to 0378e86b has its CatchHandler @ 0368e89c */
    GMGGINDHNPI = GBCDMPDHIDJ__PAFKHAKEDFL((MethodInfo *)0x0);
                    /* try { // try from 0368e86c to 0378e86f has its CatchHandler @ 0368e8a8 */
                    /* try { // try from 0368e870 to 0378e873 has its CatchHandler @ 0368e898 */
    value = GNAFJMPJNKI__NCOIGMBGENK(GMGGINDHNPI,(MethodInfo *)0x0);
                    /* try { // try from 0368e874 to 0378e877 has its CatchHandler @ 0368e88c */
    if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
                    /* try { // try from 0368e878 to 0378e87b has its CatchHandler @ 0368e3f4 */
                    /* try { // try from 0368e87c to 0378e87f has its CatchHandler @ 0368e888 */
                    /* try { // try from 0368e880 to 0378e8bb has its CatchHandler @ 0368e3f4 */
                    /* catch() { ... } // from try @ 0368e87c with catch @ 0368e888 */
      UnityEngine_GameObject__SetActive(__this_01,value,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 0368e874 with catch @ 0368e88c */
  FUN_01bab8c8();
}

