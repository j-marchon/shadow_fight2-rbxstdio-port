// Nekki.SF2.GUI.Fight.ScreenModel$$ShowHotGroundTimer @ RVA 0x355E6C4

void Nekki_SF2_GUI_Fight_ScreenModel__ShowHotGroundTimer
               (Nekki_SF2_GUI_Fight_ScreenModel_o *__this,int32_t LFJGFLNMBMC,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Fight_ComboModel_o *pNVar2;
  
  if ((DAT_04568ba1 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568ba1 = 1;
  }
  pNVar2 = (__this->fields)._comboModel;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar2 = (__this->fields)._comboModel;
    if (pNVar2 != (Nekki_SF2_GUI_Fight_ComboModel_o *)0x0) {
      Nekki_SF2_GUI_Fight_ComboModel__UpdateHotGroundTimer(pNVar2,LFJGFLNMBMC,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

