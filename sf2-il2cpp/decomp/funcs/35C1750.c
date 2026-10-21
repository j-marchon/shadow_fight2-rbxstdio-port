// IMAPABEJECG$$FCBJDMNEPGB @ RVA 0x35C1750

bool IMAPABEJECG__FCBJDMNEPGB(MethodInfo *method)

{
  bool bVar1;
  undefined1 uVar2;
  MethodInfo *method_00;
  NHJCFGACFDF_o *pNVar3;
  
  if ((DAT_04568f23 & 1) == 0) {
                    /* try { // try from 036c1764 to 037c1767 has its CatchHandler @ 036c17a0 */
                    /* try { // try from 036c1768 to 037c176f has its CatchHandler @ 036c1794 */
    method = (MethodInfo *)FUN_01bab630(&IMAPABEJECG_TypeInfo);
                    /* try { // try from 036c1770 to 037c1773 has its CatchHandler @ 036c1790 */
    DAT_04568f23 = 1;
  }
                    /* try { // try from 036c1774 to 037c1777 has its CatchHandler @ 036c178c */
  IMAPABEJECG__PPCPAHAPCNB(method);
                    /* try { // try from 036c1778 to 037c177b has its CatchHandler @ 036c1788 */
  bVar1 = IMAPABEJECG__HCDIBNJMKLH(method_00);
                    /* try { // try from 036c177c to 037c17bb has its CatchHandler @ 036c15a8 */
  if (bVar1) {
                    /* catch() { ... } // from try @ 036c1720 with catch @ 036c1780 */
                    /* catch() { ... } // from try @ 036c1708 with catch @ 036c1784 */
                    /* catch() { ... } // from try @ 036c1778 with catch @ 036c1788 */
                    /* catch() { ... } // from try @ 036c1774 with catch @ 036c178c */
                    /* catch() { ... } // from try @ 036c1770 with catch @ 036c1790 */
    pNVar3 = IMAPABEJECG_TypeInfo->static_fields->KAKIHIMNDAE;
                    /* catch() { ... } // from try @ 036c1768 with catch @ 036c1794 */
    if (pNVar3 != (NHJCFGACFDF_o *)0x0) {
                    /* catch() { ... } // from try @ 036c169c with catch @ 036c1798 */
                    /* catch() { ... } // from try @ 036c1690 with catch @ 036c179c */
                    /* catch() { ... } // from try @ 036c1764 with catch @ 036c17a0 */
                    /* WARNING: Could not recover jumptable at 0x036c17a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* catch() { ... } // from try @ 036c1668 with catch @ 036c17a4 */
      uVar2 = (*(pNVar3->klass->vtable)._12_LFEGGMNMDMJ.methodPtr)
                        (pNVar3,(pNVar3->klass->vtable)._12_LFEGGMNMDMJ.method);
      return (bool)uVar2;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return false;
}

