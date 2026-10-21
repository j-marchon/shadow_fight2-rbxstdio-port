// DCAEKAABCEM$$CENBKKEGHFO @ RVA 0x3221C14

System_Collections_Generic_List_DCAEKAABCEM_CMGDCNNPGII__o *
DCAEKAABCEM__CENBKKEGHFO(DCAEKAABCEM_o *__this,MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  Il2CppObject *pIVar4;
  System_Collections_Generic_List_DCAEKAABCEM_CMGDCNNPGII__o *pSVar5;
  DCAEKAABCEM_CMGDCNNPGII_o *item;
  MethodInfo *extraout_x1;
  System_Collections_Generic_List_DCAEKAABCEM_CMGDCNNPGII__o *pSVar6;
  DCAEKAABCEM_CMGDCNNPGII_array *pDVar7;
  int index;
  
  if ((DAT_04566f3f & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_KIKGKKGDCKK<DCAEKAABCEM_CMGDCNNPGII>__);
    FUN_01bab630(&Method_System_Collections_Generic_List<DCAEKAABCEM_CMGDCNNPGII>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<DCAEKAABCEM_CMGDCNNPGII>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<DCAEKAABCEM_CMGDCNNPGII>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<DCAEKAABCEM_CMGDCNNPGII>_get_Item__);
    FUN_01bab630(&System_Collections_Generic_List<DCAEKAABCEM_CMGDCNNPGII>_TypeInfo);
    DAT_04566f3f = 1;
    method = extraout_x1;
  }
  pSVar6 = (__this->fields).DFKCIDJHEEE;
  if (pSVar6 != (System_Collections_Generic_List_DCAEKAABCEM_CMGDCNNPGII__o *)0x0) {
    if ((pSVar6->fields)._size == 0) {
      return (System_Collections_Generic_List_DCAEKAABCEM_CMGDCNNPGII__o *)0x0;
    }
    pSVar6 = (System_Collections_Generic_List_DCAEKAABCEM_CMGDCNNPGII__o *)
             thunk_FUN_01bda818(System_Collections_Generic_List<DCAEKAABCEM_CMGDCNNPGII>_TypeInfo,
                                method);
    System_Collections_Generic_List<object>___ctor
              ((System_Collections_Generic_List_object__o *)pSVar6,
               Method_System_Collections_Generic_List<DCAEKAABCEM_CMGDCNNPGII>__ctor__);
    pIVar4 = DJNBJHPDKDP__KIKGKKGDCKK<object>
                       ((System_Collections_Generic_List_T__o *)(__this->fields).DFKCIDJHEEE,
                        Method_DJNBJHPDKDP_KIKGKKGDCKK<DCAEKAABCEM_CMGDCNNPGII>__);
    if ((pIVar4 != (Il2CppObject *)0x0) &&
       (pSVar5 = (__this->fields).DFKCIDJHEEE,
       pSVar5 != (System_Collections_Generic_List_DCAEKAABCEM_CMGDCNNPGII__o *)0x0)) {
      index = (pSVar5->fields)._size + -1;
      if (index < 0) {
        return pSVar6;
      }
      iVar1 = *(int *)&pIVar4[1].monitor;
      while (pIVar4 = System_Collections_Generic_List<object>__get_Item
                                ((System_Collections_Generic_List_object__o *)pSVar5,index,
                                 Method_System_Collections_Generic_List<DCAEKAABCEM_CMGDCNNPGII>_get_Item__
                                ), pIVar4 != (Il2CppObject *)0x0) {
        if (*(int *)&pIVar4[1].monitor < iVar1) {
          return pSVar6;
        }
        pSVar5 = (__this->fields).DFKCIDJHEEE;
        if ((pSVar5 == (System_Collections_Generic_List_DCAEKAABCEM_CMGDCNNPGII__o *)0x0) ||
           (item = (DCAEKAABCEM_CMGDCNNPGII_o *)
                   System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)pSVar5,index,
                              Method_System_Collections_Generic_List<DCAEKAABCEM_CMGDCNNPGII>_get_Item__
                             ),
           lVar3 = Method_System_Collections_Generic_List<DCAEKAABCEM_CMGDCNNPGII>_Add__,
           pSVar6 == (System_Collections_Generic_List_DCAEKAABCEM_CMGDCNNPGII__o *)0x0)) break;
        pDVar7 = (pSVar6->fields)._items;
        (pSVar6->fields)._version = (pSVar6->fields)._version + 1;
        if (pDVar7 == (DCAEKAABCEM_CMGDCNNPGII_array *)0x0) break;
        uVar2 = (pSVar6->fields)._size;
        if (uVar2 < (uint)pDVar7->max_length) {
          (pSVar6->fields)._size = uVar2 + 1;
          pDVar7->m_Items[(int)uVar2] = item;
          thunk_FUN_01c20e04();
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar6,(Il2CppObject *)item,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
        }
        index = index + -1;
        if (index < 0) {
          return pSVar6;
        }
        pSVar5 = (__this->fields).DFKCIDJHEEE;
        if (pSVar5 == (System_Collections_Generic_List_DCAEKAABCEM_CMGDCNNPGII__o *)0x0) break;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

