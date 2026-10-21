// NGKBNOEJLPH$$NPFGMAOAAED @ RVA 0x3495714

int32_t NGKBNOEJLPH__NPFGMAOAAED
                  (NGKBNOEJLPH_o *__this,OLKKAIFGGAK_o *BCKBBGCOMJD,OLKKAIFGGAK_o *IFCJAOGIPJE,
                  MethodInfo *method)

{
  GBJGJEGPHKD_o *pGVar1;
  IEFEBEDLHNN_o *pIVar2;
  System_Collections_Generic_List_int__o *pSVar3;
  float fVar4;
  
  if (BCKBBGCOMJD != (OLKKAIFGGAK_o *)0x0) {
    pGVar1 = (BCKBBGCOMJD->fields).HMIAFJALFCJ;
    __this = (NGKBNOEJLPH_o *)0x0;
    if (pGVar1 != (GBJGJEGPHKD_o *)0x0) {
      __this = (NGKBNOEJLPH_o *)GBJGJEGPHKD__ILECMJOENMK(pGVar1,(MethodInfo *)0x0);
      if (__this == (NGKBNOEJLPH_o *)0x0) {
        return 0;
      }
      if (IFCJAOGIPJE != (OLKKAIFGGAK_o *)0x0) {
        pGVar1 = (IFCJAOGIPJE->fields).HMIAFJALFCJ;
        __this = (NGKBNOEJLPH_o *)0x0;
        if (pGVar1 != (GBJGJEGPHKD_o *)0x0) {
          pIVar2 = GBJGJEGPHKD__ILECMJOENMK(pGVar1,(MethodInfo *)0x0);
          if (pIVar2 == (IEFEBEDLHNN_o *)0x0) {
            return 0;
          }
          pGVar1 = (BCKBBGCOMJD->fields).HMIAFJALFCJ;
          __this = (NGKBNOEJLPH_o *)0x0;
          if (((pGVar1 != (GBJGJEGPHKD_o *)0x0) &&
              (__this = (NGKBNOEJLPH_o *)GBJGJEGPHKD__ILECMJOENMK(pGVar1,(MethodInfo *)0x0),
              __this != (NGKBNOEJLPH_o *)0x0)) &&
             (pSVar3 = (__this->fields).LANHGMOGONB,
             pSVar3 != (System_Collections_Generic_List_int__o *)0x0)) {
            pGVar1 = (IFCJAOGIPJE->fields).HMIAFJALFCJ;
            __this = (NGKBNOEJLPH_o *)0x0;
            if (pGVar1 != (GBJGJEGPHKD_o *)0x0) {
              fVar4 = *(float *)&(pSVar3->fields)._items;
              __this = (NGKBNOEJLPH_o *)GBJGJEGPHKD__ILECMJOENMK(pGVar1,(MethodInfo *)0x0);
              if ((__this != (NGKBNOEJLPH_o *)0x0) &&
                 (pSVar3 = (__this->fields).LANHGMOGONB,
                 pSVar3 != (System_Collections_Generic_List_int__o *)0x0)) {
                if (fVar4 < *(float *)&(pSVar3->fields)._items) {
                  return 1;
                }
                return -1;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}

