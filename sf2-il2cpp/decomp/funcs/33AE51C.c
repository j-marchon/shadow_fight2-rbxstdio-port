// Nekki.SF2.GUI.Dialogs.BaseDialog$$EnableTouchBlock @ RVA 0x33AE51C

void Nekki_SF2_GUI_Dialogs_BaseDialog__EnableTouchBlock
               (Nekki_SF2_GUI_Dialogs_BaseDialog_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *__this_00;
  MethodInfo *method_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  UnityEngine_RectTransform_o *pUVar2;
  
                    /* try { // try from 034ae51c to 035ae523 has its CatchHandler @ 034ae6c0 */
  method_00 = (MethodInfo *)(ulong)CJNHFNHJHPE;
                    /* try { // try from 034ae524 to 035ae543 has its CatchHandler @ 034ae6ec */
  if ((DAT_04567d2f & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04567d2f = 1;
    method_00 = extraout_x1;
  }
  if (!CJNHFNHJHPE) {
                    /* try { // try from 034ae550 to 035ae557 has its CatchHandler @ 034ae6e0 */
    pUVar2 = (__this->fields).MCMBIPEKNLK;
                    /* try { // try from 034ae560 to 035ae567 has its CatchHandler @ 034ae6bc */
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 034ae568 to 035ae573 has its CatchHandler @ 034ae6d8 */
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    method_00 = extraout_x1_00;
    if (bVar1) {
                    /* try { // try from 034ae584 to 035ae58b has its CatchHandler @ 034ae6dc */
      return;
    }
  }
  Nekki_SF2_GUI_Dialogs_BaseDialog__JCAEMPMAFHO(__this,method_00);
                    /* try { // try from 034ae594 to 035ae59b has its CatchHandler @ 034ae6b8 */
  pUVar2 = (__this->fields).MCMBIPEKNLK;
                    /* try { // try from 034ae59c to 035ae5a7 has its CatchHandler @ 034ae6d4 */
  if ((pUVar2 != (UnityEngine_RectTransform_o *)0x0) &&
     (__this_00 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0),
     __this_00 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

