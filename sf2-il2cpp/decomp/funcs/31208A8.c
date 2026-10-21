// Nekki.SF2.GUI.Dialogs.Raids.LeaderboardSeasonViewController$$BJDBAKABLCF @ RVA 0x31208A8

void Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController__BJDBAKABLCF
               (Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController_o *__this,
               MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *pUVar2;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_RectTransform_o *pUVar4;
  UnityEngine_RectTransform_o *pUVar5;
  Nekki_SF2_GUI_Dialogs_Raids_RaidLeaderboardView_o *pNVar6;
  BANPLPOPIGI_o *__this_00;
  BANPLPOPIGI_o **ppBVar7;
  PBHDPJBLDLG_o *__this_01;
  UnityEngine_Transform_o *pUVar8;
  PBHDPJBLDLG_o **ppPVar9;
  Nekki_SF2_GUI_Dialogs_Raids_RaidLeaderboardView_o **ppNVar10;
  Nekki_SF2_GUI_SimpleScroll_o *pNVar11;
  UnityEngine_Vector2_o UVar12;
  
  if ((DAT_04566629 & 1) == 0) {
    FUN_01bab630(&BANPLPOPIGI_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<RectTransform>__);
    FUN_01bab630(&Method_UnityEngine_GameObject_AddComponent<RaidLeaderboardView>__);
    FUN_01bab630(&UnityEngine_GameObject_TypeInfo);
    FUN_01bab630(&PBHDPJBLDLG_TypeInfo);
    FUN_01bab630(&Method_Util_OHBILOGJCLA<RectTransform>__);
    FUN_01bab630(&StringLiteral_10334);
    FUN_01bab630(&StringLiteral_4421);
    DAT_04566629 = 1;
  }
  (*(__this->klass->vtable)._5_unknown.methodPtr)(__this,(__this->klass->vtable)._5_unknown.method);
  pUVar2 = (UnityEngine_GameObject_o *)thunk_FUN_01bda818(UnityEngine_GameObject_TypeInfo);
  UnityEngine_GameObject___ctor(pUVar2,StringLiteral_10334,(MethodInfo *)0x0);
  if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
    pUVar3 = UnityEngine_GameObject__get_transform(pUVar2,(MethodInfo *)0x0);
    pUVar8 = (__this->fields).PDEAGAFHDFI;
    if ((pUVar8 != (UnityEngine_Transform_o *)0x0) &&
       (pUVar8 = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)pUVar8,(MethodInfo *)0x0),
       pUVar3 != (UnityEngine_Transform_o *)0x0)) {
      UnityEngine_Transform__SetParent(pUVar3,pUVar8,false,(MethodInfo *)0x0);
      pUVar4 = (UnityEngine_RectTransform_o *)
               Util__OHBILOGJCLA<object>(pUVar2,Method_Util_OHBILOGJCLA<RectTransform>__);
      pUVar3 = (__this->fields).PDEAGAFHDFI;
      if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
        pUVar5 = (UnityEngine_RectTransform_o *)
                 UnityEngine_Component__GetComponent<object>
                           ((UnityEngine_Component_o *)pUVar3,
                            Method_UnityEngine_Component_GetComponent<RectTransform>__);
        if ((pUVar5 != (UnityEngine_RectTransform_o *)0x0) &&
           (UVar12 = UnityEngine_RectTransform__get_sizeDelta(pUVar5,(MethodInfo *)0x0),
           pUVar4 != (UnityEngine_RectTransform_o *)0x0)) {
          UnityEngine_RectTransform__set_sizeDelta(pUVar4,UVar12,(MethodInfo *)0x0);
          pNVar6 = (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaderboardView_o *)
                   UnityEngine_GameObject__AddComponent<object>
                             (pUVar2,
                              Method_UnityEngine_GameObject_AddComponent<RaidLeaderboardView>__);
          ppNVar10 = &(__this->fields).JMAFDBBBNEC;
          *ppNVar10 = pNVar6;
          thunk_FUN_01c20e04(ppNVar10,pNVar6);
          if (*ppNVar10 != (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaderboardView_o *)0x0) {
            Nekki_SF2_GUI_Dialogs_Raids_RaidLeaderboardView__Init
                      (*ppNVar10,__this,(__this->fields).JICANOFGOJF,(__this->fields).PGEOMGONABB,
                       (__this->fields).PDHMLFAMNCO,(MethodInfo *)0x0);
            pNVar6 = (__this->fields).JMAFDBBBNEC;
            pNVar11 = (__this->fields).PDHMLFAMNCO;
            pUVar2 = (__this->fields).ECJHPNCFJMM;
            bVar1 = (__this->fields).FakeLastCell;
            __this_00 = (BANPLPOPIGI_o *)thunk_FUN_01bda818(BANPLPOPIGI_TypeInfo);
            BANPLPOPIGI___ctor(__this_00,pNVar6,pNVar11,pUVar2,bVar1,(MethodInfo *)0x0);
            ppBVar7 = &(__this->fields).PlayersLeaderboardSource;
            *ppBVar7 = __this_00;
            thunk_FUN_01c20e04(ppBVar7,__this_00);
            pUVar2 = (UnityEngine_GameObject_o *)thunk_FUN_01bda818(UnityEngine_GameObject_TypeInfo)
            ;
            UnityEngine_GameObject___ctor(pUVar2,StringLiteral_4421,(MethodInfo *)0x0);
            if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
              pUVar3 = UnityEngine_GameObject__get_transform(pUVar2,(MethodInfo *)0x0);
              pUVar8 = (__this->fields).PDEAGAFHDFI;
              if ((pUVar8 != (UnityEngine_Transform_o *)0x0) &&
                 (pUVar8 = UnityEngine_Component__get_transform
                                     ((UnityEngine_Component_o *)pUVar8,(MethodInfo *)0x0),
                 pUVar3 != (UnityEngine_Transform_o *)0x0)) {
                UnityEngine_Transform__SetParent(pUVar3,pUVar8,false,(MethodInfo *)0x0);
                pUVar4 = (UnityEngine_RectTransform_o *)
                         Util__OHBILOGJCLA<object>(pUVar2,Method_Util_OHBILOGJCLA<RectTransform>__);
                pUVar3 = (__this->fields).PDEAGAFHDFI;
                if ((pUVar3 != (UnityEngine_Transform_o *)0x0) &&
                   ((pUVar5 = (UnityEngine_RectTransform_o *)
                              UnityEngine_Component__GetComponent<object>
                                        ((UnityEngine_Component_o *)pUVar3,
                                         Method_UnityEngine_Component_GetComponent<RectTransform>__)
                    , pUVar5 != (UnityEngine_RectTransform_o *)0x0 &&
                    (UVar12 = UnityEngine_RectTransform__get_sizeDelta(pUVar5,(MethodInfo *)0x0),
                    pUVar4 != (UnityEngine_RectTransform_o *)0x0)))) {
                  UnityEngine_RectTransform__set_sizeDelta(pUVar4,UVar12,(MethodInfo *)0x0);
                  pNVar6 = (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaderboardView_o *)
                           UnityEngine_GameObject__AddComponent<object>
                                     (pUVar2,
                                      Method_UnityEngine_GameObject_AddComponent<RaidLeaderboardView>__
                                     );
                  ppNVar10 = &(__this->fields).MAAPMDHDDGL;
                  *ppNVar10 = pNVar6;
                  thunk_FUN_01c20e04(ppNVar10,pNVar6);
                  if (*ppNVar10 != (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaderboardView_o *)0x0) {
                    Nekki_SF2_GUI_Dialogs_Raids_RaidLeaderboardView__Init
                              (*ppNVar10,__this,(__this->fields).JICANOFGOJF,
                               (__this->fields).PGEOMGONABB,(__this->fields).PDHMLFAMNCO,
                               (MethodInfo *)0x0);
                    pNVar6 = (__this->fields).MAAPMDHDDGL;
                    pNVar11 = (__this->fields).PDHMLFAMNCO;
                    pUVar2 = (__this->fields).LLPHICIPDBC;
                    bVar1 = (__this->fields).FakeLastCell;
                    __this_01 = (PBHDPJBLDLG_o *)thunk_FUN_01bda818(PBHDPJBLDLG_TypeInfo);
                    PBHDPJBLDLG___ctor(__this_01,pNVar6,pNVar11,pUVar2,bVar1,(MethodInfo *)0x0);
                    ppPVar9 = &(__this->fields).ClansLeaderboardSource;
                    *ppPVar9 = __this_01;
                    thunk_FUN_01c20e04(ppPVar9,__this_01);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

