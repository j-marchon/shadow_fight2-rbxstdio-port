// Nekki.SF2.Core.Fights.ModelContainer$$NCCFAEMDMKL @ RVA 0x356108C

void Nekki_SF2_Core_Fights_ModelContainer__NCCFAEMDMKL
               (Nekki_SF2_Core_Fights_ModelContainer_o *__this,
               OLKKAIFGGAK_EAOIGPODIAI_o *PGPLLGEIFPI,MethodInfo *method)

{
  System_Action_OLKKAIFGGAK_EAOIGPODIAI__o *pSVar1;
  
  pSVar1 = (__this->fields).LKGKDIMGDHL;
  if (pSVar1 != (System_Action_OLKKAIFGGAK_EAOIGPODIAI__o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x036610a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(pSVar1->fields).super.super.invoke_impl)
              ((pSVar1->fields).super.super.method_code,PGPLLGEIFPI,
               (pSVar1->fields).super.super.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

