// TypeDefIndex 156
// Namespace: Nekki.SF2.GUI.Dialogs.Raids
// public class PreviousSeasonViewController : LeaderboardSeasonViewController
// Fields:

// ===== public override string GetPrefix()  [RVA 0x3022AF4]
// Nekki.SF2.GUI.Dialogs.Raids.PreviousSeasonViewController$$GetPrefix @ RVA 0x3022AF4

System_String_o *
Nekki_SF2_GUI_Dialogs_Raids_PreviousSeasonViewController__GetPrefix
          (Nekki_SF2_GUI_Dialogs_Raids_PreviousSeasonViewController_o *__this,MethodInfo *method)

{
  if ((DAT_04565c66 & 1) == 0) {
    FUN_01bab630(&StringLiteral_10442/*"Prev:"*/);
    DAT_04565c66 = 1;
  }
  return StringLiteral_10442/*"Prev:"*/;
}


// ===== public void .ctor()  [RVA 0x3022B34]
// Nekki.SF2.GUI.Dialogs.Raids.PreviousSeasonViewController$$.ctor @ RVA 0x3022B34

void Nekki_SF2_GUI_Dialogs_Raids_PreviousSeasonViewController___ctor
               (Nekki_SF2_GUI_Dialogs_Raids_PreviousSeasonViewController_o *__this,
               MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController___ctor
            ((Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController_o *)__this,
             (MethodInfo *)0x0);
  return;
}


// ===== public override string GetPrefixSimple()  [RVA 0x3022B3C]
// Nekki.SF2.GUI.Dialogs.Raids.PreviousSeasonViewController$$GetPrefixSimple @ RVA 0x3022B3C

System_String_o *
Nekki_SF2_GUI_Dialogs_Raids_PreviousSeasonViewController__GetPrefixSimple
          (Nekki_SF2_GUI_Dialogs_Raids_PreviousSeasonViewController_o *__this,MethodInfo *method)

{
  if ((DAT_04565c67 & 1) == 0) {
    FUN_01bab630(&StringLiteral_10441/*"Prev"*/);
    DAT_04565c67 = 1;
  }
  return StringLiteral_10441/*"Prev"*/;
}


// ===== protected override void KEIADNHIOMA()  [RVA 0x3022B7C]
// Nekki.SF2.GUI.Dialogs.Raids.PreviousSeasonViewController$$KEIADNHIOMA @ RVA 0x3022B7C

void Nekki_SF2_GUI_Dialogs_Raids_PreviousSeasonViewController__KEIADNHIOMA
               (Nekki_SF2_GUI_Dialogs_Raids_PreviousSeasonViewController_o *__this,
               MethodInfo *method)

{
  (__this->fields).super.JCCKLCBGABE = false;
  return;
}


// ===== protected override void AFLCMPBEJDD()  [RVA 0x3022B84]
// Nekki.SF2.GUI.Dialogs.Raids.PreviousSeasonViewController$$AFLCMPBEJDD @ RVA 0x3022B84

void Nekki_SF2_GUI_Dialogs_Raids_PreviousSeasonViewController__AFLCMPBEJDD
               (Nekki_SF2_GUI_Dialogs_Raids_PreviousSeasonViewController_o *__this,
               MethodInfo *method)

