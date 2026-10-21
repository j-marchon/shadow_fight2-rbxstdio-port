// FCJBEKHDLAF$$MGEMOHEBNPF @ RVA 0x33F2A54

void FCJBEKHDLAF__MGEMOHEBNPF(FCJBEKHDLAF_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *method_00;
  MethodInfo *method_01;
  uint uVar2;
  Nekki_SF2_GUI_Fight_PreFight_o *pNVar3;
  
  if ((DAT_04567f22 & 1) == 0) {
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04567f22 = 1;
    method = extraout_x1;
  }
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo,method);
  }
  uVar2 = 1;
  if (MGNPHCAAEIO_TypeInfo->static_fields->NKPIIAOHOKI != false) {
    uVar2 = 2;
  }
  if (uVar2 < 2) {
    uVar2 = 1;
  }
  while( true ) {
    pNVar3 = (__this->fields).HIBPKNAIPLH;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pNVar3,(MethodInfo *)0x0);
    method_00 = extraout_x1_00;
    if (bVar1) {
      pNVar3 = (__this->fields).HIBPKNAIPLH;
      if (pNVar3 == (Nekki_SF2_GUI_Fight_PreFight_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      Nekki_SF2_GUI_Fight_PreFight__SetPause(pNVar3,(__this->fields).MDJMIPGAJLL,(MethodInfo *)0x0);
      method_00 = extraout_x1_01;
    }
    if ((__this->fields).MDJMIPGAJLL != false) break;
    FCJBEKHDLAF__CELIPPIDMCP(__this,method_00);
    FCJBEKHDLAF__BDHAMOEKNNK(__this,method_01);
    uVar2 = uVar2 - 1;
    if (uVar2 == 0) {
      return;
    }
  }
  return;
}

