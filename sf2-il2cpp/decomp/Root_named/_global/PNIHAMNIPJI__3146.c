// TypeDefIndex 3146
// Namespace: 
// public class PNIHAMNIPJI : GOCLIOIANDK<PNIHAMNIPJI, ICHIDBGJOEC>, ICHIDBGJOEC
// Fields:
//   private const KFKFNDEJLKK.PCJFAKMBHCE OENOBEFCLBL = 78;
//   private Action BHHLJDLBINB; // 0x10

// ===== public void .ctor()  [RVA 0x34D7298]
// PNIHAMNIPJI$$.ctor @ RVA 0x34D7298

void PNIHAMNIPJI___ctor(PNIHAMNIPJI_o *__this,MethodInfo *method)

{
  if ((DAT_045686df & 1) == 0) {
    FUN_01bab630(&Method_GOCLIOIANDK<PNIHAMNIPJI,_ICHIDBGJOEC>__ctor__);
    DAT_045686df = 1;
  }
  GOCLIOIANDK<object,_object>___ctor
            ((GOCLIOIANDK_T__TInterface__o *)__this,
             Method_GOCLIOIANDK<PNIHAMNIPJI,_ICHIDBGJOEC>__ctor__);
  return;
}


// ===== public void NKLGCNHLBAF()  [RVA 0x34D72E0]
// PNIHAMNIPJI$$NKLGCNHLBAF @ RVA 0x34D72E0

void PNIHAMNIPJI__NKLGCNHLBAF(PNIHAMNIPJI_o *__this,MethodInfo *method)

{
  Nekki_SF2_Core_Quests_QuestsManager_o *EPLBABJNKGP;
  
  if ((DAT_045686e0 & 1) == 0) {
    FUN_01bab630(&StringLiteral_11470/*"Run"*/);
    DAT_045686e0 = 1;
  }
  EPLBABJNKGP = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
  ANLLODMHLHE__LDBFCGBLMFA
            (EPLBABJNKGP,0x4e,(__this->fields).BHHLJDLBINB,(Il2CppObject *)__this,
             StringLiteral_11470/*"Run"*/,(MethodInfo *)0x0);
  return;
}


// ===== public void EIAAJACOKDP(Action CJNHFNHJHPE)  [RVA 0x34D733C]
// PNIHAMNIPJI$$EIAAJACOKDP @ RVA 0x34D733C

void PNIHAMNIPJI__EIAAJACOKDP(PNIHAMNIPJI_o *__this,System_Action_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  System_Action_o *a;
  
  if ((DAT_045686e1 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    DAT_045686e1 = 1;
  }
  a = (__this->fields).BHHLJDLBINB;
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


// ===== public void HAFNHPBMIBI(Action CJNHFNHJHPE)  [RVA 0x34D73D8]
// PNIHAMNIPJI$$HAFNHPBMIBI @ RVA 0x34D73D8

void PNIHAMNIPJI__HAFNHPBMIBI(PNIHAMNIPJI_o *__this,System_Action_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  System_Action_o *source;
  
  if ((DAT_045686e2 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    DAT_045686e2 = 1;
  }
  source = (__this->fields).BHHLJDLBINB;
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

