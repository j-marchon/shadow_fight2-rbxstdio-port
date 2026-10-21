// WideScreenController$$remove_UpdateEvent @ RVA 0x31EA5FC

void WideScreenController__remove_UpdateEvent(System_Action_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  MethodInfo *extraout_x1;
  System_Action_o *source;
  
                    /* try { // try from 032ea5fc to 033ea5ff has its CatchHandler @ 032ea648 */
                    /* try { // try from 032ea600 to 033ea603 has its CatchHandler @ 032ea644 */
                    /* try { // try from 032ea604 to 033ea607 has its CatchHandler @ 032ea640 */
                    /* try { // try from 032ea608 to 033ea60b has its CatchHandler @ 032ea638 */
                    /* try { // try from 032ea60c to 033ea60f has its CatchHandler @ 032ea634 */
                    /* try { // try from 032ea610 to 033ea613 has its CatchHandler @ 032ea260 */
                    /* try { // try from 032ea614 to 033ea617 has its CatchHandler @ 032ea630 */
                    /* try { // try from 032ea618 to 033ea61b has its CatchHandler @ 032ea62c */
                    /* try { // try from 032ea61c to 033ea61f has its CatchHandler @ 032ea628 */
  if ((DAT_04566d8d & 1) == 0) {
                    /* catch() { ... } // from try @ 032ea3e0 with catch @ 032ea620
                       try { // try from 032ea620 to 033ea65f has its CatchHandler @ 032ea260 */
                    /* catch() { ... } // from try @ 032ea40c with catch @ 032ea624 */
                    /* catch() { ... } // from try @ 032ea61c with catch @ 032ea628 */
    FUN_01bab630(&System_Action_TypeInfo);
                    /* catch() { ... } // from try @ 032ea618 with catch @ 032ea62c */
                    /* catch() { ... } // from try @ 032ea614 with catch @ 032ea630 */
                    /* catch() { ... } // from try @ 032ea60c with catch @ 032ea634 */
    FUN_01bab630(&WideScreenController_TypeInfo);
                    /* catch() { ... } // from try @ 032ea608 with catch @ 032ea638 */
                    /* catch() { ... } // from try @ 032ea3bc with catch @ 032ea63c */
    DAT_04566d8d = 1;
    method = extraout_x1;
  }
                    /* catch() { ... } // from try @ 032ea604 with catch @ 032ea640 */
                    /* catch() { ... } // from try @ 032ea600 with catch @ 032ea644 */
                    /* catch() { ... } // from try @ 032ea5fc with catch @ 032ea648 */
  if ((WideScreenController_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 032ea38c with catch @ 032ea64c */
    thunk_FUN_01ba7564(WideScreenController_TypeInfo,method);
                    /* catch() { ... } // from try @ 032ea368 with catch @ 032ea650 */
  }
                    /* try { // try from 032ea660 to 033ea663 has its CatchHandler @ 032ea688 */
  source = WideScreenController_TypeInfo->static_fields->KGDDEONFPED;
  do {
                    /* try { // try from 032ea664 to 033ea68f has its CatchHandler @ 032ea260 */
    pSVar2 = System_Delegate__Remove
                       ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                        (MethodInfo *)0x0);
    if (pSVar2 != (System_Delegate_o *)0x0) {
                    /* catch() { ... } // from try @ 032ea660 with catch @ 032ea688 */
      if ((System_Action_c *)pSVar2->klass != System_Action_TypeInfo) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar2);
      }
    }
                    /* try { // try from 032ea690 to 033ea697 has its CatchHandler @ 032ea6ac */
    if ((WideScreenController_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 032ea698 to 033ea6a3 has its CatchHandler @ 032ea260 */
      thunk_FUN_01ba7564();
    }
                    /* try { // try from 032ea6a4 to 033ea6ab has its CatchHandler @ 032ea6ac */
                    /* catch() { ... } // from try @ 032ea690 with catch @ 032ea6ac
                       catch() { ... } // from try @ 032ea6a4 with catch @ 032ea6ac */
    pSVar3 = (System_Action_o *)
             FUN_01c07368(WideScreenController_TypeInfo->static_fields,pSVar2,source);
    bVar1 = source != pSVar3;
    source = pSVar3;
  } while (bVar1);
  return;
}

