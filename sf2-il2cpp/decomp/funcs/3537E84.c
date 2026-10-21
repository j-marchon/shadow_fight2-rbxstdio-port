// EPFMFHDGMCE$$JNFEMGHHLAF @ RVA 0x3537E84

/* WARNING: Type propagation algorithm not settling */

System_Collections_Generic_List_JLGNBOILFLN__o *
EPFMFHDGMCE__JNFEMGHHLAF(EPFMFHDGMCE_o *__this,int32_t JLAFGLDIFOC,MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  System_Collections_Generic_List_JLGNBOILFLN__o *__this_00;
  System_Collections_Generic_List_JLGNBOILFLN__o *__this_01;
  JLGNBOILFLN_o *item;
  JLGNBOILFLN_array *pJVar4;
  int index;
  int32_t iVar5;
  
  if ((DAT_04568aa7 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<JLGNBOILFLN>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<JLGNBOILFLN>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<JLGNBOILFLN>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<JLGNBOILFLN>_get_Item__);
    FUN_01bab630(&System_Collections_Generic_List<JLGNBOILFLN>_TypeInfo);
    DAT_04568aa7 = 1;
  }
  __this_00 = (System_Collections_Generic_List_JLGNBOILFLN__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<JLGNBOILFLN>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<JLGNBOILFLN>__ctor__);
  __this_01 = (__this->fields).GCHAMOPMNHF;
  if (__this_01 != (System_Collections_Generic_List_JLGNBOILFLN__o *)0x0) {
    index = 0;
    iVar5 = JLAFGLDIFOC;
    do {
      if ((__this_01->fields)._size <= index) {
        return __this_00;
      }
      item = (JLGNBOILFLN_o *)
             System_Collections_Generic_List<object>__get_Item
                       ((System_Collections_Generic_List_object__o *)__this_01,index,
                        Method_System_Collections_Generic_List<JLGNBOILFLN>_get_Item__);
      lVar3 = Method_System_Collections_Generic_List<JLGNBOILFLN>_Add__;
      if (item == (JLGNBOILFLN_o *)0x0) break;
      iVar1 = (item->fields).GHPHFGBIPCI;
      if ((JLAFGLDIFOC < iVar5) && (iVar5 < iVar1)) {
        return __this_00;
      }
      if (JLAFGLDIFOC < iVar1) {
        if (__this_00 == (System_Collections_Generic_List_JLGNBOILFLN__o *)0x0) break;
        pJVar4 = (__this_00->fields)._items;
        (__this_00->fields)._version = (__this_00->fields)._version + 1;
        if (pJVar4 == (JLGNBOILFLN_array *)0x0) break;
        uVar2 = (__this_00->fields)._size;
        iVar5 = iVar1;
        if (uVar2 < (uint)pJVar4->max_length) {
          (__this_00->fields)._size = uVar2 + 1;
          pJVar4->m_Items[(int)uVar2] = item;
          thunk_FUN_01c20e04();
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)item,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
        }
      }
      __this_01 = (__this->fields).GCHAMOPMNHF;
      index = index + 1;
    } while (__this_01 != (System_Collections_Generic_List_JLGNBOILFLN__o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

