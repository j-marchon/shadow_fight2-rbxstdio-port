// PKNBJJPHAKI$$NDNPGAKJLHM @ RVA 0x30E14BC

void PKNBJJPHAKI__NDNPGAKJLHM(PKNBJJPHAKI_o *__this,MethodInfo *method)

{
  int32_t length;
  GBJGJEGPHKD_o **ppGVar1;
  System_Collections_Generic_List_GBJGJEGPHKD__o *pSVar2;
  
  if ((DAT_045663a4 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<GBJGJEGPHKD>_Clear__);
    DAT_045663a4 = 1;
  }
  ppGVar1 = &(__this->fields).JBPKNAKOHLP;
  *ppGVar1 = (GBJGJEGPHKD_o *)0x0;
  thunk_FUN_01c20e04(ppGVar1,0);
  ppGVar1 = &(__this->fields).AAJIHJPLHDA;
  *ppGVar1 = (GBJGJEGPHKD_o *)0x0;
  thunk_FUN_01c20e04(ppGVar1,0);
  pSVar2 = (__this->fields).DDOAJGPFCNB;
  if (pSVar2 != (System_Collections_Generic_List_GBJGJEGPHKD__o *)0x0) {
    length = (pSVar2->fields)._size;
    (pSVar2->fields)._size = 0;
    (pSVar2->fields)._version = (pSVar2->fields)._version + 1;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,length,(MethodInfo *)0x0);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

