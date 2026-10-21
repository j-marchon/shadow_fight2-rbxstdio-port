// NGKBNOEJLPH$$IIIHAJGCPGP @ RVA 0x34958AC

bool NGKBNOEJLPH__IIIHAJGCPGP
               (NGKBNOEJLPH_o *__this,ECENNHNBAME_o *NLEBDPHNIDI,OLKKAIFGGAK_o *BCKBBGCOMJD,
               OLKKAIFGGAK_o *IFCJAOGIPJE,System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  uint uVar1;
  GBJGJEGPHKD_o *__this_00;
  KOGMOACEOAM_o *__this_01;
  NGKBNOEJLPH_o *__this_02;
  MethodInfo *method_00;
  System_Collections_Generic_List_int__o *pSVar2;
  OPNFCOGALLI_o *pOVar3;
  float fVar4;
  float fVar5;
  
  if (NLEBDPHNIDI != (ECENNHNBAME_o *)0x0) {
    uVar1 = ECENNHNBAME__MBDJHMEEGGP(NLEBDPHNIDI,true,(MethodInfo *)0x0);
    __this = (NGKBNOEJLPH_o *)(ulong)uVar1;
    if (BCKBBGCOMJD != (OLKKAIFGGAK_o *)0x0) {
      __this_00 = (BCKBBGCOMJD->fields).HMIAFJALFCJ;
      __this = (NGKBNOEJLPH_o *)0x0;
      if (((__this_00 != (GBJGJEGPHKD_o *)0x0) &&
          (__this = (NGKBNOEJLPH_o *)
                    GBJGJEGPHKD__OCJAHBKIFNO(__this_00,KGLJICLJHEL,(MethodInfo *)0x0),
          __this != (NGKBNOEJLPH_o *)0x0)) &&
         (pSVar2 = (__this->fields).LANHGMOGONB,
         pSVar2 != (System_Collections_Generic_List_int__o *)0x0)) {
        __this_01 = (NLEBDPHNIDI->fields).BEHFDAIGOAJ;
        __this = (NGKBNOEJLPH_o *)0x0;
        if (__this_01 != (KOGMOACEOAM_o *)0x0) {
          fVar5 = *(float *)&(pSVar2->fields)._items;
          method_00 = (MethodInfo *)0x0;
          fVar4 = KOGMOACEOAM__ILMOLCLNCPI
                            (__this_01,uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU),KGLJICLJHEL,
                             (MethodInfo *)0x0);
          uVar1 = NGKBNOEJLPH__NPFGMAOAAED(__this_02,BCKBBGCOMJD,IFCJAOGIPJE,method_00);
          __this = (NGKBNOEJLPH_o *)(ulong)uVar1;
          pOVar3 = (BCKBBGCOMJD->fields).OAKOFJJIOFF;
          if (pOVar3 != (OPNFCOGALLI_o *)0x0) {
            fVar5 = fVar5 + fVar4 * (float)(int)uVar1;
            return (pOVar3->fields).GOIHMJKAHJN <= fVar5 && fVar5 <= (pOVar3->fields).AOOIIDBOANJ;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}

