// Nekki.SF2.GUI.Map.BattlePrizeElement$$add_OnRendered @ RVA 0x339D08C

void Nekki_SF2_GUI_Map_BattlePrizeElement__add_OnRendered
               (Nekki_SF2_GUI_Map_BattlePrizeElement_o *__this,System_Action_o *CJNHFNHJHPE,
               MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  System_Action_o **ppSVar4;
  System_Action_o *a;
  
  if ((DAT_04567c8d & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    DAT_04567c8d = 1;
  }
  ppSVar4 = &(__this->fields).NFECDKAEFJL;
                    /* try { // try from 0349d0c8 to 0359d0ef has its CatchHandler @ 0349d1c0 */
  a = *ppSVar4;
  while ((pSVar2 = System_Delegate__Combine
                             ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,
                              (MethodInfo *)0x0), pSVar2 == (System_Delegate_o *)0x0 ||
         ((System_Action_c *)pSVar2->klass == System_Action_TypeInfo))) {
    pSVar3 = (System_Action_o *)FUN_01c07368(ppSVar4,pSVar2,a);
    bVar1 = a == pSVar3;
    a = pSVar3;
    if (bVar1) {
                    /* try { // try from 0349d114 to 0359d11b has its CatchHandler @ 0349d1b0 */
                    /* try { // try from 0349d11c to 0359d197 has its CatchHandler @ 0349cfa4 */
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01babc64(pSVar2);
}

