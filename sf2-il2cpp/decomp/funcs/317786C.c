// Nekki.SF2.GUI.Pvp.SelectModule$$SetSecondPlayerAvailable @ RVA 0x317786C

void Nekki_SF2_GUI_Pvp_SelectModule__SetSecondPlayerAvailable
               (Nekki_SF2_GUI_Pvp_SelectModule_o *__this,bool EHJMCCFLOLK,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Pvp_PlayersSelectTable_o *__this_00;
  
  bVar1 = Nekki_SF2_GUI_UIModule__get_IsActive((Nekki_SF2_GUI_UIModule_o *)__this,(MethodInfo *)0x0)
  ;
  if (!bVar1) {
    return;
  }
  __this_00 = (__this->fields)._selectTable;
  if (__this_00 != (Nekki_SF2_GUI_Pvp_PlayersSelectTable_o *)0x0) {
    Nekki_SF2_GUI_Pvp_PlayersSelectTable__SetPlayerActive(__this_00,1,EHJMCCFLOLK,(MethodInfo *)0x0)
    ;
    (*(__this->klass->vtable)._11_PCJCDPOMJJN.methodPtr)
              (__this,0,0,(__this->klass->vtable)._11_PCJCDPOMJJN.method);
                    /* WARNING: Could not recover jumptable at 0x032778d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(__this->klass->vtable)._11_PCJCDPOMJJN.methodPtr)
              (__this,1,0,(__this->klass->vtable)._11_PCJCDPOMJJN.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

