// Nekki.SF2.GUI.Dialogs.Raids.Clans.MembersClanCellMember$$KGNBJLLJHOC @ RVA 0x33552F0

void Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanCellMember__KGNBJLLJHOC
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanCellMember_o *__this,MethodInfo *method
               )

{
  PEEIMHCMDND_o *__this_00;
  MethodInfo *extraout_x1;
  IDGOGBNEGAM_o *pIVar1;
  
  if ((DAT_04567a3b & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_04567a3b = 1;
    method = extraout_x1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
  }
  __this_00 = HJPEKDOPBHN__JHBLAJKKPFG((MethodInfo *)0x0);
  pIVar1 = (__this->fields).PAAIEEFEBKK;
  if ((pIVar1 != (IDGOGBNEGAM_o *)0x0) && (__this_00 != (PEEIMHCMDND_o *)0x0)) {
    PEEIMHCMDND__JDONKPBCNLL(__this_00,(pIVar1->fields).HLFBMBHOPMI,(MethodInfo *)0x0);
    EDFDANKEBGF__NEOHABBBGKE(1.0,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

