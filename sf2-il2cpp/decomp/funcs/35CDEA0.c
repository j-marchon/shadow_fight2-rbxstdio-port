// Nekki.SF2.GUI.BaseScrollContent$$UpdateLayout @ RVA 0x35CDEA0

void Nekki_SF2_GUI_BaseScrollContent__UpdateLayout
               (Nekki_SF2_GUI_BaseScrollContent_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_RectTransform_o *layoutRoot;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *pUVar2;
  
  if ((DAT_04568fbb & 1) == 0) {
    FUN_01bab630(&UnityEngine_UI_LayoutRebuilder_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&UnityEngine_RectTransform_TypeInfo);
    DAT_04568fbb = 1;
    method = extraout_x1;
  }
  pUVar2 = (__this->fields)._layout;
                    /* try { // try from 036cdef8 to 037cdf8b has its CatchHandler @ 036cd9d8 */
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    return;
  }
  pUVar2 = (__this->fields)._layout;
  if (pUVar2 != (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0) {
    UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing
              (pUVar2,(__this->fields).Spacing,(MethodInfo *)0x0);
    pUVar2 = (__this->fields)._layout;
    if ((pUVar2 != (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0) &&
       (__this_00 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0),
       __this_00 != (UnityEngine_GameObject_o *)0x0)) {
      layoutRoot = (UnityEngine_RectTransform_o *)
                   UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
      if ((UnityEngine_UI_LayoutRebuilder_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_UI_LayoutRebuilder_TypeInfo);
      }
                    /* try { // try from 036cdf8c to 037cdf8f has its CatchHandler @ 036cdfdc */
                    /* try { // try from 036cdf90 to 037cdf97 has its CatchHandler @ 036cdfd4 */
      if ((layoutRoot != (UnityEngine_RectTransform_o *)0x0) &&
         (layoutRoot->klass != UnityEngine_RectTransform_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 036cdfb8 to 037cdfbb has its CatchHandler @ 036cdfc4 */
        FUN_01babc64(layoutRoot);
      }
                    /* try { // try from 036cdf98 to 037cdf9f has its CatchHandler @ 036ce090 */
      UnityEngine_UI_LayoutRebuilder__ForceRebuildLayoutImmediate(layoutRoot,(MethodInfo *)0x0);
                    /* try { // try from 036cdfa0 to 037cdfa7 has its CatchHandler @ 036cdfd8 */
                    /* try { // try from 036cdfa8 to 037cdfab has its CatchHandler @ 036cd9d8 */
                    /* try { // try from 036cdfac to 037cdfaf has its CatchHandler @ 036cdfc8 */
      Nekki_SF2_GUI_BaseScrollContent__JKPBONNNLEI(__this,method_00);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 036cdfb0 to 037cdfb7 has its CatchHandler @ 036cd9d8 */
  FUN_01bab8c8();
}

