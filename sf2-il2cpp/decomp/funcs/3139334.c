// NJNCPNBIPCD$$HJNOLAEOPJF @ RVA 0x3139334

void NJNCPNBIPCD__HJNOLAEOPJF(NJNCPNBIPCD_o *__this,System_String_o *EHKEOHNBLCK,MethodInfo *method)

{
  Nekki_Utils_DetailedLog_GFMLMFADEGC_array *BBBLOLJAMJP;
  
  if ((DAT_0456671f & 1) == 0) {
    FUN_01bab630(&Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo);
    FUN_01bab630(&NJNCPNBIPCD_TypeInfo);
    FUN_01bab630(&StringLiteral_6447);
    DAT_0456671f = 1;
  }
  BBBLOLJAMJP = (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)
                FUN_01bab718(Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo,1);
  if (BBBLOLJAMJP != (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)0x0) {
    if ((int)BBBLOLJAMJP->max_length != 0) {
                    /* try { // try from 0323939c to 033393a3 has its CatchHandler @ 0323940c */
      BBBLOLJAMJP->m_Items[0] = 8;
      if (EHKEOHNBLCK == (System_String_o *)0x0) {
                    /* try { // try from 032393c0 to 033393f3 has its CatchHandler @ 0323928c */
        Nekki_Utils_DetailedLog__Warning(StringLiteral_6447,BBBLOLJAMJP,(MethodInfo *)0x0);
      }
      else {
                    /* try { // try from 032393b8 to 033393bf has its CatchHandler @ 03239408 */
        Nekki_Utils_DetailedLog__Error(EHKEOHNBLCK,BBBLOLJAMJP,(MethodInfo *)0x0);
      }
      UnityEngine_Time__set_timeScale(1.0,(MethodInfo *)0x0);
      if ((NJNCPNBIPCD_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
                    /* try { // try from 032393f4 to 033393f7 has its CatchHandler @ 03239404 */
                    /* try { // try from 032393f8 to 033393fb has its CatchHandler @ 03239400 */
      if (DAT_04566743 == '\0') {
                    /* try { // try from 032393fc to 03339423 has its CatchHandler @ 0323928c */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032393f8 with catch @ 03239400
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032393f4 with catch @ 03239404
                        */
        FUN_01bab630(&NJNCPNBIPCD_TypeInfo);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032393b8 with catch @ 03239408
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0323939c with catch @ 0323940c
                        */
        DAT_04566743 = '\x01';
      }
      if ((NJNCPNBIPCD_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
                    /* try { // try from 03239424 to 03339427 has its CatchHandler @ 03239450 */
                    /* try { // try from 03239428 to 0333945f has its CatchHandler @ 0323928c */
      NJNCPNBIPCD_TypeInfo->static_fields->_EGONDPGBNLJ_k__BackingField = false;
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8d0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

