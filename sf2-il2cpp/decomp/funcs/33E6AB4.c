// FCJBEKHDLAF$$EGDEMMLFHIA @ RVA 0x33E6AB4

void FCJBEKHDLAF__EGDEMMLFHIA(FCJBEKHDLAF_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Fight_PreFight_o *pNVar2;
  Nekki_SF2_GUI_Fight_ViewerFight_o *pNVar3;
  
  if ((DAT_04567ecf & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04567ecf = 1;
    method = extraout_x1;
  }
  pNVar2 = (__this->fields).HIBPKNAIPLH;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
                    /* try { // try from 034e6b64 to 035e6bdb has its CatchHandler @ 034e6aa8 */
    return;
  }
  pNVar2 = (__this->fields).HIBPKNAIPLH;
  if (pNVar2 != (Nekki_SF2_GUI_Fight_PreFight_o *)0x0) {
    pNVar3 = (pNVar2->fields).FLKPJPEAJAJ;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (!bVar1) {
      return;
    }
    pNVar2 = (__this->fields).HIBPKNAIPLH;
    if ((pNVar2 != (Nekki_SF2_GUI_Fight_PreFight_o *)0x0) &&
       (pNVar3 = (pNVar2->fields).FLKPJPEAJAJ, pNVar3 != (Nekki_SF2_GUI_Fight_ViewerFight_o *)0x0))
    {
                    /* try { // try from 034e6b5c to 035e6b63 has its CatchHandler @ 034e6bc4 */
      Nekki_SF2_GUI_Fight_ViewerFight__RemoveCombo(pNVar3,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

