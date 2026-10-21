// Nekki.SF2.GUI.Dialogs.Raids.RaidLeaguesCell.<>c$$MFDJBIIKNJI @ RVA 0x355468C

void Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesCell_<>c__MFDJBIIKNJI
               (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesCell___c_o *__this,
               Nekki_SF2_GUI_LabelAlias_o *i,MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesCell_StaticFields *pNVar1;
  
  if ((DAT_04568b5b & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesCell_TypeInfo);
    DAT_04568b5b = 1;
  }
  if ((Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesCell_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (i != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
    pNVar1 = Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesCell_TypeInfo->static_fields;
                    /* WARNING: Could not recover jumptable at 0x036546fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(i->klass->vtable)._23_set_color.methodPtr)
              ((pNVar1->AGNLHPGIGLA).fields.r,(pNVar1->AGNLHPGIGLA).fields.g,
               (pNVar1->AGNLHPGIGLA).fields.b,(pNVar1->AGNLHPGIGLA).fields.a,i,
               (i->klass->vtable)._23_set_color.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

