// IMAPABEJECG$$MEHFGJDCBDP @ RVA 0x35C16F0

int32_t IMAPABEJECG__MEHFGJDCBDP(MethodInfo *method)

{
  int32_t iVar1;
  NHJCFGACFDF_o *pNVar2;
  
                    /* try { // try from 036c1708 to 037c170f has its CatchHandler @ 036c1784 */
  if ((DAT_04568f22 & 1) == 0) {
    method = (MethodInfo *)FUN_01bab630(&IMAPABEJECG_TypeInfo);
    DAT_04568f22 = 1;
  }
                    /* try { // try from 036c1720 to 037c1727 has its CatchHandler @ 036c1780 */
  IMAPABEJECG__PPCPAHAPCNB(method);
                    /* try { // try from 036c1728 to 037c1763 has its CatchHandler @ 036c15a8 */
  pNVar2 = IMAPABEJECG_TypeInfo->static_fields->KAKIHIMNDAE;
  if (pNVar2 != (NHJCFGACFDF_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x036c1748. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (*(code *)pNVar2->klass[1]._1.nestedTypes)
                      (pNVar2,pNVar2->klass[1]._1.implementedInterfaces);
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

