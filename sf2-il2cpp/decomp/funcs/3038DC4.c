// LJNJDFEAIOH$$LKBMEILOMKO @ RVA 0x3038DC4

void LJNJDFEAIOH__LKBMEILOMKO(LJNJDFEAIOH_o *__this,KEFHDOHHHML_o *IDCGLBOIAFJ,MethodInfo *method)

{
  bool bVar1;
  NODLJPNGNBG_o *pNVar2;
  CHDGOFBHAFI_o *__this_00;
  MethodInfo *method_00;
  Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *pNVar3;
  
                    /* try { // try from 03138dd8 to 03238de7 has its CatchHandler @ 03138de8 */
  if ((DAT_04565d63 & 1) == 0) {
                    /* catch() { ... } // from try @ 03138d94 with catch @ 03138de8
                       catch() { ... } // from try @ 03138dd8 with catch @ 03138de8 */
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
                    /* try { // try from 03138dec to 03238def has its CatchHandler @ 03138df8 */
                    /* try { // try from 03138df0 to 03238dfb has its CatchHandler @ 03138c34 */
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03138dec with catch @ 03138df8
                        */
    FUN_01bab630(&Method_KEFHDOHHHML_PFNEPJAFEDF<NODLJPNGNBG>__);
    FUN_01bab630(&StringLiteral_10987);
    DAT_04565d63 = 1;
  }
  if (IDCGLBOIAFJ != (KEFHDOHHHML_o *)0x0) {
    bVar1 = KEFHDOHHHML__BOJJBGPIKDP(IDCGLBOIAFJ,(MethodInfo *)0x0);
    if (!bVar1) {
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Debug__LogError(StringLiteral_10987,(MethodInfo *)0x0);
      return;
    }
    pNVar3 = (__this->fields).PDEAGAFHDFI;
    if (pNVar3 != (Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *)0x0) {
      if ((pNVar3->fields)._BOGAKJOFOEK_k__BackingField != false) {
        return;
      }
      pNVar2 = (NODLJPNGNBG_o *)
               KEFHDOHHHML__PFNEPJAFEDF<object>
                         (IDCGLBOIAFJ,Method_KEFHDOHHHML_PFNEPJAFEDF<NODLJPNGNBG>__);
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo);
      }
      __this_00 = HJPEKDOPBHN__FKBPIBLMJEF((MethodInfo *)0x0);
      if (__this_00 != (CHDGOFBHAFI_o *)0x0) {
        method_00 = (MethodInfo *)0x0;
        pNVar2 = CHDGOFBHAFI__GKJIBPANAGN(__this_00,pNVar2,(MethodInfo *)0x0);
        LJNJDFEAIOH__KBAHEGDFCBI(__this,pNVar2,method_00);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

