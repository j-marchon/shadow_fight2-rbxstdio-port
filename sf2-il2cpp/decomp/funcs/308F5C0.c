// AKOMJPINHEN$$JPGGPDEIENC @ RVA 0x308F5C0

void AKOMJPINHEN__JPGGPDEIENC
               (AKOMJPINHEN_o *__this,System_String_o *IHNKCJHDDKD,int32_t HPIPAGINPJK,
               MethodInfo *method)

{
  bool bVar1;
  KKLJIDJBFEI_o *__this_00;
  System_Action_KEFHDOHHHML__o *IELDNEAAPBE;
  
  if ((DAT_04566089 & 1) == 0) {
    FUN_01bab630(&Method_AKOMJPINHEN_PMBDGIJIIDD__);
    FUN_01bab630(&System_Action<KEFHDOHHHML>_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&StringLiteral_4287);
    DAT_04566089 = 1;
  }
  bVar1 = PCOEHCPGBBG__BDLEIEHBFAD(IHNKCJHDDKD,(MethodInfo *)0x0);
  if ((!bVar1) && (bVar1 = ODKDFMHHLIP__NOBCLMOONLJ(HPIPAGINPJK,(MethodInfo *)0x0), bVar1)) {
    __this_00 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
    IELDNEAAPBE = (System_Action_KEFHDOHHHML__o *)
                  thunk_FUN_01bda818(System_Action<KEFHDOHHHML>_TypeInfo);
    System_Action<object>___ctor();
    if (__this_00 != (KKLJIDJBFEI_o *)0x0) {
      KKLJIDJBFEI__CADOGBHCINN(__this_00,IHNKCJHDDKD,HPIPAGINPJK,IELDNEAAPBE,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  UnityEngine_Debug__LogError(StringLiteral_4287,(MethodInfo *)0x0);
  return;
}

