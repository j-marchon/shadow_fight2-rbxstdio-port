// MKFAKELPPAC$$.ctor @ RVA 0x3316864

void MKFAKELPPAC___ctor(MKFAKELPPAC_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_MPAKDCNMLEG__FCMAKNBEJDA__o *__this_00;
  System_Collections_Generic_Dictionary_MPAKDCNMLEG__FCMAKNBEJDA__o **ppSVar1;
  System_Collections_Generic_Dictionary_MPAKDCNMLEG__Action__o *__this_01;
  System_Collections_Generic_Dictionary_MPAKDCNMLEG__Action__o **ppSVar2;
  MethodInfo *extraout_x1;
  
  if ((DAT_045677dc & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<MPAKDCNMLEG,_FCMAKNBEJDA>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<MPAKDCNMLEG,_Action>__ctor__);
    FUN_01bab630(&System_Collections_Generic_Dictionary<MPAKDCNMLEG,_FCMAKNBEJDA>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_Dictionary<MPAKDCNMLEG,_Action>_TypeInfo);
    DAT_045677dc = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_Dictionary_MPAKDCNMLEG__FCMAKNBEJDA__o *)
              thunk_FUN_01bda818(System_Collections_Generic_Dictionary<MPAKDCNMLEG,_FCMAKNBEJDA>_TypeInfo
                                 ,method);
  System_Collections_Generic_Dictionary<Int32Enum,_object>___ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
             Method_System_Collections_Generic_Dictionary<MPAKDCNMLEG,_FCMAKNBEJDA>__ctor__);
  ppSVar1 = &(__this->fields).LIEOHMOLDPA;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  __this_01 = (System_Collections_Generic_Dictionary_MPAKDCNMLEG__Action__o *)
              thunk_FUN_01bda818(System_Collections_Generic_Dictionary<MPAKDCNMLEG,_Action>_TypeInfo
                                );
  System_Collections_Generic_Dictionary<Int32Enum,_object>___ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,
             Method_System_Collections_Generic_Dictionary<MPAKDCNMLEG,_Action>__ctor__);
  ppSVar2 = &(__this->fields).IGDICMFPNOP;
  *ppSVar2 = __this_01;
  thunk_FUN_01c20e04(ppSVar2,__this_01);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

