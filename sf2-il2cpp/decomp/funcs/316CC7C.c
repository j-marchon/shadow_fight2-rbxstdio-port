// AGHKMJNGFOB$$.ctor @ RVA 0x316CC7C

void AGHKMJNGFOB___ctor(AGHKMJNGFOB_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_FCGINHCODAI__o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566901 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<FCGINHCODAI>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<FCGINHCODAI>_TypeInfo);
    DAT_04566901 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_FCGINHCODAI__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<FCGINHCODAI>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<FCGINHCODAI>__ctor__);
  (__this->fields).JBCBCLOPOPI = __this_00;
  thunk_FUN_01c20e04(&__this->fields,__this_00);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

