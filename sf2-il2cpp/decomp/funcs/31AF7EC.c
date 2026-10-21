// IGPDCHBJAPD.JMPAGIGEFME$$NDNPGAKJLHM @ RVA 0x31AF7EC

void IGPDCHBJAPD_JMPAGIGEFME__NDNPGAKJLHM(IGPDCHBJAPD_JMPAGIGEFME_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  System_Collections_Generic_List_IGPDCHBJAPD_LDCCMPFIKHF__o *pSVar2;
  System_Collections_Generic_List_IGPDCHBJAPD_AKGCHFPLJEC__o *pSVar3;
  System_Collections_Generic_List_IGPDCHBJAPD_DHAPBDACLMI__o *pSVar4;
  MFFKCPDBFPG_o **ppMVar5;
  
  if ((DAT_04566b78 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<IGPDCHBJAPD_DHAPBDACLMI>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IGPDCHBJAPD_AKGCHFPLJEC>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IGPDCHBJAPD_LDCCMPFIKHF>_Clear__);
    DAT_04566b78 = 1;
  }
  pSVar2 = (__this->fields).GHAAKPDHIJJ;
  (__this->fields).DCDLMCEEOCC = 0;
  (__this->fields).DJHKCMKJEFP = 0;
  (__this->fields).COAIOPFEFHM = 0;
  if (pSVar2 != (System_Collections_Generic_List_IGPDCHBJAPD_LDCCMPFIKHF__o *)0x0) {
    iVar1 = (pSVar2->fields)._size;
    (pSVar2->fields)._size = 0;
    (pSVar2->fields)._version = (pSVar2->fields)._version + 1;
    if (0 < iVar1) {
      System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,iVar1,(MethodInfo *)0x0);
    }
    pSVar3 = (__this->fields).GMCEHJAIFBJ;
    if (pSVar3 != (System_Collections_Generic_List_IGPDCHBJAPD_AKGCHFPLJEC__o *)0x0) {
      iVar1 = (pSVar3->fields)._size;
      (pSVar3->fields)._size = 0;
      (pSVar3->fields)._version = (pSVar3->fields)._version + 1;
      if (0 < iVar1) {
        System_Array__Clear((System_Array_o *)(pSVar3->fields)._items,0,iVar1,(MethodInfo *)0x0);
      }
      pSVar4 = (__this->fields).OJFMFMHCPOA;
      if (pSVar4 != (System_Collections_Generic_List_IGPDCHBJAPD_DHAPBDACLMI__o *)0x0) {
        iVar1 = (pSVar4->fields)._size;
        (pSVar4->fields)._size = 0;
        (pSVar4->fields)._version = (pSVar4->fields)._version + 1;
        if (0 < iVar1) {
          System_Array__Clear((System_Array_o *)(pSVar4->fields)._items,0,iVar1,(MethodInfo *)0x0);
        }
        ppMVar5 = &(__this->fields).GPDMCLBBPAD;
        *ppMVar5 = (MFFKCPDBFPG_o *)0x0;
        thunk_FUN_01c20e04(ppMVar5,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

