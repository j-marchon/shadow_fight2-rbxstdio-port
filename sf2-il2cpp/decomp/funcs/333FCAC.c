// AFFHKININGD$$FCKMLBIPLDK @ RVA 0x333FCAC

int32_t AFFHKININGD__FCKMLBIPLDK
                  (AFFHKININGD_o *__this,System_String_o *BJEEDJEKAMF,MethodInfo *method)

{
  int32_t iVar1;
  Il2CppObject *__this_00;
  System_Collections_Generic_IEnumerable_TSource__o *pSVar2;
  System_Func_TSource__bool__o *predicate;
  System_Func_NIAFDKHDBMA__int__o **ppSVar3;
  System_Func_NIAFDKHDBMA__int__o *selector;
  
  if ((DAT_0456798b & 1) == 0) {
    FUN_01bab630(&Method_System_Linq_Enumerable_Sum<NIAFDKHDBMA>__);
    FUN_01bab630(&Method_System_Linq_Enumerable_Where<NIAFDKHDBMA>__);
    FUN_01bab630(&System_Func<NIAFDKHDBMA,_bool>_TypeInfo);
    FUN_01bab630(&System_Func<NIAFDKHDBMA,_int>_TypeInfo);
    FUN_01bab630(&Method_AFFHKININGD_NPLCDIFDEGB_DBMNOOPHIGI__);
    FUN_01bab630(&AFFHKININGD_NPLCDIFDEGB_TypeInfo);
    FUN_01bab630(&Method_AFFHKININGD_<>c_GBMHBCFCNEF__);
    FUN_01bab630(&AFFHKININGD_<>c_TypeInfo);
    DAT_0456798b = 1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(AFFHKININGD_NPLCDIFDEGB_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = (Il2CppClass *)BJEEDJEKAMF;
    thunk_FUN_01c20e04(__this_00 + 1,BJEEDJEKAMF);
    pSVar2 = (System_Collections_Generic_IEnumerable_TSource__o *)
             (*(__this->klass->vtable)._4_NIKCNPMKAFK.methodPtr)
                       (__this,(__this->klass->vtable)._4_NIKCNPMKAFK.method);
    predicate = (System_Func_TSource__bool__o *)
                thunk_FUN_01bda818(System_Func<NIAFDKHDBMA,_bool>_TypeInfo);
    System_Func<object,_bool>___ctor();
    pSVar2 = System_Linq_Enumerable__Where<object>
                       (pSVar2,predicate,Method_System_Linq_Enumerable_Where<NIAFDKHDBMA>__);
    if ((AFFHKININGD_<>c_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 0343fddc to 0353fde3 has its CatchHandler @ 0343fe8c */
      thunk_FUN_01ba7564(AFFHKININGD_<>c_TypeInfo);
    }
                    /* try { // try from 0343fdf0 to 0353fdff has its CatchHandler @ 0343fe90 */
    selector = AFFHKININGD_<>c_TypeInfo->static_fields->__9__64_1;
    if (selector == (System_Func_NIAFDKHDBMA__int__o *)0x0) {
      if ((AFFHKININGD_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(AFFHKININGD_<>c_TypeInfo);
                    /* try { // try from 0343fe0c to 0353fe13 has its CatchHandler @ 0343fe88 */
      }
      selector = (System_Func_NIAFDKHDBMA__int__o *)
                 thunk_FUN_01bda818(System_Func<NIAFDKHDBMA,_int>_TypeInfo);
                    /* try { // try from 0343fe2c to 0353fe37 has its CatchHandler @ 0343fe84 */
                    /* try { // try from 0343fe38 to 0353fe67 has its CatchHandler @ 0343fc9c */
      System_Func<object,_int>___ctor();
      ppSVar3 = &AFFHKININGD_<>c_TypeInfo->static_fields->__9__64_1;
      *ppSVar3 = selector;
      thunk_FUN_01c20e04(ppSVar3,selector);
    }
                    /* try { // try from 0343fe68 to 0353fe6b has its CatchHandler @ 0343fe80 */
                    /* try { // try from 0343fe6c to 0353fe6f has its CatchHandler @ 0343fe7c */
                    /* try { // try from 0343fe70 to 0353fe73 has its CatchHandler @ 0343fe78 */
                    /* try { // try from 0343fe74 to 0353fea7 has its CatchHandler @ 0343fc9c */
    iVar1 = System_Linq_Enumerable__Sum<object>
                      (pSVar2,(System_Func_TSource__int__o *)selector,
                       Method_System_Linq_Enumerable_Sum<NIAFDKHDBMA>__);
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0343fe70 with catch @ 0343fe78
                        */
  FUN_01bab8c8();
}

