// GBJGJEGPHKD$$KJJJHPFIDKH @ RVA 0x342ECD4

void GBJGJEGPHKD__KJJJHPFIDKH
               (GBJGJEGPHKD_o *__this,System_Collections_Generic_List_CNDPAJOLKFN__o *OABFBHCCODF,
               MethodInfo *method)

{
  int iVar1;
  int32_t index;
  CNDPAJOLKFN_o *pCVar2;
  System_Collections_Generic_List_IEFEBEDLHNN__o *pSVar3;
  GBJGJEGPHKD_CMPNJPOADCA_o *pGVar4;
  IEFEBEDLHNN_o *pIVar5;
  CNDPAJOLKFN_o *pCVar6;
  int index_00;
  
  if ((DAT_0456815b & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<CNDPAJOLKFN>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<CNDPAJOLKFN>_get_Item__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IEFEBEDLHNN>_get_Item__);
    DAT_0456815b = 1;
  }
  index = GBJGJEGPHKD__HBCACOFLPCI(__this,(__this->fields).HICKHACBDAC,method);
  pGVar4 = (__this->fields).EOIPAPCMGGF;
  if (((pGVar4 != (GBJGJEGPHKD_CMPNJPOADCA_o *)0x0) &&
      (pIVar5 = (pGVar4->fields).LNBKBMNLJNG, pIVar5 != (IEFEBEDLHNN_o *)0x0)) &&
     (OABFBHCCODF != (System_Collections_Generic_List_CNDPAJOLKFN__o *)0x0)) {
    pCVar6 = (pIVar5->fields).CNMHHKAMGPI;
    pCVar2 = (CNDPAJOLKFN_o *)
             System_Collections_Generic_List<object>__get_Item
                       ((System_Collections_Generic_List_object__o *)OABFBHCCODF,index,
                        Method_System_Collections_Generic_List<CNDPAJOLKFN>_get_Item__);
    pCVar2 = CNDPAJOLKFN__MPOCFELGHDK(pCVar6,pCVar2,(MethodInfo *)0x0);
    if (pCVar2 != (CNDPAJOLKFN_o *)0x0) {
      (pCVar2->fields).super.JOLEIODMLFL = 0.0;
      iVar1 = (OABFBHCCODF->fields)._size;
      if (0 < iVar1) {
        index_00 = 0;
        do {
          pGVar4 = (__this->fields).EOIPAPCMGGF;
          if ((pGVar4 == (GBJGJEGPHKD_CMPNJPOADCA_o *)0x0) ||
             (pSVar3 = (pGVar4->fields).DMFCLEMPPIM,
             pSVar3 == (System_Collections_Generic_List_IEFEBEDLHNN__o *)0x0)) goto LAB_0352ee5c;
          pIVar5 = (IEFEBEDLHNN_o *)
                   System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)pSVar3,index_00,
                              Method_System_Collections_Generic_List<IEFEBEDLHNN>_get_Item__);
          pCVar6 = (CNDPAJOLKFN_o *)
                   System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)OABFBHCCODF,index_00,
                              Method_System_Collections_Generic_List<CNDPAJOLKFN>_get_Item__);
          pCVar6 = CNDPAJOLKFN__DJOFPNGJPFM(pCVar6,pCVar2,(MethodInfo *)0x0);
          if (pIVar5 == (IEFEBEDLHNN_o *)0x0) goto LAB_0352ee5c;
          IEFEBEDLHNN__AGOEHONIGBH(pIVar5,pCVar6,(MethodInfo *)0x0);
          pGVar4 = (__this->fields).EOIPAPCMGGF;
          if ((pGVar4 == (GBJGJEGPHKD_CMPNJPOADCA_o *)0x0) ||
             (pSVar3 = (pGVar4->fields).DMFCLEMPPIM,
             pSVar3 == (System_Collections_Generic_List_IEFEBEDLHNN__o *)0x0)) goto LAB_0352ee5c;
          pIVar5 = (IEFEBEDLHNN_o *)
                   System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)pSVar3,index_00,
                              Method_System_Collections_Generic_List<IEFEBEDLHNN>_get_Item__);
          pCVar6 = (CNDPAJOLKFN_o *)
                   System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)OABFBHCCODF,index_00,
                              Method_System_Collections_Generic_List<CNDPAJOLKFN>_get_Item__);
          pCVar6 = CNDPAJOLKFN__DJOFPNGJPFM(pCVar6,pCVar2,(MethodInfo *)0x0);
          if (pIVar5 == (IEFEBEDLHNN_o *)0x0) goto LAB_0352ee5c;
          IEFEBEDLHNN__LCOGNIMMOFL(pIVar5,pCVar6,(MethodInfo *)0x0);
          index_00 = index_00 + 1;
        } while (iVar1 != index_00);
      }
      return;
    }
  }
LAB_0352ee5c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

