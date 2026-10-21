// AFFHKININGD$$PHEKFMPOHBK @ RVA 0x3342EB0

bool AFFHKININGD__PHEKFMPOHBK(AFFHKININGD_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_IEnumerable_TSource__o *source;
  System_Func_NIAFDKHDBMA__bool__o **ppSVar2;
  System_Func_NIAFDKHDBMA__bool__o *predicate;
  
  if ((DAT_045679a4 & 1) == 0) {
    FUN_01bab630(&Method_System_Linq_Enumerable_Any<NIAFDKHDBMA>__);
    FUN_01bab630(&System_Func<NIAFDKHDBMA,_bool>_TypeInfo);
    FUN_01bab630(&Method_AFFHKININGD_<>c_MPDHKEFMGFL__);
    FUN_01bab630(&AFFHKININGD_<>c_TypeInfo);
    DAT_045679a4 = 1;
  }
  source = (System_Collections_Generic_IEnumerable_TSource__o *)
           (*(__this->klass->vtable)._4_NIKCNPMKAFK.methodPtr)
                     (__this,(__this->klass->vtable)._4_NIKCNPMKAFK.method);
  if ((AFFHKININGD_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(AFFHKININGD_<>c_TypeInfo);
  }
  predicate = AFFHKININGD_<>c_TypeInfo->static_fields->__9__63_0;
  if (predicate == (System_Func_NIAFDKHDBMA__bool__o *)0x0) {
    if ((AFFHKININGD_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(AFFHKININGD_<>c_TypeInfo);
    }
    predicate = (System_Func_NIAFDKHDBMA__bool__o *)
                thunk_FUN_01bda818(System_Func<NIAFDKHDBMA,_bool>_TypeInfo);
    System_Func<object,_bool>___ctor();
                    /* try { // try from 03442f94 to 03542fbb has its CatchHandler @ 034430f0 */
    ppSVar2 = &AFFHKININGD_<>c_TypeInfo->static_fields->__9__63_0;
    *ppSVar2 = predicate;
    thunk_FUN_01c20e04(ppSVar2,predicate);
  }
  bVar1 = System_Linq_Enumerable__Any<object>
                    (source,(System_Func_TSource__bool__o *)predicate,
                     Method_System_Linq_Enumerable_Any<NIAFDKHDBMA>__);
  return bVar1;
}

