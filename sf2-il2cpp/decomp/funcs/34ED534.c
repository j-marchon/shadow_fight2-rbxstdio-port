// OLKKAIFGGAK$$NGCCLAOLCKM @ RVA 0x34ED534

void OLKKAIFGGAK__NGCCLAOLCKM(OLKKAIFGGAK_o *__this,bool AFBFJKELDIJ,MethodInfo *method)

{
  int32_t length;
  MethodInfo *method_00;
  System_Collections_Generic_List_ECENNHNBAME__o *pSVar1;
  
  if ((DAT_0456879c & 1) == 0) {
    FUN_01bab630(&LDHBHPILNMA_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<ECENNHNBAME>_Clear__);
    DAT_0456879c = 1;
  }
  pSVar1 = (__this->fields).OOBBJEDHHKM;
  if (pSVar1 != (System_Collections_Generic_List_ECENNHNBAME__o *)0x0) {
    length = (pSVar1->fields)._size;
    (pSVar1->fields)._size = 0;
    (pSVar1->fields)._version = (pSVar1->fields)._version + 1;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(pSVar1->fields)._items,0,length,(MethodInfo *)0x0);
    }
    if ((LDHBHPILNMA_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    LDHBHPILNMA__JMOLDDKBHLC(__this,AFBFJKELDIJ,(MethodInfo *)0x0);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035ed400 with catch @ 035ed5d0
                        */
    OLKKAIFGGAK__FLNALLPGHBD(__this,method_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035ed38c with catch @ 035ed5d4
                        */
  FUN_01bab8c8();
}

