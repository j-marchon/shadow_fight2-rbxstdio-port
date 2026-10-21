// EEGDOGKBLNG$$HBJCAIGDNLF @ RVA 0x3071818

int64_t EEGDOGKBLNG__HBJCAIGDNLF(EEGDOGKBLNG_o *__this,int32_t ACCIHBHMFPN,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  System_Func_TSource__bool__o *predicate;
  Il2CppClass *pIVar2;
  KAMBBJFPLGM_o *pKVar3;
  Google_Protobuf_Collections_RepeatedField_EIBAKHBHMAO__o *source;
  
  if ((DAT_04565f73 & 1) == 0) {
    FUN_01bab630(&Method_EEGDOGKBLNG_EABAJGALGON_OLGLGNLKKEN__);
    FUN_01bab630(&EEGDOGKBLNG_EABAJGALGON_TypeInfo);
    FUN_01bab630(&Method_System_Linq_Enumerable_FirstOrDefault<EIBAKHBHMAO>__);
    FUN_01bab630(&System_Func<EIBAKHBHMAO,_bool>_TypeInfo);
    DAT_04565f73 = 1;
  }
  pIVar1 = (Il2CppObject *)thunk_FUN_01bda818(EEGDOGKBLNG_EABAJGALGON_TypeInfo);
  System_Object___ctor(pIVar1,(MethodInfo *)0x0);
  if (pIVar1 != (Il2CppObject *)0x0) {
    *(int32_t *)&pIVar1[1].klass = ACCIHBHMFPN;
    pKVar3 = (__this->fields).MLAAJICBOAD;
    if (pKVar3 == (KAMBBJFPLGM_o *)0x0) {
      pIVar2 = (Il2CppClass *)0x0;
    }
    else {
      source = (pKVar3->fields).FDELJPKNGKF;
      predicate = (System_Func_TSource__bool__o *)
                  thunk_FUN_01bda818(System_Func<EIBAKHBHMAO,_bool>_TypeInfo);
      System_Func<object,_bool>___ctor();
      pIVar1 = System_Linq_Enumerable__FirstOrDefault<object>
                         ((System_Collections_Generic_IEnumerable_TSource__o *)source,predicate,
                          Method_System_Linq_Enumerable_FirstOrDefault<EIBAKHBHMAO>__);
      pIVar2 = (Il2CppClass *)0x0;
      if (pIVar1 != (Il2CppObject *)0x0) {
        pIVar2 = pIVar1[2].klass;
      }
    }
    return (int64_t)pIVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

