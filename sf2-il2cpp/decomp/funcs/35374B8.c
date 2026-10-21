// EPFMFHDGMCE$$FMCAFEPAFDI @ RVA 0x35374B8

void EPFMFHDGMCE__FMCAFEPAFDI(EPFMFHDGMCE_o *__this,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  System_Collections_Generic_List_JLGNBOILFLN__o *pSVar3;
  Il2CppObject *pIVar4;
  JLGNBOILFLN_o *__this_00;
  int index;
  
  if ((DAT_04568a9a & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<JLGNBOILFLN>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<JLGNBOILFLN>_get_Item__);
    DAT_04568a9a = 1;
  }
  pSVar3 = (__this->fields).GCHAMOPMNHF;
  if (pSVar3 != (System_Collections_Generic_List_JLGNBOILFLN__o *)0x0) {
    if ((pSVar3->fields)._size < 1) {
      return;
    }
    pIVar4 = System_Collections_Generic_List<object>__get_Item
                       ((System_Collections_Generic_List_object__o *)pSVar3,0,
                        Method_System_Collections_Generic_List<JLGNBOILFLN>_get_Item__);
    if ((pIVar4 != (Il2CppObject *)0x0) &&
       (pSVar3 = (__this->fields).GCHAMOPMNHF,
       pSVar3 != (System_Collections_Generic_List_JLGNBOILFLN__o *)0x0)) {
      iVar1 = (pSVar3->fields)._size;
      if (iVar1 < 1) {
        return;
      }
      iVar2 = *(int *)((long)&pIVar4[1].monitor + 4);
      index = 0;
      while (pIVar4 = System_Collections_Generic_List<object>__get_Item
                                ((System_Collections_Generic_List_object__o *)pSVar3,index,
                                 Method_System_Collections_Generic_List<JLGNBOILFLN>_get_Item__),
            pIVar4 != (Il2CppObject *)0x0) {
        if (iVar2 != *(int *)((long)&pIVar4[1].monitor + 4)) {
          return;
        }
        pSVar3 = (__this->fields).GCHAMOPMNHF;
        if ((pSVar3 == (System_Collections_Generic_List_JLGNBOILFLN__o *)0x0) ||
           (__this_00 = (JLGNBOILFLN_o *)
                        System_Collections_Generic_List<object>__get_Item
                                  ((System_Collections_Generic_List_object__o *)pSVar3,index,
                                   Method_System_Collections_Generic_List<JLGNBOILFLN>_get_Item__),
           __this_00 == (JLGNBOILFLN_o *)0x0)) break;
        JLGNBOILFLN__GPGHFJOGLJJ(__this_00,0,(MethodInfo *)0x0);
        index = index + 1;
        if (iVar1 == index) {
          return;
        }
        pSVar3 = (__this->fields).GCHAMOPMNHF;
        if (pSVar3 == (System_Collections_Generic_List_JLGNBOILFLN__o *)0x0) break;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

