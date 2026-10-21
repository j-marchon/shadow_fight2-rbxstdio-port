// TypeDefIndex 598
// Namespace: Nekki.SF2.GUI.Dialogs.Raids
// public class RaidShowLootDialog : RaidBaseDialog
// Fields:
//   private BECIPDJBAOG FCKCGNHILFE; // 0xC8
//   private RewardPanel _rewardPanel; // 0xD0

// ===== public override void OnClose(object IMMNELPBGIF)  [RVA 0x35BB724]
// Nekki.SF2.GUI.Dialogs.Raids.RaidShowLootDialog$$OnClose @ RVA 0x35BB724

void Nekki_SF2_GUI_Dialogs_Raids_RaidShowLootDialog__OnClose
               (Nekki_SF2_GUI_Dialogs_Raids_RaidShowLootDialog_o *__this,Il2CppObject *IMMNELPBGIF,
               MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Fight_RewardPanel_o *__this_00;
  
  __this_00 = (__this->fields)._rewardPanel;
  if (__this_00 == (Nekki_SF2_GUI_Fight_RewardPanel_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  bVar1 = Nekki_SF2_GUI_Fight_RewardPanel__ShowNextGroupIfNeed(__this_00,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  Nekki_SF2_GUI_Dialogs_BaseDialog__OnClose
            ((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)__this,IMMNELPBGIF,(MethodInfo *)0x0);
  return;
}


// ===== public override void Init(object IMMNELPBGIF)  [RVA 0x35BB770]
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
    FUN_01bab630(&StringLiteral_9679/*"OK"*/);
    FUN_01bab630(&StringLiteral_3640/*"CANCEL"*/);
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
                 (System_String_o *)IMMNELPBGIF[1].klass,StringLiteral_9679/*"OK"*/,StringLiteral_3640/*"CANCEL"*/,1,
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


// ===== protected override void EJHAPHAHMHG(string EHNFGMGKCHO)  [RVA 0x35BB85C]
// Nekki.SF2.GUI.Dialogs.Raids.RaidShowLootDialog$$EJHAPHAHMHG @ RVA 0x35BB85C

void Nekki_SF2_GUI_Dialogs_Raids_RaidShowLootDialog__EJHAPHAHMHG
               (Nekki_SF2_GUI_Dialogs_Raids_RaidShowLootDialog_o *__this,
               System_String_o *EHNFGMGKCHO,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_LabelAlias_o *__this_00;
  
  bVar1 = PCOEHCPGBBG__BDLEIEHBFAD(EHNFGMGKCHO,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  __this_00 = (__this->fields).super.super._header;
  if (__this_00 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
    Nekki_SF2_GUI_LabelAlias__set_Alias(__this_00,EHNFGMGKCHO,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x35BB8A8]
// Nekki.SF2.GUI.Dialogs.Raids.RaidShowLootDialog$$.ctor @ RVA 0x35BB8A8

void Nekki_SF2_GUI_Dialogs_Raids_RaidShowLootDialog___ctor
               (Nekki_SF2_GUI_Dialogs_Raids_RaidShowLootDialog_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_Raids_RaidBaseDialog___ctor
            ((Nekki_SF2_GUI_Dialogs_Raids_RaidBaseDialog_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== protected override void IGDDKJJMDLP()  [RVA 0x35BB8B0]
// Nekki.SF2.GUI.Dialogs.Raids.RaidShowLootDialog$$IGDDKJJMDLP @ RVA 0x35BB8B0

void Nekki_SF2_GUI_Dialogs_Raids_RaidShowLootDialog__IGDDKJJMDLP
               (Nekki_SF2_GUI_Dialogs_Raids_RaidShowLootDialog_o *__this,MethodInfo *method)

{
  return;
}


// ===== protected override void GKPJMHOFIOO()  [RVA 0x35BB8B4]
// Nekki.SF2.GUI.Dialogs.Raids.RaidShowLootDialog$$GKPJMHOFIOO @ RVA 0x35BB8B4

void Nekki_SF2_GUI_Dialogs_Raids_RaidShowLootDialog__GKPJMHOFIOO
               (Nekki_SF2_GUI_Dialogs_Raids_RaidShowLootDialog_o *__this,MethodInfo *method)

{
  return;
}

