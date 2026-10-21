// NOAPKJBLPND$$.ctor @ RVA 0x35222A4

void NOAPKJBLPND___ctor(NOAPKJBLPND_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_int__object__o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_045689d5 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_DEFIPIDEFOO>__ctor__);
    FUN_01bab630(&System_Collections_Generic_Dictionary<int,_DEFIPIDEFOO>_TypeInfo);
    DAT_045689d5 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_Dictionary_int__object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_Dictionary<int,_DEFIPIDEFOO>_TypeInfo,
                                 method);
  System_Collections_Generic_Dictionary<int,_object>___ctor
            (__this_00,Method_System_Collections_Generic_Dictionary<int,_DEFIPIDEFOO>__ctor__);
  (__this->fields).MAKFKJPLHCF =
       (System_Collections_Generic_Dictionary_int__DEFIPIDEFOO__o *)__this_00;
  thunk_FUN_01c20e04(&__this->fields,__this_00);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

