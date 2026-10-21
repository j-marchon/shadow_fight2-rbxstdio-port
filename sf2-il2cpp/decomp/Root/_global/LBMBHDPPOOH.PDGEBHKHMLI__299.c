// TypeDefIndex 299
// Namespace: 
// [CompilerGenerated]
// private sealed class LBMBHDPPOOH.PDGEBHKHMLI : IEnumerator<object>, IEnumerator, IDisposable
// Fields:
//   private int <>1__state; // 0x10
//   private object <>2__current; // 0x18
//   public LBMBHDPPOOH <>4__this; // 0x20

// ===== public void .ctor(int <>1__state)  [RVA 0x32386B4]
// LBMBHDPPOOH.PDGEBHKHMLI$$.ctor @ RVA 0x32386B4

void LBMBHDPPOOH_PDGEBHKHMLI___ctor
               (LBMBHDPPOOH_PDGEBHKHMLI_o *__this,int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// ===== private void System.IDisposable.Dispose()  [RVA 0x32386DC]
// LBMBHDPPOOH.PDGEBHKHMLI$$System.IDisposable.Dispose @ RVA 0x32386DC

void LBMBHDPPOOH_PDGEBHKHMLI__System_IDisposable_Dispose
               (LBMBHDPPOOH_PDGEBHKHMLI_o *__this,MethodInfo *method)

{
  return;
}


// ===== private bool MoveNext()  [RVA 0x32386E0]
// LBMBHDPPOOH.PDGEBHKHMLI$$MoveNext @ RVA 0x32386E0

bool LBMBHDPPOOH_PDGEBHKHMLI__MoveNext(LBMBHDPPOOH_PDGEBHKHMLI_o *__this,MethodInfo *method)

{
  int iVar1;
  NCNCKGBEGGF_o *__this_00;
  System_Collections_IEnumerator_o **ppSVar2;
  MethodInfo *method_00;
  Il2CppObject **ppIVar3;
  LBMBHDPPOOH_o *__this_01;
  float NACILJPLKBG;
  undefined1 auVar4 [16];
  
  auVar4._8_8_ = method;
  auVar4._0_8_ = __this;
  if ((DAT_0456703a & 1) == 0) {
    auVar4 = FUN_01bab630(&NCNCKGBEGGF_TypeInfo);
    DAT_0456703a = 1;
  }
  iVar1 = (__this->fields).__1__state;
  __this_01 = (__this->fields).__4__this;
  if (iVar1 == 1) {
    (__this->fields).__1__state = -1;
    if (__this_01 == (LBMBHDPPOOH_o *)0x0) goto LAB_033387a8;
    ppSVar2 = &(__this_01->fields).AIHIJKKCDNO;
    *ppSVar2 = (System_Collections_IEnumerator_o *)0x0;
    thunk_FUN_01c20e04(ppSVar2,0);
    LBMBHDPPOOH__NBNOEKGHMFG(__this_01,method_00);
  }
  else if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    if (__this_01 != (LBMBHDPPOOH_o *)0x0) {
      NACILJPLKBG = (__this_01->fields).GGBDGJAEEBA;
      __this_00 = (NCNCKGBEGGF_o *)thunk_FUN_01bda818(NCNCKGBEGGF_TypeInfo);
      NCNCKGBEGGF___ctor(__this_00,NACILJPLKBG,(MethodInfo *)0x0);
      ppIVar3 = &(__this->fields).__2__current;
      *ppIVar3 = (Il2CppObject *)__this_00;
      thunk_FUN_01c20e04(ppIVar3,__this_00);
      (__this->fields).__1__state = 1;
      return true;
    }
LAB_033387a8:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(auVar4._0_8_,auVar4._8_8_);
  }
  return false;
}


// ===== private object System.Collections.Generic.IEnumerator<System.Object>.get_Current()  [RVA 0x32387AC]
// LBMBHDPPOOH.PDGEBHKHMLI$$System.Collections.Generic.IEnumerator<System.Object>.get_Current @ RVA 0x32387AC

Il2CppObject *
LBMBHDPPOOH_PDGEBHKHMLI__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (LBMBHDPPOOH_PDGEBHKHMLI_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ===== private void System.Collections.IEnumerator.Reset()  [RVA 0x32387B4]
// LBMBHDPPOOH.PDGEBHKHMLI$$System.Collections.IEnumerator.Reset @ RVA 0x32387B4

void LBMBHDPPOOH_PDGEBHKHMLI__System_Collections_IEnumerator_Reset
               (LBMBHDPPOOH_PDGEBHKHMLI_o *__this,MethodInfo *method)

{
  System_NotSupportedException_o *__this_00;
  undefined8 uVar1;
  
  thunk_FUN_01bb9178(&System_NotSupportedException_TypeInfo);
  __this_00 = (System_NotSupportedException_o *)thunk_FUN_01bda818();
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = thunk_FUN_01bb9178(&Method_LBMBHDPPOOH_PDGEBHKHMLI_System_Collections_IEnumerator_Reset__)
  ;
                    /* WARNING: Subroutine does not return */
  FUN_01bab798(__this_00,uVar1);
}


// ===== private object System.Collections.IEnumerator.get_Current()  [RVA 0x32387EC]
// LBMBHDPPOOH.PDGEBHKHMLI$$System.Collections.IEnumerator.get_Current @ RVA 0x32387EC

Il2CppObject *
LBMBHDPPOOH_PDGEBHKHMLI__System_Collections_IEnumerator_get_Current
          (LBMBHDPPOOH_PDGEBHKHMLI_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}

