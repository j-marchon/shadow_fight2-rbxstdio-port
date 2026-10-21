// EANNACPOJFA$$.ctor @ RVA 0x348B13C

void EANNACPOJFA___ctor(EANNACPOJFA_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_JLGNBOILFLN__o *__this_00;
  System_Collections_Generic_List_JLGNBOILFLN__o **ppSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_045683d9 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<JLGNBOILFLN>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<JLGNBOILFLN>_TypeInfo);
    DAT_045683d9 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_JLGNBOILFLN__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<JLGNBOILFLN>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<JLGNBOILFLN>__ctor__);
  ppSVar1 = &(__this->fields).GJBLBEALOBO;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

