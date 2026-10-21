// Nekki.SF2.GUI.Fight.ItemRewardHardmode$$SetIcon @ RVA 0x3093060

void Nekki_SF2_GUI_Fight_ItemRewardHardmode__SetIcon
               (Nekki_SF2_GUI_Fight_ItemRewardHardmode_o *__this,HOOAAGABMBL_o *IKKAMAMLIKA,
               MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar3;
  
  if ((DAT_045660b7 & 1) == 0) {
    FUN_01bab630(&MGENAMAJALB_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_045660b7 = 1;
  }
  pNVar3 = (__this->fields).icon;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  pNVar3 = (__this->fields).icon;
  if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar2 = MGENAMAJALB__AAHKIHMHJDP((MethodInfo *)0x0);
  if (pNVar3 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
    *(System_String_o **)&(pNVar3->fields).super.m_PixelsPerUnitMultiplier = pSVar2;
    thunk_FUN_01c20e04(&(pNVar3->fields).super.m_PixelsPerUnitMultiplier);
    if ((IKKAMAMLIKA != (HOOAAGABMBL_o *)0x0) &&
       (pNVar3 = (__this->fields).icon, pNVar3 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0)) {
      Nekki_SF2_GUI_ResolutionImage__set_SpriteName
                (pNVar3,(IKKAMAMLIKA->fields)._GPEFIOMJHNN_k__BackingField,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

