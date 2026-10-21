// KEIAEKNFNNA$$EMBJNCBLPNN @ RVA 0x3507FC0

void KEIAEKNFNNA__EMBJNCBLPNN(KEIAEKNFNNA_o *__this,System_Action_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  System_Action_o **ppSVar4;
  System_Action_o *a;
  
                    /* try { // try from 03607fd0 to 03707fd3 has its CatchHandler @ 03607ff0 */
                    /* try { // try from 03607fd4 to 03707fd7 has its CatchHandler @ 03607fec */
                    /* try { // try from 03607fd8 to 03707fdb has its CatchHandler @ 03607fe8 */
                    /* try { // try from 03607fdc to 0370800f has its CatchHandler @ 03606c38 */
  if ((DAT_045688a7 & 1) == 0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0360757c with catch @ 03607fe4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03607fd8 with catch @ 03607fe8
                        */
    FUN_01bab630(&System_Action_TypeInfo);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03607fd4 with catch @ 03607fec
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03607fd0 with catch @ 03607ff0
                        */
    DAT_045688a7 = 1;
  }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03607568 with catch @ 03607ff4
                        */
  ppSVar4 = &(__this->fields).PJFFBLOPKBC;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03607550 with catch @ 03607ff8
                        */
  a = *ppSVar4;
                    /* try { // try from 03608010 to 03708013 has its CatchHandler @ 03608040 */
                    /* try { // try from 03608014 to 03708047 has its CatchHandler @ 03606c38 */
  while ((pSVar2 = System_Delegate__Combine
                             ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,
                              (MethodInfo *)0x0), pSVar2 == (System_Delegate_o *)0x0 ||
         ((System_Action_c *)pSVar2->klass == System_Action_TypeInfo))) {
    pSVar3 = (System_Action_o *)FUN_01c07368(ppSVar4,pSVar2,a);
    bVar1 = a == pSVar3;
    a = pSVar3;
                    /* catch() { ... } // from try @ 03608010 with catch @ 03608040 */
    if (bVar1) {
                    /* try { // try from 03608048 to 0370804f has its CatchHandler @ 03608064 */
                    /* try { // try from 03608050 to 0370805b has its CatchHandler @ 03606c38 */
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01babc64(pSVar2);
}

