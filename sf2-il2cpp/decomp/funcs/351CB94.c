// KJLBJAOALEO.<>c$$DACCEKBJBBC @ RVA 0x351CB94

System_Action_LevelPlayAdInfo__LevelPlayAdError__o *
KJLBJAOALEO_<>c__DACCEKBJBBC
          (KJLBJAOALEO___c_o *__this,
          System_Action_ValueTuple_LevelPlayAdInfo__LevelPlayAdError___o *h,MethodInfo *method)

{
  Il2CppObject *__this_00;
  System_Action_LevelPlayAdInfo__LevelPlayAdError__o *pSVar1;
  
  if ((DAT_04568996 & 1) == 0) {
    FUN_01bab630(&Method_KJLBJAOALEO_AJDDNOMFCML_NCBJALAEJGI__);
    FUN_01bab630(&KJLBJAOALEO_AJDDNOMFCML_TypeInfo);
    FUN_01bab630(&System_Action<LevelPlayAdInfo,_LevelPlayAdError>_TypeInfo);
    DAT_04568996 = 1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(KJLBJAOALEO_AJDDNOMFCML_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = (Il2CppClass *)h;
    thunk_FUN_01c20e04(__this_00 + 1,h);
    pSVar1 = (System_Action_LevelPlayAdInfo__LevelPlayAdError__o *)
             thunk_FUN_01bda818(System_Action<LevelPlayAdInfo,_LevelPlayAdError>_TypeInfo);
    System_Action<object,_object>___ctor();
    return pSVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

