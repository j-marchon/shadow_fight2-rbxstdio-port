// Nekki.SF2.GUI.TextPic$$remove_OnBoundsUpdated @ RVA 0x30B9950

void Nekki_SF2_GUI_TextPic__remove_OnBoundsUpdated
               (Nekki_SF2_GUI_TextPic_o *__this,System_Action_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  LabelButton_o *pLVar3;
  LabelButton_o *source;
  
  if ((DAT_04566219 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    DAT_04566219 = 1;
  }
  source = (__this->fields).JPDGLLDKPHC;
  while ((pSVar2 = System_Delegate__Remove
                             ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                              (MethodInfo *)0x0), pSVar2 == (System_Delegate_o *)0x0 ||
         ((System_Action_c *)pSVar2->klass == System_Action_TypeInfo))) {
    pLVar3 = (LabelButton_o *)FUN_01c07368(&(__this->fields).JPDGLLDKPHC,pSVar2,source);
    bVar1 = source == pLVar3;
    source = pLVar3;
    if (bVar1) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01babc64(pSVar2);
}

