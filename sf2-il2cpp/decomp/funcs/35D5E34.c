// GGLDGAAPKCF$$FADEOBNIFGK @ RVA 0x35D5E34

void GGLDGAAPKCF__FADEOBNIFGK(GGLDGAAPKCF_o *__this,System_Action_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  System_Action_o **ppSVar4;
  System_Action_o *a;
  
                    /* try { // try from 036d5e4c to 037d5e4f has its CatchHandler @ 036d5f2c */
  if ((DAT_04568ff5 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    DAT_04568ff5 = 1;
  }
  ppSVar4 = &(__this->fields).JDABHAFPPOL;
                    /* try { // try from 036d5e6c to 037d5e6f has its CatchHandler @ 036d5f40 */
  a = *ppSVar4;
                    /* try { // try from 036d5e80 to 037d5e83 has its CatchHandler @ 036d5f28 */
  while ((pSVar2 = System_Delegate__Combine
                             ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,
                              (MethodInfo *)0x0), pSVar2 == (System_Delegate_o *)0x0 ||
         ((System_Action_c *)pSVar2->klass == System_Action_TypeInfo))) {
    pSVar3 = (System_Action_o *)FUN_01c07368(ppSVar4,pSVar2,a);
    bVar1 = a == pSVar3;
    a = pSVar3;
    if (bVar1) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01babc64(pSVar2);
}

