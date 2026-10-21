// Nekki.SF2.GUI.Pvp.SelectModule$$remove_OnPlayersBack @ RVA 0x31783D0

void Nekki_SF2_GUI_Pvp_SelectModule__remove_OnPlayersBack
               (Nekki_SF2_GUI_Pvp_SelectModule_o *__this,System_Action_o *CJNHFNHJHPE,
               MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  System_Action_o **ppSVar4;
  System_Action_o *source;
  
  if ((DAT_04566962 & 1) == 0) {
                    /* try { // try from 032783f4 to 03378503 has its CatchHandler @ 032783f4
                       catch() { ... } // from try @ 032783f4 with catch @ 032783f4
                       catch() { ... } // from try @ 032785fc with catch @ 032783f4
                       catch() { ... } // from try @ 03278654 with catch @ 032783f4
                       catch() { ... } // from try @ 032786a0 with catch @ 032783f4
                       catch() { ... } // from try @ 032786e0 with catch @ 032783f4
                       catch() { ... } // from try @ 0327871c with catch @ 032783f4
                       catch() { ... } // from try @ 03278738 with catch @ 032783f4
                       catch() { ... } // from try @ 03278768 with catch @ 032783f4 */
    FUN_01bab630(&System_Action_TypeInfo);
    DAT_04566962 = 1;
  }
  ppSVar4 = &(__this->fields).KNIDPDCJJLG;
  source = *ppSVar4;
  while ((pSVar2 = System_Delegate__Remove
                             ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                              (MethodInfo *)0x0), pSVar2 == (System_Delegate_o *)0x0 ||
         ((System_Action_c *)pSVar2->klass == System_Action_TypeInfo))) {
    pSVar3 = (System_Action_o *)FUN_01c07368(ppSVar4,pSVar2,source);
    bVar1 = source == pSVar3;
    source = pSVar3;
    if (bVar1) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01babc64(pSVar2);
}

