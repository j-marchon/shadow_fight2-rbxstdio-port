// ICOEHFKOMGO$$BKHDOCFLEPE @ RVA 0x329E8A8

System_Collections_Generic_List_string__o *
ICOEHFKOMGO__BKHDOCFLEPE(System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  Il2CppObject *pIVar3;
  System_Collections_Generic_List_string__o *pSVar4;
  MethodInfo *extraout_x1;
  Il2CppClass *collection;
  
  if ((DAT_045673b7 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_OGGBALCBCLL>_ContainsKey__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_OGGBALCBCLL>_get_Item__);
    FUN_01bab630(&ICOEHFKOMGO_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_AddRange__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    DAT_045673b7 = 1;
    method = extraout_x1;
  }
  if ((ICOEHFKOMGO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(ICOEHFKOMGO_TypeInfo,method);
  }
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
           ICOEHFKOMGO_TypeInfo->static_fields->CDMCPEABCKN;
  if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary<object,_object>__ContainsKey
                      (pSVar2,(Il2CppObject *)KGLJICLJHEL,
                       Method_System_Collections_Generic_Dictionary<string,_OGGBALCBCLL>_ContainsKey__
                      );
    if (!bVar1) {
      pSVar4 = (System_Collections_Generic_List_string__o *)
               thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo);
      System_Collections_Generic_List<object>___ctor
                ((System_Collections_Generic_List_object__o *)pSVar4,
                 Method_System_Collections_Generic_List<string>__ctor__);
      return pSVar4;
    }
    if ((ICOEHFKOMGO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
             ICOEHFKOMGO_TypeInfo->static_fields->CDMCPEABCKN;
    if ((pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
       (pIVar3 = System_Collections_Generic_Dictionary<object,_object>__get_Item
                           (pSVar2,(Il2CppObject *)KGLJICLJHEL,
                            Method_System_Collections_Generic_Dictionary<string,_OGGBALCBCLL>_get_Item__
                           ), pIVar3 != (Il2CppObject *)0x0)) {
      collection = pIVar3[2].klass;
      pSVar4 = (System_Collections_Generic_List_string__o *)
               thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo);
      System_Collections_Generic_List<object>___ctor
                ((System_Collections_Generic_List_object__o *)pSVar4,
                 (System_Collections_Generic_IEnumerable_T__o *)collection,
                 Method_System_Collections_Generic_List<string>__ctor__);
      if (pSVar4 != (System_Collections_Generic_List_string__o *)0x0) {
        System_Collections_Generic_List<object>__AddRange
                  ((System_Collections_Generic_List_object__o *)pSVar4,
                   (System_Collections_Generic_IEnumerable_T__o *)
                   ICOEHFKOMGO_TypeInfo->static_fields->FLHAPNICOAN,
                   Method_System_Collections_Generic_List<string>_AddRange__);
        return pSVar4;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

