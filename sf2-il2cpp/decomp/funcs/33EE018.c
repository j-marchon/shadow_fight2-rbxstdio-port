// FCJBEKHDLAF$$BIFOAELOCOF @ RVA 0x33EE018

bool FCJBEKHDLAF__BIFOAELOCOF(MethodInfo *method)

{
  Il2CppObject *pIVar1;
  
  if ((DAT_04567ee8 & 1) == 0) {
                    /* catch() { ... } // from try @ 034ee010 with catch @ 034ee034 */
                    /* try { // try from 034ee03c to 035ee04f has its CatchHandler @ 034ee0c0 */
    FUN_01bab630(&Method_IFAMAAGNCBJ_GPBMELHDADN<BuildSettingsConfig>__);
    FUN_01bab630(&IFAMAAGNCBJ_TypeInfo);
                    /* catch() { ... } // from try @ 034edf44 with catch @ 034ee050
                       try { // try from 034ee050 to 035ee067 has its CatchHandler @ 034ede50 */
    DAT_04567ee8 = 1;
  }
  if ((IFAMAAGNCBJ_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 034ee068 to 035ee06b has its CatchHandler @ 034ee094 */
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 034ee06c to 035ee0a3 has its CatchHandler @ 034ede50 */
  pIVar1 = IFAMAAGNCBJ__GPBMELHDADN<object>(Method_IFAMAAGNCBJ_GPBMELHDADN<BuildSettingsConfig>__);
  if (pIVar1 != (Il2CppObject *)0x0) {
    return (bool)*(undefined1 *)((long)&pIVar1[2].klass + 2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

