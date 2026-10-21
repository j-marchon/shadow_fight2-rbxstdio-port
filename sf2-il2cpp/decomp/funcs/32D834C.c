// Nekki.SF2.GUI.Pvp.PhaseBox$$Free @ RVA 0x32D834C

void Nekki_SF2_GUI_Pvp_PhaseBox__Free(Nekki_SF2_GUI_Pvp_PhaseBox_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Pvp_PhaseWeapon_o *pNVar1;
  Nekki_SF2_GUI_Pvp_PhasePerks_o *pNVar2;
  Nekki_SF2_GUI_Pvp_PhaseCharacter_o *pNVar3;
  MethodInfo *method_00;
  MethodInfo *method_01;
  
                    /* try { // try from 033d834c to 034d83db has its CatchHandler @ 033d834c
                       catch() { ... } // from try @ 033d834c with catch @ 033d834c
                       catch() { ... } // from try @ 033d83fc with catch @ 033d834c
                       catch() { ... } // from try @ 033d8420 with catch @ 033d834c
                       catch() { ... } // from try @ 033d8448 with catch @ 033d834c
                       catch() { ... } // from try @ 033d8488 with catch @ 033d834c */
  pNVar1 = Nekki_SF2_GUI_Pvp_PhaseBox__GJANJPLLOPH(__this,method);
  if (pNVar1 != (Nekki_SF2_GUI_Pvp_PhaseWeapon_o *)0x0) {
    (*(pNVar1->klass->vtable)._7_Free.methodPtr)(pNVar1,(pNVar1->klass->vtable)._7_Free.method);
    pNVar2 = Nekki_SF2_GUI_Pvp_PhaseBox__CJODABFPHPB(__this,method_00);
    if (pNVar2 != (Nekki_SF2_GUI_Pvp_PhasePerks_o *)0x0) {
      (*(pNVar2->klass->vtable)._7_Free.methodPtr)(pNVar2,(pNVar2->klass->vtable)._7_Free.method);
      pNVar3 = Nekki_SF2_GUI_Pvp_PhaseBox__DBKNMAJHPAN(__this,method_01);
      if (pNVar3 != (Nekki_SF2_GUI_Pvp_PhaseCharacter_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x033d8398. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(pNVar3->klass->vtable)._7_Free.methodPtr)(pNVar3,(pNVar3->klass->vtable)._7_Free.method);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

