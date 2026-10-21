// EOOEOHKLOFJ$$EGFIEDINDAC @ RVA 0x30C4DA8

bool EOOEOHKLOFJ__EGFIEDINDAC(System_String_o *JAFADHFFBPK,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_HashSet_object__o *__this;
  MethodInfo *extraout_x1;
  
  if ((DAT_045662a9 & 1) == 0) {
    FUN_01bab630(&EOOEOHKLOFJ_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_HashSet<string>_Contains__);
    DAT_045662a9 = 1;
    method = extraout_x1;
  }
  if ((EOOEOHKLOFJ_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(EOOEOHKLOFJ_TypeInfo,method);
  }
  __this = (System_Collections_Generic_HashSet_object__o *)
           EOOEOHKLOFJ_TypeInfo->static_fields->ANAIGEKGOJA;
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    bVar1 = System_Collections_Generic_HashSet<object>__Contains
                      (__this,(Il2CppObject *)JAFADHFFBPK,
                       Method_System_Collections_Generic_HashSet<string>_Contains__);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

