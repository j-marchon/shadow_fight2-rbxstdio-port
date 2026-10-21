// OPNFCOGALLI$$KCOKKAHCOLG @ RVA 0x3106B30

void OPNFCOGALLI__KCOKKAHCOLG
               (OPNFCOGALLI_o *__this,int32_t CEGBEKBFMGK,int32_t POEJBIANODB,MethodInfo *method)

{
  int32_t iVar1;
  OLKKAIFGGAK_o *__this_00;
  MBDJMJLHFOO_MJFFMMHJCNB_o *pMVar2;
  CNDPAJOLKFN_o *FCPALKBOIFD;
  CNDPAJOLKFN_o *KMCNNACKBFO;
  CNDPAJOLKFN_o *IHNDAEJMGFP;
  System_Collections_Generic_List_CNDPAJOLKFN__o *KENFFDHLNDA;
  MethodInfo *method_00;
  GBJGJEGPHKD_o *pGVar3;
  MBDJMJLHFOO_o *pMVar4;
  BMBCEECINLK_o *pBVar5;
  System_Collections_Generic_List_List_CNDPAJOLKFN___o *pSVar6;
  System_Collections_Generic_List_CNDPAJOLKFN__o *__this_01;
  System_Collections_Generic_List_CNDPAJOLKFN__o *__this_02;
  System_Collections_Generic_List_CNDPAJOLKFN__o *__this_03;
  int iVar7;
  
  if ((DAT_04566511 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<List<CNDPAJOLKFN>>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<CNDPAJOLKFN>_get_Item__);
    FUN_01bab630(&Method_System_Collections_Generic_List<List<CNDPAJOLKFN>>_get_Item__);
    DAT_04566511 = 1;
  }
  if ((CEGBEKBFMGK == -1) || (POEJBIANODB == -1)) {
    CEGBEKBFMGK = (__this->fields).BPIIACENHPE;
    POEJBIANODB = CEGBEKBFMGK + 1;
  }
  pGVar3 = (__this->fields).KOHECBJAFKG;
  (__this->fields).KDJBKDMJKHK = 1;
  if ((pGVar3 != (GBJGJEGPHKD_o *)0x0) &&
     (__this_00 = (pGVar3->fields).KOHECBJAFKG, __this_00 != (OLKKAIFGGAK_o *)0x0)) {
    iVar1 = OLKKAIFGGAK__HEOILELLFLL(__this_00,(MethodInfo *)0x0);
    (__this->fields).GAKFAKFDELH = iVar1;
    (__this->fields).KPJLPAIIDHB = 1.0 / (float)iVar1;
    iVar1 = OPNFCOGALLI__HAEEPKKJOBL(__this,method_00);
    pMVar4 = (__this->fields).EJNOBBDDBDO;
    if (pMVar4 != (MBDJMJLHFOO_o *)0x0) {
      iVar7 = (__this->fields).GAKFAKFDELH;
      pMVar2 = MBDJMJLHFOO__HBMICHOLLMF(pMVar4,CEGBEKBFMGK,(MethodInfo *)0x0);
      if ((pMVar2 != (MBDJMJLHFOO_MJFFMMHJCNB_o *)0x0) &&
         (pMVar4 = (__this->fields).EJNOBBDDBDO, pMVar4 != (MBDJMJLHFOO_o *)0x0)) {
        __this_01 = (pMVar2->fields).KOANCCDDBDA;
        pMVar2 = MBDJMJLHFOO__HBMICHOLLMF(pMVar4,POEJBIANODB,(MethodInfo *)0x0);
        if ((pMVar2 != (MBDJMJLHFOO_MJFFMMHJCNB_o *)0x0) &&
           (pMVar4 = (__this->fields).EJNOBBDDBDO, pMVar4 != (MBDJMJLHFOO_o *)0x0)) {
          __this_02 = (pMVar2->fields).KOANCCDDBDA;
          pMVar2 = MBDJMJLHFOO__HBMICHOLLMF(pMVar4,POEJBIANODB + 1,(MethodInfo *)0x0);
          if ((pMVar2 != (MBDJMJLHFOO_MJFFMMHJCNB_o *)0x0) &&
             (pBVar5 = (__this->fields).KDKAOJIEDCG, pBVar5 != (BMBCEECINLK_o *)0x0)) {
            __this_03 = (pMVar2->fields).KOANCCDDBDA;
            BMBCEECINLK__GIMAJOGGBHM(pBVar5,iVar7 * (iVar1 + 1),(MethodInfo *)0x0);
            pSVar6 = (__this->fields).IFHALHIGBNM;
            if (pSVar6 != (System_Collections_Generic_List_List_CNDPAJOLKFN___o *)0x0) {
              iVar7 = 0;
              while( true ) {
                if ((pSVar6->fields)._size <= iVar7) {
                  (__this->fields).GICJKGDDOLE = 0;
                  return;
                }
                if (__this_01 == (System_Collections_Generic_List_CNDPAJOLKFN__o *)0x0) break;
                pBVar5 = (__this->fields).KDKAOJIEDCG;
                FCPALKBOIFD = (CNDPAJOLKFN_o *)
                              System_Collections_Generic_List<object>__get_Item
                                        ((System_Collections_Generic_List_object__o *)__this_01,
                                         iVar7,
                                         Method_System_Collections_Generic_List<CNDPAJOLKFN>_get_Item__
                                        );
                if ((__this_02 == (System_Collections_Generic_List_CNDPAJOLKFN__o *)0x0) ||
                   (KMCNNACKBFO = (CNDPAJOLKFN_o *)
                                  System_Collections_Generic_List<object>__get_Item
                                            ((System_Collections_Generic_List_object__o *)__this_02,
                                             iVar7,
                                             Method_System_Collections_Generic_List<CNDPAJOLKFN>_get_Item__
                                            ),
                   __this_03 == (System_Collections_Generic_List_CNDPAJOLKFN__o *)0x0)) break;
                IHNDAEJMGFP = (CNDPAJOLKFN_o *)
                              System_Collections_Generic_List<object>__get_Item
                                        ((System_Collections_Generic_List_object__o *)__this_03,
                                         iVar7,
                                         Method_System_Collections_Generic_List<CNDPAJOLKFN>_get_Item__
                                        );
                pSVar6 = (__this->fields).IFHALHIGBNM;
                if ((pSVar6 == (System_Collections_Generic_List_List_CNDPAJOLKFN___o *)0x0) ||
                   (KENFFDHLNDA = (System_Collections_Generic_List_CNDPAJOLKFN__o *)
                                  System_Collections_Generic_List<object>__get_Item
                                            ((System_Collections_Generic_List_object__o *)pSVar6,
                                             iVar7,
                                             Method_System_Collections_Generic_List<List<CNDPAJOLKFN>>_get_Item__
                                            ), pBVar5 == (BMBCEECINLK_o *)0x0)) break;
                BMBCEECINLK__APNHOODIJNO
                          (pBVar5,FCPALKBOIFD,KMCNNACKBFO,IHNDAEJMGFP,KENFFDHLNDA,(MethodInfo *)0x0)
                ;
                pSVar6 = (__this->fields).IFHALHIGBNM;
                iVar7 = iVar7 + 1;
                if (pSVar6 == (System_Collections_Generic_List_List_CNDPAJOLKFN___o *)0x0) break;
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

