// KDDFEFJOIJP$$.ctor @ RVA 0x32E5770

void KDDFEFJOIJP___ctor(KDDFEFJOIJP_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_MBALPICJBHF__o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_04567608 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<MBALPICJBHF>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<MBALPICJBHF>_TypeInfo);
    DAT_04567608 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_MBALPICJBHF__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<MBALPICJBHF>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<MBALPICJBHF>__ctor__);
  (__this->fields).HBDMPPHKBMP = __this_00;
  thunk_FUN_01c20e04(&__this->fields,__this_00);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

