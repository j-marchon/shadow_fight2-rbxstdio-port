// Nekki.SF2.GUI.Profile.BattlePassPanel$$UpdateResolutionImage @ RVA 0x3590264

void Nekki_SF2_GUI_Profile_BattlePassPanel__UpdateResolutionImage
               (Nekki_SF2_GUI_ResolutionImage_o *IEPECMCLKJB,System_String_o *LAPLEHPNADJ,
               System_String_o *MAFOJGJOMLG,MethodInfo *method)

{
  undefined4 uVar1;
  System_String_o *CJNHFNHJHPE;
  
  if ((DAT_04568d71 & 1) == 0) {
    FUN_01bab630(&StringLiteral_14103);
    FUN_01bab630(&StringLiteral_22352);
    DAT_04568d71 = 1;
  }
  if (IEPECMCLKJB != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
    uVar1 = StringLiteral_14103._4_4_;
    (IEPECMCLKJB->fields).super.m_PixelsPerUnitMultiplier = (float)(undefined4)StringLiteral_14103;
    (IEPECMCLKJB->fields).super.m_CachedReferencePixelsPerUnit = (float)uVar1;
    thunk_FUN_01c20e04(&(IEPECMCLKJB->fields).super.m_PixelsPerUnitMultiplier);
                    /* try { // try from 036902d4 to 037902fb has its CatchHandler @ 03690510 */
    CJNHFNHJHPE = System_String__Format
                            (StringLiteral_22352,(Il2CppObject *)LAPLEHPNADJ,
                             (Il2CppObject *)MAFOJGJOMLG,(MethodInfo *)0x0);
    Nekki_SF2_GUI_ResolutionImage__set_SpriteName(IEPECMCLKJB,CJNHFNHJHPE,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

