// TypeDefIndex 264
// Namespace: 
// public class FLGBBOGNOFL : MNBNELNLOCB, IDisposable
// Fields:
//   private Action BIFPFOCAPFD; // 0x10
//   private Action<string> NLMBGOCHKPK; // 0x18
//   private Action<PCJHNLGCCOB> BHPIBGKHPCP; // 0x20

// ===== public void FIILGBEMHCH(Action CJNHFNHJHPE)  [RVA 0x322FE10]
// FLGBBOGNOFL$$FIILGBEMHCH @ RVA 0x322FE10

void FLGBBOGNOFL__FIILGBEMHCH(FLGBBOGNOFL_o *__this,System_Action_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  System_Action_o *a;
  
  if ((DAT_04566fcc & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    DAT_04566fcc = 1;
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


// ===== public void GDGDKAFDIEF(Action<PCJHNLGCCOB> CJNHFNHJHPE)  [RVA 0x322FEAC]
// FLGBBOGNOFL$$GDGDKAFDIEF @ RVA 0x322FEAC

void FLGBBOGNOFL__GDGDKAFDIEF
               (FLGBBOGNOFL_o *__this,System_Action_PCJHNLGCCOB__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_PCJHNLGCCOB__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_PCJHNLGCCOB__o *pSVar5;
  System_Action_PCJHNLGCCOB__o **ppSVar6;
  System_Action_PCJHNLGCCOB__o *source;
  
  if ((DAT_04566fcd & 1) == 0) {
    FUN_01bab630(&System_Action<PCJHNLGCCOB>_TypeInfo);
    DAT_04566fcd = 1;
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


// ===== public void EBCIDPCILBA(Action<PCJHNLGCCOB> CJNHFNHJHPE)  [RVA 0x322FF5C]
// FLGBBOGNOFL$$EBCIDPCILBA @ RVA 0x322FF5C

void FLGBBOGNOFL__EBCIDPCILBA
               (FLGBBOGNOFL_o *__this,System_Action_PCJHNLGCCOB__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_PCJHNLGCCOB__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_PCJHNLGCCOB__o *pSVar5;
  System_Action_PCJHNLGCCOB__o **ppSVar6;
  System_Action_PCJHNLGCCOB__o *a;
  
  if ((DAT_04566fce & 1) == 0) {
    FUN_01bab630(&System_Action<PCJHNLGCCOB>_TypeInfo);
    DAT_04566fce = 1;
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


// ===== public void DHDEELLOJDC(Action<string> CJNHFNHJHPE)  [RVA 0x323000C]
// FLGBBOGNOFL$$DHDEELLOJDC @ RVA 0x323000C

void FLGBBOGNOFL__DHDEELLOJDC
               (FLGBBOGNOFL_o *__this,System_Action_string__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_string__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_string__o *pSVar5;
  System_Action_string__o **ppSVar6;
  System_Action_string__o *source;
  
  if ((DAT_04566fcf & 1) == 0) {
    FUN_01bab630(&System_Action<string>_TypeInfo);
    DAT_04566fcf = 1;
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


// ===== public void LKDDCBPLCIG(Action<string> CJNHFNHJHPE)  [RVA 0x32300BC]
// FLGBBOGNOFL$$LKDDCBPLCIG @ RVA 0x32300BC

void FLGBBOGNOFL__LKDDCBPLCIG
               (FLGBBOGNOFL_o *__this,System_Action_string__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_string__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_string__o *pSVar5;
  System_Action_string__o **ppSVar6;
  System_Action_string__o *a;
  
  if ((DAT_04566fd0 & 1) == 0) {
    FUN_01bab630(&System_Action<string>_TypeInfo);
    DAT_04566fd0 = 1;
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


// ===== public void GIMAJOGGBHM()  [RVA 0x323016C]
// FLGBBOGNOFL$$GIMAJOGGBHM @ RVA 0x323016C

void FLGBBOGNOFL__GIMAJOGGBHM(FLGBBOGNOFL_o *__this,MethodInfo *method)

{
  if ((DAT_04566fd1 & 1) == 0) {
    FUN_01bab630(&StringLiteral_7529/*"Initialize"*/);
    DAT_04566fd1 = 1;
  }
  KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,StringLiteral_7529/*"Initialize"*/,(MethodInfo *)0x0);
  return;
}


// ===== public void BIEFPKNCHOG(Action CJNHFNHJHPE)  [RVA 0x32301B8]
// FLGBBOGNOFL$$BIEFPKNCHOG @ RVA 0x32301B8

void FLGBBOGNOFL__BIEFPKNCHOG(FLGBBOGNOFL_o *__this,System_Action_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  System_Action_o *source;
  
  if ((DAT_04566fd2 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    DAT_04566fd2 = 1;
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


// ===== public void Dispose()  [RVA 0x3230254]
// FLGBBOGNOFL$$Dispose @ RVA 0x3230254

void FLGBBOGNOFL__Dispose(FLGBBOGNOFL_o *__this,MethodInfo *method)

{
  if ((DAT_04566fd3 & 1) == 0) {
    FUN_01bab630(&StringLiteral_5422/*"Dispose"*/);
    DAT_04566fd3 = 1;
  }
  KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,StringLiteral_5422/*"Dispose"*/,(MethodInfo *)0x0);
  return;
}


// ===== public void .ctor()  [RVA 0x32302A0]
// FLGBBOGNOFL$$.ctor @ RVA 0x32302A0

void FLGBBOGNOFL___ctor(FLGBBOGNOFL_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

