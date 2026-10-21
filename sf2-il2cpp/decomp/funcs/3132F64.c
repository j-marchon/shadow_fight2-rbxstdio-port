// ONPHBGJDFBM$$KCEBNCEKNJD @ RVA 0x3132F64

bool ONPHBGJDFBM__KCEBNCEKNJD
               (ONPHBGJDFBM_o *__this,System_Action_KEFHDOHHHML__o *CPECAEHDDDB,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_IEnumerable_T__o *collection;
  System_Collections_Generic_List_object__o *__this_00;
  MethodInfo *method_00;
  
  if ((DAT_045666e2 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<Delegate>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<Delegate>_TypeInfo);
    DAT_045666e2 = 1;
  }
  if (CPECAEHDDDB != (System_Action_KEFHDOHHHML__o *)0x0) {
    collection = (System_Collections_Generic_IEnumerable_T__o *)
                 (*(CPECAEHDDDB->klass->vtable)._10_GetInvocationList.methodPtr)
                           (CPECAEHDDDB,(CPECAEHDDDB->klass->vtable)._10_GetInvocationList.method);
    __this_00 = (System_Collections_Generic_List_object__o *)
                thunk_FUN_01bda818(System_Collections_Generic_List<Delegate>_TypeInfo);
    method_00 = Method_System_Collections_Generic_List<Delegate>__ctor__;
    System_Collections_Generic_List<object>___ctor
              (__this_00,collection,
               (MethodInfo_26E46A0 *)Method_System_Collections_Generic_List<Delegate>__ctor__);
    bVar1 = ONPHBGJDFBM__KCEBNCEKNJD(__this,(Il2CppObject *)__this_00,method_00);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

