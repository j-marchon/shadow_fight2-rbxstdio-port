// BEPJMNAHCAD$$IPDEBHOMAIB @ RVA 0x318A4A8

void BEPJMNAHCAD__IPDEBHOMAIB(BEPJMNAHCAD_o *__this,MethodInfo *method)

{
  IEFEBEDLHNN_o *pIVar1;
  MNLIBPAOCLG_o *pMVar2;
  PKNBJJPHAKI_o *pPVar3;
  CNDPAJOLKFN_o *CJNHFNHJHPE;
  GBJGJEGPHKD_o *IHEPHBIPLPM;
  GBJGJEGPHKD_o *FMPJLBLNHMC;
  
  pIVar1 = (__this->fields).NHAIFIDONLG;
  if (pIVar1 != (IEFEBEDLHNN_o *)0x0) {
    IEFEBEDLHNN__CFAAJCOBAEE(pIVar1,(MethodInfo *)0x0);
    pMVar2 = (__this->fields).LIICCFBEOLC;
    if (((pMVar2 != (MNLIBPAOCLG_o *)0x0) &&
        (pPVar3 = MNLIBPAOCLG__KLOHNEKNDBL(pMVar2,(MethodInfo *)0x0), pPVar3 != (PKNBJJPHAKI_o *)0x0
        )) && (pMVar2 = (__this->fields).LIICCFBEOLC, pMVar2 != (MNLIBPAOCLG_o *)0x0)) {
      FMPJLBLNHMC = (pPVar3->fields).JBPKNAKOHLP;
      pPVar3 = MNLIBPAOCLG__KLOHNEKNDBL(pMVar2,(MethodInfo *)0x0);
      if (pPVar3 != (PKNBJJPHAKI_o *)0x0) {
        if ((FMPJLBLNHMC == (GBJGJEGPHKD_o *)0x0) ||
           (IHEPHBIPLPM = (pPVar3->fields).AAJIHJPLHDA, IHEPHBIPLPM == (GBJGJEGPHKD_o *)0x0)) {
          return;
        }
        pIVar1 = (__this->fields).NHAIFIDONLG;
        CJNHFNHJHPE = OLKKAIFGGAK__NKPGIFLCKBC(FMPJLBLNHMC,IHEPHBIPLPM,(MethodInfo *)0x0);
        if (pIVar1 != (IEFEBEDLHNN_o *)0x0) {
          IEFEBEDLHNN__AGOEHONIGBH(pIVar1,CJNHFNHJHPE,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

