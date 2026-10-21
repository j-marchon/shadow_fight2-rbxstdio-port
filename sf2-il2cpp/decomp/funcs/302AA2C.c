// Nekki.SF2.GUI.SimpleScroll$$remove_OnScroll @ RVA 0x302AA2C

void Nekki_SF2_GUI_SimpleScroll__remove_OnScroll
               (Nekki_SF2_GUI_SimpleScroll_o *__this,System_Action_BaseScrollItem__o *CJNHFNHJHPE,
               MethodInfo *method)

{
  System_Action_BaseScrollItem__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_o *pSVar5;
  System_Action_o *source;
  
  if ((DAT_04565cb8 & 1) == 0) {
    FUN_01bab630(&System_Action<BaseScrollItem>_TypeInfo);
    DAT_04565cb8 = 1;
  }
  source = (__this->fields).JFFDCLAAPBE;
  do {
    pSVar3 = System_Delegate__Remove
                       ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                        (MethodInfo *)0x0);
    pSVar1 = System_Action<BaseScrollItem>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<BaseScrollItem>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_o *)FUN_01c07368(&(__this->fields).JFFDCLAAPBE,lVar4,source);
    bVar2 = source != pSVar5;
    source = pSVar5;
  } while (bVar2);
  return;
}

