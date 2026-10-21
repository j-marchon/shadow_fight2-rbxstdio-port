// OJEHKJHEBID$$LANNCOJFCBD @ RVA 0x34B5914

MGDJPGGPDJI_o *
OJEHKJHEBID__LANNCOJFCBD(OJEHKJHEBID_o *__this,int64_t FKIGDGJPIAC,MethodInfo *method)

{
  Il2CppObject *__this_00;
  System_Func_TSource__bool__o *predicate;
  MGDJPGGPDJI_o *pMVar1;
  Google_Protobuf_Collections_RepeatedField_MGDJPGGPDJI__o *source;
  
  if ((DAT_0456858d & 1) == 0) {
    FUN_01bab630(&Method_System_Linq_Enumerable_FirstOrDefault<MGDJPGGPDJI>__);
    FUN_01bab630(&System_Func<MGDJPGGPDJI,_bool>_TypeInfo);
    FUN_01bab630(&Method_OJEHKJHEBID_LCMBLHFJOFO_FELLOBFKLOL__);
    FUN_01bab630(&OJEHKJHEBID_LCMBLHFJOFO_TypeInfo);
    DAT_0456858d = 1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(OJEHKJHEBID_LCMBLHFJOFO_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = (Il2CppClass *)FKIGDGJPIAC;
    source = (__this->fields).MABPCBMOECE;
    predicate = (System_Func_TSource__bool__o *)
                thunk_FUN_01bda818(System_Func<MGDJPGGPDJI,_bool>_TypeInfo);
    System_Func<object,_bool>___ctor();
    pMVar1 = (MGDJPGGPDJI_o *)
             System_Linq_Enumerable__FirstOrDefault<object>
                       ((System_Collections_Generic_IEnumerable_TSource__o *)source,predicate,
                        Method_System_Linq_Enumerable_FirstOrDefault<MGDJPGGPDJI>__);
    return pMVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

