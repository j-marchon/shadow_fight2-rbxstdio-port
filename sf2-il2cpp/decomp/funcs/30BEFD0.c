// Nekki.SF2.Core.ApplicationController$$OnApplicationQuit @ RVA 0x30BEFD0

void Nekki_SF2_Core_ApplicationController__OnApplicationQuit
               (Nekki_SF2_Core_ApplicationController_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  System_Action_o *pSVar1;
  
  if ((DAT_04566268 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_Core_ApplicationController_TypeInfo);
    DAT_04566268 = 1;
    method = extraout_x1;
  }
  pSVar1 = Nekki_SF2_Core_ApplicationController_TypeInfo->static_fields->FODFHMAHOPA;
  if (pSVar1 != (System_Action_o *)0x0) {
    (*(code *)(pSVar1->fields).super.super.invoke_impl)
              ((pSVar1->fields).super.super.method_code,(pSVar1->fields).super.super.method);
    method = extraout_x1_00;
  }
  if (DAT_045662da == '\0') {
    FUN_01bab630(&Nekki_SF2_Core_ApplicationController_TypeInfo,method);
    DAT_045662da = '\x01';
  }
  Nekki_SF2_Core_ApplicationController_TypeInfo->static_fields->_NMINHOHPEAD_k__BackingField = true;
  pSVar1 = (__this->fields).DPJDFFKNGOH;
  if (pSVar1 != (System_Action_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x031bf070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(pSVar1->fields).super.super.invoke_impl)
              ((pSVar1->fields).super.super.method_code,(pSVar1->fields).super.super.method);
    return;
  }
  return;
}

