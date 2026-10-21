// IPPEHAJADOO$$DGLJCGNHLIG @ RVA 0x31412F0

void IPPEHAJADOO__DGLJCGNHLIG(IPPEHAJADOO_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  System_Collections_Generic_List_ECAIEGNAOAL__o *pSVar2;
  
  if ((DAT_04566755 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<ECAIEGNAOAL>_Clear__);
    DAT_04566755 = 1;
  }
  pSVar2 = (__this->fields).FNMHCOJPGMJ;
  if (pSVar2 != (System_Collections_Generic_List_ECAIEGNAOAL__o *)0x0) {
    iVar1 = (pSVar2->fields)._size;
    (pSVar2->fields)._size = 0;
    (pSVar2->fields)._version = (pSVar2->fields)._version + 1;
    if (0 < iVar1) {
      System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,iVar1,(MethodInfo *)0x0);
    }
    pSVar2 = (__this->fields).KBOMJBFAKKA;
    if (pSVar2 != (System_Collections_Generic_List_ECAIEGNAOAL__o *)0x0) {
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

