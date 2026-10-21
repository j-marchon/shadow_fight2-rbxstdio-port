// LDHBHPILNMA$$.cctor @ RVA 0x31A1CC8

void LDHBHPILNMA___cctor(MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  System_Collections_Generic_Dictionary_string__ECENNHNBAME__o **ppSVar2;
  System_Collections_Generic_List_ECENNHNBAME__o *__this;
  System_Collections_Generic_List_ECENNHNBAME__o **ppSVar3;
  System_Collections_Generic_List_ABNLGBHKOCE__o *__this_00;
  System_Collections_Generic_List_ABNLGBHKOCE__o **ppSVar4;
  System_Collections_Generic_HashSet_object__o *__this_01;
  System_Collections_Generic_HashSet_string__o **ppSVar5;
  System_Collections_Generic_List_KCLPNDAPADO__o *__this_02;
  System_Collections_Generic_List_KCLPNDAPADO__o **ppSVar6;
  
  if ((DAT_04566ae4 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_ECENNHNBAME>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_FCFGGKLDBFJ>__ctor__);
    FUN_01bab630(&System_Collections_Generic_Dictionary<string,_FCFGGKLDBFJ>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_Dictionary<string,_ECENNHNBAME>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_HashSet<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_HashSet<string>_TypeInfo);
    FUN_01bab630(&LDHBHPILNMA_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<ABNLGBHKOCE>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ECENNHNBAME>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KCLPNDAPADO>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<ABNLGBHKOCE>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<KCLPNDAPADO>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<ECENNHNBAME>_TypeInfo);
    DAT_04566ae4 = 1;
  }
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
           thunk_FUN_01bda818(System_Collections_Generic_Dictionary<string,_FCFGGKLDBFJ>_TypeInfo);
  System_Collections_Generic_Dictionary<object,_object>___ctor
            (pSVar1,Method_System_Collections_Generic_Dictionary<string,_FCFGGKLDBFJ>__ctor__);
  LDHBHPILNMA_TypeInfo->static_fields->ICLBNEKDHIO =
       (System_Collections_Generic_Dictionary_string__FCFGGKLDBFJ__o *)pSVar1;
  thunk_FUN_01c20e04(LDHBHPILNMA_TypeInfo->static_fields,pSVar1);
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
           thunk_FUN_01bda818(System_Collections_Generic_Dictionary<string,_ECENNHNBAME>_TypeInfo);
  System_Collections_Generic_Dictionary<object,_object>___ctor
            (pSVar1,Method_System_Collections_Generic_Dictionary<string,_ECENNHNBAME>__ctor__);
  ppSVar2 = &LDHBHPILNMA_TypeInfo->static_fields->EJNINLMPAAO;
  *ppSVar2 = (System_Collections_Generic_Dictionary_string__ECENNHNBAME__o *)pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  __this = (System_Collections_Generic_List_ECENNHNBAME__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<ECENNHNBAME>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this,
             Method_System_Collections_Generic_List<ECENNHNBAME>__ctor__);
  ppSVar3 = &LDHBHPILNMA_TypeInfo->static_fields->HDGPEJOPPOB;
  *ppSVar3 = __this;
  thunk_FUN_01c20e04(ppSVar3,__this);
  __this_00 = (System_Collections_Generic_List_ABNLGBHKOCE__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<ABNLGBHKOCE>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<ABNLGBHKOCE>__ctor__);
  ppSVar4 = &LDHBHPILNMA_TypeInfo->static_fields->MHKDMKDBMBE;
  *ppSVar4 = __this_00;
  thunk_FUN_01c20e04(ppSVar4,__this_00);
  __this_01 = (System_Collections_Generic_HashSet_object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_HashSet<string>_TypeInfo);
  System_Collections_Generic_HashSet<object>___ctor
            (__this_01,Method_System_Collections_Generic_HashSet<string>__ctor__);
  ppSVar5 = &LDHBHPILNMA_TypeInfo->static_fields->KDDGJMCPJNA;
  *ppSVar5 = (System_Collections_Generic_HashSet_string__o *)__this_01;
  thunk_FUN_01c20e04(ppSVar5,__this_01);
  __this_02 = (System_Collections_Generic_List_KCLPNDAPADO__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<KCLPNDAPADO>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_02,
             Method_System_Collections_Generic_List<KCLPNDAPADO>__ctor__);
  ppSVar6 = &LDHBHPILNMA_TypeInfo->static_fields->GLNEIGKMPDC;
  *ppSVar6 = __this_02;
  thunk_FUN_01c20e04(ppSVar6,__this_02);
  return;
}

