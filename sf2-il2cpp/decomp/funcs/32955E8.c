// LGPCBNIFHNN$$GIMAJOGGBHM @ RVA 0x32955E8

void LGPCBNIFHNN__GIMAJOGGBHM(LGPCBNIFHNN_o *__this,MethodInfo *method)

{
  System_Threading_Tasks_Task_T__o *task;
  System_Action_Task_T___o *continuation;
  
  if ((DAT_04567361 & 1) == 0) {
    FUN_01bab630(&System_Action<Task<DependencyStatus>>_TypeInfo);
    FUN_01bab630(&Firebase_FirebaseApp_TypeInfo);
    FUN_01bab630(&Method_LGPCBNIFHNN_BJBCPJINDJN__);
    FUN_01bab630(&
                 Method_Firebase_Extensions_TaskExtension_ContinueWithOnMainThread<DependencyStatus>__
                );
    FUN_01bab630(&StringLiteral_7529);
    FUN_01bab630(&StringLiteral_7531);
    DAT_04567361 = 1;
  }
  KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,StringLiteral_7529,(MethodInfo *)0x0);
  KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,StringLiteral_7531,(MethodInfo *)0x0);
  if ((Firebase_FirebaseApp_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  task = (System_Threading_Tasks_Task_T__o *)
         Firebase_FirebaseApp__CheckAndFixDependenciesAsync((MethodInfo *)0x0);
  continuation = (System_Action_Task_T___o *)
                 thunk_FUN_01bda818(System_Action<Task<DependencyStatus>>_TypeInfo);
  System_Action<object>___ctor();
  Firebase_Extensions_TaskExtension__ContinueWithOnMainThread<Int32Enum>
            (task,continuation,
             Method_Firebase_Extensions_TaskExtension_ContinueWithOnMainThread<DependencyStatus>__);
  return;
}

