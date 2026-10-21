// Nekki.Utils.RaidBetaLogger$$OKONIJKLKLK @ RVA 0x35A4930

System_Collections_IEnumerator_o *
Nekki_Utils_RaidBetaLogger__OKONIJKLKLK(Nekki_Utils_RaidBetaLogger_o *__this,MethodInfo *method)

{
  Nekki_Utils_RaidBetaLogger_GKPHNDMPPOB_o *__this_00;
  Nekki_Utils_RaidBetaLogger_o **ppNVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568df0 & 1) == 0) {
    FUN_01bab630(&Nekki_Utils_RaidBetaLogger_GKPHNDMPPOB_TypeInfo);
    DAT_04568df0 = 1;
    method = extraout_x1;
  }
  __this_00 = (Nekki_Utils_RaidBetaLogger_GKPHNDMPPOB_o *)
              thunk_FUN_01bda818(Nekki_Utils_RaidBetaLogger_GKPHNDMPPOB_TypeInfo,method);
  Nekki_Utils_RaidBetaLogger_GKPHNDMPPOB___ctor(__this_00,0,(MethodInfo *)0x0);
  if (__this_00 != (Nekki_Utils_RaidBetaLogger_GKPHNDMPPOB_o *)0x0) {
    ppNVar1 = &(__this_00->fields).__4__this;
    *ppNVar1 = __this;
    thunk_FUN_01c20e04(ppNVar1,__this);
    return (System_Collections_IEnumerator_o *)__this_00;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

