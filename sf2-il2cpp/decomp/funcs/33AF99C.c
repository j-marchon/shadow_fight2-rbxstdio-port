// Nekki.SF2.GUI.Dialogs.BaseDialog$$GetLeftButtonId @ RVA 0x33AF99C

int32_t Nekki_SF2_GUI_Dialogs_BaseDialog__GetLeftButtonId
                  (Nekki_SF2_GUI_Dialogs_BaseDialog_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  LabelButton_o *pLVar2;
  
                    /* try { // try from 034af9a4 to 035afa0b has its CatchHandler @ 034afa20 */
  if ((DAT_04567d3d & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04567d3d = 1;
    method = extraout_x1;
  }
  pLVar2 = (__this->fields)._btnCancel;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pLVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pLVar2 = (__this->fields)._btnCancel;
  }
  else {
                    /* try { // try from 034afa0c to 035afa17 has its CatchHandler @ 034ae7c8 */
    pLVar2 = (__this->fields)._btnOK;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 034afa18 to 035afa1f has its CatchHandler @ 034afa20 */
      thunk_FUN_01ba7564();
    }
                    /* catch() { ... } // from try @ 034af7f8 with catch @ 034afa20
                       catch() { ... } // from try @ 034af860 with catch @ 034afa20
                       catch() { ... } // from try @ 034af8b8 with catch @ 034afa20
                       catch() { ... } // from try @ 034af9a4 with catch @ 034afa20
                       catch() { ... } // from try @ 034afa18 with catch @ 034afa20 */
                    /* try { // try from 034afa24 to 035afb73 has its CatchHandler @ 034afa24
                       catch() { ... } // from try @ 034afa24 with catch @ 034afa24
                       catch() { ... } // from try @ 034afcc0 with catch @ 034afa24
                       catch() { ... } // from try @ 034afd74 with catch @ 034afa24
                       catch() { ... } // from try @ 034afd7c with catch @ 034afa24
                       catch() { ... } // from try @ 034afe34 with catch @ 034afa24 */
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pLVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (!bVar1) {
      return 1;
    }
    pLVar2 = (__this->fields)._btnOK;
  }
  if (pLVar2 != (LabelButton_o *)0x0) {
    return (pLVar2->fields).super.super.ButtonId;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

