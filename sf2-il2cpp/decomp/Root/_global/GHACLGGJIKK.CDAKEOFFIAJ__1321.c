// TypeDefIndex 1321
// Namespace: 
// public sealed class GHACLGGJIKK.CDAKEOFFIAJ : MulticastDelegate
// Fields:

// ===== public void .ctor(object LPDENCPICOM, IntPtr IHJHOFMNAOA)  [RVA 0x315C1B0]
// GHACLGGJIKK.CDAKEOFFIAJ$$.ctor @ RVA 0x315C1B0

void GHACLGGJIKK_CDAKEOFFIAJ___ctor
               (GHACLGGJIKK_CDAKEOFFIAJ_o *__this,Il2CppObject *LPDENCPICOM,intptr_t IHJHOFMNAOA,
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
      goto LAB_0325c20c;
    }
    pcVar5 = FUN_01b48740;
  }
  else {
    if (cVar1 != '\x01') {
LAB_0325c20c:
      pIVar6 = (__this->fields).super.super.m_target;
      (__this->fields).super.super.invoke_impl = (__this->fields).super.super.method_ptr;
      (__this->fields).super.super.method_code = (intptr_t)pIVar6;
      goto LAB_0325c22c;
    }
    pcVar5 = FUN_01b48760;
  }
  (__this->fields).super.super.invoke_impl = (intptr_t)pcVar5;
LAB_0325c22c:
  (__this->fields).super.super.extra_arg = (intptr_t)FUN_01b486f8;
  return;
}


// ===== public virtual void Invoke(string[] OPAEPDIIOEB)  [RVA 0x315C260]
// GHACLGGJIKK.CDAKEOFFIAJ$$Invoke @ RVA 0x315C260

void GHACLGGJIKK_CDAKEOFFIAJ__Invoke
               (GHACLGGJIKK_CDAKEOFFIAJ_o *__this,System_String_array *OPAEPDIIOEB,
               MethodInfo *method)

{
                    /* WARNING: Could not recover jumptable at 0x0325c270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(__this->fields).super.super.invoke_impl)
            ((__this->fields).super.super.method_code,OPAEPDIIOEB,
             (__this->fields).super.super.method);
  return;
}


// ===== public virtual IAsyncResult BeginInvoke(string[] OPAEPDIIOEB, AsyncCallback BLMFLPJJMPF, object LPDENCPICOM)  [RVA 0x315C274]
// GHACLGGJIKK.CDAKEOFFIAJ$$BeginInvoke @ RVA 0x315C274

System_IAsyncResult_o *
GHACLGGJIKK_CDAKEOFFIAJ__BeginInvoke
          (GHACLGGJIKK_CDAKEOFFIAJ_o *__this,System_String_array *OPAEPDIIOEB,
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


// ===== public virtual void EndInvoke(IAsyncResult HPACPFLKHPK)  [RVA 0x315C294]
// GHACLGGJIKK.CDAKEOFFIAJ$$EndInvoke @ RVA 0x315C294

void GHACLGGJIKK_CDAKEOFFIAJ__EndInvoke
               (GHACLGGJIKK_CDAKEOFFIAJ_o *__this,System_IAsyncResult_o *HPACPFLKHPK,
               MethodInfo *method)

{
  thunk_FUN_01baa628(HPACPFLKHPK,0);
  return;
}

