// MCEIBCKPIAD$$JHHCEIDPANF @ RVA 0x316306C

void MCEIBCKPIAD__JHHCEIDPANF
               (MCEIBCKPIAD_o *__this,System_Action_FAIJGJCCKJC__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_FAIJGJCCKJC__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_FAIJGJCCKJC__o *pSVar5;
  System_Action_FAIJGJCCKJC__o **ppSVar6;
  System_Action_FAIJGJCCKJC__o *source;
  
                    /* try { // try from 03263070 to 03363087 has its CatchHandler @ 03263150 */
  if ((DAT_04566891 & 1) == 0) {
    FUN_01bab630(&System_Action<FAIJGJCCKJC>_TypeInfo);
    DAT_04566891 = 1;
  }
  ppSVar6 = &(__this->fields).BKKILNPNELM;
  source = *ppSVar6;
  do {
    pSVar3 = System_Delegate__Remove
                       ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                        (MethodInfo *)0x0);
    pSVar1 = System_Action<FAIJGJCCKJC>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
                    /* try { // try from 032630c8 to 033630eb has its CatchHandler @ 03263138 */
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<FAIJGJCCKJC>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03263118 to 0336311b has its CatchHandler @ 03263154 */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
                    /* try { // try from 032630ec to 03363117 has its CatchHandler @ 03262f18 */
    pSVar5 = (System_Action_FAIJGJCCKJC__o *)FUN_01c07368(ppSVar6,lVar4,source);
    bVar2 = source != pSVar5;
    source = pSVar5;
  } while (bVar2);
  return;
}

