// TypeDefIndex 915
// Namespace: 
// [CompilerGenerated]
// private sealed class EndFightContent.HLKCLCJPLIL : IEnumerator<object>, IEnumerator, IDisposable
// Fields:
//   private int <>1__state; // 0x10
//   private object <>2__current; // 0x18
//   public EndFightContent <>4__this; // 0x20

// ===== public void .ctor(int <>1__state)  [RVA 0x309CB44]
// Nekki.SF2.GUI.Fight.EndFightContent.HLKCLCJPLIL$$.ctor @ RVA 0x309CB44

void Nekki_SF2_GUI_Fight_EndFightContent_HLKCLCJPLIL___ctor
               (Nekki_SF2_GUI_Fight_EndFightContent_HLKCLCJPLIL_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// ===== private void System.IDisposable.Dispose()  [RVA 0x309D080]
// Nekki.SF2.GUI.Fight.EndFightContent.HLKCLCJPLIL$$System.IDisposable.Dispose @ RVA 0x309D080

void Nekki_SF2_GUI_Fight_EndFightContent_HLKCLCJPLIL__System_IDisposable_Dispose
               (Nekki_SF2_GUI_Fight_EndFightContent_HLKCLCJPLIL_o *__this,MethodInfo *method)

{
  return;
}


// ===== private bool MoveNext()  [RVA 0x309D084]
// Nekki.SF2.GUI.Fight.EndFightContent.HLKCLCJPLIL$$MoveNext @ RVA 0x309D084

bool Nekki_SF2_GUI_Fight_EndFightContent_HLKCLCJPLIL__MoveNext
               (Nekki_SF2_GUI_Fight_EndFightContent_HLKCLCJPLIL_o *__this,MethodInfo *method)

{
  int iVar1;
  Il2CppObject *__this_00;
  Il2CppObject **ppIVar2;
  Nekki_SF2_GUI_Fight_EndFightContent_o *__this_01;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566127 & 1) == 0) {
    FUN_01bab630(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    DAT_04566127 = 1;
    method = extraout_x1;
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 1) {
    __this_01 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    if (__this_01 == (Nekki_SF2_GUI_Fight_EndFightContent_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    (__this_01->fields).BGINDOKLEKD = (__this_01->fields).BGINDOKLEKD + 1;
    Nekki_SF2_GUI_Fight_EndFightContent__IOOPGJBHPKK(__this_01,method);
  }
  else if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    __this_00 = (Il2CppObject *)thunk_FUN_01bda818(UnityEngine_WaitForEndOfFrame_TypeInfo);
    UnityEngine_WaitForEndOfFrame___ctor
              ((UnityEngine_WaitForEndOfFrame_o *)__this_00,(MethodInfo *)0x0);
    ppIVar2 = &(__this->fields).__2__current;
    *ppIVar2 = __this_00;
    thunk_FUN_01c20e04(ppIVar2,__this_00);
    (__this->fields).__1__state = 1;
    return true;
  }
  return false;
}


// ===== private object System.Collections.Generic.IEnumerator<System.Object>.get_Current()  [RVA 0x309D134]
// Nekki.SF2.GUI.Fight.EndFightContent.HLKCLCJPLIL$$System.Collections.Generic.IEnumerator<System.Object>.get_Current @ RVA 0x309D134

Il2CppObject *
Nekki_SF2_GUI_Fight_EndFightContent_HLKCLCJPLIL__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (Nekki_SF2_GUI_Fight_EndFightContent_HLKCLCJPLIL_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ===== private void System.Collections.IEnumerator.Reset()  [RVA 0x309D13C]
// Nekki.SF2.GUI.Fight.EndFightContent.HLKCLCJPLIL$$System.Collections.IEnumerator.Reset @ RVA 0x309D13C

void Nekki_SF2_GUI_Fight_EndFightContent_HLKCLCJPLIL__System_Collections_IEnumerator_Reset
               (Nekki_SF2_GUI_Fight_EndFightContent_HLKCLCJPLIL_o *__this,MethodInfo *method)

{
  System_NotSupportedException_o *__this_00;
  undefined8 uVar1;
  
  thunk_FUN_01bb9178(&System_NotSupportedException_TypeInfo);
  __this_00 = (System_NotSupportedException_o *)thunk_FUN_01bda818();
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = thunk_FUN_01bb9178(&
                             Method_Nekki_SF2_GUI_Fight_EndFightContent_HLKCLCJPLIL_System_Collections_IEnumerator_Reset__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_01bab798(__this_00,uVar1);
}


// ===== private object System.Collections.IEnumerator.get_Current()  [RVA 0x309D174]
// Nekki.SF2.GUI.Fight.EndFightContent.HLKCLCJPLIL$$System.Collections.IEnumerator.get_Current @ RVA 0x309D174

Il2CppObject *
Nekki_SF2_GUI_Fight_EndFightContent_HLKCLCJPLIL__System_Collections_IEnumerator_get_Current
          (Nekki_SF2_GUI_Fight_EndFightContent_HLKCLCJPLIL_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}

