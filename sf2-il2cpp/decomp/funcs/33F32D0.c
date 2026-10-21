// FCJBEKHDLAF$$OCBCAFNHINO @ RVA 0x33F32D0

int32_t FCJBEKHDLAF__OCBCAFNHINO(FCJBEKHDLAF_o *__this,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Fight_PreFight_o *pNVar3;
  
  if ((DAT_04567f2f & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04567f2f = 1;
    method = extraout_x1;
  }
  pNVar3 = (__this->fields).HIBPKNAIPLH;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar3 = (__this->fields).HIBPKNAIPLH;
    if (pNVar3 != (Nekki_SF2_GUI_Fight_PreFight_o *)0x0) {
      iVar2 = Nekki_SF2_GUI_Fight_PreFight__get_TimePassedFrames(pNVar3,(MethodInfo *)0x0);
      return iVar2;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return 0;
}

