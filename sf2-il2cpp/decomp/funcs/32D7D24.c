// Nekki.SF2.GUI.Pvp.PhaseBox$$set_CurrentPhase @ RVA 0x32D7D24

void Nekki_SF2_GUI_Pvp_PhaseBox__set_CurrentPhase
               (Nekki_SF2_GUI_Pvp_PhaseBox_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  uint uVar1;
  Nekki_SF2_GUI_Pvp_PhaseItem_o *pNVar2;
  Nekki_SF2_GUI_Pvp_PhaseItem_array *pNVar3;
  
  pNVar3 = (__this->fields)._phases;
  if (pNVar3 != (Nekki_SF2_GUI_Pvp_PhaseItem_array *)0x0) {
    uVar1 = (__this->fields).EMDCCMNONEK;
    if ((uint)pNVar3->max_length <= uVar1) {
LAB_033d7da0:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    pNVar2 = pNVar3->m_Items[(int)uVar1];
    if (pNVar2 != (Nekki_SF2_GUI_Pvp_PhaseItem_o *)0x0) {
      (*(pNVar2->klass->vtable)._5_Hide.methodPtr)(pNVar2,(pNVar2->klass->vtable)._5_Hide.method);
      pNVar3 = (__this->fields)._phases;
      (__this->fields).EMDCCMNONEK = CJNHFNHJHPE;
      if (pNVar3 != (Nekki_SF2_GUI_Pvp_PhaseItem_array *)0x0) {
        if ((uint)pNVar3->max_length <= (uint)CJNHFNHJHPE) goto LAB_033d7da0;
        pNVar2 = pNVar3->m_Items[CJNHFNHJHPE];
        if (pNVar2 != (Nekki_SF2_GUI_Pvp_PhaseItem_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x033d7d98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(pNVar2->klass->vtable)._6_Show.methodPtr)
                    (pNVar2,(pNVar2->klass->vtable)._6_Show.method);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

