// TypeDefIndex 2441
// Namespace: 
// [CompilerGenerated]
// private sealed class ActionCameraWeight.NFAPJCNAOGN : IEnumerator<object>, IEnumerator, IDisposable
// Fields:
//   private int <>1__state; // 0x10
//   private object <>2__current; // 0x18
//   public ActionCameraWeight <>4__this; // 0x20
//   public Model model; // 0x28

// ===== public void .ctor(int <>1__state)  [RVA 0x335FD0C]
// ActionCameraWeight.NFAPJCNAOGN$$.ctor @ RVA 0x335FD0C

void ActionCameraWeight_NFAPJCNAOGN___ctor
               (ActionCameraWeight_NFAPJCNAOGN_o *__this,int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
                    /* try { // try from 0345fd24 to 0355ff8b has its CatchHandler @ 0345fd24
                       catch() { ... } // from try @ 0345fd24 with catch @ 0345fd24
                       catch() { ... } // from try @ 034601e8 with catch @ 0345fd24
                       catch() { ... } // from try @ 0346025c with catch @ 0345fd24
                       catch() { ... } // from try @ 03460304 with catch @ 0345fd24
                       catch() { ... } // from try @ 03460344 with catch @ 0345fd24 */
  (__this->fields).__1__state = __1__state;
  return;
}


// ===== private void System.IDisposable.Dispose()  [RVA 0x335FD6C]
// ActionCameraWeight.NFAPJCNAOGN$$System.IDisposable.Dispose @ RVA 0x335FD6C

void ActionCameraWeight_NFAPJCNAOGN__System_IDisposable_Dispose
               (ActionCameraWeight_NFAPJCNAOGN_o *__this,MethodInfo *method)

{
  return;
}


// ===== private bool MoveNext()  [RVA 0x335FD70]
// ActionCameraWeight.NFAPJCNAOGN$$MoveNext @ RVA 0x335FD70

bool ActionCameraWeight_NFAPJCNAOGN__MoveNext(ActionCameraWeight_NFAPJCNAOGN_o *__this,MethodInfo *method)

{
  int iVar1;
  NCNCKGBEGGF_o *__this_00;
  Model_o *__this_01;
  ActionCameraWeight_o *CPECAEHDDDB;
  Il2CppObject **ppIVar2;
  float NACILJPLKBG;
  
  if ((DAT_04567a7d & 1) == 0) {
    FUN_01bab630(&NCNCKGBEGGF_TypeInfo);
    DAT_04567a7d = 1;
  }
  iVar1 = (__this->fields).__1__state;
  CPECAEHDDDB = (__this->fields).__4__this;
  if (iVar1 == 1) {
    __this_01 = (__this->fields).model;
    (__this->fields).__1__state = -1;
    if (__this_01 == (Model_o *)0x0) goto LAB_0345fe2c;
    Model__AHNAGGGOLBK(__this_01,CPECAEHDDDB,(MethodInfo *)0x0);
  }
  else if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    if (CPECAEHDDDB != (ActionCameraWeight_o *)0x0) {
      NACILJPLKBG = (CPECAEHDDDB->fields).BJIKPLGMOMI;
      __this_00 = (NCNCKGBEGGF_o *)thunk_FUN_01bda818(NCNCKGBEGGF_TypeInfo);
      NCNCKGBEGGF___ctor(__this_00,NACILJPLKBG,(MethodInfo *)0x0);
      ppIVar2 = &(__this->fields).__2__current;
      *ppIVar2 = (Il2CppObject *)__this_00;
      thunk_FUN_01c20e04(ppIVar2,__this_00);
      (__this->fields).__1__state = 1;
      return true;
    }
LAB_0345fe2c:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return false;
}


// ===== private object System.Collections.Generic.IEnumerator<System.Object>.get_Current()  [RVA 0x335FE30]
// ActionCameraWeight.NFAPJCNAOGN$$System.Collections.Generic.IEnumerator<System.Object>.get_Current @ RVA 0x335FE30

Il2CppObject *
ActionCameraWeight_NFAPJCNAOGN__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (ActionCameraWeight_NFAPJCNAOGN_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ===== private void System.Collections.IEnumerator.Reset()  [RVA 0x335FE38]
// ActionCameraWeight.NFAPJCNAOGN$$System.Collections.IEnumerator.Reset @ RVA 0x335FE38

void ActionCameraWeight_NFAPJCNAOGN__System_Collections_IEnumerator_Reset
               (ActionCameraWeight_NFAPJCNAOGN_o *__this,MethodInfo *method)

{
  System_NotSupportedException_o *__this_00;
  undefined8 uVar1;
  
  thunk_FUN_01bb9178(&System_NotSupportedException_TypeInfo);
  __this_00 = (System_NotSupportedException_o *)thunk_FUN_01bda818();
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = thunk_FUN_01bb9178(&Method_PEJCGNNAPHG_NFAPJCNAOGN_System_Collections_IEnumerator_Reset__)
  ;
                    /* WARNING: Subroutine does not return */
  FUN_01bab798(__this_00,uVar1);
}


// ===== private object System.Collections.IEnumerator.get_Current()  [RVA 0x335FE70]
// ActionCameraWeight.NFAPJCNAOGN$$System.Collections.IEnumerator.get_Current @ RVA 0x335FE70

Il2CppObject *
ActionCameraWeight_NFAPJCNAOGN__System_Collections_IEnumerator_get_Current
          (ActionCameraWeight_NFAPJCNAOGN_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}

