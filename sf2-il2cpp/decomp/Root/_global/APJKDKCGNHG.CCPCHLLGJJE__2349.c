// TypeDefIndex 2349
// Namespace: 
// public sealed class APJKDKCGNHG.CCPCHLLGJJE : MulticastDelegate
// Fields:

// ===== public void .ctor(object LPDENCPICOM, IntPtr IHJHOFMNAOA)  [RVA 0x3324468]
// APJKDKCGNHG.CCPCHLLGJJE$$.ctor @ RVA 0x3324468

void APJKDKCGNHG_CCPCHLLGJJE___ctor
               (APJKDKCGNHG_CCPCHLLGJJE_o *__this,Il2CppObject *LPDENCPICOM,intptr_t IHJHOFMNAOA,
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
    (__this->fields).super.super.invoke_impl = (intptr_t)FUN_01b48d68;
    goto LAB_034244d0;
  }
  pIVar5 = (__this->fields).super.super.m_target;
  (__this->fields).super.super.invoke_impl = (__this->fields).super.super.method_ptr;
  (__this->fields).super.super.method_code = (intptr_t)pIVar5;
LAB_034244d0:
  (__this->fields).super.super.extra_arg = (intptr_t)FUN_01b48d20;
  return;
}


// ===== public virtual float Invoke()  [RVA 0x3324504]
// APJKDKCGNHG.CCPCHLLGJJE$$Invoke @ RVA 0x3324504

float APJKDKCGNHG_CCPCHLLGJJE__Invoke(APJKDKCGNHG_CCPCHLLGJJE_o *__this,MethodInfo *method)

{
  float fVar1;
  
                    /* WARNING: Could not recover jumptable at 0x03424514. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar1 = (float)(*(code *)(__this->fields).super.super.invoke_impl)
                           ((__this->fields).super.super.method_code,
                            (__this->fields).super.super.method);
  return fVar1;
}


// ===== public virtual IAsyncResult BeginInvoke(AsyncCallback BLMFLPJJMPF, object LPDENCPICOM)  [RVA 0x3324518]
// APJKDKCGNHG.CCPCHLLGJJE$$BeginInvoke @ RVA 0x3324518

System_IAsyncResult_o *
APJKDKCGNHG_CCPCHLLGJJE__BeginInvoke
          (APJKDKCGNHG_CCPCHLLGJJE_o *__this,System_AsyncCallback_o *BLMFLPJJMPF,
          Il2CppObject *LPDENCPICOM,MethodInfo *method)

{
  System_IAsyncResult_o *pSVar1;
  undefined8 local_8;
  
  local_8 = 0;
  pSVar1 = (System_IAsyncResult_o *)thunk_FUN_01baa564(__this,&local_8,BLMFLPJJMPF,LPDENCPICOM);
  return pSVar1;
}


// ===== public virtual float EndInvoke(IAsyncResult HPACPFLKHPK)  [RVA 0x3324538]
// APJKDKCGNHG.CCPCHLLGJJE$$EndInvoke @ RVA 0x3324538

float APJKDKCGNHG_CCPCHLLGJJE__EndInvoke
                (APJKDKCGNHG_CCPCHLLGJJE_o *__this,System_IAsyncResult_o *HPACPFLKHPK,
                MethodInfo *method)

{
  long lVar1;
  float *pfVar2;
  
  lVar1 = thunk_FUN_01baa628(HPACPFLKHPK,0);
  if (lVar1 != 0) {
    pfVar2 = (float *)thunk_FUN_01bda96c();
    return *pfVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

