// HHLPEJCDCBH$$.ctor @ RVA 0x32FDB24

void HHLPEJCDCBH___ctor(HHLPEJCDCBH_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_IEFEBEDLHNN__o *__this_00;
  System_Collections_Generic_List_IEFEBEDLHNN__o **ppSVar1;
  System_Collections_Generic_List_int__o *__this_01;
  System_Collections_Generic_List_int__o **ppSVar2;
  MethodInfo *extraout_x1;
  
  if ((DAT_04567702 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<int>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IEFEBEDLHNN>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<int>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<IEFEBEDLHNN>_TypeInfo);
    DAT_04567702 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_IEFEBEDLHNN__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<IEFEBEDLHNN>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<IEFEBEDLHNN>__ctor__);
  ppSVar1 = &(__this->fields).ECFOALIBLLO;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  __this_01 = (System_Collections_Generic_List_int__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<int>_TypeInfo);
  System_Collections_Generic_List<int>___ctor
            (__this_01,Method_System_Collections_Generic_List<int>__ctor__);
  ppSVar2 = &(__this->fields).ECCEGMJMOBJ;
  *ppSVar2 = __this_01;
  thunk_FUN_01c20e04(ppSVar2,__this_01);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

