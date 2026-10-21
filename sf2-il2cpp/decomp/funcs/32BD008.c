// MainMenuRaidRatingPanel$$LLBKAMIEBAH @ RVA 0x32BD008

void MainMenuRaidRatingPanel__LLBKAMIEBAH(MainMenuRaidRatingPanel_o *__this,MethodInfo *method)

{
  bool bVar1;
  undefined8 uVar2;
  UnityEngine_UI_Image_o *__this_00;
  EEGDOGKBLNG_o *__this_01;
  EEOMEMBBGNA_o *__this_02;
  Nekki_SF2_GUI_Menu_MainMenu_o *pNVar3;
  undefined1 auVar4 [16];
  
  auVar4._8_8_ = method;
  auVar4._0_8_ = __this;
  if ((DAT_045674a4 & 1) == 0) {
    auVar4 = FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_045674a4 = 1;
  }
  uVar2 = auVar4._0_8_;
  if (DAT_04565b84 == '\0') {
    uVar2 = FUN_01bab630(&Nekki_SF2_GUI_Menu_MainMenu_TypeInfo,auVar4._8_8_);
    DAT_04565b84 = '\x01';
  }
  pNVar3 = Nekki_SF2_GUI_Menu_MainMenu_TypeInfo->static_fields->_JPDNDPEAJAL_k__BackingField;
  if ((pNVar3 != (Nekki_SF2_GUI_Menu_MainMenu_o *)0x0) &&
     (__this_00 = (pNVar3->fields)._backgroundPicture, uVar2 = 0,
     __this_00 != (UnityEngine_UI_Image_o *)0x0)) {
    Nekki_SF2_GUI_Menu_MenuScroll__Collapse
              ((Nekki_SF2_GUI_Menu_MenuScroll_o *)__this_00,0.0,(MethodInfo *)0x0);
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_01 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
    uVar2 = 0;
    if (__this_01 != (EEGDOGKBLNG_o *)0x0) {
      bVar1 = EEGDOGKBLNG__CLJIMCDAEKO(__this_01,(MethodInfo *)0x0);
      if (bVar1) {
        if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        __this_02 = HJPEKDOPBHN__CEFGBPEHJJG((MethodInfo *)0x0);
        uVar2 = 0;
        if (__this_02 == (EEOMEMBBGNA_o *)0x0) goto LAB_033bd0f0;
        EEOMEMBBGNA__FOJEJJGMIGP(__this_02,0,(MethodInfo *)0x0);
      }
      else {
        JJPNLEPEAFM__DDOCEEFBIGC((Il2CppObject *)0x0,(MethodInfo *)0x0);
      }
      EDFDANKEBGF__NEOHABBBGKE(1.0,(MethodInfo *)0x0);
      return;
    }
  }
LAB_033bd0f0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(uVar2);
}

