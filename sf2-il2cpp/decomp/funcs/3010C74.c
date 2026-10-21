// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanRaidPartyPlayerCell$$FDFHMHPOHKA @ RVA 0x3010C74

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyPlayerCell__FDFHMHPOHKA
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyPlayerCell_o *__this,
               MethodInfo *method)

{
  uint uVar1;
  Nekki_SF2_GUI_ResolutionImage_o *__this_00;
  MethodInfo *extraout_x1;
  GKLPDMLELJF_o *pGVar2;
  undefined8 *puVar3;
  
  if ((DAT_04565baa & 1) == 0) {
    FUN_01bab630(&StringLiteral_9089);
    FUN_01bab630(&StringLiteral_9085);
    DAT_04565baa = 1;
    method = extraout_x1;
  }
  pGVar2 = (__this->fields).DICNIMJBGML;
  if (pGVar2 == (GKLPDMLELJF_o *)0x0) {
    return;
  }
  uVar1 = (pGVar2->fields).PFJPLCAIGJH;
  if (uVar1 == 1) {
    __this_00 = (__this->fields)._status;
    if (__this_00 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
LAB_03110d10:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8(0,method);
    }
    puVar3 = &StringLiteral_9089;
  }
  else {
    if ((uVar1 & 0xfffffffe) != 2) {
      return;
    }
    __this_00 = (__this->fields)._status;
    if (__this_00 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_03110d10;
    puVar3 = &StringLiteral_9085;
  }
  Nekki_SF2_GUI_ResolutionImage__set_SpriteName
            (__this_00,(System_String_o *)*puVar3,(MethodInfo *)0x0);
  return;
}

