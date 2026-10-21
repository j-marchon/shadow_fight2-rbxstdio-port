// Nekki.SF2.GUI.Map.RaidToggleButton$$remove_OnClick @ RVA 0x319A6C4

void Nekki_SF2_GUI_Map_RaidToggleButton__remove_OnClick
               (Nekki_SF2_GUI_Map_RaidToggleButton_o *__this,System_Action_o *CJNHFNHJHPE,
               MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  System_Action_o **ppSVar4;
  System_Action_o *source;
  
                    /* try { // try from 0329a6d8 to 0339a9ab has its CatchHandler @ 0329a6d8
                       catch() { ... } // from try @ 0329a6d8 with catch @ 0329a6d8
                       catch() { ... } // from try @ 0329aa94 with catch @ 0329a6d8
                       catch() { ... } // from try @ 0329aac8 with catch @ 0329a6d8
                       catch() { ... } // from try @ 0329aaf0 with catch @ 0329a6d8
                       catch() { ... } // from try @ 0329ab30 with catch @ 0329a6d8 */
  if ((DAT_04566aa2 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    DAT_04566aa2 = 1;
  }
  ppSVar4 = &(__this->fields).ANGJCCIONDI;
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

