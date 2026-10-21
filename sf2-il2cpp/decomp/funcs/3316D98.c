// MKFAKELPPAC$$GLHOJHKGHKM @ RVA 0x3316D98

void MKFAKELPPAC__GLHOJHKGHKM
               (MKFAKELPPAC_o *__this,FCMAKNBEJDA_o *OCMAAJLINBN,int32_t BKFOLMBMFNP,
               System_Action_o *CGLKNMPIAJF,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_Dictionary_MPAKDCNMLEG__FCMAKNBEJDA__o *__this_00;
  System_Collections_Generic_Dictionary_MPAKDCNMLEG__Action__o *__this_01;
  
  if ((DAT_045677e1 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<MPAKDCNMLEG,_Action>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<MPAKDCNMLEG,_FCMAKNBEJDA>_TryAdd__);
    DAT_045677e1 = 1;
  }
  __this_00 = (__this->fields).LIEOHMOLDPA;
  if (__this_00 != (System_Collections_Generic_Dictionary_MPAKDCNMLEG__FCMAKNBEJDA__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary<Int32Enum,_object>__TryAdd
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                       BKFOLMBMFNP,(Il2CppObject *)OCMAAJLINBN,
                       Method_System_Collections_Generic_Dictionary<MPAKDCNMLEG,_FCMAKNBEJDA>_TryAdd__
                      );
    if (!bVar1) {
      return;
    }
    __this_01 = (__this->fields).IGDICMFPNOP;
    if (__this_01 != (System_Collections_Generic_Dictionary_MPAKDCNMLEG__Action__o *)0x0) {
      System_Collections_Generic_Dictionary<Int32Enum,_object>__Add
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,BKFOLMBMFNP,
                 (Il2CppObject *)CGLKNMPIAJF,
                 Method_System_Collections_Generic_Dictionary<MPAKDCNMLEG,_Action>_Add__);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

