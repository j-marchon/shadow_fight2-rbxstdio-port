// Nekki.SF2.GUI.Fight.EndFightContent.HLKCLCJPLIL$$MoveNext @ RVA 0x309D084

bool Nekki_SF2_GUI_Fight_EndFightContent_HLKCLCJPLIL__MoveNext
               (Nekki_SF2_GUI_Fight_EndFightContent_HLKCLCJPLIL_o *__this,MethodInfo *method)

{
  int iVar1;
  Il2CppObject *__this_00;
  Il2CppObject **ppIVar2;
  Nekki_SF2_GUI_Fight_EndFightContent_o *__this_01;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566127 & 1) == 0) {
    FUN_01bab630(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    DAT_04566127 = 1;
    method = extraout_x1;
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 1) {
    __this_01 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    if (__this_01 == (Nekki_SF2_GUI_Fight_EndFightContent_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    (__this_01->fields).BGINDOKLEKD = (__this_01->fields).BGINDOKLEKD + 1;
    Nekki_SF2_GUI_Fight_EndFightContent__IOOPGJBHPKK(__this_01,method);
  }
  else if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    __this_00 = (Il2CppObject *)thunk_FUN_01bda818(UnityEngine_WaitForEndOfFrame_TypeInfo);
    UnityEngine_WaitForEndOfFrame___ctor
              ((UnityEngine_WaitForEndOfFrame_o *)__this_00,(MethodInfo *)0x0);
    ppIVar2 = &(__this->fields).__2__current;
    *ppIVar2 = __this_00;
    thunk_FUN_01c20e04(ppIVar2,__this_00);
    (__this->fields).__1__state = 1;
    return true;
  }
  return false;
}

