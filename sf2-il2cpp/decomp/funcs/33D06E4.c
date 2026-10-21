// BGAJHKGONBK$$CJOHHBMFAAG @ RVA 0x33D06E4

Il2CppObject * BGAJHKGONBK__CJOHHBMFAAG(BGAJHKGONBK_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o *str1;
  System_String_o *str2;
  CFGLKHFFEKA_o *__this_00;
  System_String_o *str3;
  int32_t local_24;
  
  if ((DAT_04567e5d & 1) == 0) {
    FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
    DAT_04567e5d = 1;
  }
  pSVar1 = HPEENDCCJND__FECLPLFHJAL((HPEENDCCJND_o *)__this,1,(MethodInfo *)0x0);
  str1 = HPEENDCCJND__FECLPLFHJAL((HPEENDCCJND_o *)__this,2,(MethodInfo *)0x0);
  str2 = HPEENDCCJND__FECLPLFHJAL((HPEENDCCJND_o *)__this,3,(MethodInfo *)0x0);
  if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(EOAOCPLIKOI_TypeInfo);
  }
  __this_00 = EOAOCPLIKOI__PNENLJCMECN((MethodInfo *)0x0);
  if (__this_00 != (CFGLKHFFEKA_o *)0x0) {
    local_24 = CFGLKHFFEKA__KEAMCFNFPHB(__this_00,(MethodInfo *)0x0);
                    /* try { // try from 034d0780 to 035d0787 has its CatchHandler @ 034d07f0 */
                    /* try { // try from 034d0788 to 035d07e3 has its CatchHandler @ 034d0670 */
    str3 = System_Int32__ToString((int32_t)&local_24,(MethodInfo *)0x0);
    pSVar1 = System_String__Concat(pSVar1,str1,str2,str3,(MethodInfo *)0x0);
    return (Il2CppObject *)pSVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

