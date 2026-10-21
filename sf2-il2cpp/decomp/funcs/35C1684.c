// IMAPABEJECG$$HCDIBNJMKLH @ RVA 0x35C1684

bool IMAPABEJECG__HCDIBNJMKLH(MethodInfo *method)

{
  bool bVar1;
  undefined1 uVar2;
  MethodInfo *method_00;
  NHJCFGACFDF_o *pNVar3;
  
                    /* try { // try from 036c1690 to 037c169b has its CatchHandler @ 036c179c */
  if ((DAT_04568f2d & 1) == 0) {
                    /* try { // try from 036c169c to 037c16a7 has its CatchHandler @ 036c1798 */
    method = (MethodInfo *)FUN_01bab630(&IMAPABEJECG_TypeInfo);
    DAT_04568f2d = 1;
  }
  IMAPABEJECG__PPCPAHAPCNB(method);
  bVar1 = IMAPABEJECG__NCLOHJCDCEJ(method_00);
  if (bVar1) {
    pNVar3 = IMAPABEJECG_TypeInfo->static_fields->KAKIHIMNDAE;
    if (pNVar3 != (NHJCFGACFDF_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x036c16dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*pNVar3->klass[1]._1.fields)(pNVar3,pNVar3->klass[1]._1.events);
      return (bool)uVar2;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return false;
}

