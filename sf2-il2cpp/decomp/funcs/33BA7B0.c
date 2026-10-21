// Nekki.SF2.GUI.Profile.PerkSubItem$$SetLock @ RVA 0x33BA7B0

void Nekki_SF2_GUI_Profile_PerkSubItem__SetLock
               (Nekki_SF2_GUI_Profile_PerkSubItem_o *__this,bool NOLCCAPIBLL,MethodInfo *method)

{
  bool NOLCCAPIBLL_00;
  JLGNBOILFLN_o *pJVar1;
  
  (__this->fields).MBIMMBFKMJJ = NOLCCAPIBLL;
  if (NOLCCAPIBLL) {
    NOLCCAPIBLL_00 = true;
  }
  else {
    pJVar1 = (__this->fields)._CGEGGOPIPHH_k__BackingField;
    if (pJVar1 == (JLGNBOILFLN_o *)0x0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034ba7d4 with catch @ 034ba7dc
                        */
      NOLCCAPIBLL_00 = false;
    }
    else {
      NOLCCAPIBLL_00 = (pJVar1->fields).OIKLOAGFFGO == 3;
                    /* try { // try from 034ba7d4 to 035ba7d7 has its CatchHandler @ 034ba7dc */
                    /* try { // try from 034ba7d8 to 035ba7fb has its CatchHandler @ 034ba700 */
    }
  }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034ba7a0 with catch @ 034ba7e0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034ba78c with catch @ 034ba7e4
                        */
  Nekki_SF2_GUI_Profile_SubItem__SetLock
            ((Nekki_SF2_GUI_Profile_SubItem_o *)__this,NOLCCAPIBLL_00,(MethodInfo *)0x0);
  return;
}

