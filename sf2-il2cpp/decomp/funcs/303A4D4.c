// LJNJDFEAIOH$$CPMHIEJENLD @ RVA 0x303A4D4

void LJNJDFEAIOH__CPMHIEJENLD(LJNJDFEAIOH_o *__this,AADKBCFCLKK_o *DKMMBMBMJBO,MethodInfo *method)

{
  bool bVar1;
  int64_t iVar2;
  Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *pNVar3;
  
  iVar2 = OOBBAGLCFPF__ACNOPBOADGE(DKMMBMBMJBO,(MethodInfo *)0x0);
  bVar1 = OOBBAGLCFPF__FLMDOPMDKID(DKMMBMBMJBO,(MethodInfo *)0x0);
  pNVar3 = (__this->fields).PDEAGAFHDFI;
  if (pNVar3 != (Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *)0x0) {
    if (bVar1) {
      Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer__SetRaidEndedState
                (pNVar3,false,(MethodInfo *)0x0);
      return;
    }
    Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer__UpdateTimer
              (pNVar3,(int)(SUB168(SEXT816(iVar2) * SEXT816(0x20c49ba5e353f7cf),8) >> 7) -
                      (SUB164(SEXT816(iVar2) * SEXT816(0x20c49ba5e353f7cf),0xc) >> 0x1f),
               (MethodInfo *)0x0);
    pNVar3 = (__this->fields).PDEAGAFHDFI;
    bVar1 = OOBBAGLCFPF__IFFNMNFGOII(DKMMBMBMJBO,(MethodInfo *)0x0);
    if (pNVar3 != (Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *)0x0) {
      Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer__SetTimerVisible
                (pNVar3,(bool)(~bVar1 & 1),(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

