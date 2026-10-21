// Nekki.SF2.GUI.Fight.TextAndMoneyLine.CIBOFJKMAAA$$JFODEOJOHGB @ RVA 0x3151010

void Nekki_SF2_GUI_Fight_TextAndMoneyLine_CIBOFJKMAAA__JFODEOJOHGB
               (Nekki_SF2_GUI_Fight_TextAndMoneyLine_CIBOFJKMAAA_o *__this,int64_t x,
               MethodInfo *method)

{
  System_String_o *CJNHFNHJHPE;
  Nekki_SF2_GUI_Fight_TextAndMoneyLine_o *pNVar1;
  System_Func_long__string__o *pSVar2;
  Nekki_SF2_GUI_Fight_IconAndText_o *__this_00;
  
  pNVar1 = (__this->fields).__4__this;
  if (pNVar1 != (Nekki_SF2_GUI_Fight_TextAndMoneyLine_o *)0x0) {
    pSVar2 = (pNVar1->fields).BHBICCNLODE;
    (pNVar1->fields).PGGDJIGFIHK = x;
    if (pSVar2 != (System_Func_long__string__o *)0x0) {
      __this_00 = (pNVar1->fields).moneyCount;
      CJNHFNHJHPE = (System_String_o *)
                    (*(code *)(pSVar2->fields).super.super.invoke_impl)
                              ((pSVar2->fields).super.super.method_code,x,
                               (pSVar2->fields).super.super.method);
      if (__this_00 != (Nekki_SF2_GUI_Fight_IconAndText_o *)0x0) {
        Nekki_SF2_GUI_Fight_IconAndText__SetText(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

