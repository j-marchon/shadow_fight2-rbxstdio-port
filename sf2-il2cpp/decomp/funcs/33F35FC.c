// FCJBEKHDLAF$$HHJECMDMOJA @ RVA 0x33F35FC

void FCJBEKHDLAF__HHJECMDMOJA(FCJBEKHDLAF_o *__this,MethodInfo *method)

{
  bool bVar1;
  BEPJMNAHCAD_o *__this_00;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Fight_PreFight_o *pNVar2;
  
  if ((DAT_04567f32 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04567f32 = 1;
    method = extraout_x1;
  }
  pNVar2 = (__this->fields).HIBPKNAIPLH;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar2 = (__this->fields).HIBPKNAIPLH;
    if (pNVar2 == (Nekki_SF2_GUI_Fight_PreFight_o *)0x0) goto LAB_034f3680;
    Nekki_SF2_GUI_Fight_PreFight__RenderComboModel(pNVar2,(MethodInfo *)0x0);
  }
  __this_00 = (__this->fields).FAJCMHDLBEJ;
  if (__this_00 != (BEPJMNAHCAD_o *)0x0) {
    BEPJMNAHCAD__BDHAMOEKNNK(__this_00,(MethodInfo *)0x0);
    return;
  }
LAB_034f3680:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

