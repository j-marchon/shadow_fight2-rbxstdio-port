// LMPGMKLOHAH$$NLMHNIFKDOA @ RVA 0x3594054

bool LMPGMKLOHAH__NLMHNIFKDOA(LMPGMKLOHAH_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_IReadOnlyList_POGBKGFBOLC__o *source;
  System_Func_TSource__bool__o *predicate;
  
  if ((DAT_04568d8f & 1) == 0) {
    FUN_01bab630(&Method_System_Linq_Enumerable_Any<POGBKGFBOLC>__);
    FUN_01bab630(&System_Func<POGBKGFBOLC,_bool>_TypeInfo);
    FUN_01bab630(&Method_LMPGMKLOHAH_HKENPKKABAB__);
    DAT_04568d8f = 1;
  }
  bVar1 = OPNMPAJKDMI__NLMHNIFKDOA((OPNMPAJKDMI_o *)__this,(MethodInfo *)0x0);
  if (bVar1) {
    return true;
  }
  source = OPNMPAJKDMI__HOBICLIEIIJ((OPNMPAJKDMI_o *)__this,(MethodInfo *)0x0);
  predicate = (System_Func_TSource__bool__o *)
              thunk_FUN_01bda818(System_Func<POGBKGFBOLC,_bool>_TypeInfo);
  System_Func<object,_bool>___ctor();
  bVar1 = System_Linq_Enumerable__Any<object>
                    ((System_Collections_Generic_IEnumerable_TSource__o *)source,predicate,
                     Method_System_Linq_Enumerable_Any<POGBKGFBOLC>__);
  return bVar1;
}

