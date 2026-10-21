// OLKKAIFGGAK$$KAHCLGHDBHN @ RVA 0x34E5E98

void OLKKAIFGGAK__KAHCLGHDBHN(OLKKAIFGGAK_o *__this,bool AFBFJKELDIJ,MethodInfo *method)

{
  int32_t length;
  MethodInfo *method_00;
  System_Collections_Generic_List_ABNLGBHKOCE__o *pSVar1;
  
  if ((DAT_04568767 & 1) == 0) {
    FUN_01bab630(&LDHBHPILNMA_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<ABNLGBHKOCE>_Clear__);
    DAT_04568767 = 1;
  }
  pSVar1 = (__this->fields).MEECHCPNHMP;
  if (pSVar1 != (System_Collections_Generic_List_ABNLGBHKOCE__o *)0x0) {
    length = (pSVar1->fields)._size;
    (pSVar1->fields)._size = 0;
    (pSVar1->fields)._version = (pSVar1->fields)._version + 1;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(pSVar1->fields)._items,0,length,(MethodInfo *)0x0);
    }
                    /* try { // try from 035e5f0c to 036e64a7 has its CatchHandler @ 035e5f0c
                       catch() { ... } // from try @ 035e5f0c with catch @ 035e5f0c
                       catch() { ... } // from try @ 035e64e4 with catch @ 035e5f0c
                       catch() { ... } // from try @ 035e6574 with catch @ 035e5f0c
                       catch() { ... } // from try @ 035e65a0 with catch @ 035e5f0c
                       catch() { ... } // from try @ 035e65d4 with catch @ 035e5f0c */
    if ((LDHBHPILNMA_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    LDHBHPILNMA__MCHEGMJNJKM(__this,AFBFJKELDIJ,(MethodInfo *)0x0);
    OLKKAIFGGAK__PAEDPMKMBJE(__this,method_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

