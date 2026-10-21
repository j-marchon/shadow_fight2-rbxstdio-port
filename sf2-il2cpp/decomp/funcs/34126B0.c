// MGNPHCAAEIO.ABAALAENAKC$$DGLJCGNHLIG @ RVA 0x34126B0

void MGNPHCAAEIO_ABAALAENAKC__DGLJCGNHLIG(MGNPHCAAEIO_ABAALAENAKC_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  System_Collections_Generic_List_IHMIMECHIAN__o *pSVar2;
  System_Collections_Generic_List_BJEFHIBMHEJ__o *pSVar3;
  System_String_o **ppSVar4;
  
  if ((DAT_0456808f & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<IHMIMECHIAN>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BJEFHIBMHEJ>_Clear__);
    FUN_01bab630(&StringLiteral_1);
    DAT_0456808f = 1;
  }
  (__this->fields).MAOLKFCJGLD = 0;
  (__this->fields).HPPAGNLEOEJ = 0;
  ppSVar4 = &(__this->fields).GJFGFNAGPEO;
  *ppSVar4 = StringLiteral_1;
  thunk_FUN_01c20e04(ppSVar4);
  pSVar2 = (__this->fields).OBLIJEFDJGN;
  (__this->fields).FNLILHMAONM = 0;
  (__this->fields).IDHCEJLJIGI = 0;
  (__this->fields).HPACPFLKHPK = 0;
  (__this->fields).EOLGPJMKFNA = false;
  if (pSVar2 != (System_Collections_Generic_List_IHMIMECHIAN__o *)0x0) {
    iVar1 = (pSVar2->fields)._size;
    (pSVar2->fields)._size = 0;
    (pSVar2->fields)._version = (pSVar2->fields)._version + 1;
    if (0 < iVar1) {
      System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,iVar1,(MethodInfo *)0x0);
    }
    pSVar3 = (__this->fields).GJBLBEALOBO;
    if (pSVar3 != (System_Collections_Generic_List_BJEFHIBMHEJ__o *)0x0) {
      iVar1 = (pSVar3->fields)._size;
      (pSVar3->fields)._size = 0;
      (pSVar3->fields)._version = (pSVar3->fields)._version + 1;
      if (0 < iVar1) {
        System_Array__Clear((System_Array_o *)(pSVar3->fields)._items,0,iVar1,(MethodInfo *)0x0);
        return;
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

