// Nekki.SF2.GUI.Fight.RewardPanel.<>c$$EGHJBDMDBBE @ RVA 0x33221EC

bool Nekki_SF2_GUI_Fight_RewardPanel_<>c__EGHJBDMDBBE
               (Nekki_SF2_GUI_Fight_RewardPanel___c_o *__this,PIADCKMDDAK_o *item,MethodInfo *method
               )

{
  bool bVar1;
  System_String_o *__this_00;
  
                    /* catch() { ... } // from try @ 034221d4 with catch @ 03422200 */
  if ((DAT_0456784e & 1) == 0) {
    __this = (Nekki_SF2_GUI_Fight_RewardPanel___c_o *)FUN_01bab630(&StringLiteral_12304);
                    /* try { // try from 03422210 to 03522217 has its CatchHandler @ 0342222c */
    DAT_0456784e = 1;
  }
                    /* try { // try from 03422218 to 03522223 has its CatchHandler @ 034220b4 */
  if ((item != (PIADCKMDDAK_o *)0x0) &&
     (__this_00 = (item->fields).GJNOEAKNMOG, __this = (Nekki_SF2_GUI_Fight_RewardPanel___c_o *)0x0,
     __this_00 != (System_String_o *)0x0)) {
                    /* try { // try from 03422224 to 0352222b has its CatchHandler @ 0342222c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03422210 with catch @ 0342222c
                       catch(type#2 @ 00000000) { ... } // from try @ 03422224 with catch @ 0342222c
                        */
    bVar1 = System_String__StartsWith(__this_00,StringLiteral_12304,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}

