// TypeDefIndex 2605
// Namespace: 
// public sealed class COOJKPHHMCD : MulticastDelegate
// Fields:

// ===== public void .ctor(object LPDENCPICOM, IntPtr IHJHOFMNAOA)  [RVA 0x33ABEF8]
// COOJKPHHMCD$$.ctor @ RVA 0x33ABEF8

void COOJKPHHMCD___ctor(COOJKPHHMCD_o *__this,Il2CppObject *LPDENCPICOM,intptr_t IHJHOFMNAOA,
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
      goto LAB_034abf54;
    }
    if ((__this->fields).super.super.method_is_virtual == false) {
      pcVar6 = FUN_01b48e6c;
    }
    else {
      uVar2 = thunk_FUN_01bf510c(IHJHOFMNAOA);
      uVar3 = FUN_01babcbc(IHJHOFMNAOA);
      if ((uVar2 & 1) == 0) {
        if ((uVar3 & 1) == 0) {
          pcVar6 = FUN_01b48e9c;
        }
        else {
          pcVar6 = FUN_01b48ec8;
        }
      }
      else {
                    /* try { // try from 034abf88 to 035abfaf has its CatchHandler @ 034acca8 */
        if ((uVar3 & 1) == 0) {
          pcVar6 = FUN_01b48f4c;
        }
        else {
          pcVar6 = FUN_01b48f88;
        }
      }
    }
  }
  else {
    if (cVar1 != '\x01') {
LAB_034abf54:
      pIVar7 = (__this->fields).super.super.m_target;
      (__this->fields).super.super.invoke_impl = (__this->fields).super.super.method_ptr;
      (__this->fields).super.super.method_code = (intptr_t)pIVar7;
      goto LAB_034abfcc;
    }
    pcVar6 = FUN_01b48e8c;
  }
  (__this->fields).super.super.invoke_impl = (intptr_t)pcVar6;
LAB_034abfcc:
  (__this->fields).super.super.extra_arg = (intptr_t)FUN_01b48e24;
                    /* try { // try from 034abfe4 to 035ac00f has its CatchHandler @ 034acca4 */
  return;
}


// ===== public virtual void Invoke(InputDevice GIDJIIFPHJK)  [RVA 0x33AC000]
// COOJKPHHMCD$$Invoke @ RVA 0x33AC000

void COOJKPHHMCD__Invoke(COOJKPHHMCD_o *__this,InControl_InputDevice_o *GIDJIIFPHJK,
                        MethodInfo *method)

{
                    /* WARNING: Could not recover jumptable at 0x034ac010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(__this->fields).super.super.invoke_impl)
            ((__this->fields).super.super.method_code,GIDJIIFPHJK,
             (__this->fields).super.super.method);
  return;
}


// ===== public virtual IAsyncResult BeginInvoke(InputDevice GIDJIIFPHJK, AsyncCallback BLMFLPJJMPF, object LPDENCPICOM)  [RVA 0x33AC014]
// COOJKPHHMCD$$BeginInvoke @ RVA 0x33AC014

System_IAsyncResult_o *
COOJKPHHMCD__BeginInvoke
          (COOJKPHHMCD_o *__this,InControl_InputDevice_o *GIDJIIFPHJK,
          System_AsyncCallback_o *BLMFLPJJMPF,Il2CppObject *LPDENCPICOM,MethodInfo *method)

{
  System_IAsyncResult_o *pSVar1;
  InControl_InputDevice_o *local_20;
  undefined8 local_18;
  
  local_18 = 0;
  local_20 = GIDJIIFPHJK;
  pSVar1 = (System_IAsyncResult_o *)thunk_FUN_01baa564(__this,&local_20);
  return pSVar1;
}


// ===== public virtual void EndInvoke(IAsyncResult HPACPFLKHPK)  [RVA 0x33AC034]
// COOJKPHHMCD$$EndInvoke @ RVA 0x33AC034

void COOJKPHHMCD__EndInvoke
               (COOJKPHHMCD_o *__this,System_IAsyncResult_o *HPACPFLKHPK,MethodInfo *method)

{
  thunk_FUN_01baa628(HPACPFLKHPK,0);
  return;
}

