// ELMGFLNCPAB$$MAHFCKJGBPP @ RVA 0x3503744

void ELMGFLNCPAB__MAHFCKJGBPP(ELMGFLNCPAB_o *__this,PKHMIGFEJCL_o *AAJBIMFNMBB,MethodInfo *method)

{
  int iVar1;
  MethodInfo *method_00;
  
  if ((DAT_04568877 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&StringLiteral_13936);
    DAT_04568877 = 1;
  }
  BOFEMGGNODC__MAHFCKJGBPP((BOFEMGGNODC_o *)__this,AAJBIMFNMBB,(MethodInfo *)0x0);
  iVar1 = *(int *)&(__this->fields).super.field_0x54;
                    /* try { // try from 03603794 to 0370379b has its CatchHandler @ 036037f8 */
  if (iVar1 == 1) {
                    /* try { // try from 036037ac to 037037b7 has its CatchHandler @ 036037f0 */
    ELMGFLNCPAB__MCPEEINFDKN(__this,method_00);
  }
  else if (iVar1 == 0) {
    ELMGFLNCPAB__KJDBNFPFICE(__this,method_00);
  }
  else {
                    /* try { // try from 036037b8 to 037037e7 has its CatchHandler @ 03603700 */
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__LogError(StringLiteral_13936,(MethodInfo *)0x0);
  }
                    /* try { // try from 036037e8 to 037037eb has its CatchHandler @ 036037f4 */
                    /* try { // try from 036037ec to 0370380f has its CatchHandler @ 03603700 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036037ac with catch @ 036037f0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036037e8 with catch @ 036037f4
                        */
  BOFEMGGNODC__FGNINNOOCCL((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
  return;
}

