// GGLDGAAPKCF$$CNAPJKMPDNM @ RVA 0x35D7808

void GGLDGAAPKCF__CNAPJKMPDNM(GGLDGAAPKCF_o *__this,System_Action_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  System_Action_o **ppSVar4;
  System_Action_o *source;
  
  if ((DAT_04569001 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    DAT_04569001 = 1;
  }
  ppSVar4 = &(__this->fields).ODCAOCGHMPN;
  source = *ppSVar4;
                    /* try { // try from 036d7858 to 037d785f has its CatchHandler @ 036d7988 */
  while ((pSVar2 = System_Delegate__Remove
                             ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                              (MethodInfo *)0x0), pSVar2 == (System_Delegate_o *)0x0 ||
         ((System_Action_c *)pSVar2->klass == System_Action_TypeInfo))) {
                    /* try { // try from 036d7874 to 037d787b has its CatchHandler @ 036d7984 */
    pSVar3 = (System_Action_o *)FUN_01c07368(ppSVar4,pSVar2,source);
    bVar1 = source == pSVar3;
    source = pSVar3;
    if (bVar1) {
                    /* try { // try from 036d7890 to 037d7897 has its CatchHandler @ 036d78e0 */
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01babc64(pSVar2);
}

