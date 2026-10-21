// Nekki.SF2.GUI.Dialogs.BaseDialog$$IsTouchBlocked @ RVA 0x33AF540

bool Nekki_SF2_GUI_Dialogs_BaseDialog__IsTouchBlocked
               (Nekki_SF2_GUI_Dialogs_BaseDialog_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *__this_00;
  MethodInfo *extraout_x1;
  UnityEngine_RectTransform_o *pUVar2;
  
                    /* try { // try from 034af558 to 035af55f has its CatchHandler @ 034af70c */
  if ((DAT_04567d38 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04567d38 = 1;
    method = extraout_x1;
  }
                    /* try { // try from 034af574 to 035af5c7 has its CatchHandler @ 034af8c0 */
  pUVar2 = (__this->fields).MCMBIPEKNLK;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pUVar2 = (__this->fields).MCMBIPEKNLK;
    if ((pUVar2 != (UnityEngine_RectTransform_o *)0x0) &&
       (__this_00 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0),
       __this_00 != (UnityEngine_GameObject_o *)0x0)) {
      bVar1 = UnityEngine_GameObject__get_activeSelf(__this_00,(MethodInfo *)0x0);
      return bVar1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* try { // try from 034af5cc to 035af5cf has its CatchHandler @ 034af6fc */
  return false;
}

