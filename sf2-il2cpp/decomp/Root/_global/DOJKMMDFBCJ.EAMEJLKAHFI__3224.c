// TypeDefIndex 3224
// Namespace: 
// public sealed class DOJKMMDFBCJ.EAMEJLKAHFI : MulticastDelegate
// Fields:

// ===== public void .ctor(object LPDENCPICOM, IntPtr IHJHOFMNAOA)  [RVA 0x3504CD0]
// DOJKMMDFBCJ.EAMEJLKAHFI$$.ctor @ RVA 0x3504CD0

void DOJKMMDFBCJ_EAMEJLKAHFI___ctor
               (DOJKMMDFBCJ_EAMEJLKAHFI_o *__this,Il2CppObject *LPDENCPICOM,intptr_t IHJHOFMNAOA,
               MethodInfo *method)

{
  char cVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  intptr_t iVar5;
  code *pcVar6;
  Il2CppObject *pIVar7;
  
  iVar5 = *(intptr_t *)(IHJHOFMNAOA + 8);
  (__this->fields).super.super.method = IHJHOFMNAOA;
  (__this->fields).super.super.method_ptr = iVar5;
  (__this->fields).super.super.m_target = LPDENCPICOM;
  thunk_FUN_01c20e04();
  cVar1 = *(char *)(IHJHOFMNAOA + 0x52);
  (__this->fields).super.super.method_code = (intptr_t)__this;
  uVar2 = FUN_01bab730(IHJHOFMNAOA);
  if ((uVar2 & 1) == 0) {
    if (cVar1 != '\0') {
      if (LPDENCPICOM == (Il2CppObject *)0x0) {
        uVar4 = thunk_FUN_01be8674(0,"Delegate to an instance method cannot have null \'this\'.");
                    /* WARNING: Subroutine does not return */
        FUN_01bab798(uVar4,0);
      }
      goto LAB_03604d2c;
    }
    if ((__this->fields).super.super.method_is_virtual == false) {
      pcVar6 = FUN_01b497f0;
    }
    else {
      uVar2 = thunk_FUN_01bf510c(IHJHOFMNAOA);
      uVar3 = FUN_01babcbc(IHJHOFMNAOA);
      if ((uVar2 & 1) == 0) {
        if ((uVar3 & 1) == 0) {
          pcVar6 = FUN_01b49820;
        }
        else {
          pcVar6 = FUN_01b4984c;
        }
      }
      else if ((uVar3 & 1) == 0) {
        pcVar6 = FUN_01b498d0;
      }
      else {
        pcVar6 = FUN_01b4990c;
      }
    }
  }
  else {
    if (cVar1 != '\x01') {
LAB_03604d2c:
      pIVar7 = (__this->fields).super.super.m_target;
      (__this->fields).super.super.invoke_impl = (__this->fields).super.super.method_ptr;
      (__this->fields).super.super.method_code = (intptr_t)pIVar7;
      goto LAB_03604da4;
    }
    pcVar6 = FUN_01b49810;
  }
  (__this->fields).super.super.invoke_impl = (intptr_t)pcVar6;
LAB_03604da4:
  (__this->fields).super.super.extra_arg = (intptr_t)FUN_01b497a8;
  return;
}


// ===== public virtual void Invoke(JOCIOCLPIHI OHKEKFCKBED)  [RVA 0x3504DD8]
// DOJKMMDFBCJ.EAMEJLKAHFI$$Invoke @ RVA 0x3504DD8

void DOJKMMDFBCJ_EAMEJLKAHFI__Invoke
               (DOJKMMDFBCJ_EAMEJLKAHFI_o *__this,JOCIOCLPIHI_o *OHKEKFCKBED,MethodInfo *method)

{
                    /* WARNING: Could not recover jumptable at 0x03604de8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(__this->fields).super.super.invoke_impl)
            ((__this->fields).super.super.method_code,OHKEKFCKBED,
             (__this->fields).super.super.method);
  return;
}


// ===== public virtual IAsyncResult BeginInvoke(JOCIOCLPIHI OHKEKFCKBED, AsyncCallback BLMFLPJJMPF, object LPDENCPICOM)  [RVA 0x3504DEC]
// DOJKMMDFBCJ.EAMEJLKAHFI$$BeginInvoke @ RVA 0x3504DEC

System_IAsyncResult_o *
DOJKMMDFBCJ_EAMEJLKAHFI__BeginInvoke
          (DOJKMMDFBCJ_EAMEJLKAHFI_o *__this,JOCIOCLPIHI_o *OHKEKFCKBED,
          System_AsyncCallback_o *BLMFLPJJMPF,Il2CppObject *LPDENCPICOM,MethodInfo *method)

{
  System_IAsyncResult_o *pSVar1;
  JOCIOCLPIHI_o *local_20;
  undefined8 local_18;
  
  local_18 = 0;
  local_20 = OHKEKFCKBED;
  pSVar1 = (System_IAsyncResult_o *)thunk_FUN_01baa564(__this,&local_20);
  return pSVar1;
}


// ===== public virtual void EndInvoke(IAsyncResult HPACPFLKHPK)  [RVA 0x3504E0C]
// DOJKMMDFBCJ.EAMEJLKAHFI$$EndInvoke @ RVA 0x3504E0C

void DOJKMMDFBCJ_EAMEJLKAHFI__EndInvoke
               (DOJKMMDFBCJ_EAMEJLKAHFI_o *__this,System_IAsyncResult_o *HPACPFLKHPK,
               MethodInfo *method)

{
  thunk_FUN_01baa628(HPACPFLKHPK,0);
  return;
}

