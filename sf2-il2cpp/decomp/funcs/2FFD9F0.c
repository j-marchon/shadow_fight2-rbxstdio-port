// Nekki.SF2.GUI.Fight.PreFight$$OnScreenStop @ RVA 0x2FFD9F0

void Nekki_SF2_GUI_Fight_PreFight__OnScreenStop
               (Nekki_SF2_GUI_Fight_PreFight_o *__this,int32_t ACCIHBHMFPN,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Fight_ScreenFight_NBAJOLBLMOD_o *__this_00;
  Nekki_SF2_GUI_Fight_ScreenFight_o *pNVar2;
  
  if ((DAT_04565afb & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<JLBCMPFKHEI>_Invoke__);
    DAT_04565afb = 1;
  }
  pNVar2 = (__this->fields).LJAILGNLPAB;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar2 = (__this->fields).LJAILGNLPAB;
    if (pNVar2 == (Nekki_SF2_GUI_Fight_ScreenFight_o *)0x0) goto LAB_030fda98;
    Nekki_SF2_GUI_Fight_ScreenFight__Clear(pNVar2,(MethodInfo *)0x0);
  }
  __this_00 = (__this->fields).OnStopScreen;
  if (__this_00 != (Nekki_SF2_GUI_Fight_ScreenFight_NBAJOLBLMOD_o *)0x0) {
    UnityEngine_Events_UnityEvent<Int32Enum>__Invoke
              ((UnityEngine_Events_UnityEvent_T0__o *)__this_00,ACCIHBHMFPN,
               Method_UnityEngine_Events_UnityEvent<JLBCMPFKHEI>_Invoke__);
    return;
  }
LAB_030fda98:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

