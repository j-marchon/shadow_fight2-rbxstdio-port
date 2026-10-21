// Nekki.SF2.GUI.Fight.DisplayModel$$SetSizeDelta @ RVA 0x32B941C

void Nekki_SF2_GUI_Fight_DisplayModel__SetSizeDelta
               (Nekki_SF2_GUI_Fight_DisplayModel_o *__this,UnityEngine_Vector2_o KFCJCEIBICJ,
               MethodInfo *method)

{
  bool bVar1;
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_UI_LayoutElement_o *pUVar2;
  
  if ((DAT_04567477 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&UnityEngine_RectTransform_TypeInfo);
    DAT_04567477 = 1;
  }
  __this_00 = (UnityEngine_RectTransform_o *)
              UnityEngine_Component__get_transform
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 == (UnityEngine_RectTransform_o *)0x0) {
    __this_00 = (UnityEngine_RectTransform_o *)0x0;
  }
  else if (__this_00->klass != UnityEngine_RectTransform_TypeInfo) {
    __this_00 = (UnityEngine_RectTransform_o *)0x0;
  }
                    /* try { // try from 033b9498 to 034b96ff has its CatchHandler @ 033b9498
                       catch() { ... } // from try @ 033b9498 with catch @ 033b9498
                       catch() { ... } // from try @ 033b9810 with catch @ 033b9498
                       catch() { ... } // from try @ 033b9910 with catch @ 033b9498
                       catch() { ... } // from try @ 033b9918 with catch @ 033b9498
                       catch() { ... } // from try @ 033b99cc with catch @ 033b9498 */
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                    );
  if (bVar1) {
    pUVar2 = (__this->fields).layoutElement;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (bVar1) {
      if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
        UnityEngine_RectTransform__set_sizeDelta(__this_00,KFCJCEIBICJ,(MethodInfo *)0x0);
        pUVar2 = (__this->fields).layoutElement;
        if (pUVar2 != (UnityEngine_UI_LayoutElement_o *)0x0) {
          (*(pUVar2->klass->vtable)._32_set_minWidth.methodPtr)
                    (CONCAT44((int)((ulong)KFCJCEIBICJ.fields >> 0x20),KFCJCEIBICJ.fields.x),pUVar2,
                     (pUVar2->klass->vtable)._32_set_minWidth.method);
          pUVar2 = (__this->fields).layoutElement;
          if (pUVar2 != (UnityEngine_UI_LayoutElement_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x033b953c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(pUVar2->klass->vtable)._34_set_minHeight.methodPtr)
                      (CONCAT44((int)((ulong)register0x00005020 >> 0x20),KFCJCEIBICJ.fields.y),
                       pUVar2,(pUVar2->klass->vtable)._34_set_minHeight.method);
            return;
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
  return;
}

