// KAHMAJKJMBK$$DNKKBDLAGHG @ RVA 0x34BE730

void KAHMAJKJMBK__DNKKBDLAGHG
               (KAHMAJKJMBK_o *__this,CNIGOFCKBGI_o *GOAHBPBJCKC,bool GKAFKJNCMFJ,MethodInfo *method
               )

{
  System_Collections_Generic_List_CNIGOFCKBGI__o *pSVar1;
  CNIGOFCKBGI_o *pCVar2;
  MethodInfo *pMVar3;
  int iVar4;
  
  if ((DAT_04568615 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<CNIGOFCKBGI>_Remove__);
    FUN_01bab630(&Method_System_Collections_Generic_List<CNIGOFCKBGI>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<CNIGOFCKBGI>_get_Item__);
    DAT_04568615 = 1;
  }
  if (!GKAFKJNCMFJ) {
    if (GOAHBPBJCKC == (CNIGOFCKBGI_o *)0x0) goto LAB_035be8a4;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035be6fc with catch @ 035be79c
                        */
    if ((GOAHBPBJCKC->fields).JGJNBILDCHK == 3) {
      pSVar1 = (__this->fields).OIJDFMHDHHK;
      if (pSVar1 != (System_Collections_Generic_List_CNIGOFCKBGI__o *)0x0) {
        iVar4 = 0;
        do {
          while( true ) {
                    /* try { // try from 035be7b4 to 036be7cb has its CatchHandler @ 035be890 */
            if ((pSVar1->fields)._size <= iVar4) {
              return;
            }
            pCVar2 = (CNIGOFCKBGI_o *)
                     System_Collections_Generic_List<object>__get_Item
                               ((System_Collections_Generic_List_object__o *)pSVar1,iVar4,
                                Method_System_Collections_Generic_List<CNIGOFCKBGI>_get_Item__);
                    /* try { // try from 035be7cc to 036be87f has its CatchHandler @ 035be6a8 */
            if (pCVar2 == (CNIGOFCKBGI_o *)0x0) goto LAB_035be8a4;
            if ((CNIGOFCKBGI_o *)(pCVar2->fields).super.LKKBHIEHNAM == GOAHBPBJCKC) break;
            pSVar1 = (__this->fields).OIJDFMHDHHK;
            iVar4 = iVar4 + 1;
            if (pSVar1 == (System_Collections_Generic_List_CNIGOFCKBGI__o *)0x0) goto LAB_035be8a4;
          }
          pSVar1 = (__this->fields).OIJDFMHDHHK;
          if (pSVar1 == (System_Collections_Generic_List_CNIGOFCKBGI__o *)0x0) break;
          pMVar3 = Method_System_Collections_Generic_List<CNIGOFCKBGI>_Remove__;
          System_Collections_Generic_List<object>__Remove
                    ((System_Collections_Generic_List_object__o *)pSVar1,(Il2CppObject *)pCVar2,
                     (MethodInfo_26E62D4 *)
                     Method_System_Collections_Generic_List<CNIGOFCKBGI>_Remove__);
          KAHMAJKJMBK__LMBIDDJLDDJ(__this,pCVar2,pMVar3);
          pSVar1 = (__this->fields).OIJDFMHDHHK;
        } while (pSVar1 != (System_Collections_Generic_List_CNIGOFCKBGI__o *)0x0);
      }
      goto LAB_035be8a4;
    }
  }
  pSVar1 = (__this->fields).OIJDFMHDHHK;
  if (pSVar1 != (System_Collections_Generic_List_CNIGOFCKBGI__o *)0x0) {
    iVar4 = 0;
    do {
      if ((pSVar1->fields)._size <= iVar4) {
        return;
      }
      pCVar2 = (CNIGOFCKBGI_o *)
               System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar1,iVar4,
                          Method_System_Collections_Generic_List<CNIGOFCKBGI>_get_Item__);
      if (pCVar2 == GOAHBPBJCKC) {
        pSVar1 = (__this->fields).OIJDFMHDHHK;
        if (pSVar1 != (System_Collections_Generic_List_CNIGOFCKBGI__o *)0x0) {
          pMVar3 = Method_System_Collections_Generic_List<CNIGOFCKBGI>_Remove__;
                    /* try { // try from 035be880 to 036be88f has its CatchHandler @ 035be890 */
          System_Collections_Generic_List<object>__Remove
                    ((System_Collections_Generic_List_object__o *)pSVar1,(Il2CppObject *)pCVar2,
                     (MethodInfo_26E62D4 *)
                     Method_System_Collections_Generic_List<CNIGOFCKBGI>_Remove__);
                    /* catch() { ... } // from try @ 035be7b4 with catch @ 035be890
                       catch() { ... } // from try @ 035be880 with catch @ 035be890 */
                    /* try { // try from 035be894 to 036be897 has its CatchHandler @ 035be8a0 */
                    /* try { // try from 035be898 to 036be8a3 has its CatchHandler @ 035be6a8 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 035be894 with catch @ 035be8a0
                        */
          KAHMAJKJMBK__LMBIDDJLDDJ(__this,GOAHBPBJCKC,pMVar3);
          return;
        }
        break;
      }
      pSVar1 = (__this->fields).OIJDFMHDHHK;
      iVar4 = iVar4 + 1;
    } while (pSVar1 != (System_Collections_Generic_List_CNIGOFCKBGI__o *)0x0);
  }
LAB_035be8a4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

