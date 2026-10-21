// Nekki.SF2.GUI.Fight.EndPvpFightScreen$$OnAnimationFinishButton @ RVA 0x307CD18

void Nekki_SF2_GUI_Fight_EndPvpFightScreen__OnAnimationFinishButton
               (Nekki_SF2_GUI_Fight_EndPvpFightScreen_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  Nekki_SF2_GUI_Fight_EndPvpFightContent_o *pNVar2;
  
  if ((DAT_04565fe4 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04565fe4 = 1;
    method = extraout_x1;
  }
  pNVar2 = (__this->fields).DBOLEPNBFAD;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  method_00 = (MethodInfo *)0x0;
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar2 = (__this->fields).DBOLEPNBFAD;
    if (pNVar2 == (Nekki_SF2_GUI_Fight_EndPvpFightContent_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    Nekki_SF2_GUI_Fight_EndPvpFightContent__FinishAnimation(pNVar2,(MethodInfo *)0x0);
  }
  Nekki_SF2_GUI_Fight_EndPvpFightScreen__PLAIIFOBHLP(__this,false,method_00);
  return;
}

