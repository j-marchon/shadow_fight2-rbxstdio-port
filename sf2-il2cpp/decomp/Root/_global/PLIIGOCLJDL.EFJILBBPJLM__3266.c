// TypeDefIndex 3266
// Namespace: 
// [CompilerGenerated]
// private sealed class PLIIGOCLJDL.EFJILBBPJLM : IEnumerator<object>, IEnumerator, IDisposable
// Fields:
//   private int <>1__state; // 0x10
//   private object <>2__current; // 0x18
//   public int leaderboardUpdateIntervalMillis; // 0x20
//   public PLIIGOCLJDL <>4__this; // 0x28

// ===== public void .ctor(int <>1__state)  [RVA 0x3518FAC]
// PLIIGOCLJDL.EFJILBBPJLM$$.ctor @ RVA 0x3518FAC

void PLIIGOCLJDL_EFJILBBPJLM___ctor
               (PLIIGOCLJDL_EFJILBBPJLM_o *__this,int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// ===== private void System.IDisposable.Dispose()  [RVA 0x3519A50]
// PLIIGOCLJDL.EFJILBBPJLM$$System.IDisposable.Dispose @ RVA 0x3519A50

void PLIIGOCLJDL_EFJILBBPJLM__System_IDisposable_Dispose
               (PLIIGOCLJDL_EFJILBBPJLM_o *__this,MethodInfo *method)

{
  return;
}


// ===== private bool MoveNext()  [RVA 0x3519A54]
// PLIIGOCLJDL.EFJILBBPJLM$$MoveNext @ RVA 0x3519A54

bool PLIIGOCLJDL_EFJILBBPJLM__MoveNext(PLIIGOCLJDL_EFJILBBPJLM_o *__this,MethodInfo *method)

{
  int iVar1;
  UnityEngine_WaitForSecondsRealtime_o *__this_00;
  Il2CppObject **ppIVar2;
  PLIIGOCLJDL_o *__this_01;
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
    if (__this_01 == (PLIIGOCLJDL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    PLIIGOCLJDL__CJAILEHJLKB(__this_01,method);
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
// PLIIGOCLJDL.EFJILBBPJLM$$System.Collections.Generic.IEnumerator<System.Object>.get_Current @ RVA 0x3519B18

Il2CppObject *
PLIIGOCLJDL_EFJILBBPJLM__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (PLIIGOCLJDL_EFJILBBPJLM_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ===== private void System.Collections.IEnumerator.Reset()  [RVA 0x3519B20]
// PLIIGOCLJDL.EFJILBBPJLM$$System.Collections.IEnumerator.Reset @ RVA 0x3519B20

void PLIIGOCLJDL_EFJILBBPJLM__System_Collections_IEnumerator_Reset
               (PLIIGOCLJDL_EFJILBBPJLM_o *__this,MethodInfo *method)

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
// PLIIGOCLJDL.EFJILBBPJLM$$System.Collections.IEnumerator.get_Current @ RVA 0x3519B58

Il2CppObject *
PLIIGOCLJDL_EFJILBBPJLM__System_Collections_IEnumerator_get_Current
          (PLIIGOCLJDL_EFJILBBPJLM_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}

