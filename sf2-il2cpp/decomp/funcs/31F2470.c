// NLPJLHOEAOE$$GMBPGKOHFKM @ RVA 0x31F2470

void NLPJLHOEAOE__GMBPGKOHFKM(NLPJLHOEAOE_o *__this,int64_t EFBCJHMOFAO,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_List_MEJIKMPNBNL__o *pSVar2;
  MEJIKMPNBNL_o *pMVar3;
  int iVar4;
  
  if ((DAT_04566dbb & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<MEJIKMPNBNL>_get_Count__);
                    /* try { // try from 032f24a4 to 033f24ab has its CatchHandler @ 032f25d8 */
    FUN_01bab630(&Method_System_Collections_Generic_List<MEJIKMPNBNL>_get_Item__);
    DAT_04566dbb = 1;
  }
  pSVar2 = (__this->fields).LBGLAKOLFAC;
  if (pSVar2 != (System_Collections_Generic_List_MEJIKMPNBNL__o *)0x0) {
    iVar1 = (pSVar2->fields)._size;
                    /* try { // try from 032f24c0 to 033f24c7 has its CatchHandler @ 032f25d0 */
    if (iVar1 < 1) {
LAB_032f2504:
      pSVar2 = (__this->fields).JFANFALIFFE;
                    /* try { // try from 032f2508 to 033f252b has its CatchHandler @ 032f25c4 */
      if (pSVar2 != (System_Collections_Generic_List_MEJIKMPNBNL__o *)0x0) {
        iVar1 = (pSVar2->fields)._size;
        if (iVar1 < 1) {
LAB_032f2550:
          pSVar2 = (__this->fields).NFJPOJNCKIM;
          if (pSVar2 != (System_Collections_Generic_List_MEJIKMPNBNL__o *)0x0) {
            iVar1 = (pSVar2->fields)._size;
            if (iVar1 < 1) {
              return;
            }
            iVar4 = 0;
            do {
              pMVar3 = (MEJIKMPNBNL_o *)
                       System_Collections_Generic_List<object>__get_Item
                                 ((System_Collections_Generic_List_object__o *)pSVar2,iVar4,
                                  Method_System_Collections_Generic_List<MEJIKMPNBNL>_get_Item__);
                    /* try { // try from 032f2574 to 033f257f has its CatchHandler @ 032f25c0 */
              if (pMVar3 == (MEJIKMPNBNL_o *)0x0) break;
                    /* try { // try from 032f2580 to 033f25b3 has its CatchHandler @ 032f23b8 */
              MEJIKMPNBNL__NCENBOMEPBN(pMVar3,EFBCJHMOFAO,(MethodInfo *)0x0);
              iVar4 = iVar4 + 1;
              if (iVar1 == iVar4) {
                return;
              }
              pSVar2 = (__this->fields).NFJPOJNCKIM;
            } while (pSVar2 != (System_Collections_Generic_List_MEJIKMPNBNL__o *)0x0);
          }
        }
        else {
          iVar4 = 0;
          do {
            pMVar3 = (MEJIKMPNBNL_o *)
                     System_Collections_Generic_List<object>__get_Item
                               ((System_Collections_Generic_List_object__o *)pSVar2,iVar4,
                                Method_System_Collections_Generic_List<MEJIKMPNBNL>_get_Item__);
            if (pMVar3 == (MEJIKMPNBNL_o *)0x0) break;
                    /* try { // try from 032f2534 to 033f253b has its CatchHandler @ 032f25d4 */
            MEJIKMPNBNL__NCENBOMEPBN(pMVar3,EFBCJHMOFAO,(MethodInfo *)0x0);
            iVar4 = iVar4 + 1;
            if (iVar1 == iVar4) goto LAB_032f2550;
            pSVar2 = (__this->fields).JFANFALIFFE;
          } while (pSVar2 != (System_Collections_Generic_List_MEJIKMPNBNL__o *)0x0);
        }
      }
    }
    else {
      iVar4 = 0;
      do {
        pMVar3 = (MEJIKMPNBNL_o *)
                 System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)pSVar2,iVar4,
                            Method_System_Collections_Generic_List<MEJIKMPNBNL>_get_Item__);
        if (pMVar3 == (MEJIKMPNBNL_o *)0x0) break;
        MEJIKMPNBNL__NCENBOMEPBN(pMVar3,EFBCJHMOFAO,(MethodInfo *)0x0);
        iVar4 = iVar4 + 1;
        if (iVar1 == iVar4) goto LAB_032f2504;
        pSVar2 = (__this->fields).LBGLAKOLFAC;
      } while (pSVar2 != (System_Collections_Generic_List_MEJIKMPNBNL__o *)0x0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

