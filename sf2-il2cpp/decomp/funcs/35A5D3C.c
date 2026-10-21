// Nekki.Utils.RaidBetaLogger.GKPHNDMPPOB$$MoveNext @ RVA 0x35A5D3C

bool Nekki_Utils_RaidBetaLogger_GKPHNDMPPOB__MoveNext
               (Nekki_Utils_RaidBetaLogger_GKPHNDMPPOB_o *__this,MethodInfo *method)

{
  int iVar1;
  UnityEngine_WaitForSeconds_o *__this_00;
  Il2CppObject **ppIVar2;
  UnityEngine_Coroutine_o **ppUVar3;
  Nekki_Utils_RaidBetaLogger_o *__this_01;
  float seconds;
  undefined1 auVar4 [16];
  
  auVar4._8_8_ = method;
  auVar4._0_8_ = __this;
  if ((DAT_04568e09 & 1) == 0) {
    FUN_01bab630(&Nekki_Utils_RaidBetaLogger_TypeInfo);
    auVar4 = FUN_01bab630(&UnityEngine_WaitForSeconds_TypeInfo);
    DAT_04568e09 = 1;
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 1) {
    __this_01 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    if (__this_01 == (Nekki_Utils_RaidBetaLogger_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8(auVar4._0_8_,auVar4._8_8_);
    }
    Nekki_Utils_RaidBetaLogger__ShowSendButton(__this_01,true,true,(MethodInfo *)0x0);
    ppUVar3 = &(__this_01->fields).LIFNPOJAIBB;
    if (*ppUVar3 != (UnityEngine_Coroutine_o *)0x0) {
      UnityEngine_MonoBehaviour__StopCoroutine
                ((UnityEngine_MonoBehaviour_o *)__this_01,*ppUVar3,(MethodInfo *)0x0);
    }
    *ppUVar3 = (UnityEngine_Coroutine_o *)0x0;
    thunk_FUN_01c20e04(ppUVar3,0);
  }
  else if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    if ((Nekki_Utils_RaidBetaLogger_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    seconds = Nekki_Utils_RaidBetaLogger_TypeInfo->static_fields->ADEMADBNCBD;
    __this_00 = (UnityEngine_WaitForSeconds_o *)
                thunk_FUN_01bda818(UnityEngine_WaitForSeconds_TypeInfo);
    UnityEngine_WaitForSeconds___ctor(__this_00,seconds,(MethodInfo *)0x0);
    ppIVar2 = &(__this->fields).__2__current;
    *ppIVar2 = (Il2CppObject *)__this_00;
    thunk_FUN_01c20e04(ppIVar2,__this_00);
    (__this->fields).__1__state = 1;
    return true;
  }
  return false;
}

