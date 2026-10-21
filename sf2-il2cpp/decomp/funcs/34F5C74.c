// OLKKAIFGGAK$$ICGKMPNIPKC @ RVA 0x34F5C74

bool OLKKAIFGGAK__ICGKMPNIPKC
               (OLKKAIFGGAK_o *__this,ECENNHNBAME_o *MDFMIOAIAHH,IIMNGGHGKOD_o *CPECAEHDDDB,
               bool HPACPFLKHPK,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  OLKKAIFGGAK_IKDFDNCMLLM_o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *pSVar4;
  System_Predicate_T__o *match;
  Il2CppObject *pIVar5;
  System_Collections_Generic_List_object__o *pSVar6;
  MGNDHCBAPEN_T1__T2__o *pMVar7;
  System_Object_array *pSVar8;
  IIMNGGHGKOD_o *pIVar9;
  OLKKAIFGGAK_IKDFDNCMLLM_Fields *pOVar10;
  System_Collections_Generic_List_object__o *local_38;
  
  if ((DAT_045687db & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<ECENNHNBAME,_List<MGNDHCBAPEN<IIMNGGHGKOD,_bool>>>_Add__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<ECENNHNBAME,_List<MGNDHCBAPEN<IIMNGGHGKOD,_bool>>>_TryGetValue__
                );
    FUN_01bab630(&Method_OLKKAIFGGAK_IKDFDNCMLLM_JHLNAKCMBKB__);
    FUN_01bab630(&OLKKAIFGGAK_IKDFDNCMLLM_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<IIMNGGHGKOD,_bool>>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<IIMNGGHGKOD,_bool>>_Find__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<IIMNGGHGKOD,_bool>>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<MGNDHCBAPEN<IIMNGGHGKOD,_bool>>_TypeInfo);
    FUN_01bab630(&Method_MGNDHCBAPEN<IIMNGGHGKOD,_bool>__ctor__);
    FUN_01bab630(&MGNDHCBAPEN<IIMNGGHGKOD,_bool>_TypeInfo);
    FUN_01bab630(&System_Predicate<MGNDHCBAPEN<IIMNGGHGKOD,_bool>>_TypeInfo);
    DAT_045687db = 1;
  }
  local_38 = (System_Collections_Generic_List_object__o *)0x0;
  __this_00 = (OLKKAIFGGAK_IKDFDNCMLLM_o *)thunk_FUN_01bda818(OLKKAIFGGAK_IKDFDNCMLLM_TypeInfo);
  OLKKAIFGGAK_IKDFDNCMLLM___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (OLKKAIFGGAK_IKDFDNCMLLM_o *)0x0) {
    pOVar10 = &__this_00->fields;
    pOVar10->action = CPECAEHDDDB;
    thunk_FUN_01c20e04(pOVar10,CPECAEHDDDB);
    pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).LPDPOJHBCLM
    ;
    if (pSVar4 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      bVar3 = System_Collections_Generic_Dictionary<object,_object>__TryGetValue
                        (pSVar4,(Il2CppObject *)MDFMIOAIAHH,(Il2CppObject **)&local_38,
                         Method_System_Collections_Generic_Dictionary<ECENNHNBAME,_List<MGNDHCBAPEN<IIMNGGHGKOD,_bool>>>_TryGetValue__
                        );
      pSVar6 = local_38;
      if (bVar3) {
        match = (System_Predicate_T__o *)
                thunk_FUN_01bda818(System_Predicate<MGNDHCBAPEN<IIMNGGHGKOD,_bool>>_TypeInfo);
        System_Predicate<object>___ctor();
        if (pSVar6 != (System_Collections_Generic_List_object__o *)0x0) {
          pIVar5 = System_Collections_Generic_List<object>__Find
                             (pSVar6,match,
                              Method_System_Collections_Generic_List<MGNDHCBAPEN<IIMNGGHGKOD,_bool>>_Find__
                             );
          pSVar6 = local_38;
          if (pIVar5 != (Il2CppObject *)0x0) {
            return false;
          }
          pIVar9 = pOVar10->action;
          pMVar7 = (MGNDHCBAPEN_T1__T2__o *)
                   thunk_FUN_01bda818(MGNDHCBAPEN<IIMNGGHGKOD,_bool>_TypeInfo);
          MGNDHCBAPEN<object,_bool>___ctor
                    (pMVar7,(Il2CppObject *)pIVar9,HPACPFLKHPK,
                     Method_MGNDHCBAPEN<IIMNGGHGKOD,_bool>__ctor__);
          lVar2 = Method_System_Collections_Generic_List<MGNDHCBAPEN<IIMNGGHGKOD,_bool>>_Add__;
          if (pSVar6 != (System_Collections_Generic_List_object__o *)0x0) {
            pSVar8 = (pSVar6->fields)._items;
            (pSVar6->fields)._version = (pSVar6->fields)._version + 1;
            if (pSVar8 != (System_Object_array *)0x0) {
              uVar1 = (pSVar6->fields)._size;
              if (uVar1 < (uint)pSVar8->max_length) {
                (pSVar6->fields)._size = uVar1 + 1;
                pSVar8->m_Items[(int)uVar1] = (Il2CppObject *)pMVar7;
                thunk_FUN_01c20e04(pSVar8->m_Items + (int)uVar1,pMVar7);
              }
              else {
                System_Collections_Generic_List<object>__AddWithResize
                          (pSVar6,(Il2CppObject *)pMVar7,
                           *(MethodInfo_26E4DAC **)
                            (*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
              }
              return true;
            }
          }
        }
      }
      else {
        pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)
                 (__this->fields).LPDPOJHBCLM;
        pSVar6 = (System_Collections_Generic_List_object__o *)
                 thunk_FUN_01bda818(
                                   System_Collections_Generic_List<MGNDHCBAPEN<IIMNGGHGKOD,_bool>>_TypeInfo
                                   );
        System_Collections_Generic_List<object>___ctor
                  (pSVar6,
                   Method_System_Collections_Generic_List<MGNDHCBAPEN<IIMNGGHGKOD,_bool>>__ctor__);
        pIVar9 = pOVar10->action;
        pMVar7 = (MGNDHCBAPEN_T1__T2__o *)
                 thunk_FUN_01bda818(MGNDHCBAPEN<IIMNGGHGKOD,_bool>_TypeInfo);
        MGNDHCBAPEN<object,_bool>___ctor
                  (pMVar7,(Il2CppObject *)pIVar9,HPACPFLKHPK,
                   Method_MGNDHCBAPEN<IIMNGGHGKOD,_bool>__ctor__);
        lVar2 = Method_System_Collections_Generic_List<MGNDHCBAPEN<IIMNGGHGKOD,_bool>>_Add__;
        if (pSVar6 != (System_Collections_Generic_List_object__o *)0x0) {
          pSVar8 = (pSVar6->fields)._items;
          (pSVar6->fields)._version = (pSVar6->fields)._version + 1;
          if (pSVar8 != (System_Object_array *)0x0) {
            uVar1 = (pSVar6->fields)._size;
            if (uVar1 < (uint)pSVar8->max_length) {
              (pSVar6->fields)._size = uVar1 + 1;
              pSVar8->m_Items[(int)uVar1] = (Il2CppObject *)pMVar7;
              thunk_FUN_01c20e04(pSVar8->m_Items + (int)uVar1,pMVar7);
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        (pSVar6,(Il2CppObject *)pMVar7,
                         *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70))
              ;
            }
            if (pSVar4 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
              System_Collections_Generic_Dictionary<object,_object>__Add
                        (pSVar4,(Il2CppObject *)MDFMIOAIAHH,(Il2CppObject *)pSVar6,
                         Method_System_Collections_Generic_Dictionary<ECENNHNBAME,_List<MGNDHCBAPEN<IIMNGGHGKOD,_bool>>>_Add__
                        );
              return true;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

