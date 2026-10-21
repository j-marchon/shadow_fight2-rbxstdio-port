// Nekki.Utils.RaidBetaLogger$$IsShownSendButton @ RVA 0x359F19C

bool Nekki_Utils_RaidBetaLogger__IsShownSendButton
               (Nekki_Utils_RaidBetaLogger_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_UI_Button_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  
  __this_00 = (__this->fields)._userReportButton;
  if ((__this_00 != (UnityEngine_UI_Button_o *)0x0) &&
     (__this_01 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
     __this_01 != (UnityEngine_GameObject_o *)0x0)) {
    bVar1 = UnityEngine_GameObject__get_activeSelf(__this_01,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

