// Nekki.SF2.GUI.Dialogs.NotificationsGame$$remove_OnClose @ RVA 0x30F72A8

void Nekki_SF2_GUI_Dialogs_NotificationsGame__remove_OnClose
               (Nekki_SF2_GUI_Dialogs_NotificationsGame_o *__this,System_Action_o *CJNHFNHJHPE,
               MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  System_Action_o **ppSVar4;
  System_Action_o *source;
  
  if ((DAT_04566468 & 1) == 0) {
                    /* try { // try from 031f72cc to 032f72df has its CatchHandler @ 031f7668 */
    FUN_01bab630(&System_Action_TypeInfo);
    DAT_04566468 = 1;
  }
  ppSVar4 = &(__this->fields).DKPPMJCLNAB;
  source = *ppSVar4;
                    /* try { // try from 031f72f4 to 032f72f7 has its CatchHandler @ 031f75ec */
                    /* try { // try from 031f72f8 to 032f7303 has its CatchHandler @ 031f7628 */
                    /* try { // try from 031f730c to 032f731b has its CatchHandler @ 031f7658 */
  while ((pSVar2 = System_Delegate__Remove
                             ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                              (MethodInfo *)0x0), pSVar2 == (System_Delegate_o *)0x0 ||
         ((System_Action_c *)pSVar2->klass == System_Action_TypeInfo))) {
    pSVar3 = (System_Action_o *)FUN_01c07368(ppSVar4,pSVar2,source);
                    /* try { // try from 031f7320 to 032f732f has its CatchHandler @ 031f7650 */
    bVar1 = source == pSVar3;
    source = pSVar3;
    if (bVar1) {
                    /* try { // try from 031f7334 to 032f735f has its CatchHandler @ 031f7648 */
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01babc64(pSVar2);
}

