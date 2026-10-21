// Nekki.SF2.GUI.SidePanelScroll$$remove_OnIgnored_OnBeginDrag @ RVA 0x3294BD0

void Nekki_SF2_GUI_SidePanelScroll__remove_OnIgnored_OnBeginDrag
               (Nekki_SF2_GUI_SidePanelScroll_o *__this,System_Action_o *CJNHFNHJHPE,
               MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Delegate_o *source;
  
  if ((DAT_04567357 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    DAT_04567357 = 1;
  }
  source = *(System_Delegate_o **)&(__this->fields).IgnoreDragging;
  while ((pSVar2 = System_Delegate__Remove
                             (source,(System_Delegate_o *)CJNHFNHJHPE,(MethodInfo *)0x0),
         pSVar2 == (System_Delegate_o *)0x0 ||
         ((System_Action_c *)pSVar2->klass == System_Action_TypeInfo))) {
    pSVar2 = (System_Delegate_o *)FUN_01c07368(&(__this->fields).IgnoreDragging,pSVar2,source);
    bVar1 = source == pSVar2;
    source = pSVar2;
    if (bVar1) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01babc64(pSVar2);
}

