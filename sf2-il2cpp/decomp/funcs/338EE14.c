// Nekki.SF2.GUI.Profile.AchievementSubItem$$Init @ RVA 0x338EE14

void Nekki_SF2_GUI_Profile_AchievementSubItem__Init
               (Nekki_SF2_GUI_Profile_AchievementSubItem_o *__this,KMJDCOABCCG_o *LFOOJOJHDFM,
               float FAJCPNMDDHA,MethodInfo *method)

{
  System_String_o *pSVar1;
  ProgressBar_o *pPVar2;
  MethodInfo *method_00;
  GODDDLLLOLB_o *pGVar3;
  Nekki_SF2_GUI_Profile_AchievementSubItem_c *pNVar4;
  undefined8 uVar5;
  
  if ((DAT_04567c0a & 1) == 0) {
    FUN_01bab630(&FIPOABEGELK_TypeInfo);
    FUN_01bab630(&StringLiteral_14091);
    DAT_04567c0a = 1;
  }
  Nekki_SF2_GUI_Profile_SubItem__Init((Nekki_SF2_GUI_Profile_SubItem_o *)__this,(MethodInfo *)0x0);
  (__this->fields).HNNMAMJOEMB = LFOOJOJHDFM;
  thunk_FUN_01c20e04(&(__this->fields).HNNMAMJOEMB,LFOOJOJHDFM);
  (__this->fields).IFGGFDOALOG = FAJCPNMDDHA;
  (__this->fields).super.CNMMJHJNNAJ = StringLiteral_14091;
  thunk_FUN_01c20e04(&(__this->fields).super.CNMMJHJNNAJ);
  if (LFOOJOJHDFM != (KMJDCOABCCG_o *)0x0) {
    pSVar1 = KMJDCOABCCG__IEOHBNIIMFL(LFOOJOJHDFM,(MethodInfo *)0x0);
    (__this->fields).super.COCAGDPOPLL = pSVar1;
    thunk_FUN_01c20e04(&(__this->fields).super.COCAGDPOPLL);
    if ((FIPOABEGELK_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pGVar3 = FIPOABEGELK_TypeInfo->static_fields->FCHIMNCGKJF;
    if (pGVar3 != (GODDDLLLOLB_o *)0x0) {
      pNVar4 = __this->klass;
      uVar5 = NEON_rev64(pGVar3->fields,4);
      (__this->fields).super.GJFHNJFGBKE = (float)(int)uVar5;
      (__this->fields).super.NAPGLBIIEJP = (float)(int)((ulong)uVar5 >> 0x20);
      (*(pNVar4->vtable)._57_UpdateIcon.methodPtr)(__this,(pNVar4->vtable)._57_UpdateIcon.method);
      (*(__this->klass->vtable)._51_SetActive.methodPtr)
                (__this,1,(__this->klass->vtable)._51_SetActive.method);
      Nekki_SF2_GUI_Profile_AchievementSubItem__BMJDIKEHBON(__this,method_00);
      pPVar2 = (__this->fields)._progress;
      if (pPVar2 != (ProgressBar_o *)0x0) {
        (*(pPVar2->klass->vtable)._7_set_Value.methodPtr)
                  ((ulong)(uint)(__this->fields).IFGGFDOALOG,pPVar2,
                   (pPVar2->klass->vtable)._7_set_Value.method);
                    /* WARNING: Could not recover jumptable at 0x0348ef54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(__this->klass->vtable)._66_UpdatePositions.methodPtr)
                  (__this,(__this->klass->vtable)._66_UpdatePositions.method);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

