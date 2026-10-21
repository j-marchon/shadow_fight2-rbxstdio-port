// JMDPBFOCHHP$$DACLMDDNEBN @ RVA 0x2FF7054

void JMDPBFOCHHP__DACLMDDNEBN(JMDPBFOCHHP_o *__this,System_Action_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  System_Action_o **ppSVar4;
  System_Action_o *a;
  
                    /* try { // try from 030f7054 to 031f705f has its CatchHandler @ 030f6f50 */
                    /* try { // try from 030f7060 to 031f7067 has its CatchHandler @ 030f7068 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 030f7048 with catch @ 030f7068
                       catch(type#2 @ 00000000) { ... } // from try @ 030f7060 with catch @ 030f7068
                        */
                    /* try { // try from 030f706c to 031f70ab has its CatchHandler @ 030f706c
                       catch() { ... } // from try @ 030f706c with catch @ 030f706c
                       catch() { ... } // from try @ 030f70e8 with catch @ 030f706c
                       catch() { ... } // from try @ 030f7170 with catch @ 030f706c */
  if ((DAT_04565aa8 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    DAT_04565aa8 = 1;
  }
  ppSVar4 = &(__this->fields).FHJBJEIIMOB;
  a = *ppSVar4;
                    /* try { // try from 030f70ac to 031f70bb has its CatchHandler @ 030f712c */
  while ((pSVar2 = System_Delegate__Combine
                             ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,
                              (MethodInfo *)0x0), pSVar2 == (System_Delegate_o *)0x0 ||
         ((System_Action_c *)pSVar2->klass == System_Action_TypeInfo))) {
    pSVar3 = (System_Action_o *)FUN_01c07368(ppSVar4,pSVar2,a);
                    /* try { // try from 030f70cc to 031f70d3 has its CatchHandler @ 030f7128 */
    bVar1 = a == pSVar3;
    a = pSVar3;
    if (bVar1) {
                    /* try { // try from 030f70dc to 031f70e7 has its CatchHandler @ 030f7124 */
      return;
    }
  }
                    /* try { // try from 030f70e8 to 031f7143 has its CatchHandler @ 030f706c */
                    /* WARNING: Subroutine does not return */
  FUN_01babc64(pSVar2);
}

