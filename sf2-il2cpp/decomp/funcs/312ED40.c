// CNIFAIKGHKO$$AOFMCBBKHEE @ RVA 0x312ED40

void CNIFAIKGHKO__AOFMCBBKHEE
               (CNIFAIKGHKO_o *__this,System_Comparison_IFFFKKMMKFO__o *NGDCHEBEAJK,bool KPLMAMOCPHJ
               ,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_long__IFFFKKMMKFO__o *__this_00;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *source;
  System_Object_array *collection;
  System_Collections_Generic_List_IFFFKKMMKFO__o *__this_01;
  System_Collections_Generic_List_IFFFKKMMKFO__o **ppSVar1;
  
  if ((DAT_045666b6 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<long,_IFFFKKMMKFO>_get_Values__);
    FUN_01bab630(&Method_System_Linq_Enumerable_ToArray<IFFFKKMMKFO>__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IFFFKKMMKFO>_Sort__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IFFFKKMMKFO>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<IFFFKKMMKFO>_TypeInfo);
    DAT_045666b6 = 1;
  }
  ppSVar1 = &(__this->fields).ELMHAOJGABL;
  if ((*ppSVar1 != (System_Collections_Generic_List_IFFFKKMMKFO__o *)0x0) && (!KPLMAMOCPHJ)) {
    return;
  }
  __this_00 = (__this->fields).NEJBDJKOGOM;
  if (__this_00 != (System_Collections_Generic_Dictionary_long__IFFFKKMMKFO__o *)0x0) {
    source = System_Collections_Generic_Dictionary<long,_object>__get_Values
                       ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                        Method_System_Collections_Generic_Dictionary<long,_IFFFKKMMKFO>_get_Values__
                       );
    collection = System_Linq_Enumerable__ToArray<object>
                           ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                            Method_System_Linq_Enumerable_ToArray<IFFFKKMMKFO>__);
    __this_01 = (System_Collections_Generic_List_IFFFKKMMKFO__o *)
                thunk_FUN_01bda818(System_Collections_Generic_List<IFFFKKMMKFO>_TypeInfo);
    System_Collections_Generic_List<object>___ctor
              ((System_Collections_Generic_List_object__o *)__this_01,
               (System_Collections_Generic_IEnumerable_T__o *)collection,
               Method_System_Collections_Generic_List<IFFFKKMMKFO>__ctor__);
    *ppSVar1 = __this_01;
    thunk_FUN_01c20e04(ppSVar1,__this_01);
    if (NGDCHEBEAJK == (System_Comparison_IFFFKKMMKFO__o *)0x0) {
      return;
    }
    if (*ppSVar1 != (System_Collections_Generic_List_IFFFKKMMKFO__o *)0x0) {
      System_Collections_Generic_List<object>__Sort
                ((System_Collections_Generic_List_object__o *)*ppSVar1,
                 (System_Comparison_T__o *)NGDCHEBEAJK,
                 Method_System_Collections_Generic_List<IFFFKKMMKFO>_Sort__);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

