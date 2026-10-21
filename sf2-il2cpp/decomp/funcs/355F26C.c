// Nekki.SF2.GUI.Fight.ScreenModel$$UpdateVictories @ RVA 0x355F26C

void Nekki_SF2_GUI_Fight_ScreenModel__UpdateVictories
               (Nekki_SF2_GUI_Fight_ScreenModel_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  PJKHAJKEHEL_o *pPVar2;
  Nekki_SF2_GUI_Fight_RoundsPanel_o *pNVar3;
  
  if ((DAT_04568bb7 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568bb7 = 1;
    method = extraout_x1;
  }
  if ((__this->fields)._showRounds != false) {
    pNVar3 = (__this->fields)._roundsPanel;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (!bVar1) {
      pPVar2 = (__this->fields)._parameters;
      if ((pPVar2 != (PJKHAJKEHEL_o *)0x0) &&
         (pNVar3 = (__this->fields)._roundsPanel, pNVar3 != (Nekki_SF2_GUI_Fight_RoundsPanel_o *)0x0
         )) {
        Nekki_SF2_GUI_Fight_RoundsPanel__UpdateVictories
                  (pNVar3,(pPVar2->fields).GPLLAHCFFIH,(MethodInfo *)0x0);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
  return;
}

