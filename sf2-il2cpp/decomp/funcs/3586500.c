// Nekki.SF2.GUI.Map.MapScene$$remove_OnStoryMapOpenedAction @ RVA 0x3586500

void Nekki_SF2_GUI_Map_MapScene__remove_OnStoryMapOpenedAction
               (Nekki_SF2_GUI_Map_MapScene_o *__this,System_Action_o *CJNHFNHJHPE,MethodInfo *method
               )

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  System_Action_o **ppSVar4;
  System_Action_o *source;
  
  if ((DAT_04568cf7 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    DAT_04568cf7 = 1;
  }
  ppSVar4 = &(__this->fields).CLMHOCHLKBH;
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

