// OLKKAIFGGAK.OGCKCABMHLC$$.ctor @ RVA 0x34F9F4C

void OLKKAIFGGAK_OGCKCABMHLC___ctor(OLKKAIFGGAK_OGCKCABMHLC_o *__this,MethodInfo *method)

{
  CNDPAJOLKFN_o *__this_00;
  CNDPAJOLKFN_o **ppCVar1;
  System_Collections_Generic_List_int__o *__this_01;
  System_Collections_Generic_List_int__o **ppSVar2;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568817 & 1) == 0) {
    FUN_01bab630(&CNDPAJOLKFN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<int>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<int>_TypeInfo);
    FUN_01bab630(&StringLiteral_1);
    DAT_04568817 = 1;
    method = extraout_x1;
  }
  __this_00 = (CNDPAJOLKFN_o *)thunk_FUN_01bda818(CNDPAJOLKFN_TypeInfo,method);
  CNDPAJOLKFN___ctor(__this_00,(MethodInfo *)0x0);
  ppCVar1 = &(__this->fields).GDPIIGNJCLE;
  *ppCVar1 = __this_00;
  thunk_FUN_01c20e04(ppCVar1,__this_00);
  (__this->fields).LKNOHFANHAE = StringLiteral_1;
  thunk_FUN_01c20e04();
  __this_01 = (System_Collections_Generic_List_int__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<int>_TypeInfo);
  System_Collections_Generic_List<int>___ctor
            (__this_01,Method_System_Collections_Generic_List<int>__ctor__);
  ppSVar2 = &(__this->fields).BFNCMBCHJCF;
  *ppSVar2 = __this_01;
  thunk_FUN_01c20e04(ppSVar2,__this_01);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

