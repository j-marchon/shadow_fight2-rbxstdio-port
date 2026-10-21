// TypeDefIndex 1247
// Namespace: 
// private class IPPEHAJADOO.GHFEMFCMBEJ
// Fields:
//   private readonly IIMNGGHGKOD OFJCBIEADON; // 0x10
//   private readonly OLKKAIFGGAK PDKOKGEECDC; // 0x18
//   private int PFOGLMGBICJ; // 0x20
//   private bool COJOJNLJBDO; // 0x24

// ===== public bool HLJCNLHNLJM()  [RVA 0x314350C]
// IPPEHAJADOO.GHFEMFCMBEJ$$HLJCNLHNLJM @ RVA 0x314350C

bool IPPEHAJADOO_GHFEMFCMBEJ__HLJCNLHNLJM(IPPEHAJADOO_GHFEMFCMBEJ_o *__this,MethodInfo *method)

{
  return (__this->fields).COJOJNLJBDO;
}


// ===== public void LLCONNGHGKD()  [RVA 0x3143514]
// IPPEHAJADOO.GHFEMFCMBEJ$$LLCONNGHGKD @ RVA 0x3143514

void IPPEHAJADOO_GHFEMFCMBEJ__LLCONNGHGKD(IPPEHAJADOO_GHFEMFCMBEJ_o *__this,MethodInfo *method)

{
  int PKDBOMAHGHC;
  bool bVar1;
  IIMNGGHGKOD_o *pIVar2;
  
  pIVar2 = (__this->fields).OFJCBIEADON;
  PKDBOMAHGHC = (__this->fields).PFOGLMGBICJ + 1;
  (__this->fields).PFOGLMGBICJ = PKDBOMAHGHC;
  if (pIVar2 != (IIMNGGHGKOD_o *)0x0) {
    bVar1 = IIMNGGHGKOD__KOLIFGAJOHA(pIVar2,PKDBOMAHGHC,(MethodInfo *)0x0);
    if (bVar1) {
      pIVar2 = (__this->fields).OFJCBIEADON;
      if (pIVar2 == (IIMNGGHGKOD_o *)0x0) goto LAB_03243564;
      (*(pIVar2->klass->vtable)._6_DPGIIHOJJDE.methodPtr)
                (pIVar2,(__this->fields).PDKOKGEECDC,(pIVar2->klass->vtable)._6_DPGIIHOJJDE.method);
      (__this->fields).COJOJNLJBDO = true;
    }
    return;
  }
LAB_03243564:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor(IIMNGGHGKOD CPECAEHDDDB, OLKKAIFGGAK BCKBBGCOMJD)  [RVA 0x31423EC]
// IPPEHAJADOO.GHFEMFCMBEJ$$.ctor @ RVA 0x31423EC

void IPPEHAJADOO_GHFEMFCMBEJ___ctor
               (IPPEHAJADOO_GHFEMFCMBEJ_o *__this,IIMNGGHGKOD_o *CPECAEHDDDB,
               OLKKAIFGGAK_o *BCKBBGCOMJD,MethodInfo *method)

{
  OLKKAIFGGAK_o **ppOVar1;
  
                    /* try { // try from 032423f4 to 033423f7 has its CatchHandler @ 032427c0 */
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).OFJCBIEADON = CPECAEHDDDB;
  thunk_FUN_01c20e04(&__this->fields,CPECAEHDDDB);
  ppOVar1 = &(__this->fields).PDKOKGEECDC;
                    /* try { // try from 03242418 to 03342427 has its CatchHandler @ 03242a2c */
  *ppOVar1 = BCKBBGCOMJD;
  thunk_FUN_01c20e04(ppOVar1,BCKBBGCOMJD);
  (__this->fields).PFOGLMGBICJ = 0;
  (__this->fields).COJOJNLJBDO = false;
  return;
}

