// TypeDefIndex 236
// Namespace: 
// [CompilerGenerated]
// private sealed class NGCEHDLJOMI.AFKKHPCGFJB : IEnumerator<object>, IEnumerator, IDisposable
// Fields:
//   private int <>1__state; // 0x10
//   private object <>2__current; // 0x18
//   public NGCEHDLJOMI <>4__this; // 0x20

// ===== public void .ctor(int <>1__state)  [RVA 0x32240F8]
// NGCEHDLJOMI.AFKKHPCGFJB$$.ctor @ RVA 0x32240F8

void NGCEHDLJOMI_AFKKHPCGFJB___ctor
               (NGCEHDLJOMI_AFKKHPCGFJB_o *__this,int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// ===== private void System.IDisposable.Dispose()  [RVA 0x32245B8]
// NGCEHDLJOMI.AFKKHPCGFJB$$System.IDisposable.Dispose @ RVA 0x32245B8

void NGCEHDLJOMI_AFKKHPCGFJB__System_IDisposable_Dispose
               (NGCEHDLJOMI_AFKKHPCGFJB_o *__this,MethodInfo *method)

{
  return;
}


// ===== private bool MoveNext()  [RVA 0x32245BC]
// NGCEHDLJOMI.AFKKHPCGFJB$$MoveNext @ RVA 0x32245BC

bool NGCEHDLJOMI_AFKKHPCGFJB__MoveNext(NGCEHDLJOMI_AFKKHPCGFJB_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  Il2CppObject **ppIVar2;
  NGCEHDLJOMI_o *__this_00;
  Nekki_SF2_GUI_Menu_MainMenu_o *x;
  
  if ((DAT_04566f66 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566f66 = 1;
    method = extraout_x1;
  }
  if ((uint)(__this->fields).__1__state < 2) {
    (__this->fields).__1__state = -1;
    __this_00 = (__this->fields).__4__this;
    if (DAT_04565b84 == '\0') {
      FUN_01bab630(&Nekki_SF2_GUI_Menu_MainMenu_TypeInfo,method);
      DAT_04565b84 = '\x01';
    }
    x = Nekki_SF2_GUI_Menu_MainMenu_TypeInfo->static_fields->_JPDNDPEAJAL_k__BackingField;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      ppIVar2 = &(__this->fields).__2__current;
      *ppIVar2 = (Il2CppObject *)0x0;
      thunk_FUN_01c20e04(ppIVar2,0);
      (__this->fields).__1__state = 1;
      return true;
    }
    if (__this_00 == (NGCEHDLJOMI_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    NGCEHDLJOMI__KECOGKPNCNN(__this_00,method_00);
  }
  return false;
}


// ===== private object System.Collections.Generic.IEnumerator<System.Object>.get_Current()  [RVA 0x322469C]
// NGCEHDLJOMI.AFKKHPCGFJB$$System.Collections.Generic.IEnumerator<System.Object>.get_Current @ RVA 0x322469C

Il2CppObject *
NGCEHDLJOMI_AFKKHPCGFJB__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (NGCEHDLJOMI_AFKKHPCGFJB_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ===== private void System.Collections.IEnumerator.Reset()  [RVA 0x32246A4]
// NGCEHDLJOMI.AFKKHPCGFJB$$System.Collections.IEnumerator.Reset @ RVA 0x32246A4

void NGCEHDLJOMI_AFKKHPCGFJB__System_Collections_IEnumerator_Reset
               (NGCEHDLJOMI_AFKKHPCGFJB_o *__this,MethodInfo *method)

{
  System_NotSupportedException_o *__this_00;
  undefined8 uVar1;
  
  thunk_FUN_01bb9178(&System_NotSupportedException_TypeInfo);
  __this_00 = (System_NotSupportedException_o *)thunk_FUN_01bda818();
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = thunk_FUN_01bb9178(&Method_NGCEHDLJOMI_AFKKHPCGFJB_System_Collections_IEnumerator_Reset__)
  ;
                    /* WARNING: Subroutine does not return */
  FUN_01bab798(__this_00,uVar1);
}


// ===== private object System.Collections.IEnumerator.get_Current()  [RVA 0x32246DC]
// NGCEHDLJOMI.AFKKHPCGFJB$$System.Collections.IEnumerator.get_Current @ RVA 0x32246DC

Il2CppObject *
NGCEHDLJOMI_AFKKHPCGFJB__System_Collections_IEnumerator_get_Current
          (NGCEHDLJOMI_AFKKHPCGFJB_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}

