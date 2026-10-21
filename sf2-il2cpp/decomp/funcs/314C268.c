// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanLevelInfoCell$$UpdateView @ RVA 0x314C268

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLevelInfoCell__UpdateView
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLevelInfoCell_o *__this,
               JMDPBFOCHHP_LDOMJFAAGAB_o *OHLDDIANEPE,MethodInfo *method)

{
  int iVar1;
  System_String_o *pSVar2;
  Nekki_SF2_GUI_LabelAlias_o *pNVar3;
  
  if ((DAT_045667ce & 1) == 0) {
    FUN_01bab630(&StringLiteral_2442);
    FUN_01bab630(&StringLiteral_2437);
    DAT_045667ce = 1;
  }
  if (OHLDDIANEPE != (JMDPBFOCHHP_LDOMJFAAGAB_o *)0x0) {
    pNVar3 = (__this->fields)._levelLbl;
    iVar1 = (int)OHLDDIANEPE;
    pSVar2 = System_UInt32__ToString(iVar1 + 0x10,(MethodInfo *)0x0);
    if (pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
      (*(pNVar3->klass->vtable)._75_set_text.methodPtr)
                (pNVar3,pSVar2,(pNVar3->klass->vtable)._75_set_text.method);
      pNVar3 = (__this->fields)._ratingLbl;
      pSVar2 = System_UInt32__ToString(iVar1 + 0x14,(MethodInfo *)0x0);
      pSVar2 = System_String__Concat(StringLiteral_2442,pSVar2,(MethodInfo *)0x0);
      if (pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
        (*(pNVar3->klass->vtable)._75_set_text.methodPtr)
                  (pNVar3,pSVar2,(pNVar3->klass->vtable)._75_set_text.method);
        pNVar3 = (__this->fields)._rewardLbl;
        pSVar2 = System_UInt32__ToString(iVar1 + 0x18,(MethodInfo *)0x0);
        pSVar2 = System_String__Concat(StringLiteral_2437,pSVar2,(MethodInfo *)0x0);
        if (pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0324c370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(pNVar3->klass->vtable)._75_set_text.methodPtr)
                    (pNVar3,pSVar2,(pNVar3->klass->vtable)._75_set_text.method);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

