// LPAPAMPGDFN$$OAFIHCDEOAD @ RVA 0x347B70C

void LPAPAMPGDFN__OAFIHCDEOAD(LPAPAMPGDFN_o *__this,System_Action_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  System_Action_o **ppSVar4;
  System_Action_o *a;
  
                    /* try { // try from 0357b720 to 0367b727 has its CatchHandler @ 0357b960 */
                    /* try { // try from 0357b728 to 0367b73b has its CatchHandler @ 0357b944 */
  if ((DAT_0456834b & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    DAT_0456834b = 1;
  }
                    /* try { // try from 0357b740 to 0367b74b has its CatchHandler @ 0357b954 */
  ppSVar4 = &(__this->fields).JKPKAMGOAAB;
  a = *ppSVar4;
                    /* try { // try from 0357b74c to 0367b757 has its CatchHandler @ 0357b970 */
                    /* try { // try from 0357b76c to 0367b773 has its CatchHandler @ 0357b950 */
  while ((pSVar2 = System_Delegate__Combine
                             ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,
                              (MethodInfo *)0x0), pSVar2 == (System_Delegate_o *)0x0 ||
         ((System_Action_c *)pSVar2->klass == System_Action_TypeInfo))) {
                    /* try { // try from 0357b77c to 0367b783 has its CatchHandler @ 0357b930 */
    pSVar3 = (System_Action_o *)FUN_01c07368(ppSVar4,pSVar2,a);
    bVar1 = a == pSVar3;
    a = pSVar3;
    if (bVar1) {
                    /* try { // try from 0357b794 to 0367b79b has its CatchHandler @ 0357b938 */
      return;
    }
  }
                    /* try { // try from 0357b7a0 to 0367b7a7 has its CatchHandler @ 0357b928 */
                    /* WARNING: Subroutine does not return */
  FUN_01babc64(pSVar2);
}

