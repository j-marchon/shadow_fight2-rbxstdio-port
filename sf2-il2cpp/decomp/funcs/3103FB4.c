// Nekki.SF2.GUI.Profile.AchievementContent$$OnTakeButtonClick @ RVA 0x3103FB4

void Nekki_SF2_GUI_Profile_AchievementContent__OnTakeButtonClick
               (Nekki_SF2_GUI_Profile_AchievementContent_o *__this,MethodInfo *method)

{
  long lVar1;
  SFButton_o *__this_00;
  UnityEngine_GameObject_o *pUVar2;
  Nekki_SF2_GUI_LabelAlias_o *__this_01;
  MethodInfo *extraout_x1;
  undefined1 auVar3 [16];
  
  if ((DAT_045664e3 & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<ProfileScene>_get_Current__);
    DAT_045664e3 = 1;
    method = extraout_x1;
  }
  lVar1 = *(long *)(Method_Nekki_SF2_GUI_Scene<ProfileScene>_get_Current__ + 0x20);
  auVar3._8_8_ = method;
  auVar3._0_8_ = lVar1;
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    auVar3 = FUN_01b81620(lVar1,method);
  }
  lVar1 = *(long *)(*(long *)(auVar3._0_8_ + 0xc0) + 0x10);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_01b81620(lVar1,auVar3._8_8_);
  }
  if ((Nekki_SF2_GUI_Profile_ProfileScene_o *)**(undefined8 **)(lVar1 + 0xb8) !=
      (Nekki_SF2_GUI_Profile_ProfileScene_o *)0x0) {
    Nekki_SF2_GUI_Profile_ProfileScene__TakeAchievementReward
              ((Nekki_SF2_GUI_Profile_ProfileScene_o *)**(undefined8 **)(lVar1 + 0xb8),
               (__this->fields).EEMOAOLFPHL,(MethodInfo *)0x0);
    __this_00 = (__this->fields)._TakeButton;
    if ((__this_00 != (SFButton_o *)0x0) &&
       (pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
       pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
      __this_01 = (__this->fields)._RewardLabel;
      if ((__this_01 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
         (pUVar2 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0),
         pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
        UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

