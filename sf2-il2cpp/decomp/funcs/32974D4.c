// Nekki.SF2.GUI.Profile.PerkContent$$OnImproveButtonClick @ RVA 0x32974D4

void Nekki_SF2_GUI_Profile_PerkContent__OnImproveButtonClick
               (Nekki_SF2_GUI_Profile_PerkContent_o *__this,MethodInfo *method)

{
  bool bVar1;
  long lVar2;
  LabelButton_o *__this_00;
  UnityEngine_GameObject_o *pUVar3;
  Nekki_SF2_GUI_LabelAlias_o *__this_01;
  MethodInfo *extraout_x1;
  undefined1 auVar4 [16];
  
  if ((DAT_04567371 & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<ProfileScene>_get_Current__);
    DAT_04567371 = 1;
    method = extraout_x1;
  }
  lVar2 = *(long *)(Method_Nekki_SF2_GUI_Scene<ProfileScene>_get_Current__ + 0x20);
  auVar4._8_8_ = method;
  auVar4._0_8_ = lVar2;
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    auVar4 = FUN_01b81620(lVar2,method);
  }
  lVar2 = *(long *)(*(long *)(auVar4._0_8_ + 0xc0) + 0x10);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01b81620(lVar2,auVar4._8_8_);
  }
  if ((Nekki_SF2_GUI_Profile_ProfileScene_o *)**(undefined8 **)(lVar2 + 0xb8) !=
      (Nekki_SF2_GUI_Profile_ProfileScene_o *)0x0) {
    bVar1 = Nekki_SF2_GUI_Profile_ProfileScene__ImprovePerk
                      ((Nekki_SF2_GUI_Profile_ProfileScene_o *)**(undefined8 **)(lVar2 + 0xb8),
                       (__this->fields).OFLJEENFLDG,(MethodInfo *)0x0);
    if (!bVar1) {
      return;
    }
    __this_00 = (__this->fields)._ImproveButton;
    if ((__this_00 != (LabelButton_o *)0x0) &&
       (pUVar3 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
       pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(pUVar3,false,(MethodInfo *)0x0);
      __this_01 = (__this->fields)._ImprovedLabel;
      if ((__this_01 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
         (pUVar3 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0),
         pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
        UnityEngine_GameObject__SetActive(pUVar3,true,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

