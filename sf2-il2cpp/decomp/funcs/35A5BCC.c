// Nekki.Utils.RaidBetaLogger.NHIOMMNCHFE$$MoveNext @ RVA 0x35A5BCC

bool Nekki_Utils_RaidBetaLogger_NHIOMMNCHFE__MoveNext
               (Nekki_Utils_RaidBetaLogger_NHIOMMNCHFE_o *__this,MethodInfo *method)

{
  int iVar1;
  float seconds;
  UnityEngine_WaitForSeconds_o *__this_00;
  Il2CppObject **ppIVar2;
  Nekki_Utils_RaidBetaLogger_o *__this_01;
  undefined1 auVar3 [16];
  
  auVar3._8_8_ = method;
  auVar3._0_8_ = __this;
  if ((DAT_04568e08 & 1) == 0) {
    FUN_01bab630(&UnityEngine_WaitForSeconds_TypeInfo);
    auVar3 = FUN_01bab630(&StringLiteral_16559);
    DAT_04568e08 = 1;
  }
  iVar1 = (__this->fields).__1__state;
  __this_01 = (__this->fields).__4__this;
  if (iVar1 == 1) {
    (__this->fields).__1__state = -1;
    if (__this_01 == (Nekki_Utils_RaidBetaLogger_o *)0x0) goto LAB_036a5cc4;
    if ((__this_01->fields)._NOEPHKDKPNJ_k__BackingField == false) {
      Nekki_Utils_RaidBetaLogger__CLIHAFJDHKO(__this_01,StringLiteral_16559,(MethodInfo *)0x0);
    }
    Nekki_Utils_RaidBetaLogger__FKLEGPIEJGA(__this_01,(MethodInfo *)0x0);
  }
  else if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    if (__this_01 != (Nekki_Utils_RaidBetaLogger_o *)0x0) {
      seconds = 2.0;
      if ((__this_01->fields)._GCJCDAIIAJF_k__BackingField != false) {
        seconds = 5.0;
      }
      __this_00 = (UnityEngine_WaitForSeconds_o *)
                  thunk_FUN_01bda818(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(__this_00,seconds,(MethodInfo *)0x0);
      ppIVar2 = &(__this->fields).__2__current;
      *ppIVar2 = (Il2CppObject *)__this_00;
      thunk_FUN_01c20e04(ppIVar2,__this_00);
      (__this->fields).__1__state = 1;
      return true;
    }
LAB_036a5cc4:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(auVar3._0_8_,auVar3._8_8_);
  }
  return false;
}

