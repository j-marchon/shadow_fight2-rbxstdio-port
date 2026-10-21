// KEFHDOHHHML$$MMKHHPBIDDN @ RVA 0x33703A0

System_String_o * KEFHDOHHHML__MMKHHPBIDDN(int32_t MFDCCBAJNIO,MethodInfo *method)

{
  bool bVar1;
  System_String_o *value;
  int32_t local_24;
  
  local_24 = MFDCCBAJNIO;
  if ((DAT_04567b14 & 1) == 0) {
    FUN_01bab630(&Method_KEFHDOHHHML_OKJAFHHHPFC<ADPIHKFDKPI>__);
    FUN_01bab630(&Method_KEFHDOHHHML_OKJAFHHHPFC<CADMAOBOPOC>__);
    FUN_01bab630(&Method_KEFHDOHHHML_OKJAFHHHPFC<GIJADLLNPBG>__);
    DAT_04567b14 = 1;
  }
  value = KEFHDOHHHML__OKJAFHHHPFC<Int32Enum>
                    (MFDCCBAJNIO,Method_KEFHDOHHHML_OKJAFHHHPFC<ADPIHKFDKPI>__);
  bVar1 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
  if (bVar1) {
    value = KEFHDOHHHML__OKJAFHHHPFC<Int32Enum>
                      (MFDCCBAJNIO,Method_KEFHDOHHHML_OKJAFHHHPFC<GIJADLLNPBG>__);
    bVar1 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
    if (bVar1) {
      value = KEFHDOHHHML__OKJAFHHHPFC<Int32Enum>
                        (MFDCCBAJNIO,Method_KEFHDOHHHML_OKJAFHHHPFC<CADMAOBOPOC>__);
      bVar1 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
      if (bVar1) {
        value = System_Int32__ToString((int32_t)&local_24,(MethodInfo *)0x0);
      }
    }
  }
  return value;
}

