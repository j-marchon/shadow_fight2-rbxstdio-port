// Nekki.SF2.GUI.Pvp.SelectModule$$add_OnPlayersBack @ RVA 0x31784E0

void Nekki_SF2_GUI_Pvp_SelectModule__add_OnPlayersBack
               (Nekki_SF2_GUI_Pvp_SelectModule_o *__this,System_Action_o *CJNHFNHJHPE,
               MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  System_Action_o **ppSVar4;
  System_Action_o *a;
  
  if ((DAT_04566965 & 1) == 0) {
                    /* try { // try from 03278504 to 0337850b has its CatchHandler @ 032786c4 */
    FUN_01bab630(&System_Action_TypeInfo);
    DAT_04566965 = 1;
  }
  ppSVar4 = &(__this->fields).KNIDPDCJJLG;
  a = *ppSVar4;
                    /* try { // try from 0327852c to 03378533 has its CatchHandler @ 032786ac */
  while ((pSVar2 = System_Delegate__Combine
                             ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,
                              (MethodInfo *)0x0), pSVar2 == (System_Delegate_o *)0x0 ||
         ((System_Action_c *)pSVar2->klass == System_Action_TypeInfo))) {
    pSVar3 = (System_Action_o *)FUN_01c07368(ppSVar4,pSVar2,a);
    bVar1 = a == pSVar3;
    a = pSVar3;
    if (bVar1) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03278578 to 0337859b has its CatchHandler @ 032786a8 */
  FUN_01babc64(pSVar2);
}

