// LEGDPJHPEOB$$.ctor @ RVA 0x354D058

void LEGDPJHPEOB___ctor(LEGDPJHPEOB_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_LEGDPJHPEOB__o *__this_00;
  System_Collections_Generic_List_LEGDPJHPEOB__o **ppSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568b35 & 1) == 0) {
    FUN_01bab630(&EILGGBOIMGE_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<LEGDPJHPEOB>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<LEGDPJHPEOB>_TypeInfo);
    DAT_04568b35 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_LEGDPJHPEOB__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<LEGDPJHPEOB>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<LEGDPJHPEOB>__ctor__);
  ppSVar1 = &(__this->fields).AHEFOIOKDOK;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  if ((EILGGBOIMGE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  EILGGBOIMGE___ctor((EILGGBOIMGE_o *)__this,(MethodInfo *)0x0);
  return;
}

