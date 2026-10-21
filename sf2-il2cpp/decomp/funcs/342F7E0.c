// GBJGJEGPHKD.FHHNJPLBKEP$$.ctor @ RVA 0x342F7E0

void GBJGJEGPHKD_FHHNJPLBKEP___ctor(GBJGJEGPHKD_FHHNJPLBKEP_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_MGNDHCBAPEN_int__int___o *__this_00;
  System_Collections_Generic_List_string__o *__this_01;
  System_Collections_Generic_List_string__o **ppSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_0456816d & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<int,_int>>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<MGNDHCBAPEN<int,_int>>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    DAT_0456816d = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_MGNDHCBAPEN_int__int___o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<MGNDHCBAPEN<int,_int>>_TypeInfo,
                                 method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<MGNDHCBAPEN<int,_int>>__ctor__);
  (__this->fields).MAKMHFGIKHL = __this_00;
  thunk_FUN_01c20e04(&__this->fields,__this_00);
  __this_01 = (System_Collections_Generic_List_string__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_01,
             Method_System_Collections_Generic_List<string>__ctor__);
  ppSVar1 = &(__this->fields).BPKAMANIECL;
  *ppSVar1 = __this_01;
  thunk_FUN_01c20e04(ppSVar1,__this_01);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

