// Nekki.SF2.Core.Quests.QuestsManager$$add_OnQuestsListEmpty @ RVA 0x33069A0

void Nekki_SF2_Core_Quests_QuestsManager__add_OnQuestsListEmpty
               (Nekki_SF2_Core_Quests_QuestsManager_o *__this,System_Action_o *CJNHFNHJHPE,
               MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  System_Action_o **ppSVar4;
  System_Action_o *a;
  
  if ((DAT_0456775b & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    DAT_0456775b = 1;
  }
  ppSVar4 = &(__this->fields).IPDPGDFFNFI;
  a = *ppSVar4;
  while ((pSVar2 = System_Delegate__Combine
                             ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,
                              (MethodInfo *)0x0), pSVar2 == (System_Delegate_o *)0x0 ||
         ((System_Action_c *)pSVar2->klass == System_Action_TypeInfo))) {
                    /* try { // try from 03406a10 to 03506a17 has its CatchHandler @ 03406a9c */
    pSVar3 = (System_Action_o *)FUN_01c07368(ppSVar4,pSVar2,a);
    bVar1 = a == pSVar3;
    a = pSVar3;
    if (bVar1) {
      return;
    }
  }
                    /* try { // try from 03406a34 to 03506a3b has its CatchHandler @ 03406a94 */
                    /* WARNING: Subroutine does not return */
  FUN_01babc64(pSVar2);
}

