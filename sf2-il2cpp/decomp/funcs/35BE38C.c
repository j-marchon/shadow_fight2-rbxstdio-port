// Nekki.SF2.GUI.Fight.ViewerFight$$SetHealthBarVisible @ RVA 0x35BE38C

void Nekki_SF2_GUI_Fight_ViewerFight__SetHealthBarVisible
               (Nekki_SF2_GUI_Fight_ViewerFight_o *__this,int32_t HEHMPFLAEGE,bool CJNHFNHJHPE,
               MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Fight_ScreenModel_o *pNVar2;
  
  if ((DAT_04568efb & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568efb = 1;
  }
  if (HEHMPFLAEGE == 3) {
    pNVar2 = (__this->fields).leftModel;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (bVar1) {
      pNVar2 = (__this->fields).leftModel;
      if (pNVar2 == (Nekki_SF2_GUI_Fight_ScreenModel_o *)0x0) goto LAB_036be4c4;
      Nekki_SF2_GUI_Fight_ScreenModel__SetHealthBarVisible(pNVar2,CJNHFNHJHPE,(MethodInfo *)0x0);
    }
LAB_036be470:
    pNVar2 = (__this->fields).rightModel;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (!bVar1) {
      return;
    }
    pNVar2 = (__this->fields).rightModel;
  }
  else {
    if (HEHMPFLAEGE == 2) goto LAB_036be470;
    if (HEHMPFLAEGE != 1) {
      return;
    }
    pNVar2 = (__this->fields).leftModel;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (!bVar1) {
      return;
    }
    pNVar2 = (__this->fields).leftModel;
  }
  if (pNVar2 != (Nekki_SF2_GUI_Fight_ScreenModel_o *)0x0) {
    Nekki_SF2_GUI_Fight_ScreenModel__SetHealthBarVisible(pNVar2,CJNHFNHJHPE,(MethodInfo *)0x0);
    return;
  }
LAB_036be4c4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

