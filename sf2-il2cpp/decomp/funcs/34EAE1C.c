// OLKKAIFGGAK$$MNCGKCOBAGC @ RVA 0x34EAE1C

System_Nullable_bool__o
OLKKAIFGGAK__MNCGKCOBAGC
          (OLKKAIFGGAK_o *__this,ECENNHNBAME_o *MDFMIOAIAHH,IIMNGGHGKOD_o *CPECAEHDDDB,
          MethodInfo *method)

{
  System_Collections_Generic_List_object__o *__this_00;
  bool bVar1;
  System_Nullable_bool__o SVar2;
  OLKKAIFGGAK_MDBCPBLGJNI_o *__this_01;
  System_Collections_Generic_Dictionary_object__object__o *__this_02;
  System_Predicate_T__o *match;
  Il2CppObject *pIVar3;
  System_Collections_Generic_List_object__o *local_40;
  System_Nullable_bool__Fields local_34 [2];
  
  if ((DAT_0456878c & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<ECENNHNBAME,_List<MGNDHCBAPEN<IIMNGGHGKOD,_bool>>>_TryGetValue__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<IIMNGGHGKOD,_bool>>_Find__);
    FUN_01bab630(&Method_OLKKAIFGGAK_MDBCPBLGJNI_BMJHBAFNKPE__);
    FUN_01bab630(&OLKKAIFGGAK_MDBCPBLGJNI_TypeInfo);
    FUN_01bab630(&Method_System_Nullable<bool>__ctor__);
    FUN_01bab630(&System_Predicate<MGNDHCBAPEN<IIMNGGHGKOD,_bool>>_TypeInfo);
    DAT_0456878c = 1;
  }
  local_40 = (System_Collections_Generic_List_object__o *)0x0;
  __this_01 = (OLKKAIFGGAK_MDBCPBLGJNI_o *)thunk_FUN_01bda818(OLKKAIFGGAK_MDBCPBLGJNI_TypeInfo);
  OLKKAIFGGAK_MDBCPBLGJNI___ctor(__this_01,(MethodInfo *)0x0);
  if (__this_01 != (OLKKAIFGGAK_MDBCPBLGJNI_o *)0x0) {
    (__this_01->fields).action = CPECAEHDDDB;
    thunk_FUN_01c20e04(&__this_01->fields,CPECAEHDDDB);
    __this_02 = (System_Collections_Generic_Dictionary_object__object__o *)
                (__this->fields).LPDPOJHBCLM;
    if (__this_02 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      bVar1 = System_Collections_Generic_Dictionary<object,_object>__TryGetValue
                        (__this_02,(Il2CppObject *)MDFMIOAIAHH,(Il2CppObject **)&local_40,
                         Method_System_Collections_Generic_Dictionary<ECENNHNBAME,_List<MGNDHCBAPEN<IIMNGGHGKOD,_bool>>>_TryGetValue__
                        );
      __this_00 = local_40;
      if (bVar1) {
        match = (System_Predicate_T__o *)
                thunk_FUN_01bda818(System_Predicate<MGNDHCBAPEN<IIMNGGHGKOD,_bool>>_TypeInfo);
        System_Predicate<object>___ctor();
        if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_035eaf7c;
        pIVar3 = System_Collections_Generic_List<object>__Find
                           (__this_00,match,
                            Method_System_Collections_Generic_List<MGNDHCBAPEN<IIMNGGHGKOD,_bool>>_Find__
                           );
        if (pIVar3 != (Il2CppObject *)0x0) {
          local_34[0].hasValue = false;
          local_34[0].value = false;
          System_Nullable<bool>___ctor
                    ((System_Nullable_bool__o)SUB82(local_34,0),*(bool *)&pIVar3[1].monitor,
                     Method_System_Nullable<bool>__ctor__);
          return (System_Nullable_bool__o)local_34[0];
        }
      }
      SVar2.fields.hasValue = false;
      SVar2.fields.value = false;
      return (System_Nullable_bool__o)SVar2.fields;
    }
  }
LAB_035eaf7c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

