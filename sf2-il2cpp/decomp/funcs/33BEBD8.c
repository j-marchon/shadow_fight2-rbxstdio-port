// CUDLR.Server$$EIIFMOANHHA @ RVA 0x33BEBD8

void CUDLR_Server__EIIFMOANHHA(CUDLR_Server_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_DOJKMMDFBCJ__o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  System_Collections_Generic_List_DOJKMMDFBCJ__o **ppSVar1;
  
  if ((DAT_04567dbb & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<DOJKMMDFBCJ>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<DOJKMMDFBCJ>_TypeInfo);
    DAT_04567dbb = 1;
    method = extraout_x1;
  }
  ppSVar1 = &(__this->fields).CFGNLMNHGFL;
  if (*ppSVar1 != (System_Collections_Generic_List_DOJKMMDFBCJ__o *)0x0) {
    return;
  }
  __this_00 = (System_Collections_Generic_List_DOJKMMDFBCJ__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<DOJKMMDFBCJ>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<DOJKMMDFBCJ>__ctor__);
  (__this->fields).CFGNLMNHGFL = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  CUDLR_Server__LKACCCCGIAP(__this,method_00);
  CUDLR_Server__PNJOGAAGOJJ(__this,method_01);
  return;
}

