// Nekki.SF2.GUI.Menu.MenuEnergyPanel$$add_OnBarClicked @ RVA 0x344E828

void Nekki_SF2_GUI_Menu_MenuEnergyPanel__add_OnBarClicked
               (Nekki_SF2_GUI_Menu_MenuEnergyPanel_o *__this,System_Action_o *CJNHFNHJHPE,
               MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  System_Action_o **ppSVar4;
  System_Action_o *a;
  
                    /* try { // try from 0354e828 to 0364e833 has its CatchHandler @ 0354e8ac */
                    /* try { // try from 0354e834 to 0364e88b has its CatchHandler @ 0354e5f0 */
  if ((DAT_0456828f & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    DAT_0456828f = 1;
  }
  ppSVar4 = &(__this->fields).BLDIJJGFONK;
  a = *ppSVar4;
                    /* try { // try from 0354e88c to 0364e88f has its CatchHandler @ 0354e8b8 */
  while ((pSVar2 = System_Delegate__Combine
                             ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,
                              (MethodInfo *)0x0), pSVar2 == (System_Delegate_o *)0x0 ||
         ((System_Action_c *)pSVar2->klass == System_Action_TypeInfo))) {
                    /* try { // try from 0354e890 to 0364e893 has its CatchHandler @ 0354e8a8 */
                    /* try { // try from 0354e894 to 0364e897 has its CatchHandler @ 0354e8a4 */
                    /* try { // try from 0354e898 to 0364e8d7 has its CatchHandler @ 0354e5f0 */
                    /* catch() { ... } // from try @ 0354e750 with catch @ 0354e89c */
    pSVar3 = (System_Action_o *)FUN_01c07368(ppSVar4,pSVar2,a);
                    /* catch() { ... } // from try @ 0354e818 with catch @ 0354e8a0 */
    bVar1 = a == pSVar3;
    a = pSVar3;
                    /* catch() { ... } // from try @ 0354e894 with catch @ 0354e8a4 */
                    /* catch() { ... } // from try @ 0354e890 with catch @ 0354e8a8 */
    if (bVar1) {
                    /* catch() { ... } // from try @ 0354e828 with catch @ 0354e8ac */
                    /* catch() { ... } // from try @ 0354e7e0 with catch @ 0354e8b0 */
                    /* catch() { ... } // from try @ 0354e768 with catch @ 0354e8b4 */
                    /* catch() { ... } // from try @ 0354e88c with catch @ 0354e8b8 */
      return;
    }
  }
                    /* catch() { ... } // from try @ 0354e740 with catch @ 0354e8bc */
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 0354e728 with catch @ 0354e8c0 */
  FUN_01babc64(pSVar2);
}

