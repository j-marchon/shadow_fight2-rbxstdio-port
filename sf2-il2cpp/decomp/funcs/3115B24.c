// Nekki.SF2.GUI.Dialogs.Raids.Clans.MembersClanTable$$Init @ RVA 0x3115B24

void Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable__Init
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable_o *__this,
               Nekki_SF2_GUI_SimpleScroll_o *MGFBPKIBNJI,
               Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanCellMember_o *JELBPAPODKH,
               Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanCellSeparator_o *OCNEDDMPLEO,
               MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanCellSeparator_o **ppNVar1;
  KKLJIDJBFEI_o *pKVar2;
  System_Action_KEFHDOHHHML__o *EKDIECDFOIO;
  MethodInfo *method_00;
  DCHAJIMIFHP_o *__this_00;
  Nekki_SF2_GUI_SimpleScroll_o **ppNVar3;
  Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanCellMember_o **ppNVar4;
  
  if ((DAT_045665b2 & 1) == 0) {
    FUN_01bab630(&System_Action<KEFHDOHHHML>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable_BADMDODBKLB__);
    FUN_01bab630(&StringLiteral_8943);
    FUN_01bab630(&StringLiteral_20480);
    FUN_01bab630(&StringLiteral_8944);
    DAT_045665b2 = 1;
  }
  (__this->fields).FGDPLJNBMIN = -1;
  ppNVar3 = &(__this->fields).PDHMLFAMNCO;
  *ppNVar3 = MGFBPKIBNJI;
  thunk_FUN_01c20e04(ppNVar3,MGFBPKIBNJI);
  ppNVar4 = &(__this->fields).JOCIOMFBPCF;
  *ppNVar4 = JELBPAPODKH;
  thunk_FUN_01c20e04(ppNVar4,JELBPAPODKH);
  ppNVar1 = &(__this->fields).DKPGKMHPMLL;
  *ppNVar1 = OCNEDDMPLEO;
  thunk_FUN_01c20e04(ppNVar1,OCNEDDMPLEO);
  if (*ppNVar3 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
    Nekki_SF2_GUI_SimpleScroll__Init(*ppNVar3,(MethodInfo *)0x0);
    if (*ppNVar3 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
      Nekki_SF2_GUI_SimpleScroll__UsePoolPrefab
                (*ppNVar3,StringLiteral_8943,(Nekki_SF2_GUI_BaseScrollItem_o *)*ppNVar4,
                 (MethodInfo *)0x0);
      if (*ppNVar3 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
        Nekki_SF2_GUI_SimpleScroll__UsePoolPrefab
                  (*ppNVar3,StringLiteral_8944,
                   (Nekki_SF2_GUI_BaseScrollItem_o *)(__this->fields).DKPGKMHPMLL,(MethodInfo *)0x0)
        ;
        Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable__IACPDAODGGJ(__this,method_00);
        pKVar2 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
        if (pKVar2 != (KKLJIDJBFEI_o *)0x0) {
          __this_00 = (pKVar2->fields).super.FNHOHLGNHGN;
          EKDIECDFOIO = (System_Action_KEFHDOHHHML__o *)
                        thunk_FUN_01bda818(System_Action<KEFHDOHHHML>_TypeInfo);
          System_Action<object>___ctor();
          if (__this_00 != (DCHAJIMIFHP_o *)0x0) {
            DCHAJIMIFHP__MPFFOIIBAKO(__this_00,StringLiteral_20480,EKDIECDFOIO,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

