// PNCLBBMPHKB$$.cctor @ RVA 0x356604C

void PNCLBBMPHKB___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  
  if ((DAT_04568bf8 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_HashSet<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_HashSet<string>_TypeInfo);
    FUN_01bab630(&PNCLBBMPHKB_TypeInfo);
    DAT_04568bf8 = 1;
  }
  __this = (System_Collections_Generic_HashSet_object__o *)
           thunk_FUN_01bda818(System_Collections_Generic_HashSet<string>_TypeInfo);
  System_Collections_Generic_HashSet<object>___ctor
            (__this,Method_System_Collections_Generic_HashSet<string>__ctor__);
  PNCLBBMPHKB_TypeInfo->static_fields->JNHCNDDALMK =
       (System_Collections_Generic_HashSet_string__o *)__this;
  thunk_FUN_01c20e04(PNCLBBMPHKB_TypeInfo->static_fields,__this);
  return;
}

