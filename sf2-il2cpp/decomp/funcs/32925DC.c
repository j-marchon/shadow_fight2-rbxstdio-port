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

