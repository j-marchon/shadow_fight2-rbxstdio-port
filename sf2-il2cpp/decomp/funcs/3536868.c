// EPFMFHDGMCE$$CCHEFCBOLBC @ RVA 0x3536868

void EPFMFHDGMCE__CCHEFCBOLBC(EPFMFHDGMCE_o *__this,int32_t JLAFGLDIFOC,MethodInfo *method)

{
  int32_t length;
  System_Collections_Generic_List_JLGNBOILFLN__o *pSVar1;
  Il2CppObject *pIVar2;
  EANNACPOJFA_o *pEVar3;
  int index;
  
  if ((DAT_04568a92 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<JLGNBOILFLN>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<JLGNBOILFLN>_RemoveAt__);
    FUN_01bab630(&Method_System_Collections_Generic_List<JLGNBOILFLN>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<JLGNBOILFLN>_get_Item__);
    DAT_04568a92 = 1;
  }
  pSVar1 = (__this->fields).GCHAMOPMNHF;
  if (pSVar1 != (System_Collections_Generic_List_JLGNBOILFLN__o *)0x0) {
    index = 0;
    do {
      while( true ) {
        if (index == (pSVar1->fields)._size) {
          pEVar3 = EPFMFHDGMCE__FLCAGIJMPKA(__this,JLAFGLDIFOC,method);
          if (pEVar3 != (EANNACPOJFA_o *)0x0) {
            pSVar1 = (pEVar3->fields).GJBLBEALOBO;
            if (pSVar1 == (System_Collections_Generic_List_JLGNBOILFLN__o *)0x0) goto LAB_0363698c;
            length = (pSVar1->fields)._size;
            (pSVar1->fields)._size = 0;
            (pSVar1->fields)._version = (pSVar1->fields)._version + 1;
            if (0 < length) {
              System_Array__Clear((System_Array_o *)(pSVar1->fields)._items,0,length,
                                  (MethodInfo *)0x0);
              return;
            }
          }
          return;
        }
        method = Method_System_Collections_Generic_List<JLGNBOILFLN>_get_Item__;
        pIVar2 = System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)pSVar1,index,
                            (MethodInfo_26E4ADC *)
                            Method_System_Collections_Generic_List<JLGNBOILFLN>_get_Item__);
        if (pIVar2 == (Il2CppObject *)0x0) goto LAB_0363698c;
        if (*(int *)((long)&pIVar2[1].monitor + 4) != JLAFGLDIFOC) break;
        pSVar1 = (__this->fields).GCHAMOPMNHF;
        if (pSVar1 == (System_Collections_Generic_List_JLGNBOILFLN__o *)0x0) goto LAB_0363698c;
        method = Method_System_Collections_Generic_List<JLGNBOILFLN>_RemoveAt__;
        System_Collections_Generic_List<object>__RemoveAt
                  ((System_Collections_Generic_List_object__o *)pSVar1,index,
                   (MethodInfo_26E6580 *)
                   Method_System_Collections_Generic_List<JLGNBOILFLN>_RemoveAt__);
        pSVar1 = (__this->fields).GCHAMOPMNHF;
        if (pSVar1 == (System_Collections_Generic_List_JLGNBOILFLN__o *)0x0) goto LAB_0363698c;
      }
      pSVar1 = (__this->fields).GCHAMOPMNHF;
      index = index + 1;
    } while (pSVar1 != (System_Collections_Generic_List_JLGNBOILFLN__o *)0x0);
  }
LAB_0363698c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

