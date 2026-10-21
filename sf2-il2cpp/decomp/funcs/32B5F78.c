// Nekki.SF2.GUI.Dialogs.Raids.Clans.FindClanWidget$$DJHCNNLCEMN @ RVA 0x32B5F78

void Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanWidget__DJHCNNLCEMN
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanWidget_o *__this,
               KEFHDOHHHML_o *IMMNELPBGIF,MethodInfo *method)

{
  bool bVar1;
  OJKCDJCBOBL_o *DBIAAJNKHLH;
  KCJMBDCBIIF_o *__this_00;
  System_Action_DLOALGNBPNL__o *BLMFLPJJMPF;
  
  if ((DAT_04567456 & 1) == 0) {
    FUN_01bab630(&System_Action<DLOALGNBPNL>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanWidget_EOOPHGBLFMI__);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_KEFHDOHHHML_PFNEPJAFEDF<OJKCDJCBOBL>__);
    DAT_04567456 = 1;
  }
  if (((IMMNELPBGIF == (KEFHDOHHHML_o *)0x0) ||
      (bVar1 = KEFHDOHHHML__BOJJBGPIKDP(IMMNELPBGIF,(MethodInfo *)0x0), !bVar1)) ||
     ((__this->fields)._BOGAKJOFOEK_k__BackingField != false)) {
    return;
  }
  DBIAAJNKHLH = (OJKCDJCBOBL_o *)
                KEFHDOHHHML__PFNEPJAFEDF<object>
                          (IMMNELPBGIF,Method_KEFHDOHHHML_PFNEPJAFEDF<OJKCDJCBOBL>__);
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo);
  }
  __this_00 = HJPEKDOPBHN__ODLPHDBFGPL((MethodInfo *)0x0);
  BLMFLPJJMPF = (System_Action_DLOALGNBPNL__o *)
                thunk_FUN_01bda818(System_Action<DLOALGNBPNL>_TypeInfo);
  System_Action<object>___ctor();
  if (__this_00 != (KCJMBDCBIIF_o *)0x0) {
    KCJMBDCBIIF__DAGCABNOONJ(__this_00,DBIAAJNKHLH,BLMFLPJJMPF,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

