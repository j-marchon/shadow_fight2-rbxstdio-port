// TypeDefIndex 369
// Namespace: 
// [CompilerGenerated]
// private sealed class RaidLeaguesLeaderboard.DOJKKOFBLHH : IEnumerator<object>, IEnumerator, IDisposable
// Fields:
//   private int <>1__state; // 0x10
//   private object <>2__current; // 0x18
//   public RaidLeaguesLeaderboard <>4__this; // 0x20
//   private int <portion>5__2; // 0x28
//   private int <counter>5__3; // 0x2C
//   private bool <hasDelayed>5__4; // 0x30
//   private WaitForSecondsRealtime <delay>5__5; // 0x38
//   private int <row>5__6; // 0x40

// ===== public void .ctor(int <>1__state)  [RVA 0x34771C8]
// Nekki.SF2.GUI.Dialogs.Raids.RaidLeaguesLeaderboard.DOJKKOFBLHH$$.ctor @ RVA 0x34771C8

void Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_DOJKKOFBLHH___ctor
               (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_DOJKKOFBLHH_o *__this,
               int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// ===== private void System.IDisposable.Dispose()  [RVA 0x3477FC4]
// Nekki.SF2.GUI.Dialogs.Raids.RaidLeaguesLeaderboard.DOJKKOFBLHH$$System.IDisposable.Dispose @ RVA 0x3477FC4

void Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_DOJKKOFBLHH__System_IDisposable_Dispose
               (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_DOJKKOFBLHH_o *__this,
               MethodInfo *method)

{
  return;
}


// ===== private bool MoveNext()  [RVA 0x3477FC8]
// Nekki.SF2.GUI.Dialogs.Raids.RaidLeaguesLeaderboard.DOJKKOFBLHH$$MoveNext @ RVA 0x3477FC8

bool Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_DOJKKOFBLHH__MoveNext
               (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_DOJKKOFBLHH_o *__this,
               MethodInfo *method)

{
  uint uVar1;
  int iVar2;
  int32_t iVar3;
  Nekki_SF2_GUI_SimpleScroll_o *pNVar4;
  UnityEngine_WaitForSecondsRealtime_o *__this_00;
  MethodInfo *method_00;
  MethodInfo *in_x2;
  System_Collections_Generic_List_RaidLeaguesLeaderboard_OIMJFDFDMMM__o *pSVar5;
  Il2CppObject **ppIVar6;
  Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_o *__this_01;
  UnityEngine_WaitForSecondsRealtime_o **ppUVar7;
  
  if ((DAT_04568339 & 1) == 0) {
    FUN_01bab630(&LPGPNBGHDBD_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_List<RaidLeaguesLeaderboard_OIMJFDFDMMM>_get_Count__
                );
    FUN_01bab630(&Method_System_Nullable<float>_GetValueOrDefault__);
    FUN_01bab630(&UnityEngine_WaitForSecondsRealtime_TypeInfo);
    FUN_01bab630(&StringLiteral_10900/*"RaidLeaguesCellPool"*/);
    DAT_04568339 = 1;
  }
  iVar2 = (__this->fields).__1__state;
  __this_01 = (__this->fields).__4__this;
  if (iVar2 == 1) {
    (__this->fields).__1__state = -1;
    goto LAB_0357810c;
  }
  if (iVar2 != 0) {
    return false;
  }
  (__this->fields).__1__state = -1;
  if (((__this_01 != (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_o *)0x0) &&
      (pSVar5 = (__this_01->fields).JKBONEFMACI,
      pSVar5 != (System_Collections_Generic_List_RaidLeaguesLeaderboard_OIMJFDFDMMM__o *)0x0)) &&
     (pNVar4 = (__this_01->fields).PDHMLFAMNCO, pNVar4 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0)) {
    in_x2 = StringLiteral_10900/*"RaidLeaguesCellPool"*/;
    Nekki_SF2_GUI_SimpleScroll__ReservePool
              (pNVar4,(pSVar5->fields)._size,(System_String_o *)StringLiteral_10900/*"RaidLeaguesCellPool"*/,
               (MethodInfo *)0x0);
    if ((LPGPNBGHDBD_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    iVar3 = LPGPNBGHDBD_TypeInfo->static_fields->FPAFPJONEFP;
    (__this->fields)._hasDelayed_5__4 = false;
    (__this->fields)._portion_5__2 = iVar3;
    (__this->fields)._counter_5__3 = 0;
    __this_00 = (UnityEngine_WaitForSecondsRealtime_o *)
                thunk_FUN_01bda818(UnityEngine_WaitForSecondsRealtime_TypeInfo);
    UnityEngine_WaitForSecondsRealtime___ctor(__this_00,0.016666668,(MethodInfo *)0x0);
    ppUVar7 = &(__this->fields)._delay_5__5;
    *ppUVar7 = __this_00;
    thunk_FUN_01c20e04(ppUVar7,__this_00);
    method_00 = (MethodInfo *)0x0;
    (__this->fields)._row_5__6 = 0;
    while( true ) {
      if ((__this_01 == (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_o *)0x0) ||
         (pSVar5 = (__this_01->fields).JKBONEFMACI,
         pSVar5 == (System_Collections_Generic_List_RaidLeaguesLeaderboard_OIMJFDFDMMM__o *)0x0))
      goto LAB_035781b8;
      if ((pSVar5->fields)._size <= (int32_t)method_00) break;
      Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard__HGLBPOAFPKC
                (__this_01,(int32_t)method_00,in_x2);
      iVar2 = (__this->fields)._counter_5__3 + 1;
      (__this->fields)._counter_5__3 = iVar2;
      if ((__this->fields)._portion_5__2 <= iVar2) {
        (__this->fields)._hasDelayed_5__4 = true;
        if ((LPGPNBGHDBD_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        iVar3 = LPGPNBGHDBD_TypeInfo->static_fields->FPAFPJONEFP;
        ppIVar6 = &(__this->fields).__2__current;
        *ppIVar6 = (Il2CppObject *)(__this->fields)._delay_5__5;
        (__this->fields)._portion_5__2 = iVar3;
        (__this->fields)._counter_5__3 = 0;
        thunk_FUN_01c20e04(ppIVar6);
        (__this->fields).__1__state = 1;
        return true;
      }
LAB_0357810c:
      uVar1 = (__this->fields)._row_5__6 + 1;
      method_00 = (MethodInfo *)(ulong)uVar1;
      (__this->fields)._row_5__6 = uVar1;
    }
    Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard__StopFillPlayers(__this_01,method_00);
    if ((__this->fields)._hasDelayed_5__4 == false) {
      pNVar4 = (__this_01->fields).PDHMLFAMNCO;
      if (pNVar4 == (Nekki_SF2_GUI_SimpleScroll_o *)0x0) goto LAB_035781b8;
      Nekki_SF2_GUI_SimpleScroll__TeleportContentToPos
                (pNVar4,(__this_01->fields).NEOEPOAJBFE.fields.value,(MethodInfo *)0x0);
    }
    (__this_01->fields).NEOEPOAJBFE.fields = (System_Nullable_float__Fields)0x0;
    return false;
  }
LAB_035781b8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private object System.Collections.Generic.IEnumerator<System.Object>.get_Current()  [RVA 0x34781BC]
// Nekki.SF2.GUI.Dialogs.Raids.RaidLeaguesLeaderboard.DOJKKOFBLHH$$System.Collections.Generic.IEnumerator<System.Object>.get_Current @ RVA 0x34781BC

Il2CppObject *
Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_DOJKKOFBLHH__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_DOJKKOFBLHH_o *__this,
          MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ===== private void System.Collections.IEnumerator.Reset()  [RVA 0x34781C4]
// Nekki.SF2.GUI.Dialogs.Raids.RaidLeaguesLeaderboard.DOJKKOFBLHH$$System.Collections.IEnumerator.Reset @ RVA 0x34781C4

void Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_DOJKKOFBLHH__System_Collections_IEnumerator_Reset
               (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_DOJKKOFBLHH_o *__this,
               MethodInfo *method)

{
  System_NotSupportedException_o *__this_00;
  undefined8 uVar1;
  
  thunk_FUN_01bb9178(&System_NotSupportedException_TypeInfo);
  __this_00 = (System_NotSupportedException_o *)thunk_FUN_01bda818();
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = thunk_FUN_01bb9178(&
                             Method_Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_DOJKKOFBLHH_System_Collections_IEnumerator_Reset__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_01bab798(__this_00,uVar1);
}


// ===== private object System.Collections.IEnumerator.get_Current()  [RVA 0x34781FC]
// Nekki.SF2.GUI.Dialogs.Raids.RaidLeaguesLeaderboard.DOJKKOFBLHH$$System.Collections.IEnumerator.get_Current @ RVA 0x34781FC

Il2CppObject *
Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_DOJKKOFBLHH__System_Collections_IEnumerator_get_Current
          (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_DOJKKOFBLHH_o *__this,
          MethodInfo *method)

{
  return (__this->fields).__2__current;
}