{
  PLIIGOCLJDL_o *__this_00;
  System_Action_JCFJFJCKLKG__o *pSVar1;
  
  if ((DAT_04565c68 & 1) == 0) {
    FUN_01bab630(&System_Action<JCFJFJCKLKG>_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController_HKEGMNIBLIG__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController_IGPPHMFFLKJ__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController_KCPEJAPPAJP__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController_MDLODDGPPAH__);
    DAT_04565c68 = 1;
  }
  (*(__this->klass->vtable)._7_HCOGKGLBBFB.methodPtr)
            (__this,(__this->klass->vtable)._7_HCOGKGLBBFB.method);
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = HJPEKDOPBHN__NKPPBANIAFK((MethodInfo *)0x0);
  pSVar1 = (System_Action_JCFJFJCKLKG__o *)thunk_FUN_01bda818(System_Action<JCFJFJCKLKG>_TypeInfo);
  System_Action<object>___ctor();
  if (__this_00 != (PLIIGOCLJDL_o *)0x0) {
    PLIIGOCLJDL__JODJMGAGEFG(__this_00,pSVar1,(MethodInfo *)0x0);
    pSVar1 = (System_Action_JCFJFJCKLKG__o *)thunk_FUN_01bda818(System_Action<JCFJFJCKLKG>_TypeInfo)
    ;
    System_Action<object>___ctor();
    PLIIGOCLJDL__AJDFKNGFMMF(__this_00,pSVar1,(MethodInfo *)0x0);
    pSVar1 = (System_Action_JCFJFJCKLKG__o *)thunk_FUN_01bda818(System_Action<JCFJFJCKLKG>_TypeInfo)
    ;
    System_Action<object>___ctor();
    PLIIGOCLJDL__IONLLAFFHFO(__this_00,pSVar1,(MethodInfo *)0x0);
    pSVar1 = (System_Action_JCFJFJCKLKG__o *)thunk_FUN_01bda818(System_Action<JCFJFJCKLKG>_TypeInfo)
    ;
    System_Action<object>___ctor();
    PLIIGOCLJDL__MFBGCDMHHCG(__this_00,pSVar1,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override void HCOGKGLBBFB()  [RVA 0x3022D1C]
// Nekki.SF2.GUI.Dialogs.Raids.PreviousSeasonViewController$$HCOGKGLBBFB @ RVA 0x3022D1C

void Nekki_SF2_GUI_Dialogs_Raids_PreviousSeasonViewController__HCOGKGLBBFB
               (Nekki_SF2_GUI_Dialogs_Raids_PreviousSeasonViewController_o *__this,
               MethodInfo *method)

{
  PLIIGOCLJDL_o *__this_00;
  System_Action_JCFJFJCKLKG__o *pSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04565c69 & 1) == 0) {
    FUN_01bab630(&System_Action<JCFJFJCKLKG>_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController_HKEGMNIBLIG__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController_IGPPHMFFLKJ__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController_KCPEJAPPAJP__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController_MDLODDGPPAH__);
    DAT_04565c69 = 1;
    method = extraout_x1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
  }
  __this_00 = HJPEKDOPBHN__NKPPBANIAFK((MethodInfo *)0x0);
  pSVar1 = (System_Action_JCFJFJCKLKG__o *)thunk_FUN_01bda818(System_Action<JCFJFJCKLKG>_TypeInfo);
  System_Action<object>___ctor();
  if (__this_00 != (PLIIGOCLJDL_o *)0x0) {
    PLIIGOCLJDL__IJMELLFDCDD(__this_00,pSVar1,(MethodInfo *)0x0);
    pSVar1 = (System_Action_JCFJFJCKLKG__o *)thunk_FUN_01bda818(System_Action<JCFJFJCKLKG>_TypeInfo)
    ;
    System_Action<object>___ctor();
    PLIIGOCLJDL__BNNGOJGLDOC(__this_00,pSVar1,(MethodInfo *)0x0);
    pSVar1 = (System_Action_JCFJFJCKLKG__o *)thunk_FUN_01bda818(System_Action<JCFJFJCKLKG>_TypeInfo)
    ;
    System_Action<object>___ctor();
    PLIIGOCLJDL__CMPOBKHCLJA(__this_00,pSVar1,(MethodInfo *)0x0);
    pSVar1 = (System_Action_JCFJFJCKLKG__o *)thunk_FUN_01bda818(System_Action<JCFJFJCKLKG>_TypeInfo)
    ;
    System_Action<object>___ctor();
    PLIIGOCLJDL__OJAHHKBMJOH(__this_00,pSVar1,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override JCFJFJCKLKG ILNOMBHAPEL(IFOIPICDFHN ACCIHBHMFPN)  [RVA 0x3022EA4]
// Nekki.SF2.GUI.Dialogs.Raids.PreviousSeasonViewController$$ILNOMBHAPEL @ RVA 0x3022EA4

JCFJFJCKLKG_o *
Nekki_SF2_GUI_Dialogs_Raids_PreviousSeasonViewController__ILNOMBHAPEL
          (Nekki_SF2_GUI_Dialogs_Raids_PreviousSeasonViewController_o *__this,int32_t ACCIHBHMFPN,
          MethodInfo *method)

{
  PLIIGOCLJDL_o *__this_00;
  JCFJFJCKLKG_o *pJVar1;
  
  if ((DAT_04565c6a & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_04565c6a = 1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = HJPEKDOPBHN__NKPPBANIAFK((MethodInfo *)0x0);
  if (__this_00 != (PLIIGOCLJDL_o *)0x0) {
    pJVar1 = PLIIGOCLJDL__MACEOHOPNGP(__this_00,ACCIHBHMFPN,(MethodInfo *)0x0);
    return pJVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

