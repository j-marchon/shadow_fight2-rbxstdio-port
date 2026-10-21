// GCIFMNHADDF$$JNDNMPDMDGB @ RVA 0x31AAFB8

void GCIFMNHADDF__JNDNMPDMDGB
               (GCIFMNHADDF_o *__this,System_Action_BaseDialog__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_BaseDialog__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_BaseDialog__o *pSVar5;
  System_Action_BaseDialog__o **ppSVar6;
  System_Action_BaseDialog__o *source;
  
                    /* catch() { ... } // from try @ 032aab34 with catch @ 032aafb8 */
                    /* catch() { ... } // from try @ 032aae80 with catch @ 032aafbc */
                    /* catch() { ... } // from try @ 032aae70 with catch @ 032aafc0 */
                    /* catch() { ... } // from try @ 032aa68c with catch @ 032aafc4 */
                    /* catch() { ... } // from try @ 032aa950 with catch @ 032aafc8 */
                    /* catch() { ... } // from try @ 032aa888 with catch @ 032aafcc */
                    /* catch() { ... } // from try @ 032aae50 with catch @ 032aafd0 */
                    /* catch() { ... } // from try @ 032aae40 with catch @ 032aafd4 */
                    /* catch() { ... } // from try @ 032aa868 with catch @ 032aafd8 */
  if ((DAT_04566b37 & 1) == 0) {
                    /* catch() { ... } // from try @ 032aae30 with catch @ 032aafdc */
                    /* catch() { ... } // from try @ 032aa724 with catch @ 032aafe0 */
                    /* catch() { ... } // from try @ 032aae20 with catch @ 032aafe4 */
    FUN_01bab630(&System_Action<BaseDialog>_TypeInfo);
                    /* catch() { ... } // from try @ 032aa94c with catch @ 032aafe8 */
                    /* catch() { ... } // from try @ 032aa838 with catch @ 032aafec */
    DAT_04566b37 = 1;
  }
                    /* catch() { ... } // from try @ 032aae10 with catch @ 032aaff0 */
  ppSVar6 = &(__this->fields).LANNHNJHOLM;
                    /* catch() { ... } // from try @ 032aa688 with catch @ 032aaff4 */
                    /* catch() { ... } // from try @ 032aae00 with catch @ 032aaff8 */
  source = *ppSVar6;
  do {
                    /* catch() { ... } // from try @ 032aadf0 with catch @ 032aaffc */
                    /* catch() { ... } // from try @ 032aade0 with catch @ 032ab000 */
                    /* catch() { ... } // from try @ 032aa820 with catch @ 032ab004 */
                    /* catch() { ... } // from try @ 032aa7c4 with catch @ 032ab008 */
    pSVar3 = System_Delegate__Remove
                       ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                        (MethodInfo *)0x0);
    pSVar1 = System_Action<BaseDialog>_TypeInfo;
                    /* catch() { ... } // from try @ 032aa65c with catch @ 032ab00c */
    if (pSVar3 == (System_Delegate_o *)0x0) {
                    /* catch() { ... } // from try @ 032aa7b4 with catch @ 032ab02c */
      lVar4 = 0;
    }
    else {
                    /* catch() { ... } // from try @ 032aa720 with catch @ 032ab010 */
                    /* catch() { ... } // from try @ 032aa9f4 with catch @ 032ab014 */
                    /* catch() { ... } // from try @ 032aa900 with catch @ 032ab018 */
                    /* catch() { ... } // from try @ 032aadc4 with catch @ 032ab01c */
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<BaseDialog>_TypeInfo);
      if (lVar4 == 0) {
                    /* catch() { ... } // from try @ 032aad74 with catch @ 032ab05c */
                    /* catch() { ... } // from try @ 032aa9e0 with catch @ 032ab060 */
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 032aa7b0 with catch @ 032ab064 */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
                    /* catch() { ... } // from try @ 032aa63c with catch @ 032ab030 */
                    /* catch() { ... } // from try @ 032aad94 with catch @ 032ab034 */
                    /* catch() { ... } // from try @ 032aa9e4 with catch @ 032ab038 */
    pSVar5 = (System_Action_BaseDialog__o *)FUN_01c07368(ppSVar6,lVar4,source);
                    /* catch() { ... } // from try @ 032aad84 with catch @ 032ab03c */
    bVar2 = source != pSVar5;
    source = pSVar5;
                    /* catch() { ... } // from try @ 032aa7ec with catch @ 032ab040 */
  } while (bVar2);
  return;
}

