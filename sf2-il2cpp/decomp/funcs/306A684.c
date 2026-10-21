// Nekki.SF2.Core.Fights.Controls.Stick$$add_OnStickBegin @ RVA 0x306A684

void Nekki_SF2_Core_Fights_Controls_Stick__add_OnStickBegin
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
  
  if ((DAT_04565f25 & 1) == 0) {
    FUN_01bab630(&System_Action<GGFFOJJGHGP>_TypeInfo);
    DAT_04565f25 = 1;
  }
  ppSVar6 = &(__this->fields).LMIKGNKODAL;
                    /* try { // try from 0316a6c4 to 0326a7db has its CatchHandler @ 0316a6c4
                       catch() { ... } // from try @ 0316a6c4 with catch @ 0316a6c4
                       catch() { ... } // from try @ 0316a7ec with catch @ 0316a6c4
                       catch() { ... } // from try @ 0316a908 with catch @ 0316a6c4 */
  a = *ppSVar6;
  do {
    pSVar3 = System_Delegate__Combine
                       ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,(MethodInfo *)0x0);
    pSVar1 = System_Action<GGFFOJJGHGP>_TypeInfo;
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

