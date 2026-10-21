// TypeDefIndex 1992
// Namespace: 
// [CompilerGenerated]
// private sealed class ScrollDialogButton.HGJNEFFPGDG : IEnumerator<object>, IEnumerator, IDisposable
// Fields:
//   private int <>1__state; // 0x10
//   private object <>2__current; // 0x18
//   public ScrollDialogButton <>4__this; // 0x20

// ===== public void .ctor(int <>1__state)  [RVA 0x32920A4]
// Nekki.SF2.GUI.Dialogs.ScrollDialogButton.HGJNEFFPGDG$$.ctor @ RVA 0x32920A4

void Nekki_SF2_GUI_Dialogs_ScrollDialogButton_HGJNEFFPGDG___ctor
               (Nekki_SF2_GUI_Dialogs_ScrollDialogButton_HGJNEFFPGDG_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// ===== private void System.IDisposable.Dispose()  [RVA 0x32925D8]
// Nekki.SF2.GUI.Dialogs.ScrollDialogButton.HGJNEFFPGDG$$System.IDisposable.Dispose @ RVA 0x32925D8

void Nekki_SF2_GUI_Dialogs_ScrollDialogButton_HGJNEFFPGDG__System_IDisposable_Dispose
               (Nekki_SF2_GUI_Dialogs_ScrollDialogButton_HGJNEFFPGDG_o *__this,MethodInfo *method)

{
  return;
}


// ===== private bool MoveNext()  [RVA 0x32925DC]
// Nekki.SF2.GUI.Dialogs.ScrollDialogButton.HGJNEFFPGDG$$MoveNext @ RVA 0x32925DC

/* WARNING: Type propagation algorithm not settling */

bool Nekki_SF2_GUI_Dialogs_ScrollDialogButton_HGJNEFFPGDG__MoveNext
               (Nekki_SF2_GUI_Dialogs_ScrollDialogButton_HGJNEFFPGDG_o *__this,MethodInfo *method)

{
  int iVar1;
  UnityEngine_WaitForSeconds_o *__this_00;
  Il2CppObject **ppIVar2;
  Nekki_SF2_GUI_LabelAlias_o *pNVar3;
  UnityEngine_RectTransform_o *t;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Dialogs_ScrollDialogButton_o *pNVar4;
  System_Collections_IEnumerator_o **ppSVar5;
  float fVar6;
  float y;
  
  if ((DAT_04567334 & 1) == 0) {
    FUN_01bab630(&UnityEngine_WaitForSeconds_TypeInfo);
    DAT_04567334 = 1;
    method = extraout_x1;
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 != 1) {
    if (iVar1 != 0) {
      return false;
    }
    (__this->fields).__1__state = -1;
    __this_00 = (UnityEngine_WaitForSeconds_o *)
                thunk_FUN_01bda818(UnityEngine_WaitForSeconds_TypeInfo,method);
                    /* try { // try from 03392638 to 03492713 has its CatchHandler @ 03392638
                       catch() { ... } // from try @ 03392638 with catch @ 03392638
                       catch() { ... } // from try @ 03392738 with catch @ 03392638
                       catch() { ... } // from try @ 03392774 with catch @ 03392638
                       catch() { ... } // from try @ 0339279c with catch @ 03392638
                       catch() { ... } // from try @ 033927d4 with catch @ 03392638 */
    UnityEngine_WaitForSeconds___ctor(__this_00,0.02,(MethodInfo *)0x0);
    ppIVar2 = &(__this->fields).__2__current;
    *ppIVar2 = (Il2CppObject *)__this_00;
    thunk_FUN_01c20e04(ppIVar2,__this_00);
    (__this->fields).__1__state = 1;
    return true;
  }
  pNVar4 = (__this->fields).__4__this;
  (__this->fields).__1__state = -1;
  if ((pNVar4 != (Nekki_SF2_GUI_Dialogs_ScrollDialogButton_o *)0x0) &&
     (pNVar3 = (pNVar4->fields)._text, pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0)) {
    fVar6 = (pNVar3->fields).super._CDKHEGGEFOC_k__BackingField.fields.m_Center.fields.z;
    y = (pNVar4->fields).KEBBGENKNPN;
    fVar6 = fVar6 + fVar6 + 10.0;
    if (y <= fVar6) {
      y = fVar6;
    }
    t = UnityEngine_UI_Graphic__get_rectTransform
                  ((UnityEngine_UI_Graphic_o *)pNVar3,(MethodInfo *)0x0);
    UnityEngine_TransformExtensions__SetSizeDeltaY(t,y,(MethodInfo *)0x0);
    pNVar3 = (pNVar4->fields)._text;
    if (pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
      Nekki_SF2_GUI_TextPic__Invalidate((Nekki_SF2_GUI_TextPic_o *)pNVar3,(MethodInfo *)0x0);
      ppSVar5 = &(pNVar4->fields).CGBIOLDFDNK;
      *ppSVar5 = (System_Collections_IEnumerator_o *)0x0;
      thunk_FUN_01c20e04(ppSVar5,0);
      return false;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private object System.Collections.Generic.IEnumerator<System.Object>.get_Current()  [RVA 0x32926E4]
// Nekki.SF2.GUI.Dialogs.ScrollDialogButton.HGJNEFFPGDG$$System.Collections.Generic.IEnumerator<System.Object>.get_Current @ RVA 0x32926E4

Il2CppObject *
Nekki_SF2_GUI_Dialogs_ScrollDialogButton_HGJNEFFPGDG__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (Nekki_SF2_GUI_Dialogs_ScrollDialogButton_HGJNEFFPGDG_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ===== private void System.Collections.IEnumerator.Reset()  [RVA 0x32926EC]
// Nekki.SF2.GUI.Dialogs.ScrollDialogButton.HGJNEFFPGDG$$System.Collections.IEnumerator.Reset @ RVA 0x32926EC

void Nekki_SF2_GUI_Dialogs_ScrollDialogButton_HGJNEFFPGDG__System_Collections_IEnumerator_Reset
               (Nekki_SF2_GUI_Dialogs_ScrollDialogButton_HGJNEFFPGDG_o *__this,MethodInfo *method)

{
  System_NotSupportedException_o *__this_00;
  undefined8 uVar1;
  
  thunk_FUN_01bb9178(&System_NotSupportedException_TypeInfo);
  __this_00 = (System_NotSupportedException_o *)thunk_FUN_01bda818();
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
                    /* try { // try from 03392714 to 0349271b has its CatchHandler @ 03392780 */
  uVar1 = thunk_FUN_01bb9178(&
                             Method_Nekki_SF2_GUI_Dialogs_ScrollDialogButton_HGJNEFFPGDG_System_Collections_IEnumerator_Reset__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_01bab798(__this_00,uVar1);
}


// ===== private object System.Collections.IEnumerator.get_Current()  [RVA 0x3292724]
// Nekki.SF2.GUI.Dialogs.ScrollDialogButton.HGJNEFFPGDG$$System.Collections.IEnumerator.get_Current @ RVA 0x3292724

Il2CppObject *
Nekki_SF2_GUI_Dialogs_ScrollDialogButton_HGJNEFFPGDG__System_Collections_IEnumerator_get_Current
          (Nekki_SF2_GUI_Dialogs_ScrollDialogButton_HGJNEFFPGDG_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}

