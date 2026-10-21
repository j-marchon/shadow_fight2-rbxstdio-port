// Nekki.SF2.Core.ApplicationController$$OnApplicationFocus @ RVA 0x30BFFC0

void Nekki_SF2_Core_ApplicationController__OnApplicationFocus
               (Nekki_SF2_Core_ApplicationController_o *__this,bool GFCLNCOALIK,MethodInfo *method)

{
  System_Action_bool__o *pSVar1;
  
  pSVar1 = (__this->fields).IBOHNFCIIJH;
  if (pSVar1 != (System_Action_bool__o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x031bffd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(pSVar1->fields).super.super.invoke_impl)
              ((pSVar1->fields).super.super.method_code,GFCLNCOALIK,
               (pSVar1->fields).super.super.method);
    return;
  }
  return;
}

