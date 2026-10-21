// Nekki.SF2.GUI.Menu.ProgressBarDojoPanel$$JCMDCHOBOCC @ RVA 0x31B312C

void Nekki_SF2_GUI_Menu_ProgressBarDojoPanel__JCMDCHOBOCC
               (Nekki_SF2_GUI_Menu_ProgressBarDojoPanel_o *__this,
               Nekki_SF2_GUI_ResolutionImage_o *IEPECMCLKJB,System_String_o *HNFFFGNACAJ,
               MethodInfo *method)

{
  undefined4 uVar1;
  System_String_o *CJNHFNHJHPE;
  JMDPBFOCHHP_ENBCJNLAHAC_o *pJVar2;
  
  if ((DAT_04566b90 & 1) == 0) {
    FUN_01bab630(&StringLiteral_22448);
    FUN_01bab630(&StringLiteral_14106);
    DAT_04566b90 = 1;
  }
  if (IEPECMCLKJB != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
    uVar1 = StringLiteral_14106._4_4_;
    (IEPECMCLKJB->fields).super.m_PixelsPerUnitMultiplier = (float)(undefined4)StringLiteral_14106;
    (IEPECMCLKJB->fields).super.m_CachedReferencePixelsPerUnit = (float)uVar1;
    thunk_FUN_01c20e04(&(IEPECMCLKJB->fields).super.m_PixelsPerUnitMultiplier);
    pJVar2 = (__this->fields).MHDJAEILAJL;
    if (pJVar2 != (JMDPBFOCHHP_ENBCJNLAHAC_o *)0x0) {
      CJNHFNHJHPE = System_String__Format
                              (StringLiteral_22448,(Il2CppObject *)(pJVar2->fields).ICECFDIHPHN,
                               (Il2CppObject *)HNFFFGNACAJ,(MethodInfo *)0x0);
      Nekki_SF2_GUI_ResolutionImage__set_SpriteName(IEPECMCLKJB,CJNHFNHJHPE,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

