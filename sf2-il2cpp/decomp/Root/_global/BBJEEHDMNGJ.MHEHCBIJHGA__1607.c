// TypeDefIndex 1607
// Namespace: 
// [CompilerGenerated]
// private sealed class BBJEEHDMNGJ.MHEHCBIJHGA : IEnumerator<object>, IEnumerator, IDisposable
// Fields:
//   private int <>1__state; // 0x10
//   private object <>2__current; // 0x18
//   public BBJEEHDMNGJ <>4__this; // 0x20

// ===== public void .ctor(int <>1__state)  [RVA 0x31B76AC]
// BBJEEHDMNGJ.MHEHCBIJHGA$$.ctor @ RVA 0x31B76AC

void BBJEEHDMNGJ_MHEHCBIJHGA___ctor
               (BBJEEHDMNGJ_MHEHCBIJHGA_o *__this,int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// ===== private void System.IDisposable.Dispose()  [RVA 0x31B79A8]
// BBJEEHDMNGJ.MHEHCBIJHGA$$System.IDisposable.Dispose @ RVA 0x31B79A8

void BBJEEHDMNGJ_MHEHCBIJHGA__System_IDisposable_Dispose
               (BBJEEHDMNGJ_MHEHCBIJHGA_o *__this,MethodInfo *method)

{
  return;
}


// ===== private bool MoveNext()  [RVA 0x31B79AC]
// BBJEEHDMNGJ.MHEHCBIJHGA$$MoveNext @ RVA 0x31B79AC

bool BBJEEHDMNGJ_MHEHCBIJHGA__MoveNext(BBJEEHDMNGJ_MHEHCBIJHGA_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_TableView_o *__this_00;
  Nekki_SF2_GUI_Tutorial_TutorialCanvas_o *__this_01;
  Nekki_SF2_GUI_Shop_Forge_ForgePanel_o *pNVar2;
  BBJEEHDMNGJ_o *__this_02;
  Il2CppObject **ppIVar3;
  
  if (1 < (uint)(__this->fields).__1__state) {
                    /* try { // try from 032b7a30 to 033b7ac7 has its CatchHandler @ 032b7a30
                       catch() { ... } // from try @ 032b7a30 with catch @ 032b7a30
                       catch() { ... } // from try @ 032b7ae0 with catch @ 032b7a30
                       catch() { ... } // from try @ 032b7bb4 with catch @ 032b7a30
                       catch() { ... } // from try @ 032b7bf4 with catch @ 032b7a30 */
    return false;
  }
  __this_02 = (__this->fields).__4__this;
  (__this->fields).__1__state = -1;
  if (((__this_02 != (BBJEEHDMNGJ_o *)0x0) &&
      (pNVar2 = (__this_02->fields).PMMMEDPGNFO,
      pNVar2 != (Nekki_SF2_GUI_Shop_Forge_ForgePanel_o *)0x0)) &&
     (__this_00 = (pNVar2->fields)._TableView, __this_00 != (Nekki_SF2_GUI_TableView_o *)0x0)) {
    bVar1 = Nekki_SF2_GUI_TableView__get_IsMoving(__this_00,(MethodInfo *)0x0);
    if (bVar1) {
      ppIVar3 = &(__this->fields).__2__current;
      *ppIVar3 = (Il2CppObject *)0x0;
      thunk_FUN_01c20e04(ppIVar3,0);
      (__this->fields).__1__state = 1;
      return true;
    }
    __this_01 = Nekki_SF2_GUI_Tutorial_TutorialCanvas__get_Instance((MethodInfo *)0x0);
    if (__this_01 != (Nekki_SF2_GUI_Tutorial_TutorialCanvas_o *)0x0) {
      Nekki_SF2_GUI_Tutorial_TutorialCanvas__set_BlockOn(__this_01,false,(MethodInfo *)0x0);
      BOFEMGGNODC__FGNINNOOCCL((BOFEMGGNODC_o *)__this_02,(MethodInfo *)0x0);
      return false;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private object System.Collections.Generic.IEnumerator<System.Object>.get_Current()  [RVA 0x31B7A44]
// BBJEEHDMNGJ.MHEHCBIJHGA$$System.Collections.Generic.IEnumerator<System.Object>.get_Current @ RVA 0x31B7A44

Il2CppObject *
BBJEEHDMNGJ_MHEHCBIJHGA__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (BBJEEHDMNGJ_MHEHCBIJHGA_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ===== private void System.Collections.IEnumerator.Reset()  [RVA 0x31B7A4C]
// BBJEEHDMNGJ.MHEHCBIJHGA$$System.Collections.IEnumerator.Reset @ RVA 0x31B7A4C

void BBJEEHDMNGJ_MHEHCBIJHGA__System_Collections_IEnumerator_Reset
               (BBJEEHDMNGJ_MHEHCBIJHGA_o *__this,MethodInfo *method)

{
  System_NotSupportedException_o *__this_00;
  undefined8 uVar1;
  
  thunk_FUN_01bb9178(&System_NotSupportedException_TypeInfo);
  __this_00 = (System_NotSupportedException_o *)thunk_FUN_01bda818();
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = thunk_FUN_01bb9178(&Method_BBJEEHDMNGJ_MHEHCBIJHGA_System_Collections_IEnumerator_Reset__)
  ;
                    /* WARNING: Subroutine does not return */
  FUN_01bab798(__this_00,uVar1);
}


// ===== private object System.Collections.IEnumerator.get_Current()  [RVA 0x31B7A84]
// BBJEEHDMNGJ.MHEHCBIJHGA$$System.Collections.IEnumerator.get_Current @ RVA 0x31B7A84

Il2CppObject *
BBJEEHDMNGJ_MHEHCBIJHGA__System_Collections_IEnumerator_get_Current
          (BBJEEHDMNGJ_MHEHCBIJHGA_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}

