// Nekki.SF2.Core.ApplicationController$$Update @ RVA 0x30BF884

void Nekki_SF2_Core_ApplicationController__Update
               (Nekki_SF2_Core_ApplicationController_o *__this,MethodInfo *method)

{
  System_Action_o *pSVar1;
  
  if ((DAT_0456626c & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_Core_ApplicationController_TypeInfo);
    DAT_0456626c = 1;
  }
  pSVar1 = Nekki_SF2_Core_ApplicationController_TypeInfo->static_fields->PJEOKMGNMNF;
  if (pSVar1 != (System_Action_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x031bf8d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(pSVar1->fields).super.super.invoke_impl)
              ((pSVar1->fields).super.super.method_code,(pSVar1->fields).super.super.method);
    return;
  }
  return;
}

