// TypeDefIndex 2663
// Namespace: 
// public sealed class Server.NFEBIKDKJPN : MulticastDelegate
// Fields:

// ===== public void .ctor(object LPDENCPICOM, IntPtr IHJHOFMNAOA)  [RVA 0x33BF9C0]
// CUDLR.Server.NFEBIKDKJPN$$.ctor @ RVA 0x33BF9C0

void CUDLR_Server_NFEBIKDKJPN___ctor
               (CUDLR_Server_NFEBIKDKJPN_o *__this,Il2CppObject *LPDENCPICOM,intptr_t IHJHOFMNAOA,
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
      goto LAB_034bfa50;
    }
    if ((__this->fields).super.super.method_is_virtual == false) {
      pcVar6 = FUN_01b490e8;
    }
    else {
      uVar2 = thunk_FUN_01bf510c(IHJHOFMNAOA);
      uVar3 = FUN_01babcbc(IHJHOFMNAOA);
      if ((uVar2 & 1) == 0) {
        if ((uVar3 & 1) == 0) {
          pcVar6 = FUN_01b49128;
        }
        else {
          pcVar6 = FUN_01b4915c;
        }
      }
      else if ((uVar3 & 1) == 0) {
        pcVar6 = FUN_01b491e8;
      }
      else {
        pcVar6 = FUN_01b49234;
      }
    }
  }
  else {
    if (cVar1 != '\x02') {
LAB_034bfa50:
      pIVar7 = (__this->fields).super.super.m_target;
      (__this->fields).super.super.invoke_impl = (__this->fields).super.super.method_ptr;
      (__this->fields).super.super.method_code = (intptr_t)pIVar7;
      goto LAB_034bfa98;
    }
    pcVar6 = FUN_01b49110;
  }
  (__this->fields).super.super.invoke_impl = (intptr_t)pcVar6;
LAB_034bfa98:
  (__this->fields).super.super.extra_arg = (intptr_t)FUN_01b49090;
  return;
}


// ===== public virtual void Invoke(JOCIOCLPIHI OHKEKFCKBED, bool INADPMLBJHN)  [RVA 0x33C176C]
// CUDLR.Server.NFEBIKDKJPN$$Invoke @ RVA 0x33C176C

void CUDLR_Server_NFEBIKDKJPN__Invoke
               (CUDLR_Server_NFEBIKDKJPN_o *__this,JOCIOCLPIHI_o *OHKEKFCKBED,bool INADPMLBJHN,
               MethodInfo *method)

{
                    /* WARNING: Could not recover jumptable at 0x034c1780. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(__this->fields).super.super.invoke_impl)
            ((__this->fields).super.super.method_code,OHKEKFCKBED,INADPMLBJHN,
             (__this->fields).super.super.method);
  return;
}


// ===== public virtual IAsyncResult BeginInvoke(JOCIOCLPIHI OHKEKFCKBED, bool INADPMLBJHN, AsyncCallback BLMFLPJJMPF, object LPDENCPICOM)  [RVA 0x33C1784]
// CUDLR.Server.NFEBIKDKJPN$$BeginInvoke @ RVA 0x33C1784

System_IAsyncResult_o *
CUDLR_Server_NFEBIKDKJPN__BeginInvoke
          (CUDLR_Server_NFEBIKDKJPN_o *__this,JOCIOCLPIHI_o *OHKEKFCKBED,bool INADPMLBJHN,
          System_AsyncCallback_o *BLMFLPJJMPF,Il2CppObject *LPDENCPICOM,MethodInfo *method)

{
  System_IAsyncResult_o *pSVar1;
  JOCIOCLPIHI_o *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined1 local_34 [4];
  
  local_34[0] = INADPMLBJHN;
  if ((DAT_04567dd5 & 1) == 0) {
    FUN_01bab630(&bool_TypeInfo);
    DAT_04567dd5 = 1;
  }
  local_50 = 0;
  uStack_48 = 0;
  local_58 = OHKEKFCKBED;
  local_50 = thunk_FUN_01bda448(bool_TypeInfo,local_34);
  pSVar1 = (System_IAsyncResult_o *)thunk_FUN_01baa564(__this,&local_58,BLMFLPJJMPF,LPDENCPICOM);
  return pSVar1;
}


// ===== public virtual void EndInvoke(IAsyncResult HPACPFLKHPK)  [RVA 0x33C181C]
// CUDLR.Server.NFEBIKDKJPN$$EndInvoke @ RVA 0x33C181C

void CUDLR_Server_NFEBIKDKJPN__EndInvoke
               (CUDLR_Server_NFEBIKDKJPN_o *__this,System_IAsyncResult_o *HPACPFLKHPK,
               MethodInfo *method)

{
  thunk_FUN_01baa628(HPACPFLKHPK,0);
  return;
}

