// CLFCKIFNGHA$$CIEHCLDCJOB @ RVA 0x3455C48

void CLFCKIFNGHA__CIEHCLDCJOB
               (System_Collections_Generic_List_string__o *CBDPLOECEOA,
               System_Action_HashSet_string___o *NOOAHEHCMEL,MethodInfo *method)

{
  Il2CppObject *__this;
  System_Threading_CancellationTokenSource_o **ppSVar1;
  System_Action_o *action;
  System_Threading_CancellationTokenSource_o *pSVar2;
  
  if ((DAT_045682c7 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&CLFCKIFNGHA_TypeInfo);
    FUN_01bab630(&System_Threading_CancellationTokenSource_TypeInfo);
    FUN_01bab630(&Method_CLFCKIFNGHA_HNHHHMMIDDH_JIMKPGHMKNN__);
    FUN_01bab630(&CLFCKIFNGHA_HNHHHMMIDDH_TypeInfo);
    FUN_01bab630(&System_Threading_Tasks_Task_TypeInfo);
    DAT_045682c7 = 1;
  }
  __this = (Il2CppObject *)thunk_FUN_01bda818(CLFCKIFNGHA_HNHHHMMIDDH_TypeInfo);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  if (__this != (Il2CppObject *)0x0) {
    __this[1].klass = (Il2CppClass *)CBDPLOECEOA;
    thunk_FUN_01c20e04(__this + 1,CBDPLOECEOA);
    __this[1].monitor = NOOAHEHCMEL;
    thunk_FUN_01c20e04(&__this[1].monitor,NOOAHEHCMEL);
    if ((CLFCKIFNGHA_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar2 = CLFCKIFNGHA_TypeInfo->static_fields->CNINFEKICMA;
    if (pSVar2 != (System_Threading_CancellationTokenSource_o *)0x0) {
      if ((CLFCKIFNGHA_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
        pSVar2 = CLFCKIFNGHA_TypeInfo->static_fields->CNINFEKICMA;
        if (pSVar2 == (System_Threading_CancellationTokenSource_o *)0x0) goto LAB_03555dec;
      }
      System_Threading_CancellationTokenSource__Cancel(pSVar2,(MethodInfo *)0x0);
    }
    pSVar2 = (System_Threading_CancellationTokenSource_o *)
             thunk_FUN_01bda818(System_Threading_CancellationTokenSource_TypeInfo);
    System_Threading_CancellationTokenSource___ctor(pSVar2,(MethodInfo *)0x0);
    if ((CLFCKIFNGHA_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    ppSVar1 = &CLFCKIFNGHA_TypeInfo->static_fields->CNINFEKICMA;
    *ppSVar1 = pSVar2;
    thunk_FUN_01c20e04(ppSVar1,pSVar2);
    action = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
    System_Action___ctor();
    if ((System_Threading_Tasks_Task_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    System_Threading_Tasks_Task__Run(action,(MethodInfo *)0x0);
    return;
  }
LAB_03555dec:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

