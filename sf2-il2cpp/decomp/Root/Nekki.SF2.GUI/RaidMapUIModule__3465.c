// TypeDefIndex 3465
// Namespace: Nekki.SF2.GUI
// [Serializable]
// public class RaidMapUIModule : UIModule
// Fields:
//   public RaidToggleButton RaidToggleButton; // 0x28
//   public MapCurrencyPanel RaidKeysPanel; // 0x30
//   public Button RaidMapScrollButton; // 0x38
//   public HintBoxAutoKilled RaidHintPrefab; // 0x40
//   public RectTransform RaidHintPos; // 0x48
//   private RaidQuestsButton <RaidDailyQuestsButton>k__BackingField; // 0x50
//   private RectTransform _raidDailyQuestsButtonSpawnPos; // 0x58

// ===== protected override void BJBEBBGINAH()  [RVA 0x3569C2C]
// Nekki.SF2.GUI.RaidMapUIModule$$BJBEBBGINAH @ RVA 0x3569C2C

void Nekki_SF2_GUI_RaidMapUIModule__BJBEBBGINAH
               (Nekki_SF2_GUI_RaidMapUIModule_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Map_RaidQuestsButton_o **ppNVar2;
  Nekki_SF2_GUI_Map_RaidQuestsButton_o *pNVar3;
  
  if ((DAT_04568c1a & 1) == 0) {
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568c1a = 1;
    method = extraout_x1;
  }
  ppNVar2 = &(__this->fields)._RaidDailyQuestsButton_k__BackingField;
  pNVar3 = *ppNVar2;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = MGNPHCAAEIO__MPGHOPABJNB((MethodInfo *)0x0);
    if (bVar1) {
      pNVar3 = Nekki_SF2_GUI_Map_RaidQuestsButton__Instantiate
                         ((__this->fields)._raidDailyQuestsButtonSpawnPos,(MethodInfo *)0x0);
      (__this->fields)._RaidDailyQuestsButton_k__BackingField = pNVar3;
      thunk_FUN_01c20e04(ppNVar2,pNVar3);
      return;
    }
  }
  return;
}


// ===== public void set_RaidDailyQuestsButton(RaidQuestsButton CJNHFNHJHPE)  [RVA 0x3569CF8]
// Nekki.SF2.GUI.RaidMapUIModule$$set_RaidDailyQuestsButton @ RVA 0x3569CF8

void Nekki_SF2_GUI_RaidMapUIModule__set_RaidDailyQuestsButton
               (Nekki_SF2_GUI_RaidMapUIModule_o *__this,
               Nekki_SF2_GUI_Map_RaidQuestsButton_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._RaidDailyQuestsButton_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public RaidQuestsButton get_RaidDailyQuestsButton()  [RVA 0x3569D00]
// Nekki.SF2.GUI.RaidMapUIModule$$get_RaidDailyQuestsButton @ RVA 0x3569D00

Nekki_SF2_GUI_Map_RaidQuestsButton_o *
Nekki_SF2_GUI_RaidMapUIModule__get_RaidDailyQuestsButton
          (Nekki_SF2_GUI_RaidMapUIModule_o *__this,MethodInfo *method)

{
  return (__this->fields)._RaidDailyQuestsButton_k__BackingField;
}


// ===== public void .ctor()  [RVA 0x3569D08]
// Nekki.SF2.GUI.RaidMapUIModule$$.ctor @ RVA 0x3569D08

void Nekki_SF2_GUI_RaidMapUIModule___ctor
               (Nekki_SF2_GUI_RaidMapUIModule_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  
  if ((DAT_04568c1b & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_UIModule_TypeInfo);
    DAT_04568c1b = 1;
    method = extraout_x1;
  }
  if ((Nekki_SF2_GUI_UIModule_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_UIModule_TypeInfo,method);
  }
  Nekki_SF2_GUI_UIModule___ctor((Nekki_SF2_GUI_UIModule_o *)__this,(MethodInfo *)0x0);
  return;
}

