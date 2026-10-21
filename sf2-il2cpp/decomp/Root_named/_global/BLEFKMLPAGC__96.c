// TypeDefIndex 96
// Namespace: 
// public class BLEFKMLPAGC : MNBNELNLOCB, IDisposable
// Fields:
//   private Action BIFPFOCAPFD; // 0x10
//   private Action<string> NLMBGOCHKPK; // 0x18
//   private Action<PCJHNLGCCOB> BHPIBGKHPCP; // 0x20

// ===== public void .ctor()  [RVA 0x30046A0]
// BLEFKMLPAGC$$.ctor @ RVA 0x30046A0

void BLEFKMLPAGC___ctor(BLEFKMLPAGC_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public void EBCIDPCILBA(Action<PCJHNLGCCOB> CJNHFNHJHPE)  [RVA 0x30046A8]
// BLEFKMLPAGC$$EBCIDPCILBA @ RVA 0x30046A8

void BLEFKMLPAGC__EBCIDPCILBA
               (BLEFKMLPAGC_o *__this,System_Action_PCJHNLGCCOB__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_PCJHNLGCCOB__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_PCJHNLGCCOB__o *pSVar5;
  System_Action_PCJHNLGCCOB__o **ppSVar6;
  System_Action_PCJHNLGCCOB__o *a;
  
  if ((DAT_04565b3a & 1) == 0) {
    FUN_01bab630(&System_Action<PCJHNLGCCOB>_TypeInfo);
    DAT_04565b3a = 1;
  }
  ppSVar6 = &(__this->fields).BHPIBGKHPCP;
  a = *ppSVar6;
  do {
    pSVar3 = System_Delegate__Combine
                       ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,(MethodInfo *)0x0);
    pSVar1 = System_Action<PCJHNLGCCOB>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<PCJHNLGCCOB>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_PCJHNLGCCOB__o *)FUN_01c07368(ppSVar6,lVar4,a);
    bVar2 = a != pSVar5;
    a = pSVar5;
  } while (bVar2);
  return;
}


// ===== public void Dispose()  [RVA 0x3004758]
// BLEFKMLPAGC$$Dispose @ RVA 0x3004758

void BLEFKMLPAGC__Dispose(BLEFKMLPAGC_o *__this,MethodInfo *method)

{
  if ((DAT_04565b3b & 1) == 0) {
    FUN_01bab630(&StringLiteral_5422/*"Dispose"*/);
    DAT_04565b3b = 1;
  }
  KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,StringLiteral_5422/*"Dispose"*/,(MethodInfo *)0x0);
  return;
}


// ===== public void DHDEELLOJDC(Action<string> CJNHFNHJHPE)  [RVA 0x30047A4]
// BLEFKMLPAGC$$DHDEELLOJDC @ RVA 0x30047A4

void BLEFKMLPAGC__DHDEELLOJDC
               (BLEFKMLPAGC_o *__this,System_Action_string__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_string__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_string__o *pSVar5;
  System_Action_string__o **ppSVar6;
  System_Action_string__o *source;
  
  if ((DAT_04565b3c & 1) == 0) {
    FUN_01bab630(&System_Action<string>_TypeInfo);
    DAT_04565b3c = 1;
  }
  ppSVar6 = &(__this->fields).NLMBGOCHKPK;
  source = *ppSVar6;
  do {
    pSVar3 = System_Delegate__Remove
                       ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                        (MethodInfo *)0x0);
    pSVar1 = System_Action<string>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<string>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_string__o *)FUN_01c07368(ppSVar6,lVar4,source);
    bVar2 = source != pSVar5;
    source = pSVar5;
  } while (bVar2);
  return;
}


// ===== public void GDGDKAFDIEF(Action<PCJHNLGCCOB> CJNHFNHJHPE)  [RVA 0x3004854]
// BLEFKMLPAGC$$GDGDKAFDIEF @ RVA 0x3004854

void BLEFKMLPAGC__GDGDKAFDIEF
               (BLEFKMLPAGC_o *__this,System_Action_PCJHNLGCCOB__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_PCJHNLGCCOB__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_PCJHNLGCCOB__o *pSVar5;
  System_Action_PCJHNLGCCOB__o **ppSVar6;
  System_Action_PCJHNLGCCOB__o *source;
  
  if ((DAT_04565b3d & 1) == 0) {
    FUN_01bab630(&System_Action<PCJHNLGCCOB>_TypeInfo);
    DAT_04565b3d = 1;
  }
  ppSVar6 = &(__this->fields).BHPIBGKHPCP;
  source = *ppSVar6;
  do {
    pSVar3 = System_Delegate__Remove
                       ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                        (MethodInfo *)0x0);
    pSVar1 = System_Action<PCJHNLGCCOB>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<PCJHNLGCCOB>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_PCJHNLGCCOB__o *)FUN_01c07368(ppSVar6,lVar4,source);
    bVar2 = source != pSVar5;
    source = pSVar5;
  } while (bVar2);
  return;
}


