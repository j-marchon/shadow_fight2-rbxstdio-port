// TypeDefIndex 1706
// Namespace: 
// public sealed class CKOFPNFDDAB : MulticastDelegate
// Fields:

// ===== public void .ctor(object LPDENCPICOM, IntPtr IHJHOFMNAOA)  [RVA 0x31D4690]
// CKOFPNFDDAB$$.ctor @ RVA 0x31D4690

void CKOFPNFDDAB___ctor(CKOFPNFDDAB_o *__this,Il2CppObject *LPDENCPICOM,intptr_t IHJHOFMNAOA,
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
    if (cVar1 != '\x01') {
      if (LPDENCPICOM == (Il2CppObject *)0x0) {
        uVar4 = thunk_FUN_01be8674(0,"Delegate to an instance method cannot have null \'this\'.");
                    /* WARNING: Subroutine does not return */
        FUN_01bab798(uVar4,0);
      }
      goto LAB_032d4720;
    }
    if ((__this->fields).super.super.method_is_virtual == false) {
      pcVar6 = FUN_01b488fc;
    }
    else {
      uVar2 = thunk_FUN_01bf510c(IHJHOFMNAOA);
      uVar3 = FUN_01babcbc(IHJHOFMNAOA);
      if ((uVar2 & 1) == 0) {
        if ((uVar3 & 1) == 0) {
          pcVar6 = FUN_01b48934;
        }
        else {
          pcVar6 = FUN_01b48964;
        }
      }
      else if ((uVar3 & 1) == 0) {
        pcVar6 = FUN_01b489f0;
      }
      else {
        pcVar6 = FUN_01b48a3c;
      }
    }
  }
  else {
    if (cVar1 != '\x02') {
LAB_032d4720:
      pIVar7 = (__this->fields).super.super.m_target;
      (__this->fields).super.super.invoke_impl = (__this->fields).super.super.method_ptr;
      (__this->fields).super.super.method_code = (intptr_t)pIVar7;
      goto LAB_032d4768;
    }
    pcVar6 = FUN_01b48920;
  }
  (__this->fields).super.super.invoke_impl = (intptr_t)pcVar6;
LAB_032d4768:
  (__this->fields).super.super.extra_arg = (intptr_t)FUN_01b488a4;
  return;
}


// ===== public virtual void Invoke(InputDevice GIDJIIFPHJK, LGMNENGMMOF IKKKILCDMMB)  [RVA 0x31D479C]
// CKOFPNFDDAB$$Invoke @ RVA 0x31D479C

void CKOFPNFDDAB__Invoke(CKOFPNFDDAB_o *__this,InControl_InputDevice_o *GIDJIIFPHJK,
                        int32_t IKKKILCDMMB,MethodInfo *method)

{
                    /* WARNING: Could not recover jumptable at 0x032d47ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(__this->fields).super.super.invoke_impl)
            ((__this->fields).super.super.method_code,GIDJIIFPHJK,IKKKILCDMMB,
             (__this->fields).super.super.method);
  return;
}


// ===== public virtual IAsyncResult BeginInvoke(InputDevice GIDJIIFPHJK, LGMNENGMMOF IKKKILCDMMB, AsyncCallback BLMFLPJJMPF, object LPDENCPICOM)  [RVA 0x31D47B0]
// CKOFPNFDDAB$$BeginInvoke @ RVA 0x31D47B0

System_IAsyncResult_o *
CKOFPNFDDAB__BeginInvoke
          (CKOFPNFDDAB_o *__this,InControl_InputDevice_o *GIDJIIFPHJK,int32_t IKKKILCDMMB,
          System_AsyncCallback_o *BLMFLPJJMPF,Il2CppObject *LPDENCPICOM,MethodInfo *method)

{
  System_IAsyncResult_o *pSVar1;
  InControl_InputDevice_o *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  int32_t local_34;
  
  local_34 = IKKKILCDMMB;
  if ((DAT_04566cce & 1) == 0) {
    FUN_01bab630(&LGMNENGMMOF_TypeInfo);
    DAT_04566cce = 1;
  }
  local_50 = 0;
  uStack_48 = 0;
  local_58 = GIDJIIFPHJK;
  local_50 = thunk_FUN_01bda448(LGMNENGMMOF_TypeInfo,&local_34);
  pSVar1 = (System_IAsyncResult_o *)thunk_FUN_01baa564(__this,&local_58,BLMFLPJJMPF,LPDENCPICOM);
  return pSVar1;
}


// ===== public virtual void EndInvoke(IAsyncResult HPACPFLKHPK)  [RVA 0x31D4844]
// CKOFPNFDDAB$$EndInvoke @ RVA 0x31D4844

void CKOFPNFDDAB__EndInvoke
               (CKOFPNFDDAB_o *__this,System_IAsyncResult_o *HPACPFLKHPK,MethodInfo *method)

{
  thunk_FUN_01baa628(HPACPFLKHPK,0);
  return;
}

