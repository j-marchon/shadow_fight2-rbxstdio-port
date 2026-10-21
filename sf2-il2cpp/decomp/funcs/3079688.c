// CPNHNIKFGFB$$.ctor @ RVA 0x3079688

void CPNHNIKFGFB___ctor(CPNHNIKFGFB_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_int__o *__this_00;
  System_Collections_Generic_Dictionary_int__object__o *__this_01;
  System_Collections_Generic_Dictionary_int__Action_object___o **ppSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04565fc9 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_Action<object>>__ctor__);
    FUN_01bab630(&System_Collections_Generic_Dictionary<int,_Action<object>>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<int>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<int>_TypeInfo);
    DAT_04565fc9 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_int__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<int>_TypeInfo,method);
  System_Collections_Generic_List<int>___ctor
            (__this_00,Method_System_Collections_Generic_List<int>__ctor__);
  (__this->fields).FNOGEEODGCE = __this_00;
  thunk_FUN_01c20e04(&__this->fields,__this_00);
  __this_01 = (System_Collections_Generic_Dictionary_int__object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_Dictionary<int,_Action<object>>_TypeInfo
                                );
  System_Collections_Generic_Dictionary<int,_object>___ctor
            (__this_01,Method_System_Collections_Generic_Dictionary<int,_Action<object>>__ctor__);
  ppSVar1 = &(__this->fields).JGMOJNCMKAG;
  *ppSVar1 = (System_Collections_Generic_Dictionary_int__Action_object___o *)__this_01;
  thunk_FUN_01c20e04(ppSVar1,__this_01);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

