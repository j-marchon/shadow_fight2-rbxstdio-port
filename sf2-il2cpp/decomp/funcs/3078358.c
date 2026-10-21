// CFMDGLMCNIL$$ONBHMFBONFL @ RVA 0x3078358

void CFMDGLMCNIL__ONBHMFBONFL(CFMDGLMCNIL_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  System_Collections_Generic_List_OHPOFOPJIMB__o *pSVar2;
  
  if ((DAT_04565fbe & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<OHPOFOPJIMB>_Clear__);
    DAT_04565fbe = 1;
  }
  pSVar2 = (__this->fields).HHMMOAAKGCB;
  if (pSVar2 != (System_Collections_Generic_List_OHPOFOPJIMB__o *)0x0) {
    iVar1 = (pSVar2->fields)._size;
    (pSVar2->fields)._size = 0;
    (pSVar2->fields)._version = (pSVar2->fields)._version + 1;
    if (0 < iVar1) {
      System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,iVar1,(MethodInfo *)0x0);
    }
    pSVar2 = (__this->fields).MPMNLJJLADE;
    if (pSVar2 != (System_Collections_Generic_List_OHPOFOPJIMB__o *)0x0) {
      iVar1 = (pSVar2->fields)._size;
      (pSVar2->fields)._size = 0;
      (pSVar2->fields)._version = (pSVar2->fields)._version + 1;
      if (0 < iVar1) {
        System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,iVar1,(MethodInfo *)0x0);
        return;
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

