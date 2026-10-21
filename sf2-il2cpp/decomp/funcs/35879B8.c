// Nekki.SF2.GUI.Map.MapScene$$UpdateRaidToggleBtn_EnableAndActive @ RVA 0x35879B8

void Nekki_SF2_GUI_Map_MapScene__UpdateRaidToggleBtn_EnableAndActive
               (Nekki_SF2_GUI_Map_MapScene_o *__this,MethodInfo *method)

{
  bool value;
  Nekki_SF2_GUI_Map_RaidToggleButton_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  Nekki_SF2_GUI_RaidMapUIModule_o *pNVar1;
  
  if ((DAT_04568d1f & 1) == 0) {
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_04568d1f = 1;
    method = extraout_x1;
  }
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo,method);
  }
  value = MGNPHCAAEIO__MPGHOPABJNB((MethodInfo *)0x0);
  pNVar1 = (__this->fields).FMIFNIIJJNK;
  if (((pNVar1 != (Nekki_SF2_GUI_RaidMapUIModule_o *)0x0) &&
      (__this_00 = (pNVar1->fields).RaidToggleButton,
      __this_00 != (Nekki_SF2_GUI_Map_RaidToggleButton_o *)0x0)) &&
     (__this_01 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
     __this_01 != (UnityEngine_GameObject_o *)0x0)) {
    method_00 = (MethodInfo *)0x0;
    UnityEngine_GameObject__SetActive(__this_01,value,(MethodInfo *)0x0);
    Nekki_SF2_GUI_Map_MapScene__OGHJAMAKPFJ(__this,value,method_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

