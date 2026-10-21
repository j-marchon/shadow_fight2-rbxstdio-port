// Nekki.SF2.Core.Fights.Controls.GameController$$UpdateTouchControlsScale @ RVA 0x33A4C48

void Nekki_SF2_Core_Fights_Controls_GameController__UpdateTouchControlsScale
               (Nekki_SF2_Core_Fights_Controls_GameController_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  bool bVar2;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *pUVar3;
  Nekki_SF2_Core_Fights_Controls_ActionButtons_o *__this_01;
  MethodInfo *extraout_x1;
  UnityEngine_Vector3_o value;
  UnityEngine_Vector3_o value_00;
  
  if ((DAT_04567ce2 & 1) == 0) {
    FUN_01bab630(&LLKDCCJMFLE_TypeInfo);
    DAT_04567ce2 = 1;
    method = extraout_x1;
  }
  if ((LLKDCCJMFLE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(LLKDCCJMFLE_TypeInfo,method);
  }
  bVar2 = LLKDCCJMFLE__JGNHBFFLBIB((MethodInfo *)0x0);
  __this_00 = (__this->fields)._LeftContainer;
  uVar1 = 0x3f800000;
  if (!bVar2) {
    uVar1 = 0x3f400000;
  }
  if ((__this_00 != (UnityEngine_GameObject_o *)0x0) &&
     (pUVar3 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0),
     pUVar3 != (UnityEngine_Transform_o *)0x0)) {
    value.fields.y = (float)uVar1;
    value.fields.x = (float)uVar1;
    value.fields.z = 0.0;
                    /* try { // try from 034a4cc4 to 035a4cc7 has its CatchHandler @ 034a4ce4 */
                    /* try { // try from 034a4cc8 to 035a4ccf has its CatchHandler @ 034a4da4 */
                    /* try { // try from 034a4cd0 to 035a4cd7 has its CatchHandler @ 034a4db0 */
    UnityEngine_Transform__set_localScale(pUVar3,value,(MethodInfo *)0x0);
    __this_01 = (__this->fields)._ActionButtons;
                    /* try { // try from 034a4cd8 to 035a4cdb has its CatchHandler @ 034a4ce0 */
                    /* catch() { ... } // from try @ 034a4c24 with catch @ 034a4cdc
                       try { // try from 034a4cdc to 035a4d03 has its CatchHandler @ 034a4a54 */
                    /* catch() { ... } // from try @ 034a4cd8 with catch @ 034a4ce0 */
                    /* catch() { ... } // from try @ 034a4b24 with catch @ 034a4ce4
                       catch() { ... } // from try @ 034a4cc4 with catch @ 034a4ce4 */
    if ((__this_01 != (Nekki_SF2_Core_Fights_Controls_ActionButtons_o *)0x0) &&
       (pUVar3 = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0),
       pUVar3 != (UnityEngine_Transform_o *)0x0)) {
      value_00.fields.y = (float)uVar1;
      value_00.fields.x = (float)uVar1;
      value_00.fields.z = 0.0;
                    /* try { // try from 034a4d04 to 035a4d07 has its CatchHandler @ 034a4d8c */
      UnityEngine_Transform__set_localScale(pUVar3,value_00,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

