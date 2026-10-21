// TypeDefIndex 1397
// Namespace: 
// [CompilerGenerated]
// private sealed class SelectModule.BLNDOKIIEMO : IEnumerator<object>, IEnumerator, IDisposable
// Fields:
//   private int <>1__state; // 0x10
//   private object <>2__current; // 0x18
//   public SelectModule <>4__this; // 0x20

// ===== public void .ctor(int <>1__state)  [RVA 0x317846C]
// Nekki.SF2.GUI.Pvp.SelectModule.BLNDOKIIEMO$$.ctor @ RVA 0x317846C

void Nekki_SF2_GUI_Pvp_SelectModule_BLNDOKIIEMO___ctor
               (Nekki_SF2_GUI_Pvp_SelectModule_BLNDOKIIEMO_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// ===== private void System.IDisposable.Dispose()  [RVA 0x3178B64]
// Nekki.SF2.GUI.Pvp.SelectModule.BLNDOKIIEMO$$System.IDisposable.Dispose @ RVA 0x3178B64

void Nekki_SF2_GUI_Pvp_SelectModule_BLNDOKIIEMO__System_IDisposable_Dispose
               (Nekki_SF2_GUI_Pvp_SelectModule_BLNDOKIIEMO_o *__this,MethodInfo *method)

{
  return;
}


// ===== private bool MoveNext()  [RVA 0x3178B68]
// Nekki.SF2.GUI.Pvp.SelectModule.BLNDOKIIEMO$$MoveNext @ RVA 0x3178B68

bool Nekki_SF2_GUI_Pvp_SelectModule_BLNDOKIIEMO__MoveNext
               (Nekki_SF2_GUI_Pvp_SelectModule_BLNDOKIIEMO_o *__this,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  NCNCKGBEGGF_o *__this_00;
  Il2CppObject **ppIVar5;
  Nekki_SF2_GUI_Pvp_SelectModule_o *pNVar6;
  float NACILJPLKBG;
  undefined1 auVar7 [16];
  ulong uVar4;
  
  auVar7._8_8_ = method;
  auVar7._0_8_ = __this;
  if ((DAT_0456696c & 1) == 0) {
    auVar7 = FUN_01bab630(&NCNCKGBEGGF_TypeInfo);
    DAT_0456696c = 1;
  }
  uVar4 = auVar7._0_8_;
  iVar1 = (__this->fields).__1__state;
  pNVar6 = (__this->fields).__4__this;
  if (iVar1 == 1) {
    (__this->fields).__1__state = -1;
    uVar3 = EDFDANKEBGF__ACAAGIAPGAG((MethodInfo *)0x0);
    uVar4 = (ulong)uVar3;
    if (pNVar6 == (Nekki_SF2_GUI_Pvp_SelectModule_o *)0x0) {
LAB_03278c2c:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8(uVar4);
    }
    bVar2 = false;
    (pNVar6->fields).LGJBHOIAOOG = false;
  }
  else if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    if (pNVar6 == (Nekki_SF2_GUI_Pvp_SelectModule_o *)0x0) goto LAB_03278c2c;
    NACILJPLKBG = (pNVar6->fields).selectorMoveTime;
    __this_00 = (NCNCKGBEGGF_o *)thunk_FUN_01bda818(NCNCKGBEGGF_TypeInfo,auVar7._8_8_);
    NCNCKGBEGGF___ctor(__this_00,NACILJPLKBG,(MethodInfo *)0x0);
    ppIVar5 = &(__this->fields).__2__current;
    *ppIVar5 = (Il2CppObject *)__this_00;
    thunk_FUN_01c20e04(ppIVar5,__this_00);
    bVar2 = true;
    (__this->fields).__1__state = 1;
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}


// ===== private object System.Collections.Generic.IEnumerator<System.Object>.get_Current()  [RVA 0x3178C30]
// Nekki.SF2.GUI.Pvp.SelectModule.BLNDOKIIEMO$$System.Collections.Generic.IEnumerator<System.Object>.get_Current @ RVA 0x3178C30

Il2CppObject *
Nekki_SF2_GUI_Pvp_SelectModule_BLNDOKIIEMO__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (Nekki_SF2_GUI_Pvp_SelectModule_BLNDOKIIEMO_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ===== private void System.Collections.IEnumerator.Reset()  [RVA 0x3178C38]
// Nekki.SF2.GUI.Pvp.SelectModule.BLNDOKIIEMO$$System.Collections.IEnumerator.Reset @ RVA 0x3178C38

void Nekki_SF2_GUI_Pvp_SelectModule_BLNDOKIIEMO__System_Collections_IEnumerator_Reset
               (Nekki_SF2_GUI_Pvp_SelectModule_BLNDOKIIEMO_o *__this,MethodInfo *method)

{
  System_NotSupportedException_o *__this_00;
  undefined8 uVar1;
  
  thunk_FUN_01bb9178(&System_NotSupportedException_TypeInfo);
  __this_00 = (System_NotSupportedException_o *)thunk_FUN_01bda818();
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = thunk_FUN_01bb9178(&
                             Method_Nekki_SF2_GUI_Pvp_SelectModule_BLNDOKIIEMO_System_Collections_IEnumerator_Reset__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_01bab798(__this_00,uVar1);
}


// ===== private object System.Collections.IEnumerator.get_Current()  [RVA 0x3178C70]
// Nekki.SF2.GUI.Pvp.SelectModule.BLNDOKIIEMO$$System.Collections.IEnumerator.get_Current @ RVA 0x3178C70

Il2CppObject *
Nekki_SF2_GUI_Pvp_SelectModule_BLNDOKIIEMO__System_Collections_IEnumerator_get_Current
          (Nekki_SF2_GUI_Pvp_SelectModule_BLNDOKIIEMO_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}

