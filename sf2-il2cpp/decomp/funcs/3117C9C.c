// NGJHCIGFLFD$$.ctor @ RVA 0x3117C9C

void NGJHCIGFLFD___ctor(NGJHCIGFLFD_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_OANBNKOOJFH__o *__this_00;
  System_Collections_Generic_List_OANBNKOOJFH__o **ppSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_045665c6 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<OANBNKOOJFH>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<OANBNKOOJFH>_TypeInfo);
    DAT_045665c6 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_OANBNKOOJFH__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<OANBNKOOJFH>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<OANBNKOOJFH>__ctor__);
  ppSVar1 = &(__this->fields).KDIMDBHMBEM;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  OANBNKOOJFH___ctor((OANBNKOOJFH_o *)__this,2,(MethodInfo *)0x0);
  (__this->fields).BGHFADDGPAD = 2;
  return;
}

