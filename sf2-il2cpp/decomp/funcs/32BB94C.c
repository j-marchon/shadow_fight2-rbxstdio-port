// Nekki.SF2.GUI.Dialogs.Raids.RaidDailyDialog$$GKPJMHOFIOO @ RVA 0x32BB94C

void Nekki_SF2_GUI_Dialogs_Raids_RaidDailyDialog__GKPJMHOFIOO
               (Nekki_SF2_GUI_Dialogs_Raids_RaidDailyDialog_o *__this,MethodInfo *method)

{
  GALHNMPIEHA_o *pGVar1;
  MethodInfo *in_x2;
  
  if ((DAT_04567493 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_04567493 = 1;
  }
  Nekki_SF2_GUI_Dialogs_BaseDialog__GKPJMHOFIOO
            ((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)__this,(MethodInfo *)0x0);
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 033bb998 to 034bb99f has its CatchHandler @ 033bbaf0 */
    thunk_FUN_01ba7564();
  }
  pGVar1 = HJPEKDOPBHN__CCIPAEHGPFC((MethodInfo *)0x0);
  if (pGVar1 != (GALHNMPIEHA_o *)0x0) {
    Nekki_SF2_GUI_Dialogs_Raids_RaidDailyDialog__HOHPCNNNAHG
              (__this,(pGVar1->fields)._MBJGPIOFAEE_k__BackingField,in_x2);
                    /* try { // try from 033bb9b4 to 034bb9bb has its CatchHandler @ 033bbae8 */
    pGVar1 = HJPEKDOPBHN__CCIPAEHGPFC((MethodInfo *)0x0);
    if (pGVar1 != (GALHNMPIEHA_o *)0x0) {
      GALHNMPIEHA__CADLDOGMOJO(pGVar1,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 033bb9d0 to 034bb9d7 has its CatchHandler @ 033bbac0 */
  FUN_01bab8c8();
}

