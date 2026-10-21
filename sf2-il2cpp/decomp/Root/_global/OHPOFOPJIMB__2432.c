// TypeDefIndex 2432
// Namespace: 
// public abstract class OHPOFOPJIMB
// Fields:
//   public int EAFPDFHFBOM; // 0x10
//   private OHPOFOPJIMB.NIHOFDOECJA <GEMCDLIDIBB>k__BackingField; // 0x14
//   private Action<OHPOFOPJIMB> BHHLJDLBINB; // 0x18

// ===== protected void FGNINNOOCCL()  [RVA 0x33433E8]
// OHPOFOPJIMB$$FGNINNOOCCL @ RVA 0x33433E8

void OHPOFOPJIMB__FGNINNOOCCL(OHPOFOPJIMB_o *__this,MethodInfo *method)

{
  System_Action_OHPOFOPJIMB__o *pSVar1;
  
  pSVar1 = (__this->fields).BHHLJDLBINB;
  if (pSVar1 != (System_Action_OHPOFOPJIMB__o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03443408. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(pSVar1->fields).super.super.invoke_impl)
              ((pSVar1->fields).super.super.method_code,__this,(pSVar1->fields).super.super.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected void IALIOGPNNPD(OHPOFOPJIMB.NIHOFDOECJA CJNHFNHJHPE)  [RVA 0x3343410]
// OHPOFOPJIMB$$IALIOGPNNPD @ RVA 0x3343410

void OHPOFOPJIMB__IALIOGPNNPD(OHPOFOPJIMB_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._GEMCDLIDIBB_k__BackingField = CJNHFNHJHPE;
  return;
}


// ===== public OHPOFOPJIMB.NIHOFDOECJA ACPIBHDFENP()  [RVA 0x3343418]
// OHPOFOPJIMB$$ACPIBHDFENP @ RVA 0x3343418

int32_t OHPOFOPJIMB__ACPIBHDFENP(OHPOFOPJIMB_o *__this,MethodInfo *method)

{
  return (__this->fields)._GEMCDLIDIBB_k__BackingField;
}


// ===== public void HAFNHPBMIBI(Action<OHPOFOPJIMB> CJNHFNHJHPE)  [RVA 0x3343420]
// OHPOFOPJIMB$$HAFNHPBMIBI @ RVA 0x3343420

void OHPOFOPJIMB__HAFNHPBMIBI
               (OHPOFOPJIMB_o *__this,System_Action_OHPOFOPJIMB__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_OHPOFOPJIMB__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_OHPOFOPJIMB__o *pSVar5;
  System_Action_OHPOFOPJIMB__o **ppSVar6;
  System_Action_OHPOFOPJIMB__o *source;
  
  if ((DAT_045679aa & 1) == 0) {
    FUN_01bab630(&System_Action<OHPOFOPJIMB>_TypeInfo);
    DAT_045679aa = 1;
  }
  ppSVar6 = &(__this->fields).BHHLJDLBINB;
  source = *ppSVar6;
  do {
    pSVar3 = System_Delegate__Remove
                       ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                        (MethodInfo *)0x0);
    pSVar1 = System_Action<OHPOFOPJIMB>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<OHPOFOPJIMB>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_OHPOFOPJIMB__o *)FUN_01c07368(ppSVar6,lVar4,source);
    bVar2 = source != pSVar5;
    source = pSVar5;
  } while (bVar2);
  return;
}


// ===== public void .ctor(OHPOFOPJIMB.NIHOFDOECJA BCFACBMOMKI, int MABGFLNNGKH = 0)  [RVA 0x33434D0]
// OHPOFOPJIMB$$.ctor @ RVA 0x33434D0

void OHPOFOPJIMB___ctor(OHPOFOPJIMB_o *__this,int32_t BCFACBMOMKI,int32_t MABGFLNNGKH,
                       MethodInfo *method)

{
  System_Action_OHPOFOPJIMB__o **ppSVar1;
  System_Action_OHPOFOPJIMB__o *pSVar2;
  
  if ((DAT_045679ab & 1) == 0) {
    FUN_01bab630(&System_Action<OHPOFOPJIMB>_TypeInfo);
    FUN_01bab630(&Method_OHPOFOPJIMB_<>c_HDAOPCEMBJO__);
    FUN_01bab630(&OHPOFOPJIMB_<>c_TypeInfo);
    DAT_045679ab = 1;
  }
  if ((OHPOFOPJIMB_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar2 = OHPOFOPJIMB_<>c_TypeInfo->static_fields->__9__8_0;
  if (pSVar2 == (System_Action_OHPOFOPJIMB__o *)0x0) {
    if ((OHPOFOPJIMB_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar2 = (System_Action_OHPOFOPJIMB__o *)thunk_FUN_01bda818(System_Action<OHPOFOPJIMB>_TypeInfo)
    ;
    System_Action<object>___ctor();
    ppSVar1 = &OHPOFOPJIMB_<>c_TypeInfo->static_fields->__9__8_0;
    *ppSVar1 = pSVar2;
    thunk_FUN_01c20e04(ppSVar1,pSVar2);
  }
  if (__this != (OHPOFOPJIMB_o *)0x0) {
    ppSVar1 = &(__this->fields).BHHLJDLBINB;
    *ppSVar1 = pSVar2;
    thunk_FUN_01c20e04(ppSVar1,pSVar2);
    System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
    (__this->fields).EAFPDFHFBOM = MABGFLNNGKH;
    (__this->fields)._GEMCDLIDIBB_k__BackingField = BCFACBMOMKI;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void EIAAJACOKDP(Action<OHPOFOPJIMB> CJNHFNHJHPE)  [RVA 0x33435E0]
// OHPOFOPJIMB$$EIAAJACOKDP @ RVA 0x33435E0

void OHPOFOPJIMB__EIAAJACOKDP
               (OHPOFOPJIMB_o *__this,System_Action_OHPOFOPJIMB__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_OHPOFOPJIMB__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_OHPOFOPJIMB__o *pSVar5;
  System_Action_OHPOFOPJIMB__o **ppSVar6;
  System_Action_OHPOFOPJIMB__o *a;
  
  if ((DAT_045679ac & 1) == 0) {
    FUN_01bab630(&System_Action<OHPOFOPJIMB>_TypeInfo);
    DAT_045679ac = 1;
  }
  ppSVar6 = &(__this->fields).BHHLJDLBINB;
  a = *ppSVar6;
  do {
    pSVar3 = System_Delegate__Combine
                       ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,(MethodInfo *)0x0);
    pSVar1 = System_Action<OHPOFOPJIMB>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<OHPOFOPJIMB>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_OHPOFOPJIMB__o *)FUN_01c07368(ppSVar6,lVar4,a);
    bVar2 = a != pSVar5;
    a = pSVar5;
  } while (bVar2);
  return;
}

