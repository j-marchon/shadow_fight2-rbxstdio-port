// Nekki.SF2.GUI.Fight.ScreenModel$$LBGEOIOINOM @ RVA 0x355D934

void Nekki_SF2_GUI_Fight_ScreenModel__LBGEOIOINOM
               (Nekki_SF2_GUI_Fight_ScreenModel_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_ResolutionImageAvatar_o *pNVar1;
  System_String_o *pSVar2;
  PJKHAJKEHEL_o *pPVar3;
  
  if ((DAT_04568b96 & 1) == 0) {
    FUN_01bab630(&MGENAMAJALB_TypeInfo);
    DAT_04568b96 = 1;
  }
  pNVar1 = (__this->fields)._Avatar;
  if (pNVar1 != (Nekki_SF2_GUI_ResolutionImageAvatar_o *)0x0) {
    Nekki_SF2_GUI_ResolutionImageAvatar__UseHighModeOnly(pNVar1,(MethodInfo *)0x0);
    pNVar1 = (__this->fields)._Avatar;
    if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar2 = MGENAMAJALB__OPLAHNAJGAJ((MethodInfo *)0x0);
    if (pNVar1 != (Nekki_SF2_GUI_ResolutionImageAvatar_o *)0x0) {
      *(System_String_o **)&(pNVar1->fields).super.super.m_PixelsPerUnitMultiplier = pSVar2;
      thunk_FUN_01c20e04(&(pNVar1->fields).super.super.m_PixelsPerUnitMultiplier);
      pPVar3 = (__this->fields)._parameters;
      if ((pPVar3 != (PJKHAJKEHEL_o *)0x0) &&
         (pNVar1 = (__this->fields)._Avatar, pNVar1 != (Nekki_SF2_GUI_ResolutionImageAvatar_o *)0x0)
         ) {
        Nekki_SF2_GUI_ResolutionImage__set_SpriteName
                  ((Nekki_SF2_GUI_ResolutionImage_o *)pNVar1,(pPVar3->fields).NILOEHGNJNL,
                   (MethodInfo *)0x0);
        pNVar1 = (__this->fields)._Avatar;
        if (pNVar1 != (Nekki_SF2_GUI_ResolutionImageAvatar_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0365d9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(pNVar1->klass->vtable)._45_SetNativeSize.methodPtr)
                    (pNVar1,(pNVar1->klass->vtable)._45_SetNativeSize.method);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

