// OLKKAIFGGAK$$LFELKIAKOEB @ RVA 0x34EA684

void OLKKAIFGGAK__LFELKIAKOEB
               (OLKKAIFGGAK_o *__this,System_Action_PEJCGNNAPHG__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_PEJCGNNAPHG__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_PEJCGNNAPHG__o *pSVar5;
  System_Action_PEJCGNNAPHG__o **ppSVar6;
  System_Action_PEJCGNNAPHG__o *source;
  
                    /* try { // try from 035ea68c to 036ea693 has its CatchHandler @ 035ea7b8 */
  if ((DAT_04568789 & 1) == 0) {
    FUN_01bab630(&System_Action<PEJCGNNAPHG>_TypeInfo);
    DAT_04568789 = 1;
  }
  ppSVar6 = &(__this->fields).DMDLHJFCICI;
  source = *ppSVar6;
  do {
    pSVar3 = System_Delegate__Remove
                       ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                        (MethodInfo *)0x0);
    pSVar1 = System_Action<PEJCGNNAPHG>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
                    /* try { // try from 035ea6e4 to 036ea6ff has its CatchHandler @ 035ea7b4 */
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<PEJCGNNAPHG>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
                    /* try { // try from 035ea700 to 036ea79f has its CatchHandler @ 035ea59c */
    pSVar5 = (System_Action_PEJCGNNAPHG__o *)FUN_01c07368(ppSVar6,lVar4,source);
    bVar2 = source != pSVar5;
    source = pSVar5;
  } while (bVar2);
  return;
}

