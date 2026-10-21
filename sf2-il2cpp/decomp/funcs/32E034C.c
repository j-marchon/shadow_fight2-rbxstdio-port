// DOPEEDABNEK$$MLENOBKGHHF @ RVA 0x32E034C

void DOPEEDABNEK__MLENOBKGHHF(DOPEEDABNEK_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  System_Collections_Generic_List_HOOAAGABMBL__o *pSVar2;
  
  if ((DAT_045675ea & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_Clear__);
    DAT_045675ea = 1;
  }
  pSVar2 = (__this->fields)._BDIDINACBBH_k__BackingField;
  if (pSVar2 != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
    iVar1 = (pSVar2->fields)._size;
    (pSVar2->fields)._size = 0;
    (pSVar2->fields)._version = (pSVar2->fields)._version + 1;
    if (0 < iVar1) {
      System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,iVar1,(MethodInfo *)0x0);
    }
    pSVar2 = (__this->fields)._MOCBNLFMNAL_k__BackingField;
    if (pSVar2 != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
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

