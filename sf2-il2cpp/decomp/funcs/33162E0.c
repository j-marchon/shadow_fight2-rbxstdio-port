// MKFAKELPPAC$$GJOJFKPLDHF @ RVA 0x33162E0

FCMAKNBEJDA_o *
MKFAKELPPAC__GJOJFKPLDHF(MKFAKELPPAC_o *__this,int32_t BKFOLMBMFNP,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_MPAKDCNMLEG__FCMAKNBEJDA__o *__this_00;
  FCMAKNBEJDA_o *local_28;
  
  if ((DAT_045677fe & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<MPAKDCNMLEG,_FCMAKNBEJDA>_TryGetValue__
                );
    DAT_045677fe = 1;
  }
  local_28 = (FCMAKNBEJDA_o *)0x0;
  __this_00 = (__this->fields).LIEOHMOLDPA;
  if (__this_00 != (System_Collections_Generic_Dictionary_MPAKDCNMLEG__FCMAKNBEJDA__o *)0x0) {
    System_Collections_Generic_Dictionary<Int32Enum,_object>__TryGetValue
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,BKFOLMBMFNP,
               (Il2CppObject **)&local_28,
               Method_System_Collections_Generic_Dictionary<MPAKDCNMLEG,_FCMAKNBEJDA>_TryGetValue__)
    ;
    return local_28;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

