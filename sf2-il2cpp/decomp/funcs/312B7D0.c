// Nekki.SF2.GUI.Fight.ExpAndMoneyLine$$IGFOCPCDHJN @ RVA 0x312B7D0

void Nekki_SF2_GUI_Fight_ExpAndMoneyLine__IGFOCPCDHJN
               (Nekki_SF2_GUI_Fight_ExpAndMoneyLine_o *__this,int64_t KEFILECBPMF,MethodInfo *method
               )

{
  System_String_o *CJNHFNHJHPE;
  System_Func_long__string__o *pSVar1;
  Nekki_SF2_GUI_Fight_IconAndText_o *__this_00;
  
  pSVar1 = (__this->fields).BHBICCNLODE;
  (__this->fields).PGGDJIGFIHK = KEFILECBPMF;
  if (pSVar1 != (System_Func_long__string__o *)0x0) {
    __this_00 = (__this->fields).moneyCount;
    CJNHFNHJHPE = (System_String_o *)
                  (*(code *)(pSVar1->fields).super.super.invoke_impl)
                            ((pSVar1->fields).super.super.method_code,KEFILECBPMF,
                             (pSVar1->fields).super.super.method);
    if (__this_00 != (Nekki_SF2_GUI_Fight_IconAndText_o *)0x0) {
      Nekki_SF2_GUI_Fight_IconAndText__SetText(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

