// MCEIBCKPIAD$$DGLJCGNHLIG @ RVA 0x3163408

void MCEIBCKPIAD__DGLJCGNHLIG(MCEIBCKPIAD_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  System_Collections_Generic_List_KKLFGJCMPDA__o *pSVar2;
  
  if ((DAT_04566894 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<KKLFGJCMPDA>_Clear__);
                    /* try { // try from 0326342c to 0336351f has its CatchHandler @ 0326342c
                       catch() { ... } // from try @ 0326342c with catch @ 0326342c
                       catch() { ... } // from try @ 032635a0 with catch @ 0326342c
                       catch() { ... } // from try @ 032635e0 with catch @ 0326342c
                       catch() { ... } // from try @ 03263610 with catch @ 0326342c
                       catch() { ... } // from try @ 03263640 with catch @ 0326342c */
    DAT_04566894 = 1;
  }
  pSVar2 = (__this->fields).MNIGCKKBGOH;
  if (pSVar2 != (System_Collections_Generic_List_KKLFGJCMPDA__o *)0x0) {
    iVar1 = (pSVar2->fields)._size;
    (pSVar2->fields)._size = 0;
    (pSVar2->fields)._version = (pSVar2->fields)._version + 1;
    if (0 < iVar1) {
      System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,iVar1,(MethodInfo *)0x0);
    }
    pSVar2 = (__this->fields).BDIHNIGKDLK;
    if (pSVar2 != (System_Collections_Generic_List_KKLFGJCMPDA__o *)0x0) {
      iVar1 = (pSVar2->fields)._size;
      (pSVar2->fields)._size = 0;
      (pSVar2->fields)._version = (pSVar2->fields)._version + 1;
      if (0 < iVar1) {
        System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,iVar1,(MethodInfo *)0x0);
      }
      pSVar2 = (__this->fields).FEOGLGJBJDE;
      if (pSVar2 != (System_Collections_Generic_List_KKLFGJCMPDA__o *)0x0) {
        iVar1 = (pSVar2->fields)._size;
        (pSVar2->fields)._size = 0;
        (pSVar2->fields)._version = (pSVar2->fields)._version + 1;
        if (0 < iVar1) {
          System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,iVar1,(MethodInfo *)0x0);
        }
        pSVar2 = (__this->fields).HOIHAFALJIG;
        if (pSVar2 != (System_Collections_Generic_List_KKLFGJCMPDA__o *)0x0) {
          iVar1 = (pSVar2->fields)._size;
          (pSVar2->fields)._size = 0;
          (pSVar2->fields)._version = (pSVar2->fields)._version + 1;
          if (0 < iVar1) {
            System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,iVar1,(MethodInfo *)0x0)
            ;
            return;
          }
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

