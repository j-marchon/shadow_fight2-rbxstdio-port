// ANFOHCGLHID$$CBHLMLMMFBP @ RVA 0x34E0B40

System_String_o * ANFOHCGLHID__CBHLMLMMFBP(MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if ((DAT_0456872b & 1) == 0) {
    FUN_01bab630(&UnityEngine_Application_TypeInfo);
    DAT_0456872b = 1;
  }
  if ((UnityEngine_Application_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar1 = UnityEngine_Application__get_version((MethodInfo *)0x0);
  if (pSVar1 != (System_String_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x035e0b9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pSVar1 = (System_String_o *)
             (*(pSVar1->klass->vtable)._3_ToString.methodPtr)
                       (pSVar1,(pSVar1->klass->vtable)._3_ToString.method);
    return pSVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

