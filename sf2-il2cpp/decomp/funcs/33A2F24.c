// HCIAFAIBMAL$$NJGHLMLNGFD @ RVA 0x33A2F24

double HCIAFAIBMAL__NJGHLMLNGFD(System_String_o *KKJPPDNKGAI,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_Dictionary_string__double__o *__this;
  MethodInfo *extraout_x1;
  double dVar2;
  double local_28;
  
  if ((DAT_04567cce & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_double>_TryGetValue__);
    FUN_01bab630(&HCIAFAIBMAL_TypeInfo);
    DAT_04567cce = 1;
    method = extraout_x1;
  }
  local_28 = 0.0;
  if ((HCIAFAIBMAL_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HCIAFAIBMAL_TypeInfo,method);
  }
  __this = HCIAFAIBMAL_TypeInfo->static_fields->IEJADJDIMME;
  if (__this != (System_Collections_Generic_Dictionary_string__double__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary<object,_double>__TryGetValue
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,
                       (Il2CppObject *)KKJPPDNKGAI,&local_28,
                       Method_System_Collections_Generic_Dictionary<string,_double>_TryGetValue__);
    dVar2 = HCIAFAIBMAL__GHPDCPMLHFJ((MethodInfo *)(ulong)bVar1);
    return dVar2 - local_28;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

