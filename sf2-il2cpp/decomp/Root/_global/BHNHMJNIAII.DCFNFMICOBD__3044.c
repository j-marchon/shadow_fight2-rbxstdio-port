// TypeDefIndex 3044
// Namespace: 
// public sealed class BHNHMJNIAII.DCFNFMICOBD : MulticastDelegate
// Fields:

// ===== public void .ctor(object LPDENCPICOM, IntPtr IHJHOFMNAOA)  [RVA 0x34B8F08]
// BHNHMJNIAII.DCFNFMICOBD$$.ctor @ RVA 0x34B8F08

void BHNHMJNIAII_DCFNFMICOBD___ctor
               (BHNHMJNIAII_DCFNFMICOBD_o *__this,Il2CppObject *LPDENCPICOM,intptr_t IHJHOFMNAOA,
               MethodInfo *method)

{
  char cVar1;
  ulong uVar2;
  undefined8 uVar3;
  intptr_t iVar4;
  code *pcVar5;
  Il2CppObject *pIVar6;
  
  iVar4 = *(intptr_t *)(IHJHOFMNAOA + 8);
  (__this->fields).super.super.method = IHJHOFMNAOA;
  (__this->fields).super.super.method_ptr = iVar4;
  (__this->fields).super.super.m_target = LPDENCPICOM;
  thunk_FUN_01c20e04();
  cVar1 = *(char *)(IHJHOFMNAOA + 0x52);
  (__this->fields).super.super.method_code = (intptr_t)__this;
  uVar2 = FUN_01bab730(IHJHOFMNAOA);
  if ((uVar2 & 1) == 0) {
    if (cVar1 != '\0') {
      if (LPDENCPICOM == (Il2CppObject *)0x0) {
        uVar3 = thunk_FUN_01be8674(0,"Delegate to an instance method cannot have null \'this\'.");
                    /* WARNING: Subroutine does not return */
        FUN_01bab798(uVar3,0);
      }
      goto LAB_035b8f64;
    }
    pcVar5 = FUN_01b49600;
  }
  else {
    if (cVar1 != '\x01') {
LAB_035b8f64:
      pIVar6 = (__this->fields).super.super.m_target;
      (__this->fields).super.super.invoke_impl = (__this->fields).super.super.method_ptr;
      (__this->fields).super.super.method_code = (intptr_t)pIVar6;
      goto LAB_035b8f84;
    }
    pcVar5 = FUN_01b49620;
  }
  (__this->fields).super.super.invoke_impl = (intptr_t)pcVar5;
LAB_035b8f84:
  (__this->fields).super.super.extra_arg = (intptr_t)FUN_01b495b0;
  return;
}


// ===== public virtual string Invoke(string[] OPAEPDIIOEB)  [RVA 0x34B8FB8]
// BHNHMJNIAII.DCFNFMICOBD$$Invoke @ RVA 0x34B8FB8

System_String_o *
BHNHMJNIAII_DCFNFMICOBD__Invoke
          (BHNHMJNIAII_DCFNFMICOBD_o *__this,System_String_array *OPAEPDIIOEB,MethodInfo *method)

{
  System_String_o *pSVar1;
  
                    /* WARNING: Could not recover jumptable at 0x035b8fc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pSVar1 = (System_String_o *)
           (*(code *)(__this->fields).super.super.invoke_impl)
                     ((__this->fields).super.super.method_code,OPAEPDIIOEB,
                      (__this->fields).super.super.method);
  return pSVar1;
}


// ===== public virtual IAsyncResult BeginInvoke(string[] OPAEPDIIOEB, AsyncCallback BLMFLPJJMPF, object LPDENCPICOM)  [RVA 0x34B8FCC]
// BHNHMJNIAII.DCFNFMICOBD$$BeginInvoke @ RVA 0x34B8FCC

System_IAsyncResult_o *
BHNHMJNIAII_DCFNFMICOBD__BeginInvoke
          (BHNHMJNIAII_DCFNFMICOBD_o *__this,System_String_array *OPAEPDIIOEB,
          System_AsyncCallback_o *BLMFLPJJMPF,Il2CppObject *LPDENCPICOM,MethodInfo *method)

{
  System_IAsyncResult_o *pSVar1;
  System_String_array *local_20;
  undefined8 local_18;
  
  local_18 = 0;
  local_20 = OPAEPDIIOEB;
  pSVar1 = (System_IAsyncResult_o *)thunk_FUN_01baa564(__this,&local_20);
  return pSVar1;
}


// ===== public virtual string EndInvoke(IAsyncResult HPACPFLKHPK)  [RVA 0x34B8FEC]
// BHNHMJNIAII.DCFNFMICOBD$$EndInvoke @ RVA 0x34B8FEC

System_String_o *
BHNHMJNIAII_DCFNFMICOBD__EndInvoke
          (BHNHMJNIAII_DCFNFMICOBD_o *__this,System_IAsyncResult_o *HPACPFLKHPK,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  pSVar1 = (System_String_o *)thunk_FUN_01baa628(HPACPFLKHPK,0);
  return pSVar1;
}

