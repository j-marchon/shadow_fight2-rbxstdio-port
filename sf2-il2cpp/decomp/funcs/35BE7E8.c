// Nekki.SF2.GUI.Fight.ViewerFight$$Reset @ RVA 0x35BE7E8

void Nekki_SF2_GUI_Fight_ViewerFight__Reset
               (Nekki_SF2_GUI_Fight_ViewerFight_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  JIMKCICMMIL_o *pJVar2;
  Nekki_SF2_GUI_Fight_ScreenModel_o *pNVar3;
  UnityEngine_UI_Button_o *pUVar4;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields CVar5;
  
  if ((DAT_04568f05 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568f05 = 1;
  }
  pJVar2 = (__this->fields)._JHNEOBOKOJF_k__BackingField;
  (__this->fields)._BBIBLNIKJMG_k__BackingField = false;
  if (pJVar2 != (JIMKCICMMIL_o *)0x0) {
    CVar5 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
            CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                      ((pJVar2->fields).OBOADGAKAHJ * 0x3c | 1,(MethodInfo *)0x0);
    (__this->fields).GJOBKIBMLHC.fields = CVar5;
    pNVar3 = (__this->fields).leftModel;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (bVar1) {
      pNVar3 = (__this->fields).leftModel;
      if (pNVar3 == (Nekki_SF2_GUI_Fight_ScreenModel_o *)0x0) goto LAB_036be90c;
      Nekki_SF2_GUI_Fight_ScreenModel__Reset(pNVar3,(MethodInfo *)0x0);
    }
    pNVar3 = (__this->fields).rightModel;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    method_00 = extraout_x1;
    if (bVar1) {
      pNVar3 = (__this->fields).rightModel;
      if (pNVar3 == (Nekki_SF2_GUI_Fight_ScreenModel_o *)0x0) goto LAB_036be90c;
      Nekki_SF2_GUI_Fight_ScreenModel__Reset(pNVar3,(MethodInfo *)0x0);
      method_00 = extraout_x1_00;
    }
    Nekki_SF2_GUI_Fight_ViewerFight__DLOCFGMOEFN(__this,method_00);
    pUVar4 = (__this->fields).btnPause;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (!bVar1) {
      return;
    }
    pUVar4 = (__this->fields).btnPause;
    if (pUVar4 != (UnityEngine_UI_Button_o *)0x0) {
      UnityEngine_UI_Selectable__set_interactable
                ((UnityEngine_UI_Selectable_o *)pUVar4,true,(MethodInfo *)0x0);
      return;
    }
  }
LAB_036be90c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

