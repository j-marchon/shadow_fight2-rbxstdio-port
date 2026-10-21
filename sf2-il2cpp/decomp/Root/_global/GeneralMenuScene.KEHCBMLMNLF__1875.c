// TypeDefIndex 1875
// Namespace: 
// [CompilerGenerated]
// private sealed class GeneralMenuScene.KEHCBMLMNLF : IEnumerator<object>, IEnumerator, IDisposable
// Fields:
//   private int <>1__state; // 0x10
//   private object <>2__current; // 0x18
//   public GeneralMenuScene <>4__this; // 0x20
//   public DBNEEHGBCJD p_lang; // 0x28

// ===== public void .ctor(int <>1__state)  [RVA 0x324EBA0]
// Nekki.SF2.GUI.GeneralMenu.GeneralMenuScene.KEHCBMLMNLF$$.ctor @ RVA 0x324EBA0

void Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_KEHCBMLMNLF___ctor
               (Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_KEHCBMLMNLF_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// ===== private void System.IDisposable.Dispose()  [RVA 0x324FF00]
// Nekki.SF2.GUI.GeneralMenu.GeneralMenuScene.KEHCBMLMNLF$$System.IDisposable.Dispose @ RVA 0x324FF00

void Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_KEHCBMLMNLF__System_IDisposable_Dispose
               (Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_KEHCBMLMNLF_o *__this,MethodInfo *method)

{
  return;
}


// ===== private bool MoveNext()  [RVA 0x324FF04]
// Nekki.SF2.GUI.GeneralMenu.GeneralMenuScene.KEHCBMLMNLF$$MoveNext @ RVA 0x324FF04

bool Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_KEHCBMLMNLF__MoveNext
               (Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_KEHCBMLMNLF_o *__this,MethodInfo *method)

{
  int iVar1;
  UnityEngine_WaitForSeconds_o *__this_00;
  System_Action_bool__o *BLMFLPJJMPF;
  MethodInfo *extraout_x1;
  Il2CppObject **ppIVar2;
  DBNEEHGBCJD_o *NFDKMBAGHPD;
  Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_o *pNVar3;
  float seconds;
  
  if ((DAT_04567122 & 1) == 0) {
    FUN_01bab630(&System_Action<bool>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_PEPJDDDKFMF__);
    FUN_01bab630(&NGFEKJBMGEB_TypeInfo);
    FUN_01bab630(&UnityEngine_WaitForSeconds_TypeInfo);
    DAT_04567122 = 1;
    method = extraout_x1;
  }
  iVar1 = (__this->fields).__1__state;
  pNVar3 = (__this->fields).__4__this;
  if (iVar1 == 1) {
    (__this->fields).__1__state = -1;
    NFDKMBAGHPD = (__this->fields).p_lang;
    BLMFLPJJMPF = (System_Action_bool__o *)thunk_FUN_01bda818(System_Action<bool>_TypeInfo,method);
    System_Action<bool>___ctor();
    if ((NGFEKJBMGEB_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    NGFEKJBMGEB__OPFMHDIBOKE(NFDKMBAGHPD,BLMFLPJJMPF,(MethodInfo *)0x0);
  }
  else if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    if (pNVar3 != (Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_o *)0x0) {
      seconds = (pNVar3->fields)._ChangeLanguageDelay;
      __this_00 = (UnityEngine_WaitForSeconds_o *)
                  thunk_FUN_01bda818(UnityEngine_WaitForSeconds_TypeInfo,method);
      UnityEngine_WaitForSeconds___ctor(__this_00,seconds,(MethodInfo *)0x0);
      ppIVar2 = &(__this->fields).__2__current;
      *ppIVar2 = (Il2CppObject *)__this_00;
      thunk_FUN_01c20e04(ppIVar2,__this_00);
      (__this->fields).__1__state = 1;
      return true;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return false;
}


// ===== private object System.Collections.Generic.IEnumerator<System.Object>.get_Current()  [RVA 0x3250030]
// Nekki.SF2.GUI.GeneralMenu.GeneralMenuScene.KEHCBMLMNLF$$System.Collections.Generic.IEnumerator<System.Object>.get_Current @ RVA 0x3250030

Il2CppObject *
Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_KEHCBMLMNLF__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_KEHCBMLMNLF_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ===== private void System.Collections.IEnumerator.Reset()  [RVA 0x3250038]
// Nekki.SF2.GUI.GeneralMenu.GeneralMenuScene.KEHCBMLMNLF$$System.Collections.IEnumerator.Reset @ RVA 0x3250038

void Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_KEHCBMLMNLF__System_Collections_IEnumerator_Reset
               (Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_KEHCBMLMNLF_o *__this,MethodInfo *method)

{
  System_NotSupportedException_o *__this_00;
  undefined8 uVar1;
  
  thunk_FUN_01bb9178(&System_NotSupportedException_TypeInfo);
  __this_00 = (System_NotSupportedException_o *)thunk_FUN_01bda818();
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = thunk_FUN_01bb9178(&
                             Method_Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_KEHCBMLMNLF_System_Collections_IEnumerator_Reset__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_01bab798(__this_00,uVar1);
}


// ===== private object System.Collections.IEnumerator.get_Current()  [RVA 0x3250070]
// Nekki.SF2.GUI.GeneralMenu.GeneralMenuScene.KEHCBMLMNLF$$System.Collections.IEnumerator.get_Current @ RVA 0x3250070

Il2CppObject *
Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_KEHCBMLMNLF__System_Collections_IEnumerator_get_Current
          (Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_KEHCBMLMNLF_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}

