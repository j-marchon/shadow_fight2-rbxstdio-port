// LGPCBNIFHNN$$BJBCPJINDJN @ RVA 0x3295988

void LGPCBNIFHNN__BJBCPJINDJN
               (LGPCBNIFHNN_o *__this,System_Threading_Tasks_Task_DependencyStatus__o *BFNOHFKOABI,
               MethodInfo *method)

{
  int32_t iVar1;
  Il2CppObject *arg1;
  System_String_o *JLNPKGGFFDD;
  Firebase_FirebaseApp_o *pFVar2;
  System_Threading_Tasks_Task_o *task;
  System_Action_Task__o *continuation;
  MethodInfo *method_00;
  int32_t local_54;
  
  if ((DAT_04567363 & 1) == 0) {
    FUN_01bab630(&System_Action<Task>_TypeInfo);
    FUN_01bab630(&Firebase_DependencyStatus_TypeInfo);
    FUN_01bab630(&Firebase_FirebaseApp_TypeInfo);
    FUN_01bab630(&Method_LGPCBNIFHNN_DPGBEJBEBPD__);
    FUN_01bab630(&LGPCBNIFHNN_TypeInfo);
    FUN_01bab630(&Method_System_Threading_Tasks_Task<DependencyStatus>_get_Result__);
    FUN_01bab630(&StringLiteral_4295);
    FUN_01bab630(&StringLiteral_22397);
    FUN_01bab630(&StringLiteral_7529);
    FUN_01bab630(&StringLiteral_7535);
    DAT_04567363 = 1;
  }
  if (BFNOHFKOABI != (System_Threading_Tasks_Task_DependencyStatus__o *)0x0) {
    local_54 = System_Threading_Tasks_Task<Int32Enum>__get_Result
                         ((System_Threading_Tasks_Task_TResult__o *)BFNOHFKOABI,
                          Method_System_Threading_Tasks_Task<DependencyStatus>_get_Result__);
    arg1 = (Il2CppObject *)thunk_FUN_01bda448(Firebase_DependencyStatus_TypeInfo,&local_54);
    method_00 = (MethodInfo *)0x0;
    JLNPKGGFFDD = System_String__Format
                            (StringLiteral_22397,StringLiteral_7529,arg1,(MethodInfo *)0x0);
    KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,JLNPKGGFFDD,(MethodInfo *)0x0);
    LGPCBNIFHNN__JFNOJHNGDFB
              (__this,(System_Threading_Tasks_Task_o *)BFNOHFKOABI,StringLiteral_4295,method_00);
    if ((Firebase_FirebaseApp_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pFVar2 = Firebase_FirebaseApp__get_DefaultInstance((MethodInfo *)0x0);
    LGPCBNIFHNN_TypeInfo->static_fields->IDKDPGDCJGO = pFVar2;
    thunk_FUN_01c20e04(LGPCBNIFHNN_TypeInfo->static_fields,pFVar2);
    iVar1 = System_Threading_Tasks_Task<Int32Enum>__get_Result
                      ((System_Threading_Tasks_Task_TResult__o *)BFNOHFKOABI,
                       Method_System_Threading_Tasks_Task<DependencyStatus>_get_Result__);
    if (iVar1 == 0) {
      task = Firebase_Messaging_FirebaseMessaging__RequestPermissionAsync((MethodInfo *)0x0);
      continuation = (System_Action_Task__o *)thunk_FUN_01bda818(System_Action<Task>_TypeInfo);
      System_Action<object>___ctor();
      Firebase_Extensions_TaskExtension__ContinueWithOnMainThread
                (task,continuation,(MethodInfo *)0x0);
    }
    else {
      KFJJHMDIFIG__AFEFCBEAJIN((Il2CppObject *)__this,StringLiteral_7535,(MethodInfo *)0x0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

