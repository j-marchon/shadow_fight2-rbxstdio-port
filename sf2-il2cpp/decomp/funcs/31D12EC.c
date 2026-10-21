// Nekki.SF2.GUI.Common.Achievements.AchievementMessagesManager.CBKNCKEJPGD$$BIMMHDDABLF @ RVA 0x31D12EC

void Nekki_SF2_GUI_Common_Achievements_AchievementMessagesManager_CBKNCKEJPGD__BIMMHDDABLF
               (Nekki_SF2_GUI_Common_Achievements_AchievementMessagesManager_CBKNCKEJPGD_o *__this,
               MethodInfo *method)

{
  KIENAPHHHDI_o *__this_00;
  Nekki_SF2_GUI_Common_Achievements_AchievementMessagesManager_o *pNVar1;
  System_Action_o *pSVar2;
  
  pNVar1 = (__this->fields).__4__this;
  if ((pNVar1 != (Nekki_SF2_GUI_Common_Achievements_AchievementMessagesManager_o *)0x0) &&
     (__this_00 = (pNVar1->fields).BHKGNJNHGAP, __this_00 != (KIENAPHHHDI_o *)0x0)) {
    KIENAPHHHDI__LEAPFADCELA(__this_00,(__this->fields).message,(MethodInfo *)0x0);
    pNVar1 = (__this->fields).__4__this;
    if (pNVar1 != (Nekki_SF2_GUI_Common_Achievements_AchievementMessagesManager_o *)0x0) {
      pSVar2 = (pNVar1->fields).EGMHPABAGML;
      if (pSVar2 != (System_Action_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x032d1330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(pSVar2->fields).super.super.invoke_impl)
                  ((pSVar2->fields).super.super.method_code,(pSVar2->fields).super.super.method);
        return;
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

