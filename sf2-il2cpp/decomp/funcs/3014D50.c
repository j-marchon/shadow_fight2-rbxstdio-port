// ECENNHNBAME$$NBIECKIMNNK @ RVA 0x3014D50

GBKCLIFGIFN_o * ECENNHNBAME__NBIECKIMNNK(IENLNOEDCFF_o *PFDEAPMMFAP,MethodInfo *method)

{
  byte bVar1;
  int32_t iVar2;
  GBKCLIFGIFN_o *pGVar3;
  undefined1 auVar4 [16];
  
  auVar4._8_8_ = method;
  auVar4._0_8_ = PFDEAPMMFAP;
  if ((DAT_04565be8 & 1) == 0) {
    auVar4 = FUN_01bab630(&GBKCLIFGIFN_TypeInfo);
    DAT_04565be8 = 1;
  }
  if (PFDEAPMMFAP == (IENLNOEDCFF_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 03114bb4 with catch @ 03114de0 */
    FUN_01bab8c8(auVar4._0_8_,auVar4._8_8_);
  }
                    /* try { // try from 03114d80 to 03214d83 has its CatchHandler @ 03114dd8 */
                    /* try { // try from 03114d84 to 03214d87 has its CatchHandler @ 03114db8 */
                    /* try { // try from 03114d88 to 03214d8f has its CatchHandler @ 03114dc0 */
  iVar2 = IENLNOEDCFF__NHGGBEACKBD(PFDEAPMMFAP,(MethodInfo *)0x0);
                    /* try { // try from 03114d90 to 03214d93 has its CatchHandler @ 03114db4 */
  pGVar3 = (GBKCLIFGIFN_o *)0x0;
                    /* try { // try from 03114d94 to 03214d97 has its CatchHandler @ 03114dac */
  if (iVar2 == 4) {
                    /* catch() { ... } // from try @ 03114ca4 with catch @ 03114d98
                       try { // try from 03114d98 to 03214dfb has its CatchHandler @ 03114a8c */
                    /* catch() { ... } // from try @ 03114c88 with catch @ 03114d9c */
                    /* catch() { ... } // from try @ 03114c54 with catch @ 03114da0 */
                    /* catch() { ... } // from try @ 03114ca8 with catch @ 03114da4 */
                    /* catch() { ... } // from try @ 03114c44 with catch @ 03114da8 */
                    /* catch() { ... } // from try @ 03114d94 with catch @ 03114dac */
    bVar1 = (GBKCLIFGIFN_TypeInfo->_2).naturalAligment;
                    /* catch() { ... } // from try @ 03114c24 with catch @ 03114db0 */
                    /* catch() { ... } // from try @ 03114c14 with catch @ 03114db4
                       catch() { ... } // from try @ 03114d90 with catch @ 03114db4 */
    if ((PFDEAPMMFAP->klass->_2).naturalAligment < bVar1) {
                    /* catch() { ... } // from try @ 03114d84 with catch @ 03114db8 */
      pGVar3 = (GBKCLIFGIFN_o *)0x0;
                    /* catch() { ... } // from try @ 03114b90 with catch @ 03114dbc */
    }
    else {
                    /* catch() { ... } // from try @ 03114d00 with catch @ 03114dc0
                       catch() { ... } // from try @ 03114d88 with catch @ 03114dc0 */
                    /* catch() { ... } // from try @ 03114c00 with catch @ 03114dcc */
      pGVar3 = (GBKCLIFGIFN_o *)PFDEAPMMFAP;
                    /* catch() { ... } // from try @ 03114bec with catch @ 03114dd0 */
      if ((PFDEAPMMFAP->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)GBKCLIFGIFN_TypeInfo) {
        pGVar3 = (GBKCLIFGIFN_o *)0x0;
      }
    }
  }
                    /* catch() { ... } // from try @ 03114bd0 with catch @ 03114dd4 */
                    /* catch() { ... } // from try @ 03114d80 with catch @ 03114dd8 */
                    /* catch() { ... } // from try @ 03114bc0 with catch @ 03114ddc */
  return pGVar3;
}

