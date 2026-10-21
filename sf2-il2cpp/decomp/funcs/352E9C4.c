// Nekki.SF2.GUI.Fight.RoundsPanel$$PGEPDONKOIN @ RVA 0x352E9C4

System_String_o *
Nekki_SF2_GUI_Fight_RoundsPanel__PGEPDONKOIN
          (Nekki_SF2_GUI_Fight_RoundsPanel_o *__this,MethodInfo *method)

{
  long lVar1;
  int32_t iVar2;
  FCJBEKHDLAF_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  
  if ((DAT_04568a44 & 1) == 0) {
    FUN_01bab630(&FCJBEKHDLAF_TypeInfo);
    DAT_04568a44 = 1;
    method = extraout_x1;
  }
  if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(FCJBEKHDLAF_TypeInfo,method);
    method = extraout_x1_00;
  }
  if (DAT_04565b7f == '\0') {
    FUN_01bab630(&FCJBEKHDLAF_TypeInfo);
    DAT_04565b7f = '\x01';
    method = extraout_x1_01;
  }
  if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(FCJBEKHDLAF_TypeInfo,method);
  }
  __this_00 = FCJBEKHDLAF_TypeInfo->static_fields->IGABFCCGLCO;
  if (__this_00 != (FCJBEKHDLAF_o *)0x0) {
    iVar2 = FCJBEKHDLAF__IHMLDBDLJON(__this_00,(MethodInfo *)0x0);
    lVar1 = 0x30;
    if (iVar2 != 0x11) {
      lVar1 = 0x28;
    }
    return *(System_String_o **)((long)&__this->klass + lVar1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

