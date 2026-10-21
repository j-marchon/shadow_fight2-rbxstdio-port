// CAAJMGKIPIE$$JDLOALPCHAH @ RVA 0x3003960

int32_t CAAJMGKIPIE__JDLOALPCHAH
                  (CAAJMGKIPIE_o *__this,FHHDFKADHEI_o *MJEOBEDMNHL,MethodInfo *method)

{
  int32_t iVar1;
  OBOBEOMMECI_o *pOVar2;
  MethodInfo *method_00;
  MGNDHCBAPEN_OBOBEOMMECI__OBOBEOMMECI__o *pMVar3;
  float fVar4;
  float GKBCJOEFFCP;
  
  pMVar3 = (__this->fields).CIDOBADNLEA;
  if ((pMVar3 != (MGNDHCBAPEN_OBOBEOMMECI__OBOBEOMMECI__o *)0x0) &&
     (pOVar2 = (pMVar3->fields).PHPELPFMOII, pOVar2 != (OBOBEOMMECI_o *)0x0)) {
    fVar4 = OBOBEOMMECI__PPOKEOHAHFG(pOVar2,MJEOBEDMNHL,(System_String_o *)0x0,(MethodInfo *)0x0);
    pMVar3 = (__this->fields).CIDOBADNLEA;
    if ((pMVar3 != (MGNDHCBAPEN_OBOBEOMMECI__OBOBEOMMECI__o *)0x0) &&
       (pOVar2 = (pMVar3->fields).DOKHHBGJICA, pOVar2 != (OBOBEOMMECI_o *)0x0)) {
      GKBCJOEFFCP = OBOBEOMMECI__PPOKEOHAHFG
                              (pOVar2,MJEOBEDMNHL,(System_String_o *)0x0,(MethodInfo *)0x0);
      fVar4 = CAAJMGKIPIE__MFOEBIDIGCJ(fVar4,GKBCJOEFFCP,method_00);
      iVar1 = -0x80000000;
      if (fVar4 != INFINITY) {
        iVar1 = (int)fVar4;
      }
      return iVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

