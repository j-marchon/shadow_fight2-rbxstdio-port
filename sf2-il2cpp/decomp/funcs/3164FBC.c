// GALHNMPIEHA$$AKEKGJAFBOC @ RVA 0x3164FBC

void GALHNMPIEHA__AKEKGJAFBOC(GALHNMPIEHA_o *__this,MethodInfo *method)

{
  int32_t length;
  System_Collections_Generic_List_BDMABHJEEGD__o *pSVar1;
  BPBGAAHBFKH_o **ppBVar2;
  
  if ((DAT_045668af & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<BDMABHJEEGD>_Clear__);
    DAT_045668af = 1;
  }
  ppBVar2 = &(__this->fields)._MBJGPIOFAEE_k__BackingField;
  *ppBVar2 = (BPBGAAHBFKH_o *)0x0;
  thunk_FUN_01c20e04(ppBVar2,0);
  pSVar1 = (__this->fields)._LGNMHMIHFAF_k__BackingField;
  if (pSVar1 != (System_Collections_Generic_List_BDMABHJEEGD__o *)0x0) {
    length = (pSVar1->fields)._size;
    (pSVar1->fields)._size = 0;
    (pSVar1->fields)._version = (pSVar1->fields)._version + 1;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(pSVar1->fields)._items,0,length,(MethodInfo *)0x0);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

