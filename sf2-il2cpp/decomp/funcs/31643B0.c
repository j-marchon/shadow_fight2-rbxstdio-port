// MFLHNKGKEGA$$DNFKCGGGJFB @ RVA 0x31643B0

bool MFLHNKGKEGA__DNFKCGGGJFB(MFLHNKGKEGA_o *__this,System_String_o *CJFAPGEEPLM,MethodInfo *method)

{
  bool bVar1;
  System_Func_TSource__bool__o *predicate;
  MethodInfo *extraout_x1;
  UniRx_ReactiveProperty_string____o *pUVar2;
  System_String_array *source;
  
  if ((DAT_045668a0 & 1) == 0) {
    FUN_01bab630(&Method_System_Linq_Enumerable_Any<string>__);
    FUN_01bab630(&System_Func<string,_bool>_TypeInfo);
    FUN_01bab630(&Method_UniRx_ReactiveProperty<string[]>_get_Value__);
    FUN_01bab630(&Method_System_String_StartsWith__);
    DAT_045668a0 = 1;
    CJFAPGEEPLM = (System_String_o *)extraout_x1;
  }
  bVar1 = MFLHNKGKEGA__BNNOJJPPGBM(__this,(MethodInfo *)CJFAPGEEPLM);
  if (bVar1) {
    pUVar2 = (__this->fields).IDPIHPBEHFC;
    if (pUVar2 != (UniRx_ReactiveProperty_string____o *)0x0) {
      source = (pUVar2->fields).value;
      predicate = (System_Func_TSource__bool__o *)
                  thunk_FUN_01bda818(System_Func<string,_bool>_TypeInfo);
      System_Func<object,_bool>___ctor();
      bVar1 = System_Linq_Enumerable__Any<object>
                        ((System_Collections_Generic_IEnumerable_TSource__o *)source,predicate,
                         Method_System_Linq_Enumerable_Any<string>__);
      return bVar1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return false;
}

