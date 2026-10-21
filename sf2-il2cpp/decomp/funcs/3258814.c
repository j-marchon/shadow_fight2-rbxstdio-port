// Nekki.SF2.GUI.Dialogs.MultiLineScrollDialog$$Update @ RVA 0x3258814

/* WARNING: Type propagation algorithm not settling */

void Nekki_SF2_GUI_Dialogs_MultiLineScrollDialog__Update
               (Nekki_SF2_GUI_Dialogs_MultiLineScrollDialog_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Scripts_CheckBox_o *pNVar2;
  UnityEngine_GameObject_o *pUVar3;
  Nekki_SF2_GUI_LabelAlias_o *pNVar4;
  UnityEngine_RectTransform_o *pUVar5;
  float fVar6;
  UnityEngine_Vector2_o UVar7;
  
  if ((__this->fields).HDJDEJEGLEH != false) {
    (__this->fields).HDJDEJEGLEH = false;
    Nekki_SF2_GUI_Dialogs_MultiLineScrollDialog__FPBDGBCLCPF(__this,method);
  }
  if ((__this->fields).NLMBICAKOGJ == false) {
    return;
  }
  pNVar2 = (__this->fields)._checkbox;
  if ((pNVar2 != (Nekki_SF2_GUI_Scripts_CheckBox_o *)0x0) &&
     (pUVar3 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
     pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
    bVar1 = UnityEngine_GameObject__get_activeSelf(pUVar3,(MethodInfo *)0x0);
    if (!bVar1) {
      return;
    }
    pNVar4 = (__this->fields)._checkboxText;
    if ((pNVar4 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
       (pUVar3 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0),
       pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
      bVar1 = UnityEngine_GameObject__get_activeSelf(pUVar3,(MethodInfo *)0x0);
      if (!bVar1) {
        return;
      }
      pNVar2 = (__this->fields)._checkbox;
      if ((pNVar2 != (Nekki_SF2_GUI_Scripts_CheckBox_o *)0x0) &&
         (pUVar5 = SFButton__get_RectTransform((SFButton_o *)pNVar2,(MethodInfo *)0x0),
         pUVar5 != (UnityEngine_RectTransform_o *)0x0)) {
                    /* try { // try from 03358894 to 03458897 has its CatchHandler @ 03358a78 */
        UVar7 = UnityEngine_RectTransform__get_sizeDelta(pUVar5,(MethodInfo *)0x0);
        pNVar4 = (__this->fields)._checkboxText;
                    /* try { // try from 0335889c to 0345889f has its CatchHandler @ 033588ec */
                    /* try { // try from 033588a4 to 034588a7 has its CatchHandler @ 033588e8 */
        if ((pNVar4 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
           (pNVar2 = (__this->fields)._checkbox, pNVar2 != (Nekki_SF2_GUI_Scripts_CheckBox_o *)0x0))
        {
          fVar6 = (pNVar4->fields).super._BAHHBJMJCEM_k__BackingField.fields.m_Center.fields.y;
                    /* try { // try from 033588ac to 034588af has its CatchHandler @ 033588d0 */
                    /* try { // try from 033588b4 to 034588b7 has its CatchHandler @ 033588e4 */
                    /* try { // try from 033588b8 to 0345890b has its CatchHandler @ 0335849c */
                    /* catch() { ... } // from try @ 033586c0 with catch @ 033588bc */
          fVar6 = (UVar7.fields.x - (fVar6 + fVar6)) * 0.5;
                    /* catch() { ... } // from try @ 033586c8 with catch @ 033588c0 */
          pUVar5 = SFButton__get_RectTransform((SFButton_o *)pNVar2,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 03358690 with catch @ 033588c4 */
                    /* catch() { ... } // from try @ 0335867c with catch @ 033588c8 */
                    /* catch() { ... } // from try @ 03358668 with catch @ 033588cc */
                    /* catch() { ... } // from try @ 033588ac with catch @ 033588d0 */
          UnityEngine_TransformExtensions__SetAnchoredPositionX
                    (pUVar5,fVar6 + -5.0,(MethodInfo *)0x0);
          pNVar4 = (__this->fields)._checkboxText;
          if (pNVar4 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    /* catch() { ... } // from try @ 03358644 with catch @ 033588dc */
                    /* catch() { ... } // from try @ 033585e0 with catch @ 033588e0 */
            pUVar5 = UnityEngine_UI_Graphic__get_rectTransform
                               ((UnityEngine_UI_Graphic_o *)pNVar4,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 0335869c with catch @ 033588e4
                       catch() { ... } // from try @ 033588b4 with catch @ 033588e4 */
                    /* catch() { ... } // from try @ 0335863c with catch @ 033588e8
                       catch() { ... } // from try @ 033588a4 with catch @ 033588e8 */
                    /* catch() { ... } // from try @ 03358620 with catch @ 033588ec
                       catch() { ... } // from try @ 0335889c with catch @ 033588ec */
                    /* catch() { ... } // from try @ 03358610 with catch @ 033588f0 */
                    /* catch() { ... } // from try @ 033585f4 with catch @ 033588f4 */
            UnityEngine_TransformExtensions__SetAnchoredPositionX
                      (pUVar5,fVar6 + 5.0,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

