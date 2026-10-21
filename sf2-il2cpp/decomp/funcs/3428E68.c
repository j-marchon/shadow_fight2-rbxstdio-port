// Nekki.SF2.GUI.Dialogs.Raids.RaidInfoSprite$$MCDEEDAKMGB @ RVA 0x3428E68

void Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite__MCDEEDAKMGB
               (Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_o *__this,MethodInfo *method)

{
  AJOGJBFNELI_o *__this_00;
  MethodInfo *extraout_x1;
  System_Action_RaidInfoSprite__o *pSVar1;
  
  if ((DAT_04568129 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_TypeInfo);
    DAT_04568129 = 1;
    method = extraout_x1;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
  }
  __this_00 = NLPJLHOEAOE__KDNCEEKJHMB((MethodInfo *)0x0);
  if (__this_00 != (AJOGJBFNELI_o *)0x0) {
    AJOGJBFNELI__ILNDICIHADK(__this_00,(MethodInfo *)0x0);
    pSVar1 = (__this->fields).HNHLJHHKELD;
    if (pSVar1 != (System_Action_RaidInfoSprite__o *)0x0) {
      (*(code *)(pSVar1->fields).super.super.invoke_impl)
                ((pSVar1->fields).super.super.method_code,__this,(pSVar1->fields).super.super.method
                );
      Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_TypeInfo->static_fields->FPJJPFJDKNP = false;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

