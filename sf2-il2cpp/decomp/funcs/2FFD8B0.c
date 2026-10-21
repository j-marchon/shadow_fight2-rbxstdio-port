// Nekki.SF2.GUI.Fight.PreFight$$CreateYouLose @ RVA 0x2FFD8B0

void Nekki_SF2_GUI_Fight_PreFight__CreateYouLose
               (Nekki_SF2_GUI_Fight_PreFight_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Fight_ScreenFight_o *pNVar2;
  
  if ((DAT_04565af9 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04565af9 = 1;
    method = extraout_x1;
  }
  pNVar2 = (__this->fields).LJAILGNLPAB;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar2 = (__this->fields).LJAILGNLPAB;
    if (pNVar2 != (Nekki_SF2_GUI_Fight_ScreenFight_o *)0x0) {
      Nekki_SF2_GUI_Fight_ScreenFight__CreateYouLose(pNVar2,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

