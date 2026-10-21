// Nekki.SF2.GUI.Fight.PauseScreen$$OnPlayClick @ RVA 0x3037130

void Nekki_SF2_GUI_Fight_PauseScreen__OnPlayClick
               (Nekki_SF2_GUI_Fight_PauseScreen_o *__this,MethodInfo *method)

{
  UnityEngine_Events_UnityEvent_o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_04565d53 & 1) == 0) {
    FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
    DAT_04565d53 = 1;
    method = extraout_x1;
  }
  if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(PNLFHHJGDLI_TypeInfo,method);
  }
  PNLFHHJGDLI__KNKFGKIPPBM((MethodInfo *)0x0);
  __this_00 = (UnityEngine_Events_UnityEvent_o *)(__this->fields).OnPlay;
  if (__this_00 != (UnityEngine_Events_UnityEvent_o *)0x0) {
    UnityEngine_Events_UnityEvent__Invoke(__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

