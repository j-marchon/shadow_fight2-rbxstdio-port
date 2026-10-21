// OPNMPAJKDMI$$KBCKLCBBAJB @ RVA 0x343E454

System_String_o * OPNMPAJKDMI__KBCKLCBBAJB(OPNMPAJKDMI_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  HOOAAGABMBL_o *pHVar2;
  undefined1 auVar3 [16];
  
  auVar3._8_8_ = method;
  auVar3._0_8_ = __this;
  if ((DAT_04568201 & 1) == 0) {
                    /* catch() { ... } // from try @ 0353e440 with catch @ 0353e474 */
    auVar3 = FUN_01bab630(&StringLiteral_9804);
    DAT_04568201 = 1;
  }
  pHVar2 = (__this->fields)._BODPEKDENEG_k__BackingField;
                    /* try { // try from 0353e484 to 0363e48b has its CatchHandler @ 0353e4a0 */
  if (pHVar2 != (HOOAAGABMBL_o *)0x0) {
                    /* try { // try from 0353e48c to 0363e497 has its CatchHandler @ 0353e2f0 */
                    /* try { // try from 0353e498 to 0363e49f has its CatchHandler @ 0353e4a0 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0353e484 with catch @ 0353e4a0
                       catch(type#2 @ 00000000) { ... } // from try @ 0353e498 with catch @ 0353e4a0
                        */
    pSVar1 = System_String__Concat
                       (StringLiteral_9804,(pHVar2->fields)._COIPKAKHDFP_k__BackingField,
                        (MethodInfo *)0x0);
    return pSVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar3._0_8_,auVar3._8_8_);
}

