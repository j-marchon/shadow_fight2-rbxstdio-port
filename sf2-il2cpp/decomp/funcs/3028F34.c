// Nekki.SF2.GUI.Dialogs.Raids.RaidDailyTaskCell$$PHHHGGNFGLL @ RVA 0x3028F34

void Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell__PHHHGGNFGLL
               (Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell_o *__this,MethodInfo *method)

{
  LabelButton_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  Nekki_SF2_GUI_LabelAlias_o *pNVar1;
  
  if ((DAT_04565cab & 1) == 0) {
    FUN_01bab630(&StringLiteral_1258);
    DAT_04565cab = 1;
  }
  __this_00 = (__this->fields)._btnSkipCooldown;
  if ((__this_00 != (LabelButton_o *)0x0) &&
     (__this_01 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
     __this_01 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(__this_01,false,(MethodInfo *)0x0);
    pNVar1 = (__this->fields)._beforeNextTaskLbl;
    if (pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03128fa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(pNVar1->klass->vtable)._75_set_text.methodPtr)
                (pNVar1,StringLiteral_1258,(pNVar1->klass->vtable)._75_set_text.method);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

