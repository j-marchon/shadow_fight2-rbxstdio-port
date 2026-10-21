// TypeDefIndex 585
// Namespace: 
// [CompilerGenerated]
// private sealed class FDJKKAFIEFB.FJOGHDMHAIL : IEnumerator<object>, IEnumerator, IDisposable
// Fields:
//   private int <>1__state; // 0x10
//   private object <>2__current; // 0x18
//   public FDJKKAFIEFB <>4__this; // 0x20
//   private int <iterations>5__2; // 0x28
//   private WaitForSeconds <delay>5__3; // 0x30

// ===== public void .ctor(int <>1__state)  [RVA 0x35B56E4]
// FDJKKAFIEFB.FJOGHDMHAIL$$.ctor @ RVA 0x35B56E4

void FDJKKAFIEFB_FJOGHDMHAIL___ctor
               (FDJKKAFIEFB_FJOGHDMHAIL_o *__this,int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// ===== private void System.IDisposable.Dispose()  [RVA 0x35B5EB4]
// FDJKKAFIEFB.FJOGHDMHAIL$$System.IDisposable.Dispose @ RVA 0x35B5EB4

void FDJKKAFIEFB_FJOGHDMHAIL__System_IDisposable_Dispose
               (FDJKKAFIEFB_FJOGHDMHAIL_o *__this,MethodInfo *method)

{
  return;
}


// ===== private bool MoveNext()  [RVA 0x35B5EB8]
// FDJKKAFIEFB.FJOGHDMHAIL$$MoveNext @ RVA 0x35B5EB8

bool FDJKKAFIEFB_FJOGHDMHAIL__MoveNext(FDJKKAFIEFB_FJOGHDMHAIL_o *__this,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  UnityEngine_WaitForSeconds_o *__this_00;
  UnityEngine_WaitForSeconds_o **ppUVar3;
  DBNEEHGBCJD_o *NFDKMBAGHPD;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  MethodInfo *in_x4;
  System_Collections_Generic_List_DBNEEHGBCJD__o *pSVar4;
  Il2CppObject **ppIVar5;
  UniRx_SerialDisposable_o *__this_01;
  FDJKKAFIEFB_o *__this_02;
  float seconds;
  
  if ((DAT_04568ebf & 1) == 0) {
    FUN_01bab630(&UniRx_Disposable_TypeInfo);
    FUN_01bab630(&FDJKKAFIEFB_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<DBNEEHGBCJD>_get_Count__);
    FUN_01bab630(&UnityEngine_WaitForSeconds_TypeInfo);
    DAT_04568ebf = 1;
    method = extraout_x1;
  }
  iVar1 = (__this->fields).__1__state;
  __this_02 = (__this->fields).__4__this;
  if (iVar1 == 1) {
    (__this->fields).__1__state = -1;
    if (__this_02 == (FDJKKAFIEFB_o *)0x0) goto LAB_036b6064;
    NFDKMBAGHPD = FDJKKAFIEFB__JLFIDNOPECP(__this_02,(DBNEEHGBCJD_o *)0x0,in_x2);
    FDJKKAFIEFB__HCPLEOIKIEH(__this_02,NFDKMBAGHPD,false,false,in_x4);
    iVar1 = (__this->fields)._iterations_5__2 + -1;
    (__this->fields)._iterations_5__2 = iVar1;
  }
  else {
    if (iVar1 != 0) {
      return false;
    }
    (__this->fields).__1__state = -1;
    if ((__this_02 == (FDJKKAFIEFB_o *)0x0) ||
       (pSVar4 = (__this_02->fields).DIKCNPKCGJP,
       pSVar4 == (System_Collections_Generic_List_DBNEEHGBCJD__o *)0x0)) goto LAB_036b6064;
    iVar1 = (pSVar4->fields)._size;
    if (iVar1 < 2) {
      return false;
    }
    iVar2 = (__this_02->fields).EKKBCIHHKNB;
    if (iVar2 < 1) {
      return false;
    }
    seconds = (__this_02->fields).JHLCHFLFMJG;
    if (seconds <= 0.0) {
      return false;
    }
    (__this->fields)._iterations_5__2 = iVar2 * iVar1;
    __this_00 = (UnityEngine_WaitForSeconds_o *)
                thunk_FUN_01bda818(UnityEngine_WaitForSeconds_TypeInfo,method);
    UnityEngine_WaitForSeconds___ctor(__this_00,seconds,(MethodInfo *)0x0);
    ppUVar3 = &(__this->fields)._delay_5__3;
    *ppUVar3 = __this_00;
    thunk_FUN_01c20e04(ppUVar3,__this_00);
    iVar1 = (__this->fields)._iterations_5__2;
  }
  if (0 < iVar1) {
    ppIVar5 = &(__this->fields).__2__current;
    *ppIVar5 = (Il2CppObject *)(__this->fields)._delay_5__3;
    thunk_FUN_01c20e04(ppIVar5);
    (__this->fields).__1__state = 1;
    return true;
  }
  if ((FDJKKAFIEFB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_01 = FDJKKAFIEFB_TypeInfo->static_fields->LEGEHOHOJGP;
  if ((UniRx_Disposable_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UniRx_Disposable_TypeInfo);
  }
  if (__this_01 != (UniRx_SerialDisposable_o *)0x0) {
    UniRx_SerialDisposable__set_Disposable
              (__this_01,UniRx_Disposable_TypeInfo->static_fields->Empty,(MethodInfo *)0x0);
    return false;
  }
LAB_036b6064:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private object System.Collections.Generic.IEnumerator<System.Object>.get_Current()  [RVA 0x35B6068]
// FDJKKAFIEFB.FJOGHDMHAIL$$System.Collections.Generic.IEnumerator<System.Object>.get_Current @ RVA 0x35B6068

Il2CppObject *
FDJKKAFIEFB_FJOGHDMHAIL__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (FDJKKAFIEFB_FJOGHDMHAIL_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ===== private void System.Collections.IEnumerator.Reset()  [RVA 0x35B6070]
// FDJKKAFIEFB.FJOGHDMHAIL$$System.Collections.IEnumerator.Reset @ RVA 0x35B6070

void FDJKKAFIEFB_FJOGHDMHAIL__System_Collections_IEnumerator_Reset
               (FDJKKAFIEFB_FJOGHDMHAIL_o *__this,MethodInfo *method)

{
  System_NotSupportedException_o *__this_00;
  undefined8 uVar1;
  
  thunk_FUN_01bb9178(&System_NotSupportedException_TypeInfo);
  __this_00 = (System_NotSupportedException_o *)thunk_FUN_01bda818();
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = thunk_FUN_01bb9178(&Method_FDJKKAFIEFB_FJOGHDMHAIL_System_Collections_IEnumerator_Reset__)
  ;
                    /* WARNING: Subroutine does not return */
  FUN_01bab798(__this_00,uVar1);
}


// ===== private object System.Collections.IEnumerator.get_Current()  [RVA 0x35B60A8]
// FDJKKAFIEFB.FJOGHDMHAIL$$System.Collections.IEnumerator.get_Current @ RVA 0x35B60A8

Il2CppObject *
FDJKKAFIEFB_FJOGHDMHAIL__System_Collections_IEnumerator_get_Current
          (FDJKKAFIEFB_FJOGHDMHAIL_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}

