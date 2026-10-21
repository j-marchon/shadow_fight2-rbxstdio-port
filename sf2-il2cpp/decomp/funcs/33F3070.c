// FCJBEKHDLAF$$FOOECKGMFAD @ RVA 0x33F3070

int32_t FCJBEKHDLAF__FOOECKGMFAD(FCJBEKHDLAF_o *__this,int32_t DPJIDNBJIBG,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  Nekki_SF2_GUI_Fight_ScreenModel_o *__this_00;
  Nekki_SF2_GUI_Fight_PreFight_o *pNVar3;
  Nekki_SF2_GUI_Fight_ViewerFight_o *pNVar4;
  
  if ((DAT_04567f29 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04567f29 = 1;
  }
  pNVar3 = (__this->fields).HIBPKNAIPLH;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 034f30c0 to 035f30c3 has its CatchHandler @ 034f3244 */
                    /* try { // try from 034f30c8 to 035f30df has its CatchHandler @ 034f3238 */
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
                    /* try { // try from 034f3148 to 035f314f has its CatchHandler @ 034f3244 */
    return 3;
  }
  pNVar3 = (__this->fields).HIBPKNAIPLH;
  if (pNVar3 != (Nekki_SF2_GUI_Fight_PreFight_o *)0x0) {
    pNVar4 = (pNVar3->fields).FLKPJPEAJAJ;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (!bVar1) {
      return 3;
    }
    pNVar3 = (__this->fields).HIBPKNAIPLH;
                    /* try { // try from 034f311c to 035f311f has its CatchHandler @ 034f3248 */
    if (((pNVar3 != (Nekki_SF2_GUI_Fight_PreFight_o *)0x0) &&
        (pNVar4 = (pNVar3->fields).FLKPJPEAJAJ, pNVar4 != (Nekki_SF2_GUI_Fight_ViewerFight_o *)0x0))
       && (__this_00 = Nekki_SF2_GUI_Fight_ViewerFight__GetScreenModel
                                 (pNVar4,DPJIDNBJIBG,(MethodInfo *)0x0),
          __this_00 != (Nekki_SF2_GUI_Fight_ScreenModel_o *)0x0)) {
                    /* try { // try from 034f3130 to 035f3137 has its CatchHandler @ 034f3234 */
      iVar2 = Nekki_SF2_GUI_Fight_ScreenModel__get_MaxStyle(__this_00,(MethodInfo *)0x0);
      return iVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