// ===== public void BIEFPKNCHOG(Action CJNHFNHJHPE)  [RVA 0x3004904]
// BLEFKMLPAGC$$BIEFPKNCHOG @ RVA 0x3004904

void BLEFKMLPAGC__BIEFPKNCHOG(BLEFKMLPAGC_o *__this,System_Action_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  System_Action_o *source;
  
  if ((DAT_04565b3e & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    DAT_04565b3e = 1;
  }
  source = (__this->fields).BIFPFOCAPFD;
  while ((pSVar2 = System_Delegate__Remove
                             ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                              (MethodInfo *)0x0), pSVar2 == (System_Delegate_o *)0x0 ||
         ((System_Action_c *)pSVar2->klass == System_Action_TypeInfo))) {
    pSVar3 = (System_Action_o *)FUN_01c07368(&__this->fields,pSVar2,source);
    bVar1 = source == pSVar3;
    source = pSVar3;
    if (bVar1) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01babc64(pSVar2);
}


// ===== public void FIILGBEMHCH(Action CJNHFNHJHPE)  [RVA 0x30049A0]
// BLEFKMLPAGC$$FIILGBEMHCH @ RVA 0x30049A0

void BLEFKMLPAGC__FIILGBEMHCH(BLEFKMLPAGC_o *__this,System_Action_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  System_Action_o *a;
  
  if ((DAT_04565b3f & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    DAT_04565b3f = 1;
  }
  a = (__this->fields).BIFPFOCAPFD;
  while ((pSVar2 = System_Delegate__Combine
                             ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,
                              (MethodInfo *)0x0), pSVar2 == (System_Delegate_o *)0x0 ||
         ((System_Action_c *)pSVar2->klass == System_Action_TypeInfo))) {
    pSVar3 = (System_Action_o *)FUN_01c07368(&__this->fields,pSVar2,a);
    bVar1 = a == pSVar3;
    a = pSVar3;
    if (bVar1) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01babc64(pSVar2);
}


// ===== public void LKDDCBPLCIG(Action<string> CJNHFNHJHPE)  [RVA 0x3004A3C]
// BLEFKMLPAGC$$LKDDCBPLCIG @ RVA 0x3004A3C

void BLEFKMLPAGC__LKDDCBPLCIG
               (BLEFKMLPAGC_o *__this,System_Action_string__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_string__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_string__o *pSVar5;
  System_Action_string__o **ppSVar6;
  System_Action_string__o *a;
  
  if ((DAT_04565b40 & 1) == 0) {
    FUN_01bab630(&System_Action<string>_TypeInfo);
    DAT_04565b40 = 1;
  }
  ppSVar6 = &(__this->fields).NLMBGOCHKPK;
  a = *ppSVar6;
  do {
    pSVar3 = System_Delegate__Combine
                       ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,(MethodInfo *)0x0);
    pSVar1 = System_Action<string>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<string>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_string__o *)FUN_01c07368(ppSVar6,lVar4,a);
    bVar2 = a != pSVar5;
    a = pSVar5;
  } while (bVar2);
  return;
}


// ===== public void GIMAJOGGBHM()  [RVA 0x3004AEC]
// BLEFKMLPAGC$$GIMAJOGGBHM @ RVA 0x3004AEC

void BLEFKMLPAGC__GIMAJOGGBHM(BLEFKMLPAGC_o *__this,MethodInfo *method)

{
  System_Action_o *pSVar1;
  
  if ((DAT_04565b41 & 1) == 0) {
    FUN_01bab630(&StringLiteral_5422/*"Dispose"*/);
    DAT_04565b41 = 1;
  }
  KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,StringLiteral_5422/*"Dispose"*/,(MethodInfo *)0x0);
  pSVar1 = (__this->fields).BIFPFOCAPFD;
  if (pSVar1 != (System_Action_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03104b4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(pSVar1->fields).super.super.invoke_impl)
              ((pSVar1->fields).super.super.method_code,(pSVar1->fields).super.super.method);
    return;
  }
  return;
}

