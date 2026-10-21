// Nekki.SF2.Core.Fights.Controls.Stick$$add_OnStickEnd @ RVA 0x306A3F0

void Nekki_SF2_Core_Fights_Controls_Stick__add_OnStickEnd
               (Nekki_SF2_Core_Fights_Controls_Stick_o *__this,
               System_Action_GGFFOJJGHGP__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_GGFFOJJGHGP__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_GGFFOJJGHGP__o *pSVar5;
  System_Action_GGFFOJJGHGP__o **ppSVar6;
  System_Action_GGFFOJJGHGP__o *a;
  
                    /* try { // try from 0316a408 to 0326a42f has its CatchHandler @ 0316a444 */
  if ((DAT_04565f21 & 1) == 0) {
    FUN_01bab630(&System_Action<GGFFOJJGHGP>_TypeInfo);
    DAT_04565f21 = 1;
  }
  ppSVar6 = &(__this->fields).JANHEDHPGEG;
                    /* try { // try from 0316a430 to 0326a43b has its CatchHandler @ 0316a1b8 */
  a = *ppSVar6;
  do {
                    /* try { // try from 0316a43c to 0326a443 has its CatchHandler @ 0316a444 */
    pSVar3 = System_Delegate__Combine
                       ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,(MethodInfo *)0x0);
    pSVar1 = System_Action<GGFFOJJGHGP>_TypeInfo;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0316a408 with catch @ 0316a444
                       catch(type#2 @ 00000000) { ... } // from try @ 0316a43c with catch @ 0316a444
                        */
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<GGFFOJJGHGP>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_GGFFOJJGHGP__o *)FUN_01c07368(ppSVar6,lVar4,a);
    bVar2 = a != pSVar5;
    a = pSVar5;
  } while (bVar2);
  return;
}

