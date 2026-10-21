// Nekki.SF2.GUI.Profile.BattlePassPanel$$BuyPass @ RVA 0x359149C

void Nekki_SF2_GUI_Profile_BattlePassPanel__BuyPass
               (Nekki_SF2_GUI_Profile_BattlePassPanel_o *__this,MethodInfo *method)

{
  LabelButton_o *__this_00;
  EGMONPGHHDP_o *__this_01;
  System_Action_BKKPAKHJDKB__o *BLMFLPJJMPF;
  System_Action_o *ENDODGIEMNL;
  
  if ((DAT_04568d75 & 1) == 0) {
    FUN_01bab630(&System_Action<BKKPAKHJDKB>_TypeInfo);
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Profile_BattlePassPanel_LDKKGOHMOAP__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Profile_BattlePassPanel_PNODOPPNPDC__);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_04568d75 = 1;
  }
  __this_00 = (__this->fields)._btnBuyPass;
  if (__this_00 != (LabelButton_o *)0x0) {
    UnityEngine_UI_Selectable__set_interactable
              ((UnityEngine_UI_Selectable_o *)__this_00,false,(MethodInfo *)0x0);
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_01 = HJPEKDOPBHN__IAALPCFKGEK((MethodInfo *)0x0);
    BLMFLPJJMPF = (System_Action_BKKPAKHJDKB__o *)
                  thunk_FUN_01bda818(System_Action<BKKPAKHJDKB>_TypeInfo);
    System_Action<object>___ctor();
    ENDODGIEMNL = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
    System_Action___ctor();
    if (__this_01 != (EGMONPGHHDP_o *)0x0) {
      EGMONPGHHDP__ABMEJKFGFAP(__this_01,BLMFLPJJMPF,ENDODGIEMNL,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

