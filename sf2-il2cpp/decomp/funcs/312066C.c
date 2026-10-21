// Nekki.SF2.GUI.Dialogs.Raids.LeaderboardSeasonViewController$$Init @ RVA 0x312066C

void Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController__Init
               (Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController_o *__this,
               Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog_o *LMEHKLFGEHI,
               UnityEngine_Transform_o *LHJDDHHOLPC,UnityEngine_GameObject_o *LDKAFJPEAPA,
               SFButton_o *MIOHNKFGENK,SFButton_o *KAKKIFMDDMO,
               Nekki_SF2_GUI_LabelAlias_o *BIMIBKKLPLB,
               Nekki_SF2_GUI_Scripts_LoadingCircle_o *JMBOIPJLIDO,
               Nekki_SF2_GUI_SimpleScroll_o *MGFBPKIBNJI,UnityEngine_GameObject_o *JEHGAGMHBIO,
               UnityEngine_GameObject_o *EJPPCCJNDAN,MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog_o **ppNVar1;
  UnityEngine_Transform_o **ppUVar2;
  UnityEngine_GameObject_o **ppUVar3;
  Nekki_SF2_GUI_Scripts_LoadingCircle_o **ppNVar4;
  Nekki_SF2_GUI_SimpleScroll_o **ppNVar5;
  UnityEngine_Events_UnityAction_o *pUVar6;
  MethodInfo *method_00;
  BHEDGAKGKPO_StaticFields *pBVar7;
  Nekki_SF2_GUI_LabelAlias_o **ppNVar8;
  Nekki_SF2_GUI_LabelAlias_o *pNVar9;
  UnityEngine_Events_UnityEvent_o *pUVar10;
  SFButton_o **ppSVar11;
  SFButton_o **ppSVar12;
  
  if ((DAT_04566621 & 1) == 0) {
    FUN_01bab630(&BHEDGAKGKPO_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController_KBPLKNNFMHH__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController_MJMMIEKDIAK__);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    DAT_04566621 = 1;
  }
  ppNVar1 = &(__this->fields).ILCGLGPADOK;
  *ppNVar1 = LMEHKLFGEHI;
  thunk_FUN_01c20e04(ppNVar1,LMEHKLFGEHI);
  ppUVar2 = &(__this->fields).PDEAGAFHDFI;
  *ppUVar2 = LHJDDHHOLPC;
  thunk_FUN_01c20e04(ppUVar2,LHJDDHHOLPC);
  ppUVar3 = &(__this->fields).OHBLFFNDIDC;
  *ppUVar3 = LDKAFJPEAPA;
  thunk_FUN_01c20e04(ppUVar3,LDKAFJPEAPA);
  ppSVar12 = &(__this->fields).IELNFDNPDEM;
  *ppSVar12 = MIOHNKFGENK;
  thunk_FUN_01c20e04(ppSVar12,MIOHNKFGENK);
  ppSVar11 = &(__this->fields).NJHJPOAKMNP;
  *ppSVar11 = KAKKIFMDDMO;
  thunk_FUN_01c20e04(ppSVar11,KAKKIFMDDMO);
  ppNVar8 = &(__this->fields).JICANOFGOJF;
  *ppNVar8 = BIMIBKKLPLB;
  thunk_FUN_01c20e04(ppNVar8,BIMIBKKLPLB);
  ppNVar4 = &(__this->fields).PGEOMGONABB;
  *ppNVar4 = JMBOIPJLIDO;
  thunk_FUN_01c20e04(ppNVar4,JMBOIPJLIDO);
  ppNVar5 = &(__this->fields).PDHMLFAMNCO;
  *ppNVar5 = MGFBPKIBNJI;
  thunk_FUN_01c20e04(ppNVar5,MGFBPKIBNJI);
  ppUVar3 = &(__this->fields).ECJHPNCFJMM;
  *ppUVar3 = JEHGAGMHBIO;
  thunk_FUN_01c20e04(ppUVar3,JEHGAGMHBIO);
  ppUVar3 = &(__this->fields).LLPHICIPDBC;
  *ppUVar3 = EJPPCCJNDAN;
  thunk_FUN_01c20e04(ppUVar3,EJPPCCJNDAN);
  if (*ppSVar12 != (SFButton_o *)0x0) {
    pUVar10 = (UnityEngine_Events_UnityEvent_o *)((*ppSVar12)->fields).super.m_OnClick;
    pUVar6 = (UnityEngine_Events_UnityAction_o *)
             thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
    UnityEngine_Events_UnityAction___ctor();
    if (pUVar10 != (UnityEngine_Events_UnityEvent_o *)0x0) {
      UnityEngine_Events_UnityEvent__AddListener(pUVar10,pUVar6,(MethodInfo *)0x0);
      if (*ppSVar11 != (SFButton_o *)0x0) {
        pUVar10 = (UnityEngine_Events_UnityEvent_o *)((*ppSVar11)->fields).super.m_OnClick;
        pUVar6 = (UnityEngine_Events_UnityAction_o *)
                 thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
        UnityEngine_Events_UnityAction___ctor();
        if (pUVar10 != (UnityEngine_Events_UnityEvent_o *)0x0) {
          UnityEngine_Events_UnityEvent__AddListener(pUVar10,pUVar6,(MethodInfo *)0x0);
          pNVar9 = *ppNVar8;
          if ((BHEDGAKGKPO_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          if (pNVar9 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
            pBVar7 = BHEDGAKGKPO_TypeInfo->static_fields;
            (*(pNVar9->klass->vtable)._23_set_color.methodPtr)
                      ((pBVar7->FHIAKPJBBCB).fields.r,(pBVar7->FHIAKPJBBCB).fields.g,
                       (pBVar7->FHIAKPJBBCB).fields.b,(pBVar7->FHIAKPJBBCB).fields.a,pNVar9,
                       (pNVar9->klass->vtable)._23_set_color.method);
            (*(__this->klass->vtable)._9_HNIHOIAMDPC.methodPtr)
                      (__this,(__this->klass->vtable)._9_HNIHOIAMDPC.method);
            Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController__BJDBAKABLCF
                      (__this,method_00);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

