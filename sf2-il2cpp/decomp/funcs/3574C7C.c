// Nekki.SF2.GUI.Menu.ProgressBarDojoBattlePass$$JCMDCHOBOCC @ RVA 0x3574C7C

void Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass__JCMDCHOBOCC
               (Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass_o *__this,
               Nekki_SF2_GUI_ResolutionImage_o *IEPECMCLKJB,System_String_o *CNIELFLIKJB,
               System_String_o *HNFFFGNACAJ,MethodInfo *method)

{
  undefined4 uVar1;
  System_String_o *CJNHFNHJHPE;
  
  if ((DAT_04568c78 & 1) == 0) {
    FUN_01bab630(&StringLiteral_14103);
    __this = (Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass_o *)FUN_01bab630(&StringLiteral_22452);
    DAT_04568c78 = 1;
  }
  if (IEPECMCLKJB != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
    uVar1 = StringLiteral_14103._4_4_;
    (IEPECMCLKJB->fields).super.m_PixelsPerUnitMultiplier = (float)(undefined4)StringLiteral_14103;
    (IEPECMCLKJB->fields).super.m_CachedReferencePixelsPerUnit = (float)uVar1;
    thunk_FUN_01c20e04(&(IEPECMCLKJB->fields).super.m_PixelsPerUnitMultiplier);
    CJNHFNHJHPE = System_String__Format
                            (StringLiteral_22452,(Il2CppObject *)CNIELFLIKJB,
                             (Il2CppObject *)HNFFFGNACAJ,(MethodInfo *)0x0);
    Nekki_SF2_GUI_ResolutionImage__set_SpriteName(IEPECMCLKJB,CJNHFNHJHPE,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}

