// Nekki.SF2.GUI.Pvp.PhaseBox$$ConfirmItem @ RVA 0x32D7F00

void Nekki_SF2_GUI_Pvp_PhaseBox__ConfirmItem
               (Nekki_SF2_GUI_Pvp_PhaseBox_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  undefined4 uVar1;
  Nekki_SF2_GUI_ResolutionImageAvatar_o *target;
  Nekki_SF2_GUI_Pvp_PhaseCharacter_o *pNVar2;
  UnityEngine_GameObject_o *__this_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  UnityEngine_Color_o endValue;
  
  (__this->fields).NLPOEKINGJI = CJNHFNHJHPE;
  uVar1 = 0x3f000000;
  if (!CJNHFNHJHPE) {
    uVar1 = 0x3f800000;
  }
  target = Nekki_SF2_GUI_Pvp_PhaseBox__get_Avatar(__this,(MethodInfo *)(ulong)CJNHFNHJHPE);
  endValue.fields.g = (float)uVar1;
  endValue.fields.r = (float)uVar1;
  endValue.fields.a = 1.0;
  endValue.fields.b = (float)uVar1;
  DG_Tweening_DOTweenModuleUI__DOColor
            ((UnityEngine_UI_Image_o *)target,endValue,0.5,(MethodInfo *)0x0);
  pNVar2 = Nekki_SF2_GUI_Pvp_PhaseBox__DBKNMAJHPAN(__this,method_00);
  if ((pNVar2 != (Nekki_SF2_GUI_Pvp_PhaseCharacter_o *)0x0) &&
     (__this_00 = (pNVar2->fields)._checkmark, __this_00 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
    Nekki_SF2_GUI_Pvp_PhaseBox__HidePhaseList(__this,method_01);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

