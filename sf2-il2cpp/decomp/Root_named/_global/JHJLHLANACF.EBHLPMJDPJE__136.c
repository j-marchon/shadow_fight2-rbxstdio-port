// TypeDefIndex 136
// Namespace: 
// [CompilerGenerated]
// private sealed class JHJLHLANACF.EBHLPMJDPJE : IEnumerator<object>, IEnumerator, IDisposable
// Fields:
//   private int <>1__state; // 0x10
//   private object <>2__current; // 0x18

// ===== public void .ctor(int <>1__state)  [RVA 0x301B644]
// JHJLHLANACF.EBHLPMJDPJE$$.ctor @ RVA 0x301B644

void JHJLHLANACF_EBHLPMJDPJE___ctor
               (JHJLHLANACF_EBHLPMJDPJE_o *__this,int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// ===== private void System.IDisposable.Dispose()  [RVA 0x301BCF8]
// JHJLHLANACF.EBHLPMJDPJE$$System.IDisposable.Dispose @ RVA 0x301BCF8

void JHJLHLANACF_EBHLPMJDPJE__System_IDisposable_Dispose
               (JHJLHLANACF_EBHLPMJDPJE_o *__this,MethodInfo *method)

{
  return;
}


// ===== private bool MoveNext()  [RVA 0x301BCFC]
// JHJLHLANACF.EBHLPMJDPJE$$MoveNext @ RVA 0x301BCFC

bool JHJLHLANACF_EBHLPMJDPJE__MoveNext(JHJLHLANACF_EBHLPMJDPJE_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  Il2CppObject **ppIVar2;
  Nekki_SF2_GUI_Menu_MainMenu_o *pNVar3;
  
  if ((DAT_04565c13 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04565c13 = 1;
    method = extraout_x1;
  }
  if ((uint)(__this->fields).__1__state < 2) {
    (__this->fields).__1__state = -1;
    if (DAT_04565b84 == '\0') {
      FUN_01bab630(&Nekki_SF2_GUI_Menu_MainMenu_TypeInfo,method);
      DAT_04565b84 = '\x01';
    }
    pNVar3 = Nekki_SF2_GUI_Menu_MainMenu_TypeInfo->static_fields->_JPDNDPEAJAL_k__BackingField;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (bVar1) {
      ppIVar2 = &(__this->fields).__2__current;
      *ppIVar2 = (Il2CppObject *)0x0;
      thunk_FUN_01c20e04(ppIVar2,0);
      (__this->fields).__1__state = 1;
      return true;
    }
    if (DAT_04565b84 == '\0') {
      FUN_01bab630(&Nekki_SF2_GUI_Menu_MainMenu_TypeInfo);
      DAT_04565b84 = '\x01';
    }
    pNVar3 = Nekki_SF2_GUI_Menu_MainMenu_TypeInfo->static_fields->_JPDNDPEAJAL_k__BackingField;
    if (pNVar3 == (Nekki_SF2_GUI_Menu_MainMenu_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    Nekki_SF2_GUI_Menu_MainMenu__set_IsEnabled(pNVar3,false,(MethodInfo *)0x0);
  }
  return false;
}


// ===== private object System.Collections.Generic.IEnumerator<System.Object>.get_Current()  [RVA 0x301BE0C]
// JHJLHLANACF.EBHLPMJDPJE$$System.Collections.Generic.IEnumerator<System.Object>.get_Current @ RVA 0x301BE0C

Il2CppObject *
JHJLHLANACF_EBHLPMJDPJE__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (JHJLHLANACF_EBHLPMJDPJE_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ===== private void System.Collections.IEnumerator.Reset()  [RVA 0x301BE14]
// JHJLHLANACF.EBHLPMJDPJE$$System.Collections.IEnumerator.Reset @ RVA 0x301BE14

void JHJLHLANACF_EBHLPMJDPJE__System_Collections_IEnumerator_Reset
               (JHJLHLANACF_EBHLPMJDPJE_o *__this,MethodInfo *method)

{
  System_NotSupportedException_o *__this_00;
  undefined8 uVar1;
  
  thunk_FUN_01bb9178(&System_NotSupportedException_TypeInfo);
  __this_00 = (System_NotSupportedException_o *)thunk_FUN_01bda818();
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = thunk_FUN_01bb9178(&Method_JHJLHLANACF_EBHLPMJDPJE_System_Collections_IEnumerator_Reset__)
  ;
                    /* WARNING: Subroutine does not return */
  FUN_01bab798(__this_00,uVar1);
}


// ===== private object System.Collections.IEnumerator.get_Current()  [RVA 0x301BE4C]
// JHJLHLANACF.EBHLPMJDPJE$$System.Collections.IEnumerator.get_Current @ RVA 0x301BE4C

Il2CppObject *
JHJLHLANACF_EBHLPMJDPJE__System_Collections_IEnumerator_get_Current
          (JHJLHLANACF_EBHLPMJDPJE_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}

