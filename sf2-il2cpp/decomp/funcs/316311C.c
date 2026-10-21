// MCEIBCKPIAD$$HMPDMOOMDAC @ RVA 0x316311C

void MCEIBCKPIAD__HMPDMOOMDAC
               (MCEIBCKPIAD_o *__this,System_Action_FAIJGJCCKJC__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_FAIJGJCCKJC__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_FAIJGJCCKJC__o *pSVar5;
  System_Action_FAIJGJCCKJC__o **ppSVar6;
  System_Action_FAIJGJCCKJC__o *a;
  
                    /* try { // try from 0326311c to 0336311f has its CatchHandler @ 03263144 */
                    /* try { // try from 03263120 to 03363123 has its CatchHandler @ 03263154 */
                    /* try { // try from 03263124 to 03363127 has its CatchHandler @ 03263140 */
                    /* try { // try from 03263128 to 0336312b has its CatchHandler @ 0326313c */
                    /* try { // try from 0326312c to 0336316b has its CatchHandler @ 03262f18 */
                    /* catch() { ... } // from try @ 0326305c with catch @ 03263130 */
                    /* catch() { ... } // from try @ 03263040 with catch @ 03263134 */
                    /* catch() { ... } // from try @ 032630c8 with catch @ 03263138 */
                    /* catch() { ... } // from try @ 03263128 with catch @ 0326313c */
  if ((DAT_04566892 & 1) == 0) {
                    /* catch() { ... } // from try @ 03263124 with catch @ 03263140 */
                    /* catch() { ... } // from try @ 0326311c with catch @ 03263144 */
                    /* catch() { ... } // from try @ 03263054 with catch @ 03263148 */
    FUN_01bab630(&System_Action<FAIJGJCCKJC>_TypeInfo);
                    /* catch() { ... } // from try @ 03263020 with catch @ 0326314c */
                    /* catch() { ... } // from try @ 03263070 with catch @ 03263150 */
    DAT_04566892 = 1;
  }
                    /* catch() { ... } // from try @ 03263118 with catch @ 03263154
                       catch() { ... } // from try @ 03263120 with catch @ 03263154 */
  ppSVar6 = &(__this->fields).BKKILNPNELM;
  a = *ppSVar6;
  do {
                    /* try { // try from 0326316c to 0336316f has its CatchHandler @ 03263190 */
    pSVar3 = System_Delegate__Combine
                       ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,(MethodInfo *)0x0);
    pSVar1 = System_Action<FAIJGJCCKJC>_TypeInfo;
                    /* try { // try from 03263170 to 03363197 has its CatchHandler @ 03262f18 */
    if (pSVar3 == (System_Delegate_o *)0x0) {
                    /* catch() { ... } // from try @ 0326316c with catch @ 03263190 */
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<FAIJGJCCKJC>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
                    /* try { // try from 03263198 to 0336319f has its CatchHandler @ 032631b4 */
    pSVar5 = (System_Action_FAIJGJCCKJC__o *)FUN_01c07368(ppSVar6,lVar4,a);
                    /* try { // try from 032631a0 to 033631ab has its CatchHandler @ 03262f18 */
    bVar2 = a != pSVar5;
    a = pSVar5;
  } while (bVar2);
                    /* try { // try from 032631ac to 033631b3 has its CatchHandler @ 032631b4 */
                    /* catch() { ... } // from try @ 03263198 with catch @ 032631b4
                       catch() { ... } // from try @ 032631ac with catch @ 032631b4 */
  return;
}

