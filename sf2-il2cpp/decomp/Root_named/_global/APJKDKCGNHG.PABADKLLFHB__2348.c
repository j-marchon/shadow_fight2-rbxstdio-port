// TypeDefIndex 2348
// Namespace: 
// public sealed class APJKDKCGNHG.PABADKLLFHB : MulticastDelegate
// Fields:

// ===== public void .ctor(object LPDENCPICOM, IntPtr IHJHOFMNAOA)  [RVA 0x3324324]
// APJKDKCGNHG.PABADKLLFHB$$.ctor @ RVA 0x3324324

void APJKDKCGNHG_PABADKLLFHB___ctor
               (APJKDKCGNHG_PABADKLLFHB_o *__this,Il2CppObject *LPDENCPICOM,intptr_t IHJHOFMNAOA,
               MethodInfo *method)

{
  char cVar1;
  ulong uVar2;
  undefined8 uVar3;
  intptr_t iVar4;
  Il2CppObject *pIVar5;
  
  iVar4 = *(intptr_t *)(IHJHOFMNAOA + 8);
  (__this->fields).super.super.method = IHJHOFMNAOA;
  (__this->fields).super.super.method_ptr = iVar4;
  (__this->fields).super.super.m_target = LPDENCPICOM;
  thunk_FUN_01c20e04();
  cVar1 = *(char *)(IHJHOFMNAOA + 0x52);
  (__this->fields).super.super.method_code = (intptr_t)__this;
  uVar2 = FUN_01bab730(IHJHOFMNAOA);
  if ((uVar2 & 1) == 0) {
    if (LPDENCPICOM == (Il2CppObject *)0x0) {
      uVar3 = thunk_FUN_01be8674(0,"Delegate to an instance method cannot have null \'this\'.");
                    /* WARNING: Subroutine does not return */
      FUN_01bab798(uVar3,0);
    }
  }
  else if (cVar1 == '\x01') {
    (__this->fields).super.super.invoke_impl = (intptr_t)FUN_01b48d0c;
    goto LAB_03424390;
  }
  pIVar5 = (__this->fields).super.super.m_target;
  (__this->fields).super.super.invoke_impl = (__this->fields).super.super.method_ptr;
  (__this->fields).super.super.method_code = (intptr_t)pIVar5;
LAB_03424390:
  (__this->fields).super.super.extra_arg = (intptr_t)FUN_01b48cbc;
  return;
}


// ===== public virtual void Invoke(float BCEJOJECHDA)  [RVA 0x33243C4]
// APJKDKCGNHG.PABADKLLFHB$$Invoke @ RVA 0x33243C4

void APJKDKCGNHG_PABADKLLFHB__Invoke
               (APJKDKCGNHG_PABADKLLFHB_o *__this,float BCEJOJECHDA,MethodInfo *method)

{
                    /* WARNING: Could not recover jumptable at 0x034243d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(__this->fields).super.super.invoke_impl)
            ((__this->fields).super.super.method_code,(__this->fields).super.super.method);
  return;
}


// ===== public virtual IAsyncResult BeginInvoke(float BCEJOJECHDA, AsyncCallback BLMFLPJJMPF, object LPDENCPICOM)  [RVA 0x33243D8]
// APJKDKCGNHG.PABADKLLFHB$$BeginInvoke @ RVA 0x33243D8

System_IAsyncResult_o *
APJKDKCGNHG_PABADKLLFHB__BeginInvoke
          (APJKDKCGNHG_PABADKLLFHB_o *__this,float BCEJOJECHDA,System_AsyncCallback_o *BLMFLPJJMPF,
          Il2CppObject *LPDENCPICOM,MethodInfo *method)

{
  System_IAsyncResult_o *pSVar1;
  undefined8 local_48;
  undefined8 uStack_40;
  float local_34;
  
  local_34 = BCEJOJECHDA;
  if ((DAT_04567863 & 1) == 0) {
    FUN_01bab630(&float_TypeInfo);
    DAT_04567863 = 1;
  }
  local_48 = 0;
  uStack_40 = 0;
  local_48 = thunk_FUN_01bda448(float_TypeInfo,&local_34);
  pSVar1 = (System_IAsyncResult_o *)thunk_FUN_01baa564(__this,&local_48,BLMFLPJJMPF,LPDENCPICOM);
  return pSVar1;
}


// ===== public virtual void EndInvoke(IAsyncResult HPACPFLKHPK)  [RVA 0x332445C]
// APJKDKCGNHG.PABADKLLFHB$$EndInvoke @ RVA 0x332445C

void APJKDKCGNHG_PABADKLLFHB__EndInvoke
               (APJKDKCGNHG_PABADKLLFHB_o *__this,System_IAsyncResult_o *HPACPFLKHPK,
               MethodInfo *method)

{
  thunk_FUN_01baa628(HPACPFLKHPK,0);
  return;
}

