// Nekki.SF2.Core.ApplicationController$$remove_OnQuit @ RVA 0x30BFEB8

void Nekki_SF2_Core_ApplicationController__remove_OnQuit
               (System_Action_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  System_Action_o *source;
  
  if ((DAT_04566278 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Nekki_SF2_Core_ApplicationController_TypeInfo);
    DAT_04566278 = 1;
  }
  source = Nekki_SF2_Core_ApplicationController_TypeInfo->static_fields->FODFHMAHOPA;
  while ((pSVar2 = System_Delegate__Remove
                             ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                              (MethodInfo *)0x0), pSVar2 == (System_Delegate_o *)0x0 ||
         ((System_Action_c *)pSVar2->klass == System_Action_TypeInfo))) {
    pSVar3 = (System_Action_o *)
             FUN_01c07368(&Nekki_SF2_Core_ApplicationController_TypeInfo->static_fields->FODFHMAHOPA
                          ,pSVar2,source);
    bVar1 = source == pSVar3;
    source = pSVar3;
    if (bVar1) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01babc64(pSVar2);
}

