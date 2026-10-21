// Nekki.SF2.Core.ApplicationController$$add_OnUpdate @ RVA 0x30C1A88

void Nekki_SF2_Core_ApplicationController__add_OnUpdate
               (System_Action_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  System_Action_o *a;
  
  if ((DAT_0456628d & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Nekki_SF2_Core_ApplicationController_TypeInfo);
    DAT_0456628d = 1;
  }
  a = Nekki_SF2_Core_ApplicationController_TypeInfo->static_fields->PJEOKMGNMNF;
  while ((pSVar2 = System_Delegate__Combine
                             ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,
                              (MethodInfo *)0x0), pSVar2 == (System_Delegate_o *)0x0 ||
         ((System_Action_c *)pSVar2->klass == System_Action_TypeInfo))) {
    pSVar3 = (System_Action_o *)
             FUN_01c07368(&Nekki_SF2_Core_ApplicationController_TypeInfo->static_fields->PJEOKMGNMNF
                          ,pSVar2,a);
    bVar1 = a == pSVar3;
    a = pSVar3;
    if (bVar1) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01babc64(pSVar2);
}

