// Nekki.SF2.GUI.Dialogs.Raids.Clans.BattleRaidSlider$$LNAECHIOFNK @ RVA 0x31C7044

void Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidSlider__LNAECHIOFNK
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidSlider_o *__this,bool CJNHFNHJHPE,
               MethodInfo *method)

{
  Nekki_SF2_GUI_ResolutionButton_o *pNVar1;
  UnityEngine_GameObject_o *pUVar2;
  Nekki_SF2_GUI_Scripts_CheckBox_o *__this_00;
  
                    /* try { // try from 032c7050 to 033c7057 has its CatchHandler @ 032c71e8 */
  pNVar1 = (__this->fields)._slideForward;
                    /* try { // try from 032c7058 to 033c7067 has its CatchHandler @ 032c71c8 */
  if ((pNVar1 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) &&
     (pUVar2 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pNVar1,(MethodInfo *)0x0),
     pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
                    /* try { // try from 032c7070 to 033c7077 has its CatchHandler @ 032c71e4 */
    UnityEngine_GameObject__SetActive(pUVar2,CJNHFNHJHPE,(MethodInfo *)0x0);
    pNVar1 = (__this->fields)._slideBackward;
    if ((pNVar1 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) &&
       (pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar1,(MethodInfo *)0x0),
       pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
                    /* try { // try from 032c7088 to 033c708f has its CatchHandler @ 032c71c4 */
                    /* try { // try from 032c7094 to 033c709b has its CatchHandler @ 032c71d8 */
      UnityEngine_GameObject__SetActive(pUVar2,CJNHFNHJHPE,(MethodInfo *)0x0);
      __this_00 = (__this->fields).AAGPHDAMKOI;
      if (__this_00 != (Nekki_SF2_GUI_Scripts_CheckBox_o *)0x0) {
                    /* try { // try from 032c70ac to 033c70b3 has its CatchHandler @ 032c71dc */
        Nekki_SF2_GUI_Scripts_CheckBox__set_interactable(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 032c70b4 to 033c70c3 has its CatchHandler @ 032c71ec */
  FUN_01bab8c8();
}

