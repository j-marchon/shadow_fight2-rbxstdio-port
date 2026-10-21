// ECNCJPCKOLN$$.cctor @ RVA 0x326E500

void ECNCJPCKOLN___cctor(MethodInfo *method)

{
  System_Collections_Generic_List_T__o *__this;
  
  if ((DAT_04567206 & 1) == 0) {
    FUN_01bab630(&ECNCJPCKOLN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<MIBHAJBEMIK>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<MIBHAJBEMIK>_TypeInfo);
    DAT_04567206 = 1;
  }
  __this = (System_Collections_Generic_List_T__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<MIBHAJBEMIK>_TypeInfo);
  System_Collections_Generic_List<Int32Enum>___ctor
            (__this,Method_System_Collections_Generic_List<MIBHAJBEMIK>__ctor__);
  ECNCJPCKOLN_TypeInfo->static_fields->NMMAKHKLLHI =
       (System_Collections_Generic_List_MIBHAJBEMIK__o *)__this;
  thunk_FUN_01c20e04(ECNCJPCKOLN_TypeInfo->static_fields,__this);
  return;
}

