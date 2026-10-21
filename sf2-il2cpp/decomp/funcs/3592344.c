// Nekki.SF2.GUI.Profile.BattlePassPanel$$GetNumberOfCells @ RVA 0x3592344

int32_t Nekki_SF2_GUI_Profile_BattlePassPanel__GetNumberOfCells
                  (Nekki_SF2_GUI_Profile_BattlePassPanel_o *__this,
                  EnhancedUI_EnhancedScroller_EnhancedScroller_o *MLOLBLIGDHM,MethodInfo *method)

{
  System_Collections_Generic_List_PIJBHIFGBCK__o *pSVar1;
  undefined1 auVar2 [16];
  
  auVar2._8_8_ = MLOLBLIGDHM;
  auVar2._0_8_ = __this;
  if ((DAT_04568d7c & 1) == 0) {
    auVar2 = FUN_01bab630(&Method_System_Collections_Generic_List<PIJBHIFGBCK>_get_Count__);
    DAT_04568d7c = 1;
  }
  pSVar1 = (__this->fields).IBBJADAIGIL;
  if (pSVar1 != (System_Collections_Generic_List_PIJBHIFGBCK__o *)0x0) {
    return (pSVar1->fields)._size;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar2._0_8_,auVar2._8_8_);
}

