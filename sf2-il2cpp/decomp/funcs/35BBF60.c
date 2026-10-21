// Nekki.SF2.GUI.Fight.RaidWaitResultContent.HEBAOHOKNNA$$MoveNext @ RVA 0x35BBF60

bool Nekki_SF2_GUI_Fight_RaidWaitResultContent_HEBAOHOKNNA__MoveNext
               (Nekki_SF2_GUI_Fight_RaidWaitResultContent_HEBAOHOKNNA_o *__this,MethodInfo *method)

{
  int iVar1;
  UnityEngine_WaitForSeconds_o *__this_00;
  Il2CppObject **ppIVar2;
  Nekki_SF2_GUI_Fight_RaidWaitResultContent_o *__this_01;
  MethodInfo *extraout_x1;
  float seconds;
  
  if ((DAT_04568edf & 1) == 0) {
    FUN_01bab630(&UnityEngine_WaitForSeconds_TypeInfo);
    DAT_04568edf = 1;
    method = extraout_x1;
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 1) {
    __this_01 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    if (__this_01 == (Nekki_SF2_GUI_Fight_RaidWaitResultContent_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    Nekki_SF2_GUI_Fight_RaidWaitResultContent__OHFPFJBPBAD(__this_01,method);
  }
  else if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    seconds = (__this->fields).duration;
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

