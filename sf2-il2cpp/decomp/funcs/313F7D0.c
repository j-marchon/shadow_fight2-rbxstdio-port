// IPPEHAJADOO$$CEACPADMPKJ @ RVA 0x313F7D0

void IPPEHAJADOO__CEACPADMPKJ(IPPEHAJADOO_o *__this,MethodInfo *method)

{
  int32_t length;
  int value;
  uint uVar1;
  long lVar2;
  System_Collections_Generic_List_NJPBHDMCLIN__o *pSVar3;
  Il2CppObject *pIVar4;
  OLKKAIFGGAK_o *BCKBBGCOMJD;
  NJPBHDMCLIN_o *pNVar5;
  MethodInfo *method_00;
  System_Collections_Generic_List_OLKKAIFGGAK__o *pSVar6;
  NJPBHDMCLIN_array *pNVar7;
  int index;
  
                    /* try { // try from 0323f7d8 to 0333f7db has its CatchHandler @ 0323f7ec */
                    /* try { // try from 0323f7dc to 0333f7df has its CatchHandler @ 0323f7e8 */
                    /* try { // try from 0323f7e0 to 0333f80b has its CatchHandler @ 0323f5e8 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0323f700 with catch @ 0323f7e4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0323f7dc with catch @ 0323f7e8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0323f7d8 with catch @ 0323f7ec
                        */
  if ((DAT_0456675c & 1) == 0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0323f6e4 with catch @ 0323f7f0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0323f720 with catch @ 0323f7f4
                        */
    FUN_01bab630(&Method_System_Collections_Generic_List<NJPBHDMCLIN>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NJPBHDMCLIN>_Clear__);
                    /* try { // try from 0323f80c to 0333f80f has its CatchHandler @ 0323f830 */
                    /* try { // try from 0323f810 to 0333f837 has its CatchHandler @ 0323f5e8 */
    FUN_01bab630(&Method_System_Collections_Generic_List<OLKKAIFGGAK>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OLKKAIFGGAK>_get_Item__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NJPBHDMCLIN>_get_Item__);
                    /* catch() { ... } // from try @ 0323f80c with catch @ 0323f830 */
    FUN_01bab630(&Method_System_Collections_Generic_List<NJPBHDMCLIN>_set_Capacity__);
                    /* try { // try from 0323f838 to 0333f83f has its CatchHandler @ 0323f854 */
    DAT_0456675c = 1;
  }
                    /* try { // try from 0323f840 to 0333f84b has its CatchHandler @ 0323f5e8 */
  pSVar6 = (__this->fields).MBPELMMKGMB;
                    /* try { // try from 0323f84c to 0333f853 has its CatchHandler @ 0323f854 */
  if ((pSVar6 != (System_Collections_Generic_List_OLKKAIFGGAK__o *)0x0) &&
     (pSVar3 = (__this->fields).OGINLMAKLNF,
     pSVar3 != (System_Collections_Generic_List_NJPBHDMCLIN__o *)0x0)) {
    length = (pSVar3->fields)._size;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0323f838 with catch @ 0323f854
                       catch(type#2 @ 00000000) { ... } // from try @ 0323f84c with catch @ 0323f854
                        */
    value = (pSVar6->fields)._size;
    (pSVar3->fields)._size = 0;
    (pSVar3->fields)._version = (pSVar3->fields)._version + 1;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(pSVar3->fields)._items,0,length,(MethodInfo *)0x0);
      pSVar3 = (__this->fields).OGINLMAKLNF;
      if (pSVar3 == (System_Collections_Generic_List_NJPBHDMCLIN__o *)0x0) goto LAB_0323f98c;
    }
    System_Collections_Generic_List<object>__set_Capacity
              ((System_Collections_Generic_List_object__o *)pSVar3,value,
               Method_System_Collections_Generic_List<NJPBHDMCLIN>_set_Capacity__);
    if (0 < value) {
      index = 0;
      do {
        pSVar6 = (__this->fields).MBPELMMKGMB;
        if (pSVar6 == (System_Collections_Generic_List_OLKKAIFGGAK__o *)0x0) goto LAB_0323f98c;
        pSVar3 = (__this->fields).OGINLMAKLNF;
        pIVar4 = System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)pSVar6,index,
                            (MethodInfo_26E4ADC *)
                            Method_System_Collections_Generic_List<OLKKAIFGGAK>_get_Item__);
        lVar2 = Method_System_Collections_Generic_List<NJPBHDMCLIN>_Add__;
        if ((pIVar4 == (Il2CppObject *)0x0) ||
           (pSVar3 == (System_Collections_Generic_List_NJPBHDMCLIN__o *)0x0)) goto LAB_0323f98c;
        pNVar5 = pIVar4[0x24].monitor;
        pNVar7 = (pSVar3->fields)._items;
        (pSVar3->fields)._version = (pSVar3->fields)._version + 1;
        if (pNVar7 == (NJPBHDMCLIN_array *)0x0) goto LAB_0323f98c;
        uVar1 = (pSVar3->fields)._size;
        if (uVar1 < (uint)pNVar7->max_length) {
          (pSVar3->fields)._size = uVar1 + 1;
          pNVar7->m_Items[(int)uVar1] = pNVar5;
          thunk_FUN_01c20e04();
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)pNVar5,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
        }
        pSVar3 = (__this->fields).OGINLMAKLNF;
        if (pSVar3 == (System_Collections_Generic_List_NJPBHDMCLIN__o *)0x0) goto LAB_0323f98c;
        pNVar5 = (NJPBHDMCLIN_o *)
                 System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)pSVar3,index,
                            Method_System_Collections_Generic_List<NJPBHDMCLIN>_get_Item__);
        pSVar6 = (__this->fields).MBPELMMKGMB;
        if (pSVar6 == (System_Collections_Generic_List_OLKKAIFGGAK__o *)0x0) goto LAB_0323f98c;
        method_00 = Method_System_Collections_Generic_List<OLKKAIFGGAK>_get_Item__;
        BCKBBGCOMJD = (OLKKAIFGGAK_o *)
                      System_Collections_Generic_List<object>__get_Item
                                ((System_Collections_Generic_List_object__o *)pSVar6,index,
                                 (MethodInfo_26E4ADC *)
                                 Method_System_Collections_Generic_List<OLKKAIFGGAK>_get_Item__);
        IPPEHAJADOO__CEACPADMPKJ(pNVar5,BCKBBGCOMJD,method_00);
        index = index + 1;
      } while (value != index);
    }
    return;
  }
LAB_0323f98c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

