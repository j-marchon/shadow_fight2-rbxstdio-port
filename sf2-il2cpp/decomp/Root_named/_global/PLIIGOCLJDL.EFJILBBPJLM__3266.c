// TypeDefIndex 3266
// Namespace: 
// [CompilerGenerated]
// private sealed class RaidLeaderboardsManager.EFJILBBPJLM : IEnumerator<object>, IEnumerator, IDisposable
// Fields:
//   private int <>1__state; // 0x10
//   private object <>2__current; // 0x18
//   public int leaderboardUpdateIntervalMillis; // 0x20
//   public RaidLeaderboardsManager <>4__this; // 0x28

// ===== public void .ctor(int <>1__state)  [RVA 0x3518FAC]
// RaidLeaderboardsManager.EFJILBBPJLM$$.ctor @ RVA 0x3518FAC

void RaidLeaderboardsManager_EFJILBBPJLM___ctor
               (RaidLeaderboardsManager_EFJILBBPJLM_o *__this,int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// ===== private void System.IDisposable.Dispose()  [RVA 0x3519A50]
// RaidLeaderboardsManager.EFJILBBPJLM$$System.IDisposable.Dispose @ RVA 0x3519A50

void RaidLeaderboardsManager_EFJILBBPJLM__System_IDisposable_Dispose
               (RaidLeaderboardsManager_EFJILBBPJLM_o *__this,MethodInfo *method)

{
  return;
}


// ===== private bool MoveNext()  [RVA 0x3519A54]
// RaidLeaderboardsManager.EFJILBBPJLM$$MoveNext @ RVA 0x3519A54

bool RaidLeaderboardsManager_EFJILBBPJLM__MoveNext(RaidLeaderboardsManager_EFJILBBPJLM_o *__this,MethodInfo *method)

{
  int iVar1;
  UnityEngine_WaitForSecondsRealtime_o *__this_00;
  Il2CppObject **ppIVar2;
  RaidLeaderboardsManager_o *__this_01;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568966 & 1) == 0) {
    FUN_01bab630(&UnityEngine_WaitForSecondsRealtime_TypeInfo);
    DAT_04568966 = 1;
    method = extraout_x1;
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 1) {
    __this_01 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    if (__this_01 == (RaidLeaderboardsManager_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    RaidLeaderboardsManager__CJAILEHJLKB(__this_01,method);
  }
  else if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    iVar1 = (__this->fields).leaderboardUpdateIntervalMillis;
    __this_00 = (UnityEngine_WaitForSecondsRealtime_o *)
                thunk_FUN_01bda818(UnityEngine_WaitForSecondsRealtime_TypeInfo);
    UnityEngine_WaitForSecondsRealtime___ctor(__this_00,(float)(iVar1 / 1000),(MethodInfo *)0x0);
    ppIVar2 = &(__this->fields).__2__current;
    *ppIVar2 = (Il2CppObject *)__this_00;
    thunk_FUN_01c20e04(ppIVar2,__this_00);
    (__this->fields).__1__state = 1;
    return true;
  }
  return false;
}


// ===== private object System.Collections.Generic.IEnumerator<System.Object>.get_Current()  [RVA 0x3519B18]
// RaidLeaderboardsManager.EFJILBBPJLM$$System.Collections.Generic.IEnumerator<System.Object>.get_Current @ RVA 0x3519B18

Il2CppObject *
RaidLeaderboardsManager_EFJILBBPJLM__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (RaidLeaderboardsManager_EFJILBBPJLM_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ===== private void System.Collections.IEnumerator.Reset()  [RVA 0x3519B20]
// RaidLeaderboardsManager.EFJILBBPJLM$$System.Collections.IEnumerator.Reset @ RVA 0x3519B20

void RaidLeaderboardsManager_EFJILBBPJLM__System_Collections_IEnumerator_Reset
               (RaidLeaderboardsManager_EFJILBBPJLM_o *__this,MethodInfo *method)

{
  System_NotSupportedException_o *__this_00;
  undefined8 uVar1;
  
  thunk_FUN_01bb9178(&System_NotSupportedException_TypeInfo);
  __this_00 = (System_NotSupportedException_o *)thunk_FUN_01bda818();
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = thunk_FUN_01bb9178(&Method_PLIIGOCLJDL_EFJILBBPJLM_System_Collections_IEnumerator_Reset__)
  ;
                    /* WARNING: Subroutine does not return */
  FUN_01bab798(__this_00,uVar1);
}


// ===== private object System.Collections.IEnumerator.get_Current()  [RVA 0x3519B58]
// RaidLeaderboardsManager.EFJILBBPJLM$$System.Collections.IEnumerator.get_Current @ RVA 0x3519B58

Il2CppObject *
RaidLeaderboardsManager_EFJILBBPJLM__System_Collections_IEnumerator_get_Current
          (RaidLeaderboardsManager_EFJILBBPJLM_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}

