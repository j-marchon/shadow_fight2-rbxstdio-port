// Nekki.SF2.GUI.Dialogs.Raids.RaidTopClanCell$$KGLAFCCENFA @ RVA 0x304CCC0

void Nekki_SF2_GUI_Dialogs_Raids_RaidTopClanCell__KGLAFCCENFA
               (Nekki_SF2_GUI_Dialogs_Raids_RaidTopClanCell_o *__this,int32_t HIMHBEENEIF,
               MethodInfo *method)

{
  int32_t iVar1;
  System_String_o *pSVar2;
  Nekki_SF2_GUI_LabelAlias_o *pNVar3;
  MethodInfo *method_00;
  Nekki_SF2_GUI_LabelAlias_c *pNVar4;
  int32_t local_24;
  
  local_24 = HIMHBEENEIF;
  if ((DAT_04565e19 & 1) == 0) {
    FUN_01bab630(&LPGPNBGHDBD_TypeInfo);
    FUN_01bab630(&StringLiteral_1223);
    DAT_04565e19 = 1;
  }
  pSVar2 = StringLiteral_1223;
  if (0 < HIMHBEENEIF) {
    pSVar2 = System_Int32__ToString((int32_t)&local_24,(MethodInfo *)0x0);
  }
  pNVar3 = (__this->fields)._clanPos;
  if (pNVar3 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(0,pSVar2);
  }
  pNVar4 = pNVar3->klass;
                    /* try { // try from 0314cd3c to 0324ceeb has its CatchHandler @ 0314cd3c
                       catch() { ... } // from try @ 0314cd3c with catch @ 0314cd3c
                       catch() { ... } // from try @ 0314cf08 with catch @ 0314cd3c
                       catch() { ... } // from try @ 0314cf38 with catch @ 0314cd3c
                       catch() { ... } // from try @ 0314cf74 with catch @ 0314cd3c */
  method_00 = (pNVar4->vtable)._75_set_text.method;
  (*(pNVar4->vtable)._75_set_text.methodPtr)();
  iVar1 = local_24;
  if ((LPGPNBGHDBD_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  iVar1 = LPGPNBGHDBD__CJPODFGPDFI(iVar1,(MethodInfo *)0x0);
  Nekki_SF2_GUI_Dialogs_Raids_RaidTopClanCell__KANCOIBLNKP(__this,iVar1,method_00);
  return;
}

