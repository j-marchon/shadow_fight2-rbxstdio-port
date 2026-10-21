// FCJBEKHDLAF$$ECIPOHEPGDC @ RVA 0x33F3150

void FCJBEKHDLAF__ECIPOHEPGDC
               (FCJBEKHDLAF_o *__this,int32_t HLGODJGOMPL,int32_t JJIMOBDENPB,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Fight_PreFight_o *pNVar2;
  
                    /* try { // try from 034f3160 to 035f3167 has its CatchHandler @ 034f3248 */
                    /* try { // try from 034f316c to 035f3183 has its CatchHandler @ 034f322c */
  if ((DAT_04567f2a & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04567f2a = 1;
  }
  pNVar2 = (__this->fields).HIBPKNAIPLH;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar2 = (__this->fields).HIBPKNAIPLH;
                    /* try { // try from 034f31bc to 035f31d7 has its CatchHandler @ 034f3230 */
    if (pNVar2 != (Nekki_SF2_GUI_Fight_PreFight_o *)0x0) {
                    /* try { // try from 034f31d8 to 035f3207 has its CatchHandler @ 034f2edc */
      Nekki_SF2_GUI_Fight_PreFight__UpdatePointsTable
                (pNVar2,HLGODJGOMPL,JJIMOBDENPB,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

