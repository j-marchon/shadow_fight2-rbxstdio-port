// LGPCBNIFHNN$$GHKLIKABHCD @ RVA 0x32957CC

void LGPCBNIFHNN__GHKLIKABHCD
               (LGPCBNIFHNN_o *__this,System_Threading_Tasks_Task_string__o *LNAIFAPJFEL,
               MethodInfo *method)

{
  Il2CppObject *pIVar1;
  MethodInfo *in_x3;
  System_Action_string__o *pSVar2;
  
  if ((DAT_04567362 & 1) == 0) {
    FUN_01bab630(&Method_System_Threading_Tasks_Task<string>_get_Result__);
    FUN_01bab630(&StringLiteral_6835);
    DAT_04567362 = 1;
  }
  LGPCBNIFHNN__JFNOJHNGDFB
            (__this,(System_Threading_Tasks_Task_o *)LNAIFAPJFEL,StringLiteral_6835,in_x3);
  pSVar2 = (__this->fields).NLMBGOCHKPK;
  if (pSVar2 != (System_Action_string__o *)0x0) {
    if (LNAIFAPJFEL != (System_Threading_Tasks_Task_string__o *)0x0) {
      pIVar1 = System_Threading_Tasks_Task<object>__get_Result
                         ((System_Threading_Tasks_Task_object__o *)LNAIFAPJFEL,
                          Method_System_Threading_Tasks_Task<string>_get_Result__);
                    /* WARNING: Could not recover jumptable at 0x03395864. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(pSVar2->fields).super.super.invoke_impl)
                ((pSVar2->fields).super.super.method_code,pIVar1,(pSVar2->fields).super.super.method
                );
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

