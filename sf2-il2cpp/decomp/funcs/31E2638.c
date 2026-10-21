// GBAAAJLKFDA$$.cctor @ RVA 0x31E2638

void GBAAAJLKFDA___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_long__o *__this;
  
  if ((DAT_04566d4b & 1) == 0) {
    FUN_01bab630(&GBAAAJLKFDA_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_HashSet<long>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_HashSet<long>__ctor__);
    FUN_01bab630(&System_Collections_Generic_HashSet<long>_TypeInfo);
    DAT_04566d4b = 1;
  }
  __this = (System_Collections_Generic_HashSet_long__o *)
           thunk_FUN_01bda818(System_Collections_Generic_HashSet<long>_TypeInfo);
  System_Collections_Generic_HashSet<long>___ctor
            (__this,Method_System_Collections_Generic_HashSet<long>__ctor__);
  if (__this != (System_Collections_Generic_HashSet_long__o *)0x0) {
    System_Collections_Generic_HashSet<long>__Add
              (__this,400,Method_System_Collections_Generic_HashSet<long>_Add__);
    System_Collections_Generic_HashSet<long>__Add
              (__this,0x191,Method_System_Collections_Generic_HashSet<long>_Add__);
    System_Collections_Generic_HashSet<long>__Add
              (__this,0x193,Method_System_Collections_Generic_HashSet<long>_Add__);
    System_Collections_Generic_HashSet<long>__Add
              (__this,0x194,Method_System_Collections_Generic_HashSet<long>_Add__);
    System_Collections_Generic_HashSet<long>__Add
              (__this,0x195,Method_System_Collections_Generic_HashSet<long>_Add__);
    GBAAAJLKFDA_TypeInfo->static_fields->KBLOLGCKCIM = __this;
    thunk_FUN_01c20e04(GBAAAJLKFDA_TypeInfo->static_fields,__this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

