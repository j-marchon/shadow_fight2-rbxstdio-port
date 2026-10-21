// LJNJDFEAIOH$$APABHPNCNHF @ RVA 0x303AB28

int64_t LJNJDFEAIOH__APABHPNCNHF(LJNJDFEAIOH_o *__this,MethodInfo *method)

{
  long OGPGLGPMEPD;
  bool bVar1;
  int32_t iVar2;
  Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *__this_00;
  
  if ((DAT_04565d77 & 1) == 0) {
    FUN_01bab630(&LIIFLGALGNK_TypeInfo);
    DAT_04565d77 = 1;
  }
  while( true ) {
    do {
      if ((LIIFLGALGNK_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      iVar2 = LIIFLGALGNK__HLMBDJOGONJ(0x7fffffff,(MethodInfo *)0x0);
      OGPGLGPMEPD = (long)iVar2 + 0x3fffffffffffffff;
    } while (OGPGLGPMEPD < 0);
    __this_00 = (__this->fields).PDEAGAFHDFI;
    if (__this_00 == (Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *)0x0) break;
    bVar1 = Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer__HasPlayer
                      (__this_00,OGPGLGPMEPD,(MethodInfo *)0x0);
    if (!bVar1) {
      return OGPGLGPMEPD;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

