// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanRaidPartyTable$$Init @ RVA 0x314CB34

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyTable__Init
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyTable_o *__this,
               Nekki_SF2_GUI_SimpleScroll_o *MGFBPKIBNJI,NLFLMJPNOLF_o *AOMBONOOJFP,
               Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyPlayerCell_o *GEFKGPIDOGL,
               MethodInfo *method)

{
  bool bVar1;
  NLFLMJPNOLF_o **ppNVar2;
  Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyPlayerCell_o **ppNVar3;
  EEOMEMBBGNA_o *pEVar4;
  CJFBGEEIPBA_o *__this_00;
  KKLJIDJBFEI_o *pKVar5;
  System_Action_KEFHDOHHHML__o *EKDIECDFOIO;
  DCHAJIMIFHP_o *__this_01;
  Nekki_SF2_GUI_SimpleScroll_o **ppNVar6;
  
  if ((DAT_045667d4 & 1) == 0) {
    FUN_01bab630(&System_Action<KEFHDOHHHML>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyTable_BADMDODBKLB__);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&StringLiteral_20480);
    DAT_045667d4 = 1;
  }
  ppNVar6 = &(__this->fields).PDHMLFAMNCO;
  *ppNVar6 = MGFBPKIBNJI;
  thunk_FUN_01c20e04(ppNVar6,MGFBPKIBNJI);
  if (*ppNVar6 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
    Nekki_SF2_GUI_SimpleScroll__Init(*ppNVar6,(MethodInfo *)0x0);
    ppNVar2 = &(__this->fields).PMHMLJDMHFP;
    *ppNVar2 = AOMBONOOJFP;
    thunk_FUN_01c20e04(ppNVar2,AOMBONOOJFP);
    ppNVar3 = &(__this->fields).KFCHMBGIPJK;
    *ppNVar3 = GEFKGPIDOGL;
    thunk_FUN_01c20e04(ppNVar3,GEFKGPIDOGL);
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pEVar4 = HJPEKDOPBHN__CEFGBPEHJJG((MethodInfo *)0x0);
    if ((pEVar4 != (EEOMEMBBGNA_o *)0x0) &&
       (__this_00 = (pEVar4->fields).GMNJEBCECDA, __this_00 != (CJFBGEEIPBA_o *)0x0)) {
      bVar1 = CJFBGEEIPBA__GPIFDPAIBNH(__this_00,AOMBONOOJFP,(MethodInfo *)0x0);
      (__this->fields).CBFOBEFKNJG = bVar1;
      pKVar5 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)(ulong)bVar1);
      if (pKVar5 != (KKLJIDJBFEI_o *)0x0) {
        __this_01 = (pKVar5->fields).super.FNHOHLGNHGN;
        EKDIECDFOIO = (System_Action_KEFHDOHHHML__o *)
                      thunk_FUN_01bda818(System_Action<KEFHDOHHHML>_TypeInfo);
        System_Action<object>___ctor();
        if (__this_01 != (DCHAJIMIFHP_o *)0x0) {
          DCHAJIMIFHP__MPFFOIIBAKO(__this_01,StringLiteral_20480,EKDIECDFOIO,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

