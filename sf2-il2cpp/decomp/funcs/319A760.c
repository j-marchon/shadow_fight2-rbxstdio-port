// Nekki.SF2.GUI.Map.RaidToggleButton$$remove_OnScrollRaidMapUp @ RVA 0x319A760

void Nekki_SF2_GUI_Map_RaidToggleButton__remove_OnScrollRaidMapUp
               (Nekki_SF2_GUI_Map_RaidToggleButton_o *__this,System_Action_o *CJNHFNHJHPE,
               MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  System_Action_o **ppSVar4;
  System_Action_o *source;
  
  if ((DAT_04566aa3 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    DAT_04566aa3 = 1;
  }
  ppSVar4 = &(__this->fields).BKHIDCLCICL;
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

