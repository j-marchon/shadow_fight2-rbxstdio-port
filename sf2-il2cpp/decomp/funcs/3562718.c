// Nekki.SF2.Core.Fights.ModelContainer$$MPICEHINPFC @ RVA 0x3562718

void Nekki_SF2_Core_Fights_ModelContainer__MPICEHINPFC
               (Nekki_SF2_Core_Fights_ModelContainer_o *__this,MethodInfo *method)

{
  System_Action_o *pSVar1;
  
  pSVar1 = (__this->fields).NHDEFBNHAKC;
  if (pSVar1 != (System_Action_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03662734. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(pSVar1->fields).super.super.invoke_impl)
              ((pSVar1->fields).super.super.method_code,(pSVar1->fields).super.super.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

