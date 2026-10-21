// MKFAKELPPAC$$NBGBOMAFCCO @ RVA 0x33159D0

void MKFAKELPPAC__NBGBOMAFCCO
               (MKFAKELPPAC_o *__this,FCMAKNBEJDA_o *OCMAAJLINBN,int32_t BKFOLMBMFNP,
               MethodInfo *method)

{
  System_Collections_Generic_Dictionary_MPAKDCNMLEG__FCMAKNBEJDA__o *__this_00;
  
  if ((DAT_045677d7 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<MPAKDCNMLEG,_FCMAKNBEJDA>_TryAdd__);
    DAT_045677d7 = 1;
  }
  __this_00 = (__this->fields).LIEOHMOLDPA;
  if (__this_00 != (System_Collections_Generic_Dictionary_MPAKDCNMLEG__FCMAKNBEJDA__o *)0x0) {
    System_Collections_Generic_Dictionary<Int32Enum,_object>__TryAdd
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,BKFOLMBMFNP,
               (Il2CppObject *)OCMAAJLINBN,
               Method_System_Collections_Generic_Dictionary<MPAKDCNMLEG,_FCMAKNBEJDA>_TryAdd__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

