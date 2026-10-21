// LDHBHPILNMA$$EIPFMFENGKA @ RVA 0x31A251C

void LDHBHPILNMA__EIPFMFENGKA(MethodInfo *method)

{
  int32_t iVar1;
  System_Collections_Generic_HashSet_object__o *__this;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  LDHBHPILNMA_StaticFields *pLVar2;
  LDHBHPILNMA_c *pLVar3;
  System_Collections_Generic_List_ABNLGBHKOCE__o *pSVar4;
  System_Collections_Generic_List_ECENNHNBAME__o *pSVar5;
  System_Collections_Generic_List_KCLPNDAPADO__o *pSVar6;
  
  if ((DAT_04566aea & 1) == 0) {
    FUN_01bab630(&CGALNIOABHK_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_ECENNHNBAME>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_FCFGGKLDBFJ>_Clear__);
    FUN_01bab630(&ECENNHNBAME_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_HashSet<string>_Clear__);
    FUN_01bab630(&LDHBHPILNMA_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<ECENNHNBAME>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ABNLGBHKOCE>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KCLPNDAPADO>_Clear__);
    DAT_04566aea = 1;
  }
  if ((LDHBHPILNMA_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pLVar2 = LDHBHPILNMA_TypeInfo->static_fields;
  pSVar5 = pLVar2->HDGPEJOPPOB;
  if (pSVar5 != (System_Collections_Generic_List_ECENNHNBAME__o *)0x0) {
    iVar1 = (pSVar5->fields)._size;
    (pSVar5->fields)._size = 0;
    (pSVar5->fields)._version = (pSVar5->fields)._version + 1;
    if (0 < iVar1) {
      System_Array__Clear((System_Array_o *)(pSVar5->fields)._items,0,iVar1,(MethodInfo *)0x0);
      pLVar2 = LDHBHPILNMA_TypeInfo->static_fields;
    }
    if ((System_Collections_Generic_Dictionary_object__object__o *)pLVar2->EJNINLMPAAO !=
        (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary<object,_object>__Clear
                ((System_Collections_Generic_Dictionary_object__object__o *)pLVar2->EJNINLMPAAO,
                 Method_System_Collections_Generic_Dictionary<string,_ECENNHNBAME>_Clear__);
      __this = (System_Collections_Generic_HashSet_object__o *)
               LDHBHPILNMA_TypeInfo->static_fields->KDDGJMCPJNA;
      if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
        System_Collections_Generic_HashSet<object>__Clear
                  (__this,Method_System_Collections_Generic_HashSet<string>_Clear__);
        if ((ECENNHNBAME_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        ECENNHNBAME__OOAOCGENEPI((MethodInfo *)0x0);
        pLVar3 = LDHBHPILNMA_TypeInfo;
        pSVar6 = LDHBHPILNMA_TypeInfo->static_fields->GLNEIGKMPDC;
        if (pSVar6 != (System_Collections_Generic_List_KCLPNDAPADO__o *)0x0) {
          iVar1 = (pSVar6->fields)._size;
          (pSVar6->fields)._size = 0;
          (pSVar6->fields)._version = (pSVar6->fields)._version + 1;
          if (0 < iVar1) {
            System_Array__Clear((System_Array_o *)(pSVar6->fields)._items,0,iVar1,(MethodInfo *)0x0)
            ;
            pLVar3 = LDHBHPILNMA_TypeInfo;
          }
          __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                      pLVar3->static_fields->ICLBNEKDHIO;
          if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
            System_Collections_Generic_Dictionary<object,_object>__Clear
                      (__this_00,
                       Method_System_Collections_Generic_Dictionary<string,_FCFGGKLDBFJ>_Clear__);
            pSVar4 = LDHBHPILNMA_TypeInfo->static_fields->MHKDMKDBMBE;
            if (pSVar4 != (System_Collections_Generic_List_ABNLGBHKOCE__o *)0x0) {
              iVar1 = (pSVar4->fields)._size;
              (pSVar4->fields)._size = 0;
              (pSVar4->fields)._version = (pSVar4->fields)._version + 1;
              if (0 < iVar1) {
                System_Array__Clear((System_Array_o *)(pSVar4->fields)._items,0,iVar1,
                                    (MethodInfo *)0x0);
              }
              if ((CGALNIOABHK_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              CGALNIOABHK__JODGPLBHHIA((MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

