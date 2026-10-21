// VideoPlayerController$$KNFFBHPJCOD @ RVA 0x33E1ED4

void VideoPlayerController__KNFFBHPJCOD
               (VideoPlayerController_o *__this,System_Action_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  System_Action_o **ppSVar4;
  System_Action_o *source;
  
                    /* try { // try from 034e1ed4 to 035e1edf has its CatchHandler @ 034e2470 */
                    /* try { // try from 034e1ef0 to 035e1efb has its CatchHandler @ 034e24a4 */
  if ((DAT_04567ea9 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    DAT_04567ea9 = 1;
  }
  ppSVar4 = &(__this->fields).LJONAJJGJHI;
  source = *ppSVar4;
  while ((pSVar2 = System_Delegate__Remove
                             ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                              (MethodInfo *)0x0), pSVar2 == (System_Delegate_o *)0x0 ||
         ((System_Action_c *)pSVar2->klass == System_Action_TypeInfo))) {
                    /* try { // try from 034e1f40 to 035e1f4b has its CatchHandler @ 034e245c */
    pSVar3 = (System_Action_o *)FUN_01c07368(ppSVar4,pSVar2,source);
    bVar1 = source == pSVar3;
    source = pSVar3;
    if (bVar1) {
                    /* try { // try from 034e1f5c to 035e1f67 has its CatchHandler @ 034e2490 */
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01babc64(pSVar2);
}

