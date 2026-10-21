// Nekki.SF2.GUI.Pvp.PvpScene$$HONKIIHKLOB @ RVA 0x321C9AC

void Nekki_SF2_GUI_Pvp_PvpScene__HONKIIHKLOB
               (Nekki_SF2_GUI_Pvp_PvpScene_o *__this,InControl_InputDevice_o *HBHPFKJMGCK,
               MethodInfo *method)

{
  bool CJNHFNHJHPE;
  Nekki_SF2_GUI_Pvp_LocationSelectModule_o *pNVar1;
  Nekki_SF2_GUI_Pvp_PlayerMenu_o *__this_00;
  Nekki_SF2_GUI_Pvp_CharacterSelectModule_o *pNVar2;
  
  CJNHFNHJHPE = Nekki_SF2_GUI_Pvp_PvpScene__ABEMBBBAFPP(__this,(MethodInfo *)HBHPFKJMGCK);
  pNVar2 = (__this->fields).MPPLJPIAGDK;
  if (pNVar2 != (Nekki_SF2_GUI_Pvp_CharacterSelectModule_o *)0x0) {
    (*(pNVar2->klass->vtable)._8_SetSecondPlayerAvailable.methodPtr)
              (pNVar2,(ulong)CJNHFNHJHPE,(pNVar2->klass->vtable)._8_SetSecondPlayerAvailable.method)
    ;
    pNVar1 = (__this->fields).IIBLCIFHCCF;
    if (pNVar1 != (Nekki_SF2_GUI_Pvp_LocationSelectModule_o *)0x0) {
      (*(pNVar1->klass->vtable)._8_SetSecondPlayerAvailable.methodPtr)
                (pNVar1,(ulong)CJNHFNHJHPE,
                 (pNVar1->klass->vtable)._8_SetSecondPlayerAvailable.method);
      __this_00 = (__this->fields).NNLCCJDPNBD;
      if (__this_00 != (Nekki_SF2_GUI_Pvp_PlayerMenu_o *)0x0) {
        Nekki_SF2_GUI_Pvp_PlayerMenu__SetSecondPlayerAvailable
                  (__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

