// NGKBNOEJLPH$$GOOCNAIIINI @ RVA 0x349AD2C

bool NGKBNOEJLPH__GOOCNAIIINI
               (NGKBNOEJLPH_o *__this,ECENNHNBAME_o *NLEBDPHNIDI,OLKKAIFGGAK_o *BCKBBGCOMJD,
               OLKKAIFGGAK_o *IFCJAOGIPJE,System_String_o *KGLJICLJHEL,System_String_o *JOLLCEPFJCH,
               MethodInfo *method)

{
  uint uVar1;
  int32_t iVar2;
  int32_t iVar3;
  GBJGJEGPHKD_o *pGVar4;
  IEFEBEDLHNN_o *pIVar5;
  NGKBNOEJLPH_o *__this_00;
  MethodInfo *method_00;
  CNDPAJOLKFN_o *pCVar6;
  KOGMOACEOAM_o *pKVar7;
  OPNFCOGALLI_o *pOVar8;
  ECENNHNBAME_o *pEVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  if ((((BCKBBGCOMJD != (OLKKAIFGGAK_o *)0x0) &&
       (pGVar4 = (BCKBBGCOMJD->fields).HMIAFJALFCJ, pGVar4 != (GBJGJEGPHKD_o *)0x0)) &&
      (pIVar5 = GBJGJEGPHKD__OCJAHBKIFNO(pGVar4,KGLJICLJHEL,(MethodInfo *)0x0),
      pIVar5 != (IEFEBEDLHNN_o *)0x0)) &&
     (((pCVar6 = (pIVar5->fields).CNMHHKAMGPI, pCVar6 != (CNDPAJOLKFN_o *)0x0 &&
       (IFCJAOGIPJE != (OLKKAIFGGAK_o *)0x0)) &&
      (pGVar4 = (IFCJAOGIPJE->fields).HMIAFJALFCJ, pGVar4 != (GBJGJEGPHKD_o *)0x0)))) {
    fVar13 = (pCVar6->fields).super.OHHDBINAJCB;
    pIVar5 = GBJGJEGPHKD__OCJAHBKIFNO(pGVar4,JOLLCEPFJCH,(MethodInfo *)0x0);
    if (((pIVar5 != (IEFEBEDLHNN_o *)0x0) &&
        (pCVar6 = (pIVar5->fields).CNMHHKAMGPI, pCVar6 != (CNDPAJOLKFN_o *)0x0)) &&
       (NLEBDPHNIDI != (ECENNHNBAME_o *)0x0)) {
      fVar14 = (pCVar6->fields).super.OHHDBINAJCB;
      uVar1 = ECENNHNBAME__MBDJHMEEGGP(NLEBDPHNIDI,true,(MethodInfo *)0x0);
      pKVar7 = (NLEBDPHNIDI->fields).BEHFDAIGOAJ;
      if (pKVar7 != (KOGMOACEOAM_o *)0x0) {
        uVar1 = uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU);
        method_00 = (MethodInfo *)0x0;
        fVar10 = KOGMOACEOAM__ILMOLCLNCPI(pKVar7,uVar1,KGLJICLJHEL,(MethodInfo *)0x0);
        iVar2 = NGKBNOEJLPH__NPFGMAOAAED(__this_00,BCKBBGCOMJD,IFCJAOGIPJE,method_00);
        pOVar8 = (IFCJAOGIPJE->fields).OAKOFJJIOFF;
        if (pOVar8 != (OPNFCOGALLI_o *)0x0) {
          if ((pOVar8->fields).AANDHIFMLHC == false) {
            pGVar4 = (IFCJAOGIPJE->fields).HMIAFJALFCJ;
            if (((pGVar4 != (GBJGJEGPHKD_o *)0x0) &&
                (pIVar5 = GBJGJEGPHKD__OCJAHBKIFNO(pGVar4,JOLLCEPFJCH,(MethodInfo *)0x0),
                pIVar5 != (IEFEBEDLHNN_o *)0x0)) &&
               (pCVar6 = (pIVar5->fields).CNMHHKAMGPI, pCVar6 != (CNDPAJOLKFN_o *)0x0)) {
              fVar12 = (pCVar6->fields).super.OHHDBINAJCB;
LAB_0359ae84:
              return 0.0 <= (fVar13 - fVar14) * ((fVar13 + fVar10 * (float)iVar2) - fVar12);
            }
          }
          else {
            pEVar9 = (pOVar8->fields).NDBPNFLAKDL;
            if ((pEVar9 != (ECENNHNBAME_o *)0x0) &&
               (pKVar7 = (pEVar9->fields).BEHFDAIGOAJ, pKVar7 != (KOGMOACEOAM_o *)0x0)) {
              fVar11 = KOGMOACEOAM__ILMOLCLNCPI
                                 (pKVar7,(__this->fields).MAHKIKKMBJM + uVar1,JOLLCEPFJCH,
                                  (MethodInfo *)0x0);
              pOVar8 = (IFCJAOGIPJE->fields).OAKOFJJIOFF;
              if (pOVar8 != (OPNFCOGALLI_o *)0x0) {
                fVar12 = OPNFCOGALLI__BKDCNNOOIJH(pOVar8,(MethodInfo *)0x0);
                iVar3 = OLKKAIFGGAK__MALPGCALHNK(IFCJAOGIPJE,(MethodInfo *)0x0);
                fVar12 = fVar12 + fVar11 * (float)iVar3;
                goto LAB_0359ae84;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

