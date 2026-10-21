// TabView$$KGHLJNMCILN @ RVA 0x34D4B80

void TabView__KGHLJNMCILN(TabView_o *__this,Il2CppObject *IMMNELPBGIF,MethodInfo *method)

{
  System_Action_object__o *pSVar1;
  
  pSVar1 = (__this->fields).OnCloseClickAction;
  if (pSVar1 != (System_Action_object__o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x035d4b9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(pSVar1->fields).super.super.invoke_impl)
              ((pSVar1->fields).super.super.method_code,IMMNELPBGIF,
               (pSVar1->fields).super.super.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

