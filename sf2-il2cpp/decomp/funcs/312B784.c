// Nekki.SF2.GUI.Fight.ExpAndMoneyLine$$OOFDHGENFIG @ RVA 0x312B784

void Nekki_SF2_GUI_Fight_ExpAndMoneyLine__OOFDHGENFIG
               (Nekki_SF2_GUI_Fight_ExpAndMoneyLine_o *__this,int64_t KEFILECBPMF,MethodInfo *method
               )

{
  int64_t *__this_00;
  System_String_o *CJNHFNHJHPE;
  Nekki_SF2_GUI_Fight_IconAndText_o *__this_01;
  
  __this_00 = &(__this->fields).LOGNCHJEHMN;
  *__this_00 = KEFILECBPMF;
  __this_01 = (__this->fields).exp;
  CJNHFNHJHPE = System_Int64__ToString((int64_t)__this_00,(MethodInfo *)0x0);
  if (__this_01 != (Nekki_SF2_GUI_Fight_IconAndText_o *)0x0) {
    Nekki_SF2_GUI_Fight_IconAndText__SetText(__this_01,CJNHFNHJHPE,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

