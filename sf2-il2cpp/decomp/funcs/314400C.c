// KKLJIDJBFEI$$PJOBAFCNJAM @ RVA 0x314400C

void KKLJIDJBFEI__PJOBAFCNJAM(KKLJIDJBFEI_o *__this,System_Action_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  System_Action_o **ppSVar4;
  System_Action_o *a;
  
                    /* try { // try from 03244010 to 0334401b has its CatchHandler @ 03243e40 */
                    /* try { // try from 0324401c to 03344023 has its CatchHandler @ 03244024 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03244008 with catch @ 03244024
                       catch(type#2 @ 00000000) { ... } // from try @ 0324401c with catch @ 03244024
                        */
  if ((DAT_0456676f & 1) == 0) {
                    /* try { // try from 03244030 to 033441bf has its CatchHandler @ 03244030
                       catch() { ... } // from try @ 03244030 with catch @ 03244030
                       catch() { ... } // from try @ 032448a4 with catch @ 03244030
                       catch() { ... } // from try @ 03244914 with catch @ 03244030
                       catch() { ... } // from try @ 03244964 with catch @ 03244030
                       catch() { ... } // from try @ 03244ab8 with catch @ 03244030
                       catch() { ... } // from try @ 03244af8 with catch @ 03244030 */
    FUN_01bab630(&System_Action_TypeInfo);
    DAT_0456676f = 1;
  }
  ppSVar4 = &(__this->fields).DHLLCGMLBLE;
  a = *ppSVar4;
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

