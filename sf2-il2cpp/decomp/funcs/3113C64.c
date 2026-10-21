// Nekki.SF2.GUI.Dialogs.Raids.Clans.MembersClanTable$$OnDestroy @ RVA 0x3113C64

void Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable__OnDestroy
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable_o *__this,MethodInfo *method)

{
  KKLJIDJBFEI_o *pKVar1;
  DCHAJIMIFHP_o *__this_00;
  HCKCBFOGMMJ_o *__this_01;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  Nekki_SF2_GUI_SimpleScroll_o **ppNVar2;
  
  if ((DAT_0456659c & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_JICOLGELJGE<LFELBGMCDHD>_FAJIGDCHCKL__);
    DAT_0456659c = 1;
    method = extraout_x1;
  }
  Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable__KBCFIBAANHN(__this,method);
  Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable__DIMBPBFLDNH(__this,method_00);
  Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable__NJAGGANINGD(__this,method_01);
  pKVar1 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
  if ((pKVar1 != (KKLJIDJBFEI_o *)0x0) &&
     (__this_00 = (pKVar1->fields).super.FNHOHLGNHGN, __this_00 != (DCHAJIMIFHP_o *)0x0)) {
    DCHAJIMIFHP__GMNFJKHEJLO(__this_00,(Il2CppObject *)__this,(MethodInfo *)0x0);
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_01 = HJPEKDOPBHN__OGBJOOPBEFG((MethodInfo *)0x0);
    if (__this_01 != (HCKCBFOGMMJ_o *)0x0) {
      JICOLGELJGE<object>__FAJIGDCHCKL
                ((JICOLGELJGE_T__o *)__this_01,(__this->fields).FGDPLJNBMIN,
                 Method_JICOLGELJGE<LFELBGMCDHD>_FAJIGDCHCKL__);
      ppNVar2 = &(__this->fields).PDHMLFAMNCO;
      *ppNVar2 = (Nekki_SF2_GUI_SimpleScroll_o *)0x0;
      thunk_FUN_01c20e04(ppNVar2,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

