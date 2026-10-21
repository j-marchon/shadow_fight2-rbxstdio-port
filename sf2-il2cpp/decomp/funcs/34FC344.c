// Nekki.SF2.GUI.Common.Hints.HintGroup$$AIJOGDFDDPB @ RVA 0x34FC344

void Nekki_SF2_GUI_Common_Hints_HintGroup__AIJOGDFDDPB
               (Nekki_SF2_GUI_Common_Hints_HintGroup_o *__this,MethodInfo *method)

{
  SFButton_o *pSVar1;
  
  pSVar1 = (__this->fields)._Button;
  (__this->fields).BBDACLMINDN = false;
  if (pSVar1 != (SFButton_o *)0x0) {
    SFButton__SetStateNormal(pSVar1,(MethodInfo *)0x0);
    pSVar1 = (__this->fields)._Button;
    if (pSVar1 != (SFButton_o *)0x0) {
      UnityEngine_UI_Selectable__set_interactable
                ((UnityEngine_UI_Selectable_o *)pSVar1,(__this->fields)._IsAnimationAvailable,
                 (MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 035fc378 to 036fc4a3 has its CatchHandler @ 035fc378
                       catch() { ... } // from try @ 035fc378 with catch @ 035fc378
                       catch() { ... } // from try @ 035fc5b8 with catch @ 035fc378
                       catch() { ... } // from try @ 035fc5ec with catch @ 035fc378
                       catch() { ... } // from try @ 035fc650 with catch @ 035fc378
                       catch() { ... } // from try @ 035fc6a4 with catch @ 035fc378
                       catch() { ... } // from try @ 035fc6d4 with catch @ 035fc378 */
  FUN_01bab8c8();
}

