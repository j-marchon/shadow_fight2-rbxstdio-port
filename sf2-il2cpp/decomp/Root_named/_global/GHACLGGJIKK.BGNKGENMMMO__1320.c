// TypeDefIndex 1320
// Namespace: 
// public sealed class GHACLGGJIKK.BGNKGENMMMO : MulticastDelegate
// Fields:

// ===== public void .ctor(object LPDENCPICOM, IntPtr IHJHOFMNAOA)  [RVA 0x315C0D4]
// GHACLGGJIKK.BGNKGENMMMO$$.ctor @ RVA 0x315C0D4

void GHACLGGJIKK_BGNKGENMMMO___ctor
               (GHACLGGJIKK_BGNKGENMMMO_o *__this,Il2CppObject *LPDENCPICOM,intptr_t IHJHOFMNAOA,
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
  else if (cVar1 == '\0') {
    (__this->fields).super.super.invoke_impl = (intptr_t)FUN_01b486e4;
    goto LAB_0325c13c;
  }
  pIVar5 = (__this->fields).super.super.m_target;
  (__this->fields).super.super.invoke_impl = (__this->fields).super.super.method_ptr;
  (__this->fields).super.super.method_code = (intptr_t)pIVar5;
LAB_0325c13c:
  (__this->fields).super.super.extra_arg = (intptr_t)FUN_01b486a4;
  return;
}


// ===== public virtual void Invoke()  [RVA 0x315C170]
// GHACLGGJIKK.BGNKGENMMMO$$Invoke @ RVA 0x315C170

void GHACLGGJIKK_BGNKGENMMMO__Invoke(GHACLGGJIKK_BGNKGENMMMO_o *__this,MethodInfo *method)

{
                    /* WARNING: Could not recover jumptable at 0x0325c180. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(__this->fields).super.super.invoke_impl)
            ((__this->fields).super.super.method_code,(__this->fields).super.super.method);
  return;
}


// ===== public virtual IAsyncResult BeginInvoke(AsyncCallback BLMFLPJJMPF, object LPDENCPICOM)  [RVA 0x315C184]
// GHACLGGJIKK.BGNKGENMMMO$$BeginInvoke @ RVA 0x315C184

System_IAsyncResult_o *
GHACLGGJIKK_BGNKGENMMMO__BeginInvoke
          (GHACLGGJIKK_BGNKGENMMMO_o *__this,System_AsyncCallback_o *BLMFLPJJMPF,
          Il2CppObject *LPDENCPICOM,MethodInfo *method)

{
  System_IAsyncResult_o *pSVar1;
  undefined8 local_8;
  
  local_8 = 0;
  pSVar1 = (System_IAsyncResult_o *)thunk_FUN_01baa564(__this,&local_8,BLMFLPJJMPF,LPDENCPICOM);
  return pSVar1;
}


// ===== public virtual void EndInvoke(IAsyncResult HPACPFLKHPK)  [RVA 0x315C1A4]
// GHACLGGJIKK.BGNKGENMMMO$$EndInvoke @ RVA 0x315C1A4

void GHACLGGJIKK_BGNKGENMMMO__EndInvoke
               (GHACLGGJIKK_BGNKGENMMMO_o *__this,System_IAsyncResult_o *HPACPFLKHPK,
               MethodInfo *method)

{
  thunk_FUN_01baa628(HPACPFLKHPK,0);
  return;
}

