// TypeDefIndex 1878
// Namespace: 
// [CompilerGenerated]
// private sealed class GeneralMenuScene.CMLKLGIDBAF : IEnumerator<object>, IEnumerator, IDisposable
// Fields:
//   private int <>1__state; // 0x10
//   private object <>2__current; // 0x18
//   public GeneralMenuScene <>4__this; // 0x20
//   public float delay; // 0x28

// ===== public void .ctor(int <>1__state)  [RVA 0x324F588]
// Nekki.SF2.GUI.GeneralMenu.GeneralMenuScene.CMLKLGIDBAF$$.ctor @ RVA 0x324F588

void Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_CMLKLGIDBAF___ctor
               (Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_CMLKLGIDBAF_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// ===== private void System.IDisposable.Dispose()  [RVA 0x32505C0]
// Nekki.SF2.GUI.GeneralMenu.GeneralMenuScene.CMLKLGIDBAF$$System.IDisposable.Dispose @ RVA 0x32505C0

void Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_CMLKLGIDBAF__System_IDisposable_Dispose
               (Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_CMLKLGIDBAF_o *__this,MethodInfo *method)

{
  return;
}


// ===== private bool MoveNext()  [RVA 0x32505C4]
// Nekki.SF2.GUI.GeneralMenu.GeneralMenuScene.CMLKLGIDBAF$$MoveNext @ RVA 0x32505C4

bool Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_CMLKLGIDBAF__MoveNext
               (Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_CMLKLGIDBAF_o *__this,MethodInfo *method)

{
  int iVar1;
  UnityEngine_WaitForSeconds_o *__this_00;
  NDPMLPGANCI_o *__this_01;
  MethodInfo *extraout_x1;
  Il2CppObject **ppIVar2;
  Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_o *__this_02;
  float seconds;
  
  if ((DAT_04567125 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&UnityEngine_WaitForSeconds_TypeInfo);
    DAT_04567125 = 1;
    method = extraout_x1;
  }
  iVar1 = (__this->fields).__1__state;
  __this_02 = (__this->fields).__4__this;
  if (iVar1 == 1) {
    (__this->fields).__1__state = -1;
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    NLPJLHOEAOE_TypeInfo->static_fields->FBCOPFLPMED = 2;
    if (__this_02 != (Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_o *)0x0) {
      (__this_02->fields).PDNOIJPIOLD = (System_Collections_IEnumerator_o *)0x0;
      thunk_FUN_01c20e04(&(__this_02->fields).PDNOIJPIOLD,0);
      __this_01 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
      if (__this_01 != (NDPMLPGANCI_o *)0x0) {
        NDPMLPGANCI__EKPAFDJIAGI
                  (__this_01,9,(Il2CppObject *)0x0,(System_Action_object__o *)0x0,true,
                   (MethodInfo *)0x0);
        return false;
      }
    }
  }
  else {
    if (iVar1 != 0) {
      return false;
    }
    (__this->fields).__1__state = -1;
    if (__this_02 != (Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_o *)0x0) {
      Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene__PKBPIMABPCB(__this_02,method);
      seconds = (__this->fields).delay;
      __this_00 = (UnityEngine_WaitForSeconds_o *)
                  thunk_FUN_01bda818(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(__this_00,seconds,(MethodInfo *)0x0);
      ppIVar2 = &(__this->fields).__2__current;
      *ppIVar2 = (Il2CppObject *)__this_00;
      thunk_FUN_01c20e04(ppIVar2,__this_00);
      (__this->fields).__1__state = 1;
      return true;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private object System.Collections.Generic.IEnumerator<System.Object>.get_Current()  [RVA 0x32506E8]
// Nekki.SF2.GUI.GeneralMenu.GeneralMenuScene.CMLKLGIDBAF$$System.Collections.Generic.IEnumerator<System.Object>.get_Current @ RVA 0x32506E8

Il2CppObject *
Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_CMLKLGIDBAF__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_CMLKLGIDBAF_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ===== private void System.Collections.IEnumerator.Reset()  [RVA 0x32506F0]
// Nekki.SF2.GUI.GeneralMenu.GeneralMenuScene.CMLKLGIDBAF$$System.Collections.IEnumerator.Reset @ RVA 0x32506F0

void Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_CMLKLGIDBAF__System_Collections_IEnumerator_Reset
               (Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_CMLKLGIDBAF_o *__this,MethodInfo *method)

{
  System_NotSupportedException_o *__this_00;
  undefined8 uVar1;
  
  thunk_FUN_01bb9178(&System_NotSupportedException_TypeInfo);
  __this_00 = (System_NotSupportedException_o *)thunk_FUN_01bda818();
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = thunk_FUN_01bb9178(&
                             Method_Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_CMLKLGIDBAF_System_Collections_IEnumerator_Reset__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_01bab798(__this_00,uVar1);
}


// ===== private object System.Collections.IEnumerator.get_Current()  [RVA 0x3250728]
// Nekki.SF2.GUI.GeneralMenu.GeneralMenuScene.CMLKLGIDBAF$$System.Collections.IEnumerator.get_Current @ RVA 0x3250728

Il2CppObject *
Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_CMLKLGIDBAF__System_Collections_IEnumerator_get_Current
          (Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_CMLKLGIDBAF_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}

