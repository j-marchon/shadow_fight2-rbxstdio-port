// Nekki.SF2.GUI.Fight.TextAndMoneyLine.CIBOFJKMAAA$$COHHMJJFAAD @ RVA 0x3151074

void Nekki_SF2_GUI_Fight_TextAndMoneyLine_CIBOFJKMAAA__COHHMJJFAAD
               (Nekki_SF2_GUI_Fight_TextAndMoneyLine_CIBOFJKMAAA_o *__this,int64_t x,
               MethodInfo *method)

{
  Nekki_SF2_GUI_Fight_TextAndMoneyLine_o *pNVar1;
  int64_t *__this_00;
  System_String_o *CJNHFNHJHPE;
  Nekki_SF2_GUI_Fight_IconAndText_o *__this_01;
  
  if ((DAT_04566809 & 1) == 0) {
    FUN_01bab630(&StringLiteral_9281);
    DAT_04566809 = 1;
  }
  pNVar1 = (__this->fields).__4__this;
  if (pNVar1 != (Nekki_SF2_GUI_Fight_TextAndMoneyLine_o *)0x0) {
    __this_00 = &(pNVar1->fields).BJGBAECJNAD;
    *__this_00 = x;
    __this_01 = (pNVar1->fields).rubyCount;
    CJNHFNHJHPE = System_Int64__ToString
                            ((int64_t)__this_00,StringLiteral_9281,
                             (System_IFormatProvider_o *)(__this->fields).f,(MethodInfo *)0x0);
    if (__this_01 != (Nekki_SF2_GUI_Fight_IconAndText_o *)0x0) {
      Nekki_SF2_GUI_Fight_IconAndText__SetText(__this_01,CJNHFNHJHPE,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

