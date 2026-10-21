// GBJGJEGPHKD$$KJJJHPFIDKH @ RVA 0x342EF38

void GBJGJEGPHKD__KJJJHPFIDKH
               (GBJGJEGPHKD_o *__this,System_Collections_Generic_List_CNDPAJOLKFN__o *OABFBHCCODF,
               IEFEBEDLHNN_o *IIBPJLKGEBP,MethodInfo *method)

{
  int iVar1;
  CNDPAJOLKFN_o *pCVar2;
  System_Collections_Generic_List_IEFEBEDLHNN__o *pSVar3;
  IEFEBEDLHNN_o *pIVar4;
  GBJGJEGPHKD_CMPNJPOADCA_o *pGVar5;
  int index;
  CNDPAJOLKFN_o *pCVar6;
  
  if ((DAT_0456815c & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<CNDPAJOLKFN>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<CNDPAJOLKFN>_get_Item__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IEFEBEDLHNN>_get_Item__);
    DAT_0456815c = 1;
  }
  if ((IIBPJLKGEBP != (IEFEBEDLHNN_o *)0x0) &&
     (OABFBHCCODF != (System_Collections_Generic_List_CNDPAJOLKFN__o *)0x0)) {
    pCVar6 = (IIBPJLKGEBP->fields).CNMHHKAMGPI;
    pCVar2 = (CNDPAJOLKFN_o *)
             System_Collections_Generic_List<object>__get_Item
                       ((System_Collections_Generic_List_object__o *)OABFBHCCODF,
                        (IIBPJLKGEBP->fields).FLDBGCIKMKA,
                        Method_System_Collections_Generic_List<CNDPAJOLKFN>_get_Item__);
    pCVar2 = CNDPAJOLKFN__MPOCFELGHDK(pCVar6,pCVar2,(MethodInfo *)0x0);
    if (pCVar2 != (CNDPAJOLKFN_o *)0x0) {
      (pCVar2->fields).super.JOLEIODMLFL = 0.0;
      iVar1 = (OABFBHCCODF->fields)._size;
      if (0 < iVar1) {
        index = 0;
        do {
          pGVar5 = (__this->fields).EOIPAPCMGGF;
          if ((pGVar5 == (GBJGJEGPHKD_CMPNJPOADCA_o *)0x0) ||
             (pSVar3 = (pGVar5->fields).DMFCLEMPPIM,
             pSVar3 == (System_Collections_Generic_List_IEFEBEDLHNN__o *)0x0)) goto LAB_0352f0ac;
          pIVar4 = (IEFEBEDLHNN_o *)
                   System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)pSVar3,index,
                              Method_System_Collections_Generic_List<IEFEBEDLHNN>_get_Item__);
          pCVar6 = (CNDPAJOLKFN_o *)
                   System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)OABFBHCCODF,index,
                              Method_System_Collections_Generic_List<CNDPAJOLKFN>_get_Item__);
          pCVar6 = CNDPAJOLKFN__DJOFPNGJPFM(pCVar6,pCVar2,(MethodInfo *)0x0);
          if (pIVar4 == (IEFEBEDLHNN_o *)0x0) goto LAB_0352f0ac;
          IEFEBEDLHNN__AGOEHONIGBH(pIVar4,pCVar6,(MethodInfo *)0x0);
          pGVar5 = (__this->fields).EOIPAPCMGGF;
          if ((pGVar5 == (GBJGJEGPHKD_CMPNJPOADCA_o *)0x0) ||
             (pSVar3 = (pGVar5->fields).DMFCLEMPPIM,
             pSVar3 == (System_Collections_Generic_List_IEFEBEDLHNN__o *)0x0)) goto LAB_0352f0ac;
          pIVar4 = (IEFEBEDLHNN_o *)
                   System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)pSVar3,index,
                              Method_System_Collections_Generic_List<IEFEBEDLHNN>_get_Item__);
          pCVar6 = (CNDPAJOLKFN_o *)
                   System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)OABFBHCCODF,index,
                              Method_System_Collections_Generic_List<CNDPAJOLKFN>_get_Item__);
          pCVar6 = CNDPAJOLKFN__DJOFPNGJPFM(pCVar6,pCVar2,(MethodInfo *)0x0);
          if (pIVar4 == (IEFEBEDLHNN_o *)0x0) goto LAB_0352f0ac;
          IEFEBEDLHNN__LCOGNIMMOFL(pIVar4,pCVar6,(MethodInfo *)0x0);
          index = index + 1;
        } while (iVar1 != index);
      }
      return;
    }
  }
LAB_0352f0ac:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

