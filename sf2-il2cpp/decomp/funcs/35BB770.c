// Nekki.SF2.GUI.Dialogs.Raids.RaidShowLootDialog$$Init @ RVA 0x35BB770

void Nekki_SF2_GUI_Dialogs_Raids_RaidShowLootDialog__Init
               (Nekki_SF2_GUI_Dialogs_Raids_RaidShowLootDialog_o *__this,Il2CppObject *IMMNELPBGIF,
               MethodInfo *method)

{
  byte bVar1;
  Nekki_SF2_GUI_Fight_RewardPanel_o *__this_00;
  BECIPDJBAOG_o **ppBVar2;
  
  if ((DAT_04568ed8 & 1) == 0) {
    FUN_01bab630(&MAEAAOFOANA_TypeInfo);
    FUN_01bab630(&StringLiteral_9679);
    FUN_01bab630(&StringLiteral_3640);
    DAT_04568ed8 = 1;
  }
  if (IMMNELPBGIF != (Il2CppObject *)0x0) {
    bVar1 = (MAEAAOFOANA_TypeInfo->_2).naturalAligment;
    if ((bVar1 <= (IMMNELPBGIF->klass->_2).naturalAligment) &&
       ((IMMNELPBGIF->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
        (Il2CppClass *)MAEAAOFOANA_TypeInfo)) {
      ppBVar2 = &(__this->fields).FCKCGNHILFE;
      *ppBVar2 = IMMNELPBGIF[1].monitor;
      thunk_FUN_01c20e04(ppBVar2);
      Nekki_SF2_GUI_Dialogs_Raids_RaidBaseDialog__GIENGNEGHPJ
                ((Nekki_SF2_GUI_Dialogs_Raids_RaidBaseDialog_o *)__this,
                 (System_String_o *)IMMNELPBGIF[1].klass,StringLiteral_9679,StringLiteral_3640,1,
                 (MethodInfo *)0x0);
      __this_00 = (__this->fields)._rewardPanel;
      if (__this_00 != (Nekki_SF2_GUI_Fight_RewardPanel_o *)0x0) {
        Nekki_SF2_GUI_Fight_RewardPanel__Init(__this_00,*ppBVar2,false,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

