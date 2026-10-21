// BANPLPOPIGI.EODFBIJMPNB$$MoveNext @ RVA 0x33C98D0

bool BANPLPOPIGI_EODFBIJMPNB__MoveNext(BANPLPOPIGI_EODFBIJMPNB_o *__this,MethodInfo *method)

{
  uint uVar1;
  int iVar2;
  int32_t iVar3;
  Nekki_SF2_GUI_SimpleScroll_o *pNVar4;
  UnityEngine_WaitForSecondsRealtime_o *__this_00;
  MethodInfo *method_00;
  MethodInfo *in_x2;
  System_Collections_Generic_List_RaidLeaguesLeaderboard_OIMJFDFDMMM__o *pSVar5;
  Nekki_SF2_GUI_Dialogs_Raids_RaidLeaderboardView_o *pNVar6;
  Il2CppObject **ppIVar7;
  BANPLPOPIGI_o *__this_01;
  UnityEngine_WaitForSecondsRealtime_o **ppUVar8;
  
  if ((DAT_04567e10 & 1) == 0) {
    FUN_01bab630(&LPGPNBGHDBD_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_List<RaidLeaguesLeaderboard_OIMJFDFDMMM>_get_Count__
                );
                    /* try { // try from 034c990c to 035c9913 has its CatchHandler @ 034c9a1c */
    FUN_01bab630(&UnityEngine_WaitForSecondsRealtime_TypeInfo);
    FUN_01bab630(&StringLiteral_13880);
                    /* try { // try from 034c9920 to 035c9933 has its CatchHandler @ 034c9a74 */
    DAT_04567e10 = 1;
  }
  iVar2 = (__this->fields).__1__state;
  __this_01 = (__this->fields).__4__this;
  if (iVar2 == 1) {
    (__this->fields).__1__state = -1;
    goto LAB_034c9a14;
  }
                    /* try { // try from 034c9934 to 035c9987 has its CatchHandler @ 034c9800 */
  if (iVar2 != 0) {
                    /* try { // try from 034c9ac8 to 035c9acf has its CatchHandler @ 034c9ae4 */
                    /* try { // try from 034c9ad0 to 035c9adb has its CatchHandler @ 034c9800 */
    return false;
  }
  (__this->fields).__1__state = -1;
  if (((__this_01 != (BANPLPOPIGI_o *)0x0) &&
      (pSVar5 = (__this_01->fields).JKBONEFMACI,
      pSVar5 != (System_Collections_Generic_List_RaidLeaguesLeaderboard_OIMJFDFDMMM__o *)0x0)) &&
     (pNVar4 = (__this_01->fields).PDHMLFAMNCO, pNVar4 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0)) {
    in_x2 = StringLiteral_13880;
    Nekki_SF2_GUI_SimpleScroll__ReservePool
              (pNVar4,(pSVar5->fields)._size,(System_String_o *)StringLiteral_13880,
               (MethodInfo *)0x0);
    if ((LPGPNBGHDBD_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
                    /* try { // try from 034c9988 to 035c998f has its CatchHandler @ 034c9a18 */
    iVar3 = LPGPNBGHDBD_TypeInfo->static_fields->FPAFPJONEFP;
    (__this->fields)._hasDelayed_5__4 = false;
    (__this->fields)._portion_5__2 = iVar3;
    (__this->fields)._counter_5__3 = 0;
                    /* try { // try from 034c999c to 035c99af has its CatchHandler @ 034c9a20 */
    __this_00 = (UnityEngine_WaitForSecondsRealtime_o *)
                thunk_FUN_01bda818(UnityEngine_WaitForSecondsRealtime_TypeInfo);
                    /* try { // try from 034c99b0 to 035c9a03 has its CatchHandler @ 034c9800 */
    UnityEngine_WaitForSecondsRealtime___ctor(__this_00,0.016666668,(MethodInfo *)0x0);
    ppUVar8 = &(__this->fields)._delay_5__5;
    *ppUVar8 = __this_00;
    thunk_FUN_01c20e04(ppUVar8,__this_00);
    method_00 = (MethodInfo *)0x0;
    (__this->fields)._row_5__6 = 0;
    while( true ) {
                    /* catch() { ... } // from try @ 034c999c with catch @ 034c9a20 */
      if ((__this_01 == (BANPLPOPIGI_o *)0x0) ||
         (pSVar5 = (__this_01->fields).JKBONEFMACI,
         pSVar5 == (System_Collections_Generic_List_RaidLeaguesLeaderboard_OIMJFDFDMMM__o *)0x0))
      goto LAB_034c9ad8;
      if ((pSVar5->fields)._size <= (int32_t)method_00) break;
      pNVar6 = (__this_01->fields).HJLDGHLININ;
      if (pNVar6 == (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaderboardView_o *)0x0) goto LAB_034c9ad8;
      if ((pNVar6->fields)._BOGAKJOFOEK_k__BackingField != false) {
                    /* catch() { ... } // from try @ 034c9920 with catch @ 034c9a74
                       try { // try from 034c9a74 to 035c9a8b has its CatchHandler @ 034c9800 */
        BANPLPOPIGI__JOIFLMJEEJK(__this_01,method_00);
        return false;
      }
      BANPLPOPIGI__BPCMAJCCAAL(__this_01,(int32_t)method_00,in_x2);
                    /* try { // try from 034c9a04 to 035c9a07 has its CatchHandler @ 034c9a14 */
      iVar2 = (__this->fields)._counter_5__3 + 1;
                    /* try { // try from 034c9a08 to 035c9a0b has its CatchHandler @ 034c9a10 */
                    /* try { // try from 034c9a0c to 035c9a37 has its CatchHandler @ 034c9800 */
      (__this->fields)._counter_5__3 = iVar2;
                    /* catch() { ... } // from try @ 034c9a08 with catch @ 034c9a10 */
      if ((__this->fields)._portion_5__2 <= iVar2) {
        (__this->fields)._hasDelayed_5__4 = true;
                    /* try { // try from 034c9a8c to 035c9a8f has its CatchHandler @ 034c9ab8 */
                    /* try { // try from 034c9a90 to 035c9ac7 has its CatchHandler @ 034c9800 */
        if ((LPGPNBGHDBD_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        iVar3 = LPGPNBGHDBD_TypeInfo->static_fields->FPAFPJONEFP;
        ppIVar7 = &(__this->fields).__2__current;
        *ppIVar7 = (Il2CppObject *)(__this->fields)._delay_5__5;
                    /* catch() { ... } // from try @ 034c9a8c with catch @ 034c9ab8 */
        (__this->fields)._portion_5__2 = iVar3;
        (__this->fields)._counter_5__3 = 0;
        thunk_FUN_01c20e04(ppIVar7);
        (__this->fields).__1__state = 1;
        return true;
      }
LAB_034c9a14:
                    /* catch() { ... } // from try @ 034c9a04 with catch @ 034c9a14 */
                    /* catch() { ... } // from try @ 034c9988 with catch @ 034c9a18 */
      uVar1 = (__this->fields)._row_5__6 + 1;
      method_00 = (MethodInfo *)(ulong)uVar1;
                    /* catch() { ... } // from try @ 034c990c with catch @ 034c9a1c */
      (__this->fields)._row_5__6 = uVar1;
    }
                    /* try { // try from 034c9a38 to 035c9a3b has its CatchHandler @ 034c9a58 */
                    /* try { // try from 034c9a3c to 035c9a5f has its CatchHandler @ 034c9800 */
    BANPLPOPIGI__JOIFLMJEEJK(__this_01,method_00);
    pNVar6 = (__this_01->fields).HJLDGHLININ;
    if (pNVar6 != (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaderboardView_o *)0x0) {
      if ((pNVar6->fields)._BOGAKJOFOEK_k__BackingField != false) {
        return false;
      }
      if ((__this->fields)._hasDelayed_5__4 != false) {
        return false;
      }
                    /* catch() { ... } // from try @ 034c9a38 with catch @ 034c9a58 */
      pNVar4 = (__this_01->fields).PDHMLFAMNCO;
      if (pNVar4 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
                    /* try { // try from 034c9a60 to 035c9a73 has its CatchHandler @ 034c9ae4 */
        Nekki_SF2_GUI_SimpleScroll__TeleportContentToPos
                  (pNVar4,(__this_01->fields).FBCMJLLICNC,(MethodInfo *)0x0);
        return false;
      }
    }
  }
LAB_034c9ad8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

