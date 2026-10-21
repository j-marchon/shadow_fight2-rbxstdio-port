// PCEDNFLCPPF$$MKPNPDKFCFL @ RVA 0x3328898

void PCEDNFLCPPF__MKPNPDKFCFL(PCEDNFLCPPF_o *__this,System_Action_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  System_Action_o **ppSVar4;
  System_Action_o *a;
  
  if ((DAT_045678ac & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
                    /* try { // try from 034288c8 to 035288cf has its CatchHandler @ 034288f0 */
    DAT_045678ac = 1;
  }
  ppSVar4 = &(__this->fields).AELFIOKAPFE;
                    /* try { // try from 034288d0 to 035288d7 has its CatchHandler @ 034288fc */
  a = *ppSVar4;
                    /* try { // try from 034288d8 to 035288db has its CatchHandler @ 034283f0 */
                    /* try { // try from 034288dc to 035288df has its CatchHandler @ 034288e8 */
                    /* try { // try from 034288e0 to 0352890f has its CatchHandler @ 034283f0 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034288dc with catch @ 034288e8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03428810 with catch @ 034288ec
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034288c8 with catch @ 034288f0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03428754 with catch @ 034288f4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034286f8 with catch @ 034288f8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034288d0 with catch @ 034288fc
                        */
  while ((pSVar2 = System_Delegate__Combine
                             ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,
                              (MethodInfo *)0x0), pSVar2 == (System_Delegate_o *)0x0 ||
         ((System_Action_c *)pSVar2->klass == System_Action_TypeInfo))) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03428788 with catch @ 03428900
                        */
    pSVar3 = (System_Action_o *)FUN_01c07368(ppSVar4,pSVar2,a);
                    /* try { // try from 03428910 to 03528913 has its CatchHandler @ 03428924 */
    bVar1 = a == pSVar3;
    a = pSVar3;
    if (bVar1) {
                    /* catch() { ... } // from try @ 03428910 with catch @ 03428924 */
      return;
    }
  }
                    /* try { // try from 0342892c to 03528993 has its CatchHandler @ 034289a8 */
                    /* WARNING: Subroutine does not return */
  FUN_01babc64(pSVar2);
}

