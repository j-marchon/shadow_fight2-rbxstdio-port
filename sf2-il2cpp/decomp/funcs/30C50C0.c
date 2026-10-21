// EOOEOHKLOFJ$$.cctor @ RVA 0x30C50C0

void EOOEOHKLOFJ___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  System_Collections_Generic_HashSet_string__o **ppSVar1;
  
  if ((DAT_045662ab & 1) == 0) {
    FUN_01bab630(&EOOEOHKLOFJ_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_HashSet<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_HashSet<string>_TypeInfo);
    DAT_045662ab = 1;
  }
  __this = (System_Collections_Generic_HashSet_object__o *)
           thunk_FUN_01bda818(System_Collections_Generic_HashSet<string>_TypeInfo);
                    /* try { // try from 031c5124 to 032c514b has its CatchHandler @ 031c53c0 */
  System_Collections_Generic_HashSet<object>___ctor
            (__this,Method_System_Collections_Generic_HashSet<string>__ctor__);
  ppSVar1 = &EOOEOHKLOFJ_TypeInfo->static_fields->ANAIGEKGOJA;
  *ppSVar1 = (System_Collections_Generic_HashSet_string__o *)__this;
  thunk_FUN_01c20e04(ppSVar1,__this);
  return;
}

