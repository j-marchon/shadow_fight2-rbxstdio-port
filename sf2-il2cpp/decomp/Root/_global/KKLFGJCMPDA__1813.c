// TypeDefIndex 1813
// Namespace: 
// public class KKLFGJCMPDA
// Fields:
//   private readonly MCEIBCKPIAD KJJDAKFCJAL; // 0x10
//   private readonly FAIJGJCCKJC EAAEJJKFKEG; // 0x18

// ===== private long NIBOLFJBPGA()  [RVA 0x3219D74]
// KKLFGJCMPDA$$NIBOLFJBPGA @ RVA 0x3219D74

int64_t KKLFGJCMPDA__NIBOLFJBPGA(KKLFGJCMPDA_o *__this,MethodInfo *method)

{
  FAIJGJCCKJC_o *pFVar1;
  JMDPBFOCHHP_ENBCJNLAHAC_o *pJVar2;
  
  pFVar1 = (__this->fields).EAAEJJKFKEG;
  if ((pFVar1 != (FAIJGJCCKJC_o *)0x0) &&
     (pJVar2 = (pFVar1->fields).FBBBEHLGDJK, pJVar2 != (JMDPBFOCHHP_ENBCJNLAHAC_o *)0x0)) {
    return (pJVar2->fields).NFKHJPMMNLM * 1000;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool AJDOCKPPMLK()  [RVA 0x3219DA0]
// KKLFGJCMPDA$$AJDOCKPPMLK @ RVA 0x3219DA0

bool KKLFGJCMPDA__AJDOCKPPMLK(KKLFGJCMPDA_o *__this,MethodInfo *method)

{
  KKLJIDJBFEI_o *__this_00;
  int64_t iVar1;
  FAIJGJCCKJC_o *pFVar2;
  JMDPBFOCHHP_ENBCJNLAHAC_o *pJVar3;
  
  __this_00 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
  if (__this_00 != (KKLJIDJBFEI_o *)0x0) {
    iVar1 = KKLJIDJBFEI__HEDLNKCNMCI(__this_00,(MethodInfo *)0x0);
    pFVar2 = (__this->fields).EAAEJJKFKEG;
    if ((pFVar2 != (FAIJGJCCKJC_o *)0x0) &&
       (pJVar3 = (pFVar2->fields).FBBBEHLGDJK, pJVar3 != (JMDPBFOCHHP_ENBCJNLAHAC_o *)0x0)) {
      return (pJVar3->fields).NFKHJPMMNLM <= iVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public FAIJGJCCKJC FPHGCKCNOLF()  [RVA 0x3219DE4]
// KKLFGJCMPDA$$FPHGCKCNOLF @ RVA 0x3219DE4

FAIJGJCCKJC_o * KKLFGJCMPDA__FPHGCKCNOLF(KKLFGJCMPDA_o *__this,MethodInfo *method)

{
  return (__this->fields).EAAEJJKFKEG;
}


// ===== protected void MHGHLDANJBO()  [RVA 0x3219DEC]
// KKLFGJCMPDA$$MHGHLDANJBO @ RVA 0x3219DEC

void KKLFGJCMPDA__MHGHLDANJBO(KKLFGJCMPDA_o *__this,MethodInfo *method)

{
  MCEIBCKPIAD_o *__this_00;
  PPJGIFEJMHP_o *__this_01;
  int64_t JNJCMIEHOHC;
  System_Action_o *KCPFFLHCCIN;
  MethodInfo *method_00;
  
  if ((DAT_04566ef2 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_KKLFGJCMPDA_OPMMMKCAADB__);
    DAT_04566ef2 = 1;
  }
  __this_00 = (__this->fields).KJJDAKFCJAL;
  if (__this_00 != (MCEIBCKPIAD_o *)0x0) {
    MCEIBCKPIAD__MHGHLDANJBO(__this_00,__this,(MethodInfo *)0x0);
    __this_01 = KKLJIDJBFEI__DANEKAAFBFI((MethodInfo *)0x0);
    JNJCMIEHOHC = KKLFGJCMPDA__PDIKOGIIOFD(__this,method_00);
    KCPFFLHCCIN = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
    System_Action___ctor();
    if (__this_01 != (PPJGIFEJMHP_o *)0x0) {
      PPJGIFEJMHP__LGDEICDAEAF(__this_01,JNJCMIEHOHC,KCPFFLHCCIN,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor(MCEIBCKPIAD KMIOAIFNJJD, FAIJGJCCKJC NPOAPJKIIOF)  [RVA 0x3219ED8]
// KKLFGJCMPDA$$.ctor @ RVA 0x3219ED8

void KKLFGJCMPDA___ctor(KKLFGJCMPDA_o *__this,MCEIBCKPIAD_o *KMIOAIFNJJD,FAIJGJCCKJC_o *NPOAPJKIIOF,
                       MethodInfo *method)

{
  bool bVar1;
  FAIJGJCCKJC_o **ppFVar2;
  PPJGIFEJMHP_o *__this_00;
  int64_t JNJCMIEHOHC;
  System_Action_o *KCPFFLHCCIN;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  
  if ((DAT_04566ef3 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_KKLFGJCMPDA_MHGHLDANJBO__);
    FUN_01bab630(&Method_KKLFGJCMPDA_OPMMMKCAADB__);
    DAT_04566ef3 = 1;
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  ppFVar2 = &(__this->fields).EAAEJJKFKEG;
  *ppFVar2 = NPOAPJKIIOF;
  thunk_FUN_01c20e04(ppFVar2,NPOAPJKIIOF);
  (__this->fields).KJJDAKFCJAL = KMIOAIFNJJD;
  thunk_FUN_01c20e04(&__this->fields,KMIOAIFNJJD);
  bVar1 = KKLFGJCMPDA__PLLLOINIKKH(__this,method_00);
  if (bVar1) {
    KKLFGJCMPDA__OPMMMKCAADB(__this,method_01);
    return;
  }
  bVar1 = KKLFGJCMPDA__HLLOKAJEBDE(__this,method_01);
  if (bVar1) {
    __this_00 = KKLJIDJBFEI__DANEKAAFBFI((MethodInfo *)0x0);
    JNJCMIEHOHC = KKLFGJCMPDA__PDIKOGIIOFD(__this,method_03);
    KCPFFLHCCIN = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
  }
  else {
    bVar1 = KKLFGJCMPDA__AJDOCKPPMLK(__this,method_02);
    if (bVar1) {
      return;
    }
    __this_00 = KKLJIDJBFEI__DANEKAAFBFI((MethodInfo *)0x0);
    JNJCMIEHOHC = KKLFGJCMPDA__NIBOLFJBPGA(__this,method_04);
    KCPFFLHCCIN = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
  }
  System_Action___ctor();
  if (__this_00 != (PPJGIFEJMHP_o *)0x0) {
    PPJGIFEJMHP__LGDEICDAEAF(__this_00,JNJCMIEHOHC,KCPFFLHCCIN,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected void OPMMMKCAADB()  [RVA 0x321A084]
// KKLFGJCMPDA$$OPMMMKCAADB @ RVA 0x321A084

void KKLFGJCMPDA__OPMMMKCAADB(KKLFGJCMPDA_o *__this,MethodInfo *method)

{
  MCEIBCKPIAD_o *__this_00;
  
  __this_00 = (__this->fields).KJJDAKFCJAL;
  if (__this_00 != (MCEIBCKPIAD_o *)0x0) {
    MCEIBCKPIAD__OPMMMKCAADB(__this_00,__this,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool PLLLOINIKKH()  [RVA 0x321A044]
// KKLFGJCMPDA$$PLLLOINIKKH @ RVA 0x321A044

bool KKLFGJCMPDA__PLLLOINIKKH(KKLFGJCMPDA_o *__this,MethodInfo *method)

{
  KKLJIDJBFEI_o *__this_00;
  int64_t iVar1;
  FAIJGJCCKJC_o *pFVar2;
  JMDPBFOCHHP_ENBCJNLAHAC_o *pJVar3;
  long lVar4;
  
  pFVar2 = (__this->fields).EAAEJJKFKEG;
  if ((pFVar2 != (FAIJGJCCKJC_o *)0x0) &&
     (pJVar3 = (pFVar2->fields).FBBBEHLGDJK, pJVar3 != (JMDPBFOCHHP_ENBCJNLAHAC_o *)0x0)) {
    lVar4 = (pJVar3->fields).CEGNAMELGID;
    __this_00 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
    if (__this_00 != (KKLJIDJBFEI_o *)0x0) {
      iVar1 = KKLJIDJBFEI__HEDLNKCNMCI(__this_00,(MethodInfo *)0x0);
      return lVar4 <= iVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool HLLOKAJEBDE()  [RVA 0x321A0A4]
// KKLFGJCMPDA$$HLLOKAJEBDE @ RVA 0x321A0A4

bool KKLFGJCMPDA__HLLOKAJEBDE(KKLFGJCMPDA_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *method_00;
  
  bVar1 = KKLFGJCMPDA__AJDOCKPPMLK(__this,method);
  if (bVar1) {
    bVar1 = KKLFGJCMPDA__PLLLOINIKKH(__this,method_00);
    bVar1 = !bVar1;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}


// ===== private long PDIKOGIIOFD()  [RVA 0x3219EAC]
// KKLFGJCMPDA$$PDIKOGIIOFD @ RVA 0x3219EAC

int64_t KKLFGJCMPDA__PDIKOGIIOFD(KKLFGJCMPDA_o *__this,MethodInfo *method)

{
  FAIJGJCCKJC_o *pFVar1;
  JMDPBFOCHHP_ENBCJNLAHAC_o *pJVar2;
  
  pFVar1 = (__this->fields).EAAEJJKFKEG;
  if ((pFVar1 != (FAIJGJCCKJC_o *)0x0) &&
     (pJVar2 = (pFVar1->fields).FBBBEHLGDJK, pJVar2 != (JMDPBFOCHHP_ENBCJNLAHAC_o *)0x0)) {
    return (pJVar2->fields).CEGNAMELGID * 1000;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

