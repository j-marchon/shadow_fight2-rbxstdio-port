// Nekki.SF2.GUI.Dialogs.BaseDialog$$JCAEMPMAFHO @ RVA 0x33AE5C0

void Nekki_SF2_GUI_Dialogs_BaseDialog__JCAEMPMAFHO
               (Nekki_SF2_GUI_Dialogs_BaseDialog_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  UnityEngine_RectTransform_o **ppUVar2;
  UnityEngine_RectTransform_o *pUVar3;
  
                    /* try { // try from 034ae5c0 to 035ae5c7 has its CatchHandler @ 034ae6b4 */
                    /* try { // try from 034ae5c8 to 035ae66f has its CatchHandler @ 034ae264 */
  if ((DAT_04567d31 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_5003);
    DAT_04567d31 = 1;
    method = extraout_x1;
  }
  ppUVar2 = &(__this->fields).MCMBIPEKNLK;
  pUVar3 = *ppUVar2;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  method_00 = (MethodInfo *)0x0;
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  pUVar3 = Nekki_SF2_GUI_Dialogs_BaseDialog__JLBIECFKGPL(__this,StringLiteral_5003,method_00);
  (__this->fields).MCMBIPEKNLK = pUVar3;
  thunk_FUN_01c20e04(ppUVar2,pUVar3);
  pUVar3 = (__this->fields).MCMBIPEKNLK;
                    /* try { // try from 034ae670 to 035ae677 has its CatchHandler @ 034ae6fc */
  if ((pUVar3 != (UnityEngine_RectTransform_o *)0x0) &&
     (__this_00 = UnityEngine_Component__get_transform
                            ((UnityEngine_Component_o *)pUVar3,(MethodInfo *)0x0),
     __this_00 != (UnityEngine_Transform_o *)0x0)) {
                    /* try { // try from 034ae678 to 035ae67b has its CatchHandler @ 034ae6e8 */
                    /* try { // try from 034ae67c to 035ae67f has its CatchHandler @ 034ae6d0 */
    UnityEngine_Transform__SetAsLastSibling(__this_00,(MethodInfo *)0x0);
                    /* try { // try from 034ae680 to 035ae683 has its CatchHandler @ 034ae6cc */
                    /* try { // try from 034ae684 to 035ae687 has its CatchHandler @ 034ae6c8 */
                    /* try { // try from 034ae688 to 035ae68b has its CatchHandler @ 034ae6c4 */
                    /* try { // try from 034ae68c to 035ae68f has its CatchHandler @ 034ae6b0 */
                    /* try { // try from 034ae690 to 035ae693 has its CatchHandler @ 034ae6a8 */
    if ((*ppUVar2 != (UnityEngine_RectTransform_o *)0x0) &&
       (__this_01 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)*ppUVar2,(MethodInfo *)0x0),
       __this_01 != (UnityEngine_GameObject_o *)0x0)) {
                    /* try { // try from 034ae694 to 035ae697 has its CatchHandler @ 034ae264 */
                    /* try { // try from 034ae698 to 035ae69b has its CatchHandler @ 034ae6a4 */
                    /* try { // try from 034ae69c to 035ae71b has its CatchHandler @ 034ae264 */
                    /* catch() { ... } // from try @ 034ae698 with catch @ 034ae6a4 */
                    /* catch() { ... } // from try @ 034ae690 with catch @ 034ae6a8 */
      UnityEngine_GameObject__SetActive(__this_01,false,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 034ae50c with catch @ 034ae6ac */
  FUN_01bab8c8();
}

