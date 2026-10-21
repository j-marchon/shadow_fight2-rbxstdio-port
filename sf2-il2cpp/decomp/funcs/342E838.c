// GBJGJEGPHKD$$NDNPGAKJLHM @ RVA 0x342E838

void GBJGJEGPHKD__NDNPGAKJLHM(GBJGJEGPHKD_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  GBJGJEGPHKD_CMPNJPOADCA_Fields *pGVar2;
  GBJGJEGPHKD_GOCIPFHDKIO_o *pGVar3;
  GBJGJEGPHKD_NKABOJNJJJC_o *pGVar4;
  System_Collections_Generic_List_BIDBHCDLLHH__o *pSVar5;
  GBJGJEGPHKD_FHHNJPLBKEP_o *pGVar6;
  System_Collections_Generic_List_MGNDHCBAPEN_int__int___o *pSVar7;
  GBJGJEGPHKD_CMPNJPOADCA_o *pGVar8;
  System_Collections_Generic_List_GEBHIBIEAJE__o *pSVar9;
  System_Collections_Generic_List_JGHEMMGMLND__o *pSVar10;
  System_Collections_Generic_List_IEFEBEDLHNN__o *pSVar11;
  System_Collections_Generic_List_BCPODJMEKMJ__o *pSVar12;
  OLKKAIFGGAK_o **ppOVar13;
  
  if ((DAT_04568158 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<int,_int>>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<JGHEMMGMLND>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BIDBHCDLLHH>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IEFEBEDLHNN>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<GEBHIBIEAJE>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BCPODJMEKMJ>_Clear__);
    DAT_04568158 = 1;
  }
  pGVar3 = (__this->fields).HJCKNKNHFEK;
  if ((pGVar3 != (GBJGJEGPHKD_GOCIPFHDKIO_o *)0x0) &&
     (pSVar9 = (pGVar3->fields).AMJPHGIJPON,
     pSVar9 != (System_Collections_Generic_List_GEBHIBIEAJE__o *)0x0)) {
    iVar1 = (pSVar9->fields)._size;
    (pSVar9->fields)._size = 0;
    (pSVar9->fields)._version = (pSVar9->fields)._version + 1;
    if (0 < iVar1) {
      System_Array__Clear((System_Array_o *)(pSVar9->fields)._items,0,iVar1,(MethodInfo *)0x0);
      pGVar3 = (__this->fields).HJCKNKNHFEK;
      if (pGVar3 == (GBJGJEGPHKD_GOCIPFHDKIO_o *)0x0) goto LAB_0352eae0;
    }
    pSVar9 = (pGVar3->fields).BEFGKHJKHJG;
    if (pSVar9 != (System_Collections_Generic_List_GEBHIBIEAJE__o *)0x0) {
      iVar1 = (pSVar9->fields)._size;
      (pSVar9->fields)._size = 0;
      (pSVar9->fields)._version = (pSVar9->fields)._version + 1;
      if (0 < iVar1) {
        System_Array__Clear((System_Array_o *)(pSVar9->fields)._items,0,iVar1,(MethodInfo *)0x0);
        pGVar3 = (__this->fields).HJCKNKNHFEK;
        if (pGVar3 == (GBJGJEGPHKD_GOCIPFHDKIO_o *)0x0) goto LAB_0352eae0;
      }
      pSVar9 = (pGVar3->fields).CKBPKJHOEAK;
      if (pSVar9 != (System_Collections_Generic_List_GEBHIBIEAJE__o *)0x0) {
        iVar1 = (pSVar9->fields)._size;
        (pSVar9->fields)._size = 0;
        (pSVar9->fields)._version = (pSVar9->fields)._version + 1;
        if (0 < iVar1) {
          System_Array__Clear((System_Array_o *)(pSVar9->fields)._items,0,iVar1,(MethodInfo *)0x0);
          pGVar3 = (__this->fields).HJCKNKNHFEK;
          if (pGVar3 == (GBJGJEGPHKD_GOCIPFHDKIO_o *)0x0) goto LAB_0352eae0;
        }
        pSVar9 = (pGVar3->fields).DMFCLEMPPIM;
        if (pSVar9 != (System_Collections_Generic_List_GEBHIBIEAJE__o *)0x0) {
          iVar1 = (pSVar9->fields)._size;
          (pSVar9->fields)._size = 0;
          (pSVar9->fields)._version = (pSVar9->fields)._version + 1;
          if (0 < iVar1) {
            System_Array__Clear((System_Array_o *)(pSVar9->fields)._items,0,iVar1,(MethodInfo *)0x0)
            ;
          }
          pGVar4 = (__this->fields).CBMCFIGHLLA;
          if ((pGVar4 != (GBJGJEGPHKD_NKABOJNJJJC_o *)0x0) &&
             (pSVar10 = (pGVar4->fields).OFIGHMECPGA,
             pSVar10 != (System_Collections_Generic_List_JGHEMMGMLND__o *)0x0)) {
            iVar1 = (pSVar10->fields)._size;
            (pSVar10->fields)._size = 0;
            (pSVar10->fields)._version = (pSVar10->fields)._version + 1;
            if (0 < iVar1) {
              System_Array__Clear((System_Array_o *)(pSVar10->fields)._items,0,iVar1,
                                  (MethodInfo *)0x0);
              pGVar4 = (__this->fields).CBMCFIGHLLA;
              if (pGVar4 == (GBJGJEGPHKD_NKABOJNJJJC_o *)0x0) goto LAB_0352eae0;
            }
            pSVar5 = (pGVar4->fields).KIDEMGIBKHC;
            if (pSVar5 != (System_Collections_Generic_List_BIDBHCDLLHH__o *)0x0) {
              iVar1 = (pSVar5->fields)._size;
              (pSVar5->fields)._size = 0;
              (pSVar5->fields)._version = (pSVar5->fields)._version + 1;
              if (0 < iVar1) {
                System_Array__Clear((System_Array_o *)(pSVar5->fields)._items,0,iVar1,
                                    (MethodInfo *)0x0);
              }
              pGVar6 = (__this->fields).DGPKPHAHOJP;
              if ((pGVar6 != (GBJGJEGPHKD_FHHNJPLBKEP_o *)0x0) &&
                 (pSVar7 = (pGVar6->fields).MAKMHFGIKHL,
                 pSVar7 != (System_Collections_Generic_List_MGNDHCBAPEN_int__int___o *)0x0)) {
                iVar1 = (pSVar7->fields)._size;
                (pSVar7->fields)._size = 0;
                (pSVar7->fields)._version = (pSVar7->fields)._version + 1;
                if (0 < iVar1) {
                  System_Array__Clear((System_Array_o *)(pSVar7->fields)._items,0,iVar1,
                                      (MethodInfo *)0x0);
                }
                pGVar8 = (__this->fields).EOIPAPCMGGF;
                if ((pGVar8 != (GBJGJEGPHKD_CMPNJPOADCA_o *)0x0) &&
                   (pSVar11 = (pGVar8->fields).AMJPHGIJPON,
                   pSVar11 != (System_Collections_Generic_List_IEFEBEDLHNN__o *)0x0)) {
                  iVar1 = (pSVar11->fields)._size;
                  (pSVar11->fields)._size = 0;
                  (pSVar11->fields)._version = (pSVar11->fields)._version + 1;
                  if (0 < iVar1) {
                    System_Array__Clear((System_Array_o *)(pSVar11->fields)._items,0,iVar1,
                                        (MethodInfo *)0x0);
                    pGVar8 = (__this->fields).EOIPAPCMGGF;
                    if (pGVar8 == (GBJGJEGPHKD_CMPNJPOADCA_o *)0x0) goto LAB_0352eae0;
                  }
                  pSVar12 = (pGVar8->fields).NNBACGACIKH;
                  if (pSVar12 != (System_Collections_Generic_List_BCPODJMEKMJ__o *)0x0) {
                    iVar1 = (pSVar12->fields)._size;
                    (pSVar12->fields)._size = 0;
                    (pSVar12->fields)._version = (pSVar12->fields)._version + 1;
                    if (0 < iVar1) {
                      System_Array__Clear((System_Array_o *)(pSVar12->fields)._items,0,iVar1,
                                          (MethodInfo *)0x0);
                      pGVar8 = (__this->fields).EOIPAPCMGGF;
                      if (pGVar8 == (GBJGJEGPHKD_CMPNJPOADCA_o *)0x0) goto LAB_0352eae0;
                    }
                    pGVar2 = &pGVar8->fields;
                    if (pGVar2->LNBKBMNLJNG != (IEFEBEDLHNN_o *)0x0) {
                      pGVar2->LNBKBMNLJNG = (IEFEBEDLHNN_o *)0x0;
                      thunk_FUN_01c20e04(pGVar2,0);
                      pGVar8 = (__this->fields).EOIPAPCMGGF;
                      if (pGVar8 == (GBJGJEGPHKD_CMPNJPOADCA_o *)0x0) goto LAB_0352eae0;
                    }
                    pSVar11 = (pGVar8->fields).DMFCLEMPPIM;
                    if (pSVar11 != (System_Collections_Generic_List_IEFEBEDLHNN__o *)0x0) {
                      iVar1 = (pSVar11->fields)._size;
                      (pSVar11->fields)._size = 0;
                      (pSVar11->fields)._version = (pSVar11->fields)._version + 1;
                      if (0 < iVar1) {
                        System_Array__Clear((System_Array_o *)(pSVar11->fields)._items,0,iVar1,
                                            (MethodInfo *)0x0);
                      }
                      ppOVar13 = &(__this->fields).KOHECBJAFKG;
                      *ppOVar13 = (OLKKAIFGGAK_o *)0x0;
                      thunk_FUN_01c20e04(ppOVar13,0);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_0352eae0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

