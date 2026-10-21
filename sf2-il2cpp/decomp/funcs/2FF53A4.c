// Nekki.SF2.GUI.Scenes.LoaderScreen$$ODFHMBHFNJB @ RVA 0x2FF53A4

void Nekki_SF2_GUI_Scenes_LoaderScreen__ODFHMBHFNJB
               (Nekki_SF2_GUI_Scenes_LoaderScreen_o *__this,MethodInfo *method)

{
  AFFHKININGD_o *pAVar1;
  System_String_o *HHMEIAPHDCI;
  undefined1 auVar2 [16];
  
  auVar2._8_8_ = method;
  auVar2._0_8_ = __this;
  if ((DAT_04565a9a & 1) == 0) {
    FUN_01bab630(&MFIKGMIDDIG_TypeInfo);
    auVar2 = FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
    DAT_04565a9a = 1;
  }
  pAVar1 = (__this->fields).FMPFMKFODMP;
  if (pAVar1 != (AFFHKININGD_o *)0x0) {
    HHMEIAPHDCI = (pAVar1->fields).GLDHKALMIBD;
    if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    PNLFHHJGDLI__ODFHMBHFNJB(HHMEIAPHDCI,true,(MethodInfo *)0x0);
    MFIKGMIDDIG_TypeInfo->static_fields->NHGIAGMKJKG = false;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar2._0_8_,auVar2._8_8_);
}

