// Nekki.SF2.GUI.Dialogs.Raids.SeasFinChestContent$$EELNMLDFJDN @ RVA 0x30485A0

void Nekki_SF2_GUI_Dialogs_Raids_SeasFinChestContent__EELNMLDFJDN
               (Nekki_SF2_GUI_Dialogs_Raids_SeasFinChestContent_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar2;
  UnityEngine_Transform_o *transform;
  
  if ((DAT_04565df9 & 1) == 0) {
    FUN_01bab630(&StringLiteral_12922);
    FUN_01bab630(&StringLiteral_10856);
    DAT_04565df9 = 1;
  }
  pNVar2 = (__this->fields)._bottomStar1;
  if (pNVar2 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
    Nekki_SF2_GUI_ResolutionImage__set_SpriteName(pNVar2,StringLiteral_10856,(MethodInfo *)0x0);
    pNVar2 = (__this->fields)._bottomStar1;
    if (pNVar2 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
      uVar1 = StringLiteral_12922._4_4_;
      (pNVar2->fields).super.m_PixelsPerUnitMultiplier = (float)(undefined4)StringLiteral_12922;
      (pNVar2->fields).super.m_CachedReferencePixelsPerUnit = (float)uVar1;
      thunk_FUN_01c20e04(&(pNVar2->fields).super.m_PixelsPerUnitMultiplier);
      pNVar2 = (__this->fields)._bottomStar2;
      if (pNVar2 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
        transform = UnityEngine_Component__get_transform
                              ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0);
        UnityEngine_TransformExtensions__SetLocalRotationZ(transform,0.0,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

