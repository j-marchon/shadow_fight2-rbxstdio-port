// Nekki.SF2.GUI.Map.InfoBattle$$FKFPKOGCLFP @ RVA 0x3419510

void Nekki_SF2_GUI_Map_InfoBattle__FKFPKOGCLFP
               (Nekki_SF2_GUI_Map_InfoBattle_o *__this,OOMHDDBCBJP_o *BANHBMINMMP,MethodInfo *method
               )

{
  undefined4 uVar1;
  int32_t iVar2;
  System_String_o *CJNHFNHJHPE;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar3;
  
  if ((DAT_045680ba & 1) == 0) {
    FUN_01bab630(&StringLiteral_14114);
    DAT_045680ba = 1;
  }
  pNVar3 = (__this->fields)._icon;
  if (pNVar3 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
    uVar1 = StringLiteral_14114._4_4_;
    (pNVar3->fields).super.m_PixelsPerUnitMultiplier = (float)(undefined4)StringLiteral_14114;
    (pNVar3->fields).super.m_CachedReferencePixelsPerUnit = (float)uVar1;
    thunk_FUN_01c20e04(&(pNVar3->fields).super.m_PixelsPerUnitMultiplier);
    if (BANHBMINMMP != (OOMHDDBCBJP_o *)0x0) {
      pNVar3 = (__this->fields)._icon;
      iVar2 = OOMHDDBCBJP__NHGGBEACKBD(BANHBMINMMP,(MethodInfo *)0x0);
      CJNHFNHJHPE = OFFIONDOEPM__GKMBNILEEDE
                              (iVar2 == 0x14,(BANHBMINMMP->fields).NDEFOHKEFJD,(MethodInfo *)0x0);
      if (pNVar3 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
        Nekki_SF2_GUI_ResolutionImage__set_SpriteName(pNVar3,CJNHFNHJHPE,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

