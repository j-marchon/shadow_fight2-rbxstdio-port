// KBCOFHAJOCK$$.ctor @ RVA 0x350C7C4

void KBCOFHAJOCK___ctor(KBCOFHAJOCK_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_PLCCJCFAFKA__o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_045688d2 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<PLCCJCFAFKA>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<PLCCJCFAFKA>_TypeInfo);
    DAT_045688d2 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_PLCCJCFAFKA__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<PLCCJCFAFKA>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<PLCCJCFAFKA>__ctor__);
  (__this->fields).AJJILEMLFOI = __this_00;
  thunk_FUN_01c20e04(&__this->fields,__this_00);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

