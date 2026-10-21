// Nekki.SF2.GUI.Fight.RewardPanel.<>c$$FHAKJHLHLLC @ RVA 0x3322244

bool Nekki_SF2_GUI_Fight_RewardPanel_<>c__FHAKJHLHLLC
               (Nekki_SF2_GUI_Fight_RewardPanel___c_o *__this,PIADCKMDDAK_o *item,MethodInfo *method
               )

{
  bool bVar1;
  System_String_o *__this_00;
  
  if ((DAT_0456784f & 1) == 0) {
    __this = (Nekki_SF2_GUI_Fight_RewardPanel___c_o *)FUN_01bab630(&StringLiteral_6544);
    DAT_0456784f = 1;
  }
  if ((item != (PIADCKMDDAK_o *)0x0) &&
     (__this_00 = (item->fields).GJNOEAKNMOG, __this = (Nekki_SF2_GUI_Fight_RewardPanel___c_o *)0x0,
     __this_00 != (System_String_o *)0x0)) {
    bVar1 = System_String__StartsWith(__this_00,StringLiteral_6544,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}

