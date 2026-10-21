// Nekki.SF2.GUI.Pvp.LocationSelectModule$$GetSprite @ RVA 0x31ACB8C

System_String_o *
Nekki_SF2_GUI_Pvp_LocationSelectModule__GetSprite
          (Nekki_SF2_GUI_Pvp_LocationSelectModule_o *__this,System_String_o *HHBMLOFBDLF,
          MethodInfo *method)

{
  uint uVar1;
  bool bVar2;
  System_String_o *__this_00;
  JFMLOEMEKLI_array *pJVar3;
  uint uVar4;
  JFMLOEMEKLI_o *pJVar5;
  
                    /* catch() { ... } // from try @ 032ac8f8 with catch @ 032acb8c */
                    /* catch() { ... } // from try @ 032ac89c with catch @ 032acb90 */
                    /* try { // try from 032acbac to 033acbaf has its CatchHandler @ 032acbbc */
  while( true ) {
    __this_00 = HHBMLOFBDLF;
                    /* catch() { ... } // from try @ 032acbac with catch @ 032acbbc */
    if ((DAT_04566b53 & 1) == 0) {
      FUN_01bab630(&StringLiteral_20433);
      DAT_04566b53 = 1;
    }
    pJVar3 = (__this->fields).DLCCJFCKAJL;
    if (pJVar3 == (JFMLOEMEKLI_array *)0x0) break;
    uVar1 = (uint)pJVar3->max_length;
    HHBMLOFBDLF = StringLiteral_20433;
    if (0 < (int)uVar1) {
      uVar4 = 0;
      do {
        if (uVar1 <= uVar4) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8d0();
        }
        pJVar5 = pJVar3->m_Items[(int)uVar4];
        if ((pJVar5 == (JFMLOEMEKLI_o *)0x0) || (__this_00 == (System_String_o *)0x0))
        goto LAB_032acc44;
                    /* try { // try from 032acbfc to 033acc23 has its CatchHandler @ 032acc38 */
        bVar2 = System_String__Equals(__this_00,(pJVar5->fields).PKJEMIDJPAG,(MethodInfo *)0x0);
        if (bVar2) {
                    /* try { // try from 032acc30 to 033acc37 has its CatchHandler @ 032acc38 */
                    /* catch() { ... } // from try @ 032acbfc with catch @ 032acc38
                       catch() { ... } // from try @ 032acc30 with catch @ 032acc38 */
          return (pJVar5->fields).DGGHNFBCNGI;
        }
        uVar1 = (uint)pJVar3->max_length;
        uVar4 = uVar4 + 1;
        HHBMLOFBDLF = StringLiteral_20433;
      } while ((int)uVar4 < (int)uVar1);
    }
  }
LAB_032acc44:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

