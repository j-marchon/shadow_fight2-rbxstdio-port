// Nekki.SF2.GUI.Dialogs.Raids.RaidDailyTaskCell$$CCPABLFBFFA @ RVA 0x30288B4

void Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell__CCPABLFBFFA
               (Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell_o *__this,MethodInfo *method)

{
  DG_Tweening_Sequence_o *t;
  DG_Tweening_Sequence_o **ppDVar1;
  
  ppDVar1 = &(__this->fields).BHMLAAAEHKA;
  t = *ppDVar1;
  if (t != (DG_Tweening_Sequence_o *)0x0) {
    DG_Tweening_TweenExtensions__Kill((DG_Tweening_Tween_o *)t,false,(MethodInfo *)0x0);
    (__this->fields).BHMLAAAEHKA = (DG_Tweening_Sequence_o *)0x0;
    thunk_FUN_01c20e04(ppDVar1,0);
    (__this->fields).OLECEBGAGMI = 0;
    (__this->fields).DIONJIKONHC = 1;
  }
  return;
}

