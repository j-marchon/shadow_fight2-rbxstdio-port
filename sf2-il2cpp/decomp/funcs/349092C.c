// Nekki.SF2.GUI.UIModule$$remove_OnModuleActivated @ RVA 0x349092C

void Nekki_SF2_GUI_UIModule__remove_OnModuleActivated
               (System_Action_UIModule__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_UIModule__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_UIModule__o *pSVar5;
  MethodInfo *extraout_x1;
  System_Action_UIModule__o *source;
  
  if ((DAT_04568414 & 1) == 0) {
    FUN_01bab630(&System_Action<UIModule>_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_UIModule_TypeInfo);
    DAT_04568414 = 1;
    method = extraout_x1;
  }
  if ((Nekki_SF2_GUI_UIModule_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_UIModule_TypeInfo,method);
  }
  source = Nekki_SF2_GUI_UIModule_TypeInfo->static_fields->OnModuleActivated;
  do {
    pSVar3 = System_Delegate__Remove
                       ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                        (MethodInfo *)0x0);
    pSVar1 = System_Action<UIModule>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<UIModule>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    if ((Nekki_SF2_GUI_UIModule_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar5 = (System_Action_UIModule__o *)
             FUN_01c07368(Nekki_SF2_GUI_UIModule_TypeInfo->static_fields,lVar4,source);
    bVar2 = source != pSVar5;
    source = pSVar5;
  } while (bVar2);
  return;
}

