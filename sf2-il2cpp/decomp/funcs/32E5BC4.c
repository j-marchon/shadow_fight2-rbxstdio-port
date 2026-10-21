// MMIIDELPHLP$$.ctor @ RVA 0x32E5BC4

void MMIIDELPHLP___ctor(MMIIDELPHLP_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_string__o *__this_00;
  System_Collections_Generic_List_MMIIDELPHLP_FJDJOEFFGNH__o *__this_01;
  System_Collections_Generic_List_MMIIDELPHLP_FJDJOEFFGNH__o **ppSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_0456760c & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<MMIIDELPHLP_FJDJOEFFGNH>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<MMIIDELPHLP_FJDJOEFFGNH>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    DAT_0456760c = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_string__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<string>__ctor__);
  (__this->fields).GLFJDDHEMNO = __this_00;
  thunk_FUN_01c20e04(&__this->fields,__this_00);
  __this_01 = (System_Collections_Generic_List_MMIIDELPHLP_FJDJOEFFGNH__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<MMIIDELPHLP_FJDJOEFFGNH>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_01,
             Method_System_Collections_Generic_List<MMIIDELPHLP_FJDJOEFFGNH>__ctor__);
  ppSVar1 = &(__this->fields).BAFCLOIPEMA;
  *ppSVar1 = __this_01;
  thunk_FUN_01c20e04(ppSVar1,__this_01);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

