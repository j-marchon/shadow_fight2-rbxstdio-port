// FCJBEKHDLAF$$PCBHNKCHOCN @ RVA 0x33E6E7C

bool FCJBEKHDLAF__PCBHNKCHOCN(FCJBEKHDLAF_o *__this,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  MethodInfo *extraout_x1;
  
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034e6e44 with catch @ 034e6e90
                        */
  if ((DAT_04567ed0 & 1) == 0) {
    FUN_01bab630(&Method_IFAMAAGNCBJ_GPBMELHDADN<BuildSettingsConfig>__);
                    /* try { // try from 034e6ea8 to 035e6eab has its CatchHandler @ 034e6ed4 */
                    /* try { // try from 034e6eac to 035e6edb has its CatchHandler @ 034e6dac */
    FUN_01bab630(&IFAMAAGNCBJ_TypeInfo);
    DAT_04567ed0 = 1;
    method = extraout_x1;
  }
  if ((IFAMAAGNCBJ_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(IFAMAAGNCBJ_TypeInfo,method);
  }
                    /* catch() { ... } // from try @ 034e6ea8 with catch @ 034e6ed4 */
  pIVar1 = IFAMAAGNCBJ__GPBMELHDADN<object>(Method_IFAMAAGNCBJ_GPBMELHDADN<BuildSettingsConfig>__);
  if (pIVar1 != (Il2CppObject *)0x0) {
                    /* try { // try from 034e6edc to 035e6ee3 has its CatchHandler @ 034e6ef8 */
                    /* try { // try from 034e6ee4 to 035e6eef has its CatchHandler @ 034e6dac */
                    /* try { // try from 034e6ef0 to 035e6ef7 has its CatchHandler @ 034e6ef8 */
    return *(char *)((long)&pIVar1[3].monitor + 3) == '\0';
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

