// TypeDefIndex 2155
// Namespace: 
// [CompilerGenerated]
// private sealed class PhaseBox.FBPENINHENE : IEnumerator<object>, IEnumerator, IDisposable
// Fields:
//   private int <>1__state; // 0x10
//   private object <>2__current; // 0x18
//   public PhaseBox <>4__this; // 0x20

// ===== public void .ctor(int <>1__state)  [RVA 0x32D7AA4]
// Nekki.SF2.GUI.Pvp.PhaseBox.FBPENINHENE$$.ctor @ RVA 0x32D7AA4

void Nekki_SF2_GUI_Pvp_PhaseBox_FBPENINHENE___ctor
               (Nekki_SF2_GUI_Pvp_PhaseBox_FBPENINHENE_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// ===== private void System.IDisposable.Dispose()  [RVA 0x32D84A0]
// Nekki.SF2.GUI.Pvp.PhaseBox.FBPENINHENE$$System.IDisposable.Dispose @ RVA 0x32D84A0

void Nekki_SF2_GUI_Pvp_PhaseBox_FBPENINHENE__System_IDisposable_Dispose
               (Nekki_SF2_GUI_Pvp_PhaseBox_FBPENINHENE_o *__this,MethodInfo *method)

{
  return;
}


// ===== private bool MoveNext()  [RVA 0x32D84A4]
// Nekki.SF2.GUI.Pvp.PhaseBox.FBPENINHENE$$MoveNext @ RVA 0x32D84A4

bool Nekki_SF2_GUI_Pvp_PhaseBox_FBPENINHENE__MoveNext
               (Nekki_SF2_GUI_Pvp_PhaseBox_FBPENINHENE_o *__this,MethodInfo *method)

{
  int iVar1;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *target;
  DG_Tweening_Core_TweenerCore_Vector3__Vector3__VectorOptions__o *t;
  DG_Tweening_TweenCallback_o *action;
  UnityEngine_WaitForSeconds_o *__this_01;
  MethodInfo *extraout_x1;
  Il2CppObject **ppIVar2;
  Nekki_SF2_GUI_Pvp_PhaseBox_o *__this_02;
  
  if ((DAT_045675a1 & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Pvp_PhaseBox_JCKJFDLOGEF__);
    FUN_01bab630(&DG_Tweening_TweenCallback_TypeInfo);
    FUN_01bab630(&
                 Method_DG_Tweening_TweenSettingsExtensions_OnComplete<TweenerCore<Vector3,_Vector3,_VectorOptions>>__
                );
    FUN_01bab630(&UnityEngine_WaitForSeconds_TypeInfo);
    DAT_045675a1 = 1;
    method = extraout_x1;
  }
  iVar1 = (__this->fields).__1__state;
  __this_02 = (__this->fields).__4__this;
  if (iVar1 == 1) {
    (__this->fields).__1__state = -1;
    if (__this_02 == (Nekki_SF2_GUI_Pvp_PhaseBox_o *)0x0) goto LAB_033d85f0;
    Nekki_SF2_GUI_Pvp_PhaseBox__HidePhaseList(__this_02,method);
  }
  else if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    if ((__this_02 != (Nekki_SF2_GUI_Pvp_PhaseBox_o *)0x0) &&
       (__this_00 = (__this_02->fields)._phaseList, __this_00 != (UnityEngine_GameObject_o *)0x0)) {
      target = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
      t = DG_Tweening_ShortcutExtensions__DOLocalMoveY(target,-41.0,0.5,false,(MethodInfo *)0x0);
      action = (DG_Tweening_TweenCallback_o *)thunk_FUN_01bda818(DG_Tweening_TweenCallback_TypeInfo)
      ;
      DG_Tweening_TweenCallback___ctor();
      DG_Tweening_TweenSettingsExtensions__OnComplete<object>
                ((Il2CppObject *)t,action,
                 Method_DG_Tweening_TweenSettingsExtensions_OnComplete<TweenerCore<Vector3,_Vector3,_VectorOptions>>__
                );
      __this_01 = (UnityEngine_WaitForSeconds_o *)
                  thunk_FUN_01bda818(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(__this_01,3.0,(MethodInfo *)0x0);
      ppIVar2 = &(__this->fields).__2__current;
      *ppIVar2 = (Il2CppObject *)__this_01;
      thunk_FUN_01c20e04(ppIVar2,__this_01);
      (__this->fields).__1__state = 1;
      return true;
    }
LAB_033d85f0:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return false;
}


// ===== private object System.Collections.Generic.IEnumerator<System.Object>.get_Current()  [RVA 0x32D85F4]
// Nekki.SF2.GUI.Pvp.PhaseBox.FBPENINHENE$$System.Collections.Generic.IEnumerator<System.Object>.get_Current @ RVA 0x32D85F4

Il2CppObject *
Nekki_SF2_GUI_Pvp_PhaseBox_FBPENINHENE__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (Nekki_SF2_GUI_Pvp_PhaseBox_FBPENINHENE_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ===== private void System.Collections.IEnumerator.Reset()  [RVA 0x32D85FC]
// Nekki.SF2.GUI.Pvp.PhaseBox.FBPENINHENE$$System.Collections.IEnumerator.Reset @ RVA 0x32D85FC

void Nekki_SF2_GUI_Pvp_PhaseBox_FBPENINHENE__System_Collections_IEnumerator_Reset
               (Nekki_SF2_GUI_Pvp_PhaseBox_FBPENINHENE_o *__this,MethodInfo *method)

{
  System_NotSupportedException_o *__this_00;
  undefined8 uVar1;
  
  thunk_FUN_01bb9178(&System_NotSupportedException_TypeInfo);
  __this_00 = (System_NotSupportedException_o *)thunk_FUN_01bda818();
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = thunk_FUN_01bb9178(&
                             Method_Nekki_SF2_GUI_Pvp_PhaseBox_FBPENINHENE_System_Collections_IEnumerator_Reset__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_01bab798(__this_00,uVar1);
}


// ===== private object System.Collections.IEnumerator.get_Current()  [RVA 0x32D8634]
// Nekki.SF2.GUI.Pvp.PhaseBox.FBPENINHENE$$System.Collections.IEnumerator.get_Current @ RVA 0x32D8634

Il2CppObject *
Nekki_SF2_GUI_Pvp_PhaseBox_FBPENINHENE__System_Collections_IEnumerator_get_Current
          (Nekki_SF2_GUI_Pvp_PhaseBox_FBPENINHENE_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}

