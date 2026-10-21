// OPNFCOGALLI$$BGEKGOEAPKE @ RVA 0x31098C8

void OPNFCOGALLI__BGEKGOEAPKE(OPNFCOGALLI_o *__this,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  GBJGJEGPHKD_o *pGVar3;
  System_Collections_Generic_List_IEFEBEDLHNN__o *__this_00;
  IEFEBEDLHNN_o *__this_01;
  System_Collections_Generic_List_object__o *__this_02;
  CNDPAJOLKFN_o *PHCOHKNFGLE;
  ECENNHNBAME_o *__this_03;
  Il2CppObject *pIVar4;
  OLKKAIFGGAK_o *__this_04;
  MethodInfo *method_00;
  MethodInfo *in_x2;
  MethodInfo *method_01;
  int iVar5;
  int iVar6;
  System_Collections_Generic_List_List_CNDPAJOLKFN___o *pSVar7;
  int iVar8;
  CNDPAJOLKFN_o *pCVar9;
  float fVar10;
  
  if ((DAT_04566527 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<List<CNDPAJOLKFN>>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<CNDPAJOLKFN>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<CNDPAJOLKFN>_get_Item__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IEFEBEDLHNN>_get_Item__);
    FUN_01bab630(&Method_System_Collections_Generic_List<List<CNDPAJOLKFN>>_get_Item__);
    DAT_04566527 = 1;
  }
  OPNFCOGALLI__DPAGEPIGLEF(__this,(__this->fields).JGJCGMBHINN,in_x2);
  pSVar7 = (__this->fields).IFHALHIGBNM;
  if (pSVar7 != (System_Collections_Generic_List_List_CNDPAJOLKFN___o *)0x0) {
    iVar8 = 0;
    do {
      if ((pSVar7->fields)._size <= iVar8) {
        __this_03 = (__this->fields).NDBPNFLAKDL;
        if (__this_03 == (ECENNHNBAME_o *)0x0) break;
        fVar10 = ECENNHNBAME__BMOIBLLELCL(__this_03,(MethodInfo *)0x0);
        if (fVar10 != 0.0) {
          OPNFCOGALLI__HFBJGGAJFGK(__this,method_00);
        }
        pSVar7 = (__this->fields).IFHALHIGBNM;
        if ((pSVar7 == (System_Collections_Generic_List_List_CNDPAJOLKFN___o *)0x0) ||
           (method_01 = Method_System_Collections_Generic_List<List<CNDPAJOLKFN>>_get_Item__,
           pIVar4 = System_Collections_Generic_List<object>__get_Item
                              ((System_Collections_Generic_List_object__o *)pSVar7,0,
                               (MethodInfo_26E4ADC *)
                               Method_System_Collections_Generic_List<List<CNDPAJOLKFN>>_get_Item__)
           , pIVar4 == (Il2CppObject *)0x0)) break;
        iVar8 = (__this->fields).GICJKGDDOLE;
        iVar6 = *(int *)&pIVar4[1].monitor + -1;
        if (iVar8 == iVar6) {
          iVar6 = iVar8 + 1;
        }
        else {
          iVar1 = (__this->fields).GAKFAKFDELH;
          if (iVar1 < 2) {
            iVar5 = 1;
          }
          else {
            pGVar3 = (__this->fields).KOHECBJAFKG;
            if ((pGVar3 == (GBJGJEGPHKD_o *)0x0) ||
               (__this_04 = (pGVar3->fields).KOHECBJAFKG, __this_04 == (OLKKAIFGGAK_o *)0x0)) break;
            iVar2 = OLKKAIFGGAK__HEOILELLFLL(__this_04,(MethodInfo *)0x0);
            iVar5 = 0;
            if (iVar2 != 0) {
              iVar5 = iVar1 / iVar2;
            }
          }
          if (iVar5 + iVar8 <= iVar6) {
            iVar6 = iVar5 + iVar8;
          }
        }
        (__this->fields).GICJKGDDOLE = iVar6;
        (__this->fields).GOIGJAGADMO = (__this->fields).GAKFAKFDELH <= iVar6;
        OPNFCOGALLI__AANBBBENGJE(__this,(__this->fields).JLOKLHINMKG,method_01);
        return;
      }
      pGVar3 = (__this->fields).KOHECBJAFKG;
      if ((pGVar3 == (GBJGJEGPHKD_o *)0x0) ||
         (__this_00 = GBJGJEGPHKD__HMAAHELNECD(pGVar3,(MethodInfo *)0x0),
         __this_00 == (System_Collections_Generic_List_IEFEBEDLHNN__o *)0x0)) break;
      __this_01 = (IEFEBEDLHNN_o *)
                  System_Collections_Generic_List<object>__get_Item
                            ((System_Collections_Generic_List_object__o *)__this_00,iVar8,
                             Method_System_Collections_Generic_List<IEFEBEDLHNN>_get_Item__);
      pGVar3 = (__this->fields).KOHECBJAFKG;
      if (pGVar3 == (GBJGJEGPHKD_o *)0x0) break;
      if ((pGVar3->fields).FJHAMMNKBPN == false) {
        if (__this_01 == (IEFEBEDLHNN_o *)0x0) break;
LAB_032099b0:
        IEFEBEDLHNN__CFAAJCOBAEE(__this_01,(MethodInfo *)0x0);
        pSVar7 = (__this->fields).IFHALHIGBNM;
        if (pSVar7 == (System_Collections_Generic_List_List_CNDPAJOLKFN___o *)0x0) break;
        pCVar9 = (__this->fields).PHILCIHBBCB;
        __this_02 = (System_Collections_Generic_List_object__o *)
                    System_Collections_Generic_List<object>__get_Item
                              ((System_Collections_Generic_List_object__o *)pSVar7,iVar8,
                               (MethodInfo_26E4ADC *)
                               Method_System_Collections_Generic_List<List<CNDPAJOLKFN>>_get_Item__)
        ;
        if ((__this_02 == (System_Collections_Generic_List_object__o *)0x0) ||
           (PHCOHKNFGLE = (CNDPAJOLKFN_o *)
                          System_Collections_Generic_List<object>__get_Item
                                    (__this_02,(__this->fields).GICJKGDDOLE,
                                     Method_System_Collections_Generic_List<CNDPAJOLKFN>_get_Item__)
           , pCVar9 == (CNDPAJOLKFN_o *)0x0)) break;
        CNDPAJOLKFN__FOOHBJNHOKK(pCVar9,PHCOHKNFGLE,(MethodInfo *)0x0);
        pCVar9 = (__this->fields).PHILCIHBBCB;
        if (pCVar9 == (CNDPAJOLKFN_o *)0x0) break;
        CNDPAJOLKFN__LFENGGKOJDO(pCVar9,(__this->fields).AAOHMLDIGNK,(MethodInfo *)0x0);
        IEFEBEDLHNN__AGOEHONIGBH(__this_01,(__this->fields).PHILCIHBBCB,(MethodInfo *)0x0);
        IEFEBEDLHNN__KGBKLEOMMJL(__this_01,true,(MethodInfo *)0x0);
      }
      else {
        if (__this_01 == (IEFEBEDLHNN_o *)0x0) break;
        if ((__this_01->fields).FJHAMMNKBPN == false) goto LAB_032099b0;
      }
      pSVar7 = (__this->fields).IFHALHIGBNM;
      iVar8 = iVar8 + 1;
    } while (pSVar7 != (System_Collections_Generic_List_List_CNDPAJOLKFN___o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

