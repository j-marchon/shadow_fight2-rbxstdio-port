// FCJBEKHDLAF$$DKNHPMGMNDK @ RVA 0x33EE704

void FCJBEKHDLAF__DKNHPMGMNDK(FCJBEKHDLAF_o *__this,bool LNCJKAPPJMI,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  Nekki_SF2_GUI_Fight_PreFight_o *pNVar3;
  
  if ((DAT_04567f1c & 1) == 0) {
    FUN_01bab630(&bool_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_15467);
    DAT_04567f1c = 1;
  }
  if ((bool_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar2 = System_Boolean__ToString(true,(MethodInfo *)0x0);
  pSVar2 = System_String__Concat(StringLiteral_15467,pSVar2,(MethodInfo *)0x0);
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
  }
  UnityEngine_Debug__Log((Il2CppObject *)pSVar2,(MethodInfo *)0x0);
                    /* try { // try from 034ee7d8 to 035ee823 has its CatchHandler @ 034ee960 */
  pNVar3 = (__this->fields).HIBPKNAIPLH;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((bVar1) && ((__this->fields).MDJMIPGAJLL != false)) {
    pNVar3 = (__this->fields).HIBPKNAIPLH;
    (__this->fields).MDJMIPGAJLL = false;
    if (pNVar3 == (Nekki_SF2_GUI_Fight_PreFight_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 034ee834 to 035ee837 has its CatchHandler @ 034ee0d4 */
      FUN_01bab8c8();
    }
    Nekki_SF2_GUI_Fight_PreFight__ClosePauseScreen(pNVar3,(MethodInfo *)0x0);
    UnityEngine_Time__set_timeScale(1.0,(MethodInfo *)0x0);
  }
                    /* try { // try from 034ee824 to 035ee82b has its CatchHandler @ 034ee0d4 */
                    /* try { // try from 034ee82c to 035ee833 has its CatchHandler @ 034ee8b8 */
  return;
}

