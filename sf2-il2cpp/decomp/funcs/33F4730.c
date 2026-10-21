// FCJBEKHDLAF$$EJLDPOFMFGE @ RVA 0x33F4730

int32_t FCJBEKHDLAF__EJLDPOFMFGE(FCJBEKHDLAF_o *__this,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Fight_PreFight_o *pNVar3;
  
                    /* try { // try from 034f4730 to 035f4757 has its CatchHandler @ 034f4994 */
  if ((DAT_04567f41 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04567f41 = 1;
    method = extraout_x1;
  }
  pNVar3 = (__this->fields).HIBPKNAIPLH;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
                    /* try { // try from 034f4778 to 035f477b has its CatchHandler @ 034f4948 */
                    /* try { // try from 034f477c to 035f4783 has its CatchHandler @ 034f495c */
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                    /* try { // try from 034f4788 to 035f47a3 has its CatchHandler @ 034f4978 */
  if (bVar1) {
    pNVar3 = (__this->fields).HIBPKNAIPLH;
    if (pNVar3 != (Nekki_SF2_GUI_Fight_PreFight_o *)0x0) {
      iVar2 = Nekki_SF2_GUI_Fight_PreFight__get_TimeLeftFrames(pNVar3,(MethodInfo *)0x0);
      return iVar2;
    }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 034f47b4 to 035f47db has its CatchHandler @ 034f4990 */
    FUN_01bab8c8();
  }
                    /* try { // try from 034f47a4 to 035f47ab has its CatchHandler @ 034f494c */
  return 0;
}

