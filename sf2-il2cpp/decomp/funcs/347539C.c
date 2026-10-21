// Nekki.SF2.GUI.Dialogs.Raids.RaidLeaguesLeaderboard$$ScrollClearData @ RVA 0x347539C

void Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard__ScrollClearData
               (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_SimpleScroll_o *pNVar1;
  float fVar2;
  float value;
  System_Nullable_float__Fields local_28;
  
  if ((DAT_04568325 & 1) == 0) {
    FUN_01bab630(&Method_System_Nullable<float>_GetValueOrDefault__);
    FUN_01bab630(&Method_System_Nullable<float>__ctor__);
    DAT_04568325 = 1;
  }
  pNVar1 = (__this->fields).PDHMLFAMNCO;
  if (pNVar1 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
    value = (__this->fields).NEOEPOAJBFE.fields.value;
    fVar2 = Nekki_SF2_GUI_SimpleScroll__GetScrollPos(pNVar1,(MethodInfo *)0x0);
    if (value <= fVar2) {
      value = fVar2;
    }
    local_28.hasValue = false;
    local_28._1_3_ = 0;
    local_28.value = 0.0;
    System_Nullable<float>___ctor
              ((System_Nullable_float__o)&local_28,value,Method_System_Nullable<float>__ctor__);
    pNVar1 = (__this->fields).PDHMLFAMNCO;
    (__this->fields).NEOEPOAJBFE.fields = local_28;
    if (pNVar1 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
      Nekki_SF2_GUI_SimpleScroll__ClearData(pNVar1,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

