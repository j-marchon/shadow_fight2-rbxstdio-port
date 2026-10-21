// Nekki.SF2.GUI.Dialogs.Raids.RaidInfoSprite$$LFBBOGGALOC @ RVA 0x3428B84

void Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite__LFBBOGGALOC
               (Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_o *__this,MethodInfo *method)

{
  System_Action_RaidInfoSprite__o *pSVar1;
  
  pSVar1 = (__this->fields).FCHKBFCNOJL;
  if (pSVar1 != (System_Action_RaidInfoSprite__o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03528ba4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(pSVar1->fields).super.super.invoke_impl)
              ((pSVar1->fields).super.super.method_code,__this,(pSVar1->fields).super.super.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

