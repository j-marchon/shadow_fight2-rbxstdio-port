// TypeDefIndex 1981
// Namespace: 
// public class HIAKLHMMHDG : GOCLIOIANDK<HIAKLHMMHDG, LAJPNJAAODE>, LAJPNJAAODE
// Fields:
//   private const string IJPLDHGNKMO = "OnGDPRRequestEnd";
//   private const KFKFNDEJLKK.PCJFAKMBHCE CBANEGHMGLB = 46;
//   private const KFKFNDEJLKK.PCJFAKMBHCE NDIBNPAAHLJ = 47;
//   private Action EHBCMAAGNLM; // 0x10

// ===== public void EDMKBCNKKCH()  [RVA 0x328FB8C]
// HIAKLHMMHDG$$EDMKBCNKKCH @ RVA 0x328FB8C

void HIAKLHMMHDG__EDMKBCNKKCH(HIAKLHMMHDG_o *__this,MethodInfo *method)

{
  Nekki_SF2_Core_Quests_QuestsManager_o *EPLBABJNKGP;
  
  if ((DAT_0456730c & 1) == 0) {
    FUN_01bab630(&StringLiteral_12095/*"ShowGDPR"*/);
    FUN_01bab630(&StringLiteral_9868/*"OnGDPRRequestEnd"*/);
    DAT_0456730c = 1;
  }
  EPLBABJNKGP = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
  ANLLODMHLHE__LDBFCGBLMFA
            (EPLBABJNKGP,0x2e,StringLiteral_9868/*"OnGDPRRequestEnd"*/,(__this->fields).EHBCMAAGNLM,(Il2CppObject *)__this
             ,StringLiteral_12095/*"ShowGDPR"*/,(MethodInfo *)0x0);
  return;
}


// ===== public void IONOLDKKBKO(Action CJNHFNHJHPE)  [RVA 0x328FC08]
// HIAKLHMMHDG$$IONOLDKKBKO @ RVA 0x328FC08

void HIAKLHMMHDG__IONOLDKKBKO(HIAKLHMMHDG_o *__this,System_Action_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  System_Action_o *source;
  
  if ((DAT_0456730d & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    DAT_0456730d = 1;
  }
  source = (__this->fields).EHBCMAAGNLM;
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


// ===== public void BPFHLHIJLFC()  [RVA 0x328FCA4]
// HIAKLHMMHDG$$BPFHLHIJLFC @ RVA 0x328FCA4

void HIAKLHMMHDG__BPFHLHIJLFC(HIAKLHMMHDG_o *__this,MethodInfo *method)

{
  Nekki_SF2_Core_Quests_QuestsManager_o *EPLBABJNKGP;
  
  if ((DAT_0456730e & 1) == 0) {
    FUN_01bab630(&StringLiteral_14977/*"WithdrawGDPR"*/);
    FUN_01bab630(&StringLiteral_9868/*"OnGDPRRequestEnd"*/);
    DAT_0456730e = 1;
  }
  EPLBABJNKGP = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
  ANLLODMHLHE__LDBFCGBLMFA
            (EPLBABJNKGP,0x2f,StringLiteral_9868/*"OnGDPRRequestEnd"*/,(__this->fields).EHBCMAAGNLM,(Il2CppObject *)__this
             ,StringLiteral_14977/*"WithdrawGDPR"*/,(MethodInfo *)0x0);
  return;
}


// ===== public void .ctor()  [RVA 0x328FD20]
// HIAKLHMMHDG$$.ctor @ RVA 0x328FD20

void HIAKLHMMHDG___ctor(HIAKLHMMHDG_o *__this,MethodInfo *method)

{
  if ((DAT_0456730f & 1) == 0) {
    FUN_01bab630(&Method_GOCLIOIANDK<HIAKLHMMHDG,_LAJPNJAAODE>__ctor__);
    DAT_0456730f = 1;
  }
  GOCLIOIANDK<object,_object>___ctor
            ((GOCLIOIANDK_T__TInterface__o *)__this,
             Method_GOCLIOIANDK<HIAKLHMMHDG,_LAJPNJAAODE>__ctor__);
  return;
}


// ===== public void PBNGCGKIEOH(Action CJNHFNHJHPE)  [RVA 0x328FD68]
// HIAKLHMMHDG$$PBNGCGKIEOH @ RVA 0x328FD68

void HIAKLHMMHDG__PBNGCGKIEOH(HIAKLHMMHDG_o *__this,System_Action_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  System_Action_o *a;
  
  if ((DAT_04567310 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    DAT_04567310 = 1;
  }
  a = (__this->fields).EHBCMAAGNLM;
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

