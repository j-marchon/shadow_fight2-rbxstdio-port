// PLIIGOCLJDL.EFJILBBPJLM$$MoveNext @ RVA 0x3519A54

bool PLIIGOCLJDL_EFJILBBPJLM__MoveNext(PLIIGOCLJDL_EFJILBBPJLM_o *__this,MethodInfo *method)

{
  int iVar1;
  UnityEngine_WaitForSecondsRealtime_o *__this_00;
  Il2CppObject **ppIVar2;
  PLIIGOCLJDL_o *__this_01;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568966 & 1) == 0) {
    FUN_01bab630(&UnityEngine_WaitForSecondsRealtime_TypeInfo);
    DAT_04568966 = 1;
    method = extraout_x1;
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 1) {
    __this_01 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    if (__this_01 == (PLIIGOCLJDL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    PLIIGOCLJDL__CJAILEHJLKB(__this_01,method);
  }
  else if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    iVar1 = (__this->fields).leaderboardUpdateIntervalMillis;
    __this_00 = (UnityEngine_WaitForSecondsRealtime_o *)
                thunk_FUN_01bda818(UnityEngine_WaitForSecondsRealtime_TypeInfo);
    UnityEngine_WaitForSecondsRealtime___ctor(__this_00,(float)(iVar1 / 1000),(MethodInfo *)0x0);
    ppIVar2 = &(__this->fields).__2__current;
    *ppIVar2 = (Il2CppObject *)__this_00;
    thunk_FUN_01c20e04(ppIVar2,__this_00);
    (__this->fields).__1__state = 1;
    return true;
  }
  return false;
}

