// Nekki.SF2.Core.ApplicationController$$RandomizeObscuredVars @ RVA 0x30BF51C

void Nekki_SF2_Core_ApplicationController__RandomizeObscuredVars
               (Nekki_SF2_Core_ApplicationController_o *__this,MethodInfo *method)

{
  bool bVar1;
  DOPEEDABNEK_o *__this_00;
  NLPJLHOEAOE_o *__this_01;
  DEKKGJNMFEB_o *__this_02;
  long lVar2;
  Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot_o *pNVar3;
  Nekki_SF2_GUI_Dialogs_Raids_RaidPlayerScreen_o *__this_03;
  MethodInfo *extraout_x1;
  ACHLOMELAJE_o *__this_04;
  
  if ((DAT_0456627c & 1) == 0) {
    FUN_01bab630(&DEKKGJNMFEB_TypeInfo);
    FUN_01bab630(&IKMOIKFPPBF_TypeInfo);
    FUN_01bab630(&LDHBHPILNMA_TypeInfo);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&OCMLPCKBHPN_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<FightScene>_get_Current__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<ProfileScene>_get_Current__);
    DAT_0456627c = 1;
    method = extraout_x1;
  }
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo,method);
  }
  MGNPHCAAEIO__RandomizeObscuredVars((MethodInfo *)0x0);
  if ((LDHBHPILNMA_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  LDHBHPILNMA__RandomizeObscuredVars((MethodInfo *)0x0);
  if ((OCMLPCKBHPN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  OCMLPCKBHPN__RandomizeObscuredVars((MethodInfo *)0x0);
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_04 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (__this_04 != (ACHLOMELAJE_o *)0x0) {
    ACHLOMELAJE__RandomizeObscuredVars(__this_04,(MethodInfo *)0x0);
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04563eaa == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04563eaa = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
  if (__this_00 != (DOPEEDABNEK_o *)0x0) {
    DOPEEDABNEK__RandomizeObscuredVars(__this_00,(MethodInfo *)0x0);
    __this_01 = NLPJLHOEAOE__AIHNLLGNBLC((MethodInfo *)0x0);
    if (__this_01 != (NLPJLHOEAOE_o *)0x0) {
      NLPJLHOEAOE__RandomizeObscuredVars(__this_01,(MethodInfo *)0x0);
      if ((DEKKGJNMFEB_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_02 = DEKKGJNMFEB__AIHNLLGNBLC((MethodInfo *)0x0);
      if (__this_02 != (DEKKGJNMFEB_o *)0x0) {
        DEKKGJNMFEB__RandomizeObscuredVars(__this_02,(MethodInfo *)0x0);
        lVar2 = *(long *)(Method_Nekki_SF2_GUI_Scene<FightScene>_get_Current__ + 0x20);
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_01b81620();
        }
        lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_01b81620();
        }
        if ((Nekki_SF2_GUI_Fight_FightScene_o *)**(undefined8 **)(lVar2 + 0xb8) !=
            (Nekki_SF2_GUI_Fight_FightScene_o *)0x0) {
          Nekki_SF2_GUI_Fight_FightScene__RandomizeObscuredVars
                    ((Nekki_SF2_GUI_Fight_FightScene_o *)**(undefined8 **)(lVar2 + 0xb8),
                     (MethodInfo *)0x0);
        }
        lVar2 = *(long *)(Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__ + 0x20);
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_01b81620();
        }
        lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_01b81620();
        }
        if ((Nekki_SF2_GUI_Shop_ShopScene_o *)**(undefined8 **)(lVar2 + 0xb8) !=
            (Nekki_SF2_GUI_Shop_ShopScene_o *)0x0) {
          Nekki_SF2_GUI_Shop_ShopScene__RandomizeObscuredVars
                    ((Nekki_SF2_GUI_Shop_ShopScene_o *)**(undefined8 **)(lVar2 + 0xb8),
                     (MethodInfo *)0x0);
        }
        lVar2 = *(long *)(Method_Nekki_SF2_GUI_Scene<ProfileScene>_get_Current__ + 0x20);
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_01b81620();
        }
        lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_01b81620();
        }
        if ((Nekki_SF2_GUI_Profile_ProfileScene_o *)**(undefined8 **)(lVar2 + 0xb8) !=
            (Nekki_SF2_GUI_Profile_ProfileScene_o *)0x0) {
          Nekki_SF2_GUI_Profile_ProfileScene__RandomizeObscuredVars
                    ((Nekki_SF2_GUI_Profile_ProfileScene_o *)**(undefined8 **)(lVar2 + 0xb8),
                     (MethodInfo *)0x0);
        }
        if ((IKMOIKFPPBF_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        IKMOIKFPPBF__RandomizeObscuredVars((MethodInfo *)0x0);
        bVar1 = Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot__IsActive((MethodInfo *)0x0);
        if (!bVar1) {
          return;
        }
        pNVar3 = Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot__Current((MethodInfo *)0x0);
        if ((pNVar3 != (Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot_o *)0x0) &&
           (__this_03 = (pNVar3->fields)._screen,
           __this_03 != (Nekki_SF2_GUI_Dialogs_Raids_RaidPlayerScreen_o *)0x0)) {
          Nekki_SF2_GUI_Dialogs_Raids_RaidPlayerScreen__RandomizeObscuredVars
                    (__this_03,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

