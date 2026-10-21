// CBIDCBEJPON$$.ctor @ RVA 0x3453768

void CBIDCBEJPON___ctor(CBIDCBEJPON_o *__this,KOOGFNAPCGG_o *JJCCMFALAMF,
                       MJPJANJNDCI_BuildSettingsConfig__o *HLFCHMCOPID,MethodInfo *method)

{
  Il2CppObject *__this_00;
  KOOGFNAPCGG_o **ppKVar1;
  System_Func_T__o *valueFactory;
  System_Lazy_TimeSpan__o *__this_01;
  
  if ((DAT_045682b2 & 1) == 0) {
    FUN_01bab630(&Method_CBIDCBEJPON_BGMFHIFBMKN_PNACDJOJGEB__);
    FUN_01bab630(&CBIDCBEJPON_BGMFHIFBMKN_TypeInfo);
    FUN_01bab630(&System_Func<TimeSpan>_TypeInfo);
    FUN_01bab630(&Method_System_Lazy<TimeSpan>__ctor__);
    FUN_01bab630(&System_Lazy<TimeSpan>_TypeInfo);
    DAT_045682b2 = 1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(CBIDCBEJPON_BGMFHIFBMKN_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = (Il2CppClass *)HLFCHMCOPID;
    thunk_FUN_01c20e04(__this_00 + 1,HLFCHMCOPID);
    System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
    ppKVar1 = &(__this->fields).DKNHMJIANAB;
    *ppKVar1 = JJCCMFALAMF;
    thunk_FUN_01c20e04(ppKVar1,JJCCMFALAMF);
    valueFactory = (System_Func_T__o *)thunk_FUN_01bda818(System_Func<TimeSpan>_TypeInfo);
    System_Func<TimeSpan>___ctor();
    __this_01 = (System_Lazy_TimeSpan__o *)thunk_FUN_01bda818(System_Lazy<TimeSpan>_TypeInfo);
    System_Lazy<TimeSpan>___ctor(__this_01,valueFactory,Method_System_Lazy<TimeSpan>__ctor__);
    (__this->fields).CHFMIFDKGFO = __this_01;
    thunk_FUN_01c20e04(&__this->fields,__this_01);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

