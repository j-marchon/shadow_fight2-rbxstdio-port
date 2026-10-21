// TypeDefIndex 1675
// Namespace: Nekki.SF2.GUI.Dialogs.Raids
// public class SeasFinRewardContent : SeasFinBaseContent
// Fields:
//   private RewardPanel _rewardPanel; // 0x40

// ===== public void .ctor()  [RVA 0x31CCDD0]
// Nekki.SF2.GUI.Dialogs.Raids.SeasFinRewardContent$$.ctor @ RVA 0x31CCDD0

void Nekki_SF2_GUI_Dialogs_Raids_SeasFinRewardContent___ctor
               (Nekki_SF2_GUI_Dialogs_Raids_SeasFinRewardContent_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_Raids_SeasFinBaseContent___ctor
            ((Nekki_SF2_GUI_Dialogs_Raids_SeasFinBaseContent_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== protected override void OJGLIBHMOIE()  [RVA 0x31CCDD8]
// Nekki.SF2.GUI.Dialogs.Raids.SeasFinRewardContent$$OJGLIBHMOIE @ RVA 0x31CCDD8

void Nekki_SF2_GUI_Dialogs_Raids_SeasFinRewardContent__OJGLIBHMOIE
               (Nekki_SF2_GUI_Dialogs_Raids_SeasFinRewardContent_o *__this,MethodInfo *method)

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
  Nekki_SF2_GUI_Dialogs_Raids_SeasFinBaseContent__OJGLIBHMOIE
            ((Nekki_SF2_GUI_Dialogs_Raids_SeasFinBaseContent_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public void Init(BECIPDJBAOG KJADEEFANAL)  [RVA 0x31CCE10]
// Nekki.SF2.GUI.Dialogs.Raids.SeasFinRewardContent$$Init @ RVA 0x31CCE10

void Nekki_SF2_GUI_Dialogs_Raids_SeasFinRewardContent__Init
               (Nekki_SF2_GUI_Dialogs_Raids_SeasFinRewardContent_o *__this,
               BECIPDJBAOG_o *KJADEEFANAL,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Fight_RewardPanel_o *__this_00;
  Nekki_SF2_GUI_Menu_MainMenu_o *pNVar2;
  
  if ((DAT_04566c7d & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_3640/*"CANCEL"*/);
    FUN_01bab630(&StringLiteral_16815/*"btnObtain"*/);
    DAT_04566c7d = 1;
  }
  Nekki_SF2_GUI_Dialogs_Raids_SeasFinBaseContent__GIENGNEGHPJ
            ((Nekki_SF2_GUI_Dialogs_Raids_SeasFinBaseContent_o *)__this,true,2,StringLiteral_16815/*"btnObtain"*/,
             false,1,StringLiteral_3640/*"CANCEL"*/,(MethodInfo *)0x0);
  __this_00 = (__this->fields)._rewardPanel;
  if (__this_00 != (Nekki_SF2_GUI_Fight_RewardPanel_o *)0x0) {
    Nekki_SF2_GUI_Fight_RewardPanel__Init(__this_00,KJADEEFANAL,false,(MethodInfo *)0x0);
    if (DAT_04565b84 == '\0') {
      FUN_01bab630(&Nekki_SF2_GUI_Menu_MainMenu_TypeInfo);
      DAT_04565b84 = '\x01';
    }
    pNVar2 = Nekki_SF2_GUI_Menu_MainMenu_TypeInfo->static_fields->_JPDNDPEAJAL_k__BackingField;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (!bVar1) {
      return;
    }
    if (DAT_04565b84 == '\0') {
      FUN_01bab630(&Nekki_SF2_GUI_Menu_MainMenu_TypeInfo);
      DAT_04565b84 = '\x01';
    }
    pNVar2 = Nekki_SF2_GUI_Menu_MainMenu_TypeInfo->static_fields->_JPDNDPEAJAL_k__BackingField;
    if (pNVar2 != (Nekki_SF2_GUI_Menu_MainMenu_o *)0x0) {
      Nekki_SF2_GUI_Menu_MainMenu__UpdateMenu(pNVar2,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

