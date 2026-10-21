// TypeDefIndex 2015
// Namespace: 
// public sealed class OMANDMDCGMF.MOHBDJOFHEN : MulticastDelegate
// Fields:

// ===== public void .ctor(object LPDENCPICOM, IntPtr IHJHOFMNAOA)  [RVA 0x329B894]
// OMANDMDCGMF.MOHBDJOFHEN$$.ctor @ RVA 0x329B894

void OMANDMDCGMF_MOHBDJOFHEN___ctor
               (OMANDMDCGMF_MOHBDJOFHEN_o *__this,Il2CppObject *LPDENCPICOM,intptr_t IHJHOFMNAOA,
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
    (__this->fields).super.super.invoke_impl = (intptr_t)FUN_01b48b24;
    goto LAB_0339b900;
  }
  pIVar5 = (__this->fields).super.super.m_target;
  (__this->fields).super.super.invoke_impl = (__this->fields).super.super.method_ptr;
  (__this->fields).super.super.method_code = (intptr_t)pIVar5;
LAB_0339b900:
  (__this->fields).super.super.extra_arg = (intptr_t)FUN_01b48ad0;
  return;
}


// ===== public virtual bool Invoke(int BLMDGGCEDCB)  [RVA 0x329B934]
// OMANDMDCGMF.MOHBDJOFHEN$$Invoke @ RVA 0x329B934

bool OMANDMDCGMF_MOHBDJOFHEN__Invoke
               (OMANDMDCGMF_MOHBDJOFHEN_o *__this,int32_t BLMDGGCEDCB,MethodInfo *method)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0339b944. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)(__this->fields).super.super.invoke_impl)
                    ((__this->fields).super.super.method_code,BLMDGGCEDCB,
                     (__this->fields).super.super.method);
  return (bool)uVar1;
}


// ===== public virtual IAsyncResult BeginInvoke(int BLMDGGCEDCB, AsyncCallback BLMFLPJJMPF, object LPDENCPICOM)  [RVA 0x329B948]
// OMANDMDCGMF.MOHBDJOFHEN$$BeginInvoke @ RVA 0x329B948

System_IAsyncResult_o *
OMANDMDCGMF_MOHBDJOFHEN__BeginInvoke
          (OMANDMDCGMF_MOHBDJOFHEN_o *__this,int32_t BLMDGGCEDCB,System_AsyncCallback_o *BLMFLPJJMPF
          ,Il2CppObject *LPDENCPICOM,MethodInfo *method)

{
  System_IAsyncResult_o *pSVar1;
  undefined8 local_48;
  undefined8 uStack_40;
  int32_t local_34;
  
  local_34 = BLMDGGCEDCB;
  if ((DAT_04567393 & 1) == 0) {
    FUN_01bab630(&int_TypeInfo);
    DAT_04567393 = 1;
  }
  local_48 = 0;
  uStack_40 = 0;
  local_48 = thunk_FUN_01bda448(int_TypeInfo,&local_34);
  pSVar1 = (System_IAsyncResult_o *)thunk_FUN_01baa564(__this,&local_48,BLMFLPJJMPF,LPDENCPICOM);
  return pSVar1;
}


// ===== public virtual bool EndInvoke(IAsyncResult HPACPFLKHPK)  [RVA 0x329B9CC]
// OMANDMDCGMF.MOHBDJOFHEN$$EndInvoke @ RVA 0x329B9CC

bool OMANDMDCGMF_MOHBDJOFHEN__EndInvoke
               (OMANDMDCGMF_MOHBDJOFHEN_o *__this,System_IAsyncResult_o *HPACPFLKHPK,
               MethodInfo *method)

{
  long lVar1;
  undefined1 *puVar2;
  
  lVar1 = thunk_FUN_01baa628(HPACPFLKHPK,0);
  if (lVar1 != 0) {
    puVar2 = (undefined1 *)thunk_FUN_01bda96c();
    return (bool)*puVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

