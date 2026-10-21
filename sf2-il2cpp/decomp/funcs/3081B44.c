// CDBANCEFAAK$$HNHLJHHKELD @ RVA 0x3081B44

void CDBANCEFAAK__HNHLJHHKELD
               (CDBANCEFAAK_o *__this,Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_o *IMMNELPBGIF,
               MethodInfo *method)

{
  System_Action_RaidInfoSprite__o *pSVar1;
  Nekki_SF2_GUI_Tutorial_ArrowCanvas_o *__this_00;
  ProgressLabelButton_o *__this_01;
  Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_o *extraout_x1;
  Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_o *pNVar2;
  
  if ((DAT_04565ffb & 1) == 0) {
    FUN_01bab630(&System_Action<RaidInfoSprite>_TypeInfo);
    FUN_01bab630(&Method_CDBANCEFAAK_FCHKBFCNOJL__);
    FUN_01bab630(&Method_CDBANCEFAAK_HNHLJHHKELD__);
    DAT_04565ffb = 1;
    IMMNELPBGIF = extraout_x1;
  }
  pNVar2 = (__this->fields).EFAPPLILPJP;
  pSVar1 = (System_Action_RaidInfoSprite__o *)
           thunk_FUN_01bda818(System_Action<RaidInfoSprite>_TypeInfo,IMMNELPBGIF);
  System_Action<object>___ctor();
  if (pNVar2 != (Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_o *)0x0) {
    Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite__remove_OnFightBtnClick
              (pNVar2,pSVar1,(MethodInfo *)0x0);
    pNVar2 = (__this->fields).EFAPPLILPJP;
    pSVar1 = (System_Action_RaidInfoSprite__o *)
             thunk_FUN_01bda818(System_Action<RaidInfoSprite>_TypeInfo);
    System_Action<object>___ctor();
    if (pNVar2 != (Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_o *)0x0) {
      Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite__remove_OnExitBtnClick
                (pNVar2,pSVar1,(MethodInfo *)0x0);
      __this_00 = Nekki_SF2_GUI_Tutorial_ArrowCanvas__get_Instance((MethodInfo *)0x0);
      if (__this_00 != (Nekki_SF2_GUI_Tutorial_ArrowCanvas_o *)0x0) {
        Nekki_SF2_GUI_Tutorial_ArrowCanvas__HideArrow(__this_00,(MethodInfo *)0x0);
        pNVar2 = (__this->fields).EFAPPLILPJP;
        if (pNVar2 != (Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_o *)0x0) {
          AKJJAPEHKCG__HJDDBKPCAFJ
                    ((UnityEngine_UI_Selectable_o *)(pNVar2->fields)._btnFight,(MethodInfo *)0x0);
          pNVar2 = (__this->fields).EFAPPLILPJP;
          if ((pNVar2 != (Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_o *)0x0) &&
             (__this_01 = (pNVar2->fields)._btnFight, __this_01 != (ProgressLabelButton_o *)0x0)) {
            SFButton__set_IsFlashing((SFButton_o *)__this_01,false,(MethodInfo *)0x0);
            BOFEMGGNODC__FGNINNOOCCL((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

