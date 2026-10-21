// Nekki.SF2.GUI.Fight.EndPvpFightContent$$Awake @ RVA 0x3130CA0

void Nekki_SF2_GUI_Fight_EndPvpFightContent__Awake
               (Nekki_SF2_GUI_Fight_EndPvpFightContent_o *__this,MethodInfo *method)

{
  LabelButton_o *__this_00;
  LabelButton_o *__this_01;
  int32_t CJNHFNHJHPE;
  NLIDHEAMLMC_o *pNVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_045666c5 & 1) == 0) {
    FUN_01bab630(&BGFNOPDHEOM_TypeInfo);
    DAT_045666c5 = 1;
    method = extraout_x1;
  }
  if ((BGFNOPDHEOM_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(BGFNOPDHEOM_TypeInfo,method);
  }
  pNVar1 = BGFNOPDHEOM__PFOBJKIPLCK(0,(MethodInfo *)0x0);
  if ((pNVar1 != (NLIDHEAMLMC_o *)0x0) && ((pNVar1->fields).ELHIGHABJBJ == 2)) {
    __this_00 = (__this->fields)._buttonExit;
    __this_01 = (__this->fields)._buttonReplay;
    if ((BGFNOPDHEOM_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pNVar1 = BGFNOPDHEOM__PFOBJKIPLCK(0,(MethodInfo *)0x0);
    if ((pNVar1 != (NLIDHEAMLMC_o *)0x0) && (__this_01 != (LabelButton_o *)0x0)) {
      CJNHFNHJHPE = (pNVar1->fields).OFFPEKODFPE;
      LabelButton__set_TrackingDeviceID(__this_01,CJNHFNHJHPE,(MethodInfo *)0x0);
      if (__this_00 != (LabelButton_o *)0x0) {
        LabelButton__set_TrackingDeviceID(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

