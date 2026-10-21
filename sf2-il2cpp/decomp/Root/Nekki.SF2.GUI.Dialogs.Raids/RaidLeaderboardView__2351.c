// TypeDefIndex 2351
// Namespace: Nekki.SF2.GUI.Dialogs.Raids
// public class RaidLeaderboardView : MonoBehaviour
// Fields:
//   private LoadingCircle PGEOMGONABB; // 0x20
//   private SimpleScroll PDHMLFAMNCO; // 0x28
//   private LabelAlias JICANOFGOJF; // 0x30
//   private bool HOKHHIBHFBM; // 0x38
//   private LeaderboardSeasonViewController OMMHPJLPJGL; // 0x40
//   private string BCGILLKGJMC; // 0x48
//   private bool <BOGAKJOFOEK>k__BackingField; // 0x50
//   private bool <BLOJFJIFDAE>k__BackingField; // 0x51

// ===== private void IJPGIJJPLKG()  [RVA 0x3324560]
// Nekki.SF2.GUI.Dialogs.Raids.RaidLeaderboardView$$IJPGIJJPLKG @ RVA 0x3324560

void Nekki_SF2_GUI_Dialogs_Raids_RaidLeaderboardView__IJPGIJJPLKG
               (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaderboardView_o *__this,MethodInfo *method)

{
  return;
}


// ===== private void DJFCNGEEPLN(bool CJNHFNHJHPE)  [RVA 0x3324564]
// Nekki.SF2.GUI.Dialogs.Raids.RaidLeaderboardView$$DJFCNGEEPLN @ RVA 0x3324564

void Nekki_SF2_GUI_Dialogs_Raids_RaidLeaderboardView__DJFCNGEEPLN
               (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaderboardView_o *__this,bool CJNHFNHJHPE,
               MethodInfo *method)

{
  (__this->fields)._BLOJFJIFDAE_k__BackingField = CJNHFNHJHPE;
  return;
}


// ===== private void Update()  [RVA 0x3324570]
// Nekki.SF2.GUI.Dialogs.Raids.RaidLeaderboardView$$Update @ RVA 0x3324570

void Nekki_SF2_GUI_Dialogs_Raids_RaidLeaderboardView__Update
               (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaderboardView_o *__this,MethodInfo *method)

{
  char cVar1;
  bool bVar2;
  Nekki_SF2_GUI_LabelAlias_o *pNVar3;
  UnityEngine_GameObject_o *pUVar4;
  Nekki_SF2_GUI_Scripts_LoadingCircle_o *pNVar5;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController_o *pNVar6;
  
  if ((DAT_04567864 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04567864 = 1;
    method = extraout_x1;
  }
  pNVar6 = (__this->fields).OMMHPJLPJGL;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pNVar6 = (__this->fields).OMMHPJLPJGL;
    if (pNVar6 == (Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController_o *)0x0)
    goto LAB_034246dc;
    bVar2 = Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController__get_IsActive
                      (pNVar6,(MethodInfo *)0x0);
    if (!bVar2) {
      return;
    }
  }
  pNVar3 = (__this->fields).JICANOFGOJF;
  if ((pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
     (pUVar4 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0),
     pUVar4 != (UnityEngine_GameObject_o *)0x0)) {
    bVar2 = UnityEngine_GameObject__get_activeSelf(pUVar4,(MethodInfo *)0x0);
    if ((__this->fields).HOKHHIBHFBM != bVar2) {
      pNVar3 = (__this->fields).JICANOFGOJF;
      if (pNVar3 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_034246dc;
      pUVar4 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0);
      Util__IHPDCBOFHPA(pUVar4,(__this->fields).HOKHHIBHFBM,(MethodInfo *)0x0);
    }
    pNVar5 = (__this->fields).PGEOMGONABB;
    if ((pNVar5 != (Nekki_SF2_GUI_Scripts_LoadingCircle_o *)0x0) &&
       (pUVar4 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar5,(MethodInfo *)0x0),
       pUVar4 != (UnityEngine_GameObject_o *)0x0)) {
      bVar2 = UnityEngine_GameObject__get_activeSelf(pUVar4,(MethodInfo *)0x0);
      cVar1 = (__this->fields).HOKHHIBHFBM;
      if ((bool)cVar1 != bVar2) {
        pNVar5 = (__this->fields).PGEOMGONABB;
        if (pNVar5 == (Nekki_SF2_GUI_Scripts_LoadingCircle_o *)0x0) goto LAB_034246dc;
        pUVar4 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar5,(MethodInfo *)0x0);
        Util__IHPDCBOFHPA(pUVar4,(__this->fields).HOKHHIBHFBM,(MethodInfo *)0x0);
        cVar1 = (__this->fields).HOKHHIBHFBM;
      }
      if (cVar1 != '\0') {
        pNVar5 = (__this->fields).PGEOMGONABB;
        if (pNVar5 == (Nekki_SF2_GUI_Scripts_LoadingCircle_o *)0x0) goto LAB_034246dc;
        bVar2 = Nekki_SF2_GUI_Scripts_LoadingCircle__get_IsPlaying(pNVar5,(MethodInfo *)0x0);
        if (!bVar2) {
          pNVar5 = (__this->fields).PGEOMGONABB;
          if (pNVar5 == (Nekki_SF2_GUI_Scripts_LoadingCircle_o *)0x0) goto LAB_034246dc;
          Nekki_SF2_GUI_Scripts_LoadingCircle__Play(pNVar5,(MethodInfo *)0x0);
        }
      }
      if ((__this->fields).HOKHHIBHFBM != false) {
        return;
      }
      pNVar5 = (__this->fields).PGEOMGONABB;
      if (pNVar5 != (Nekki_SF2_GUI_Scripts_LoadingCircle_o *)0x0) {
        bVar2 = Nekki_SF2_GUI_Scripts_LoadingCircle__get_IsPlaying(pNVar5,(MethodInfo *)0x0);
        if (!bVar2) {
          return;
        }
        pNVar5 = (__this->fields).PGEOMGONABB;
        if (pNVar5 != (Nekki_SF2_GUI_Scripts_LoadingCircle_o *)0x0) {
          Nekki_SF2_GUI_Scripts_LoadingCircle__Stop(pNVar5,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
LAB_034246dc:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void GCGMACNOCJA(bool CJNHFNHJHPE)  [RVA 0x33246E0]
// Nekki.SF2.GUI.Dialogs.Raids.RaidLeaderboardView$$GCGMACNOCJA @ RVA 0x33246E0

void Nekki_SF2_GUI_Dialogs_Raids_RaidLeaderboardView__GCGMACNOCJA
               (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaderboardView_o *__this,bool CJNHFNHJHPE,
               MethodInfo *method)

{
  (__this->fields)._BOGAKJOFOEK_k__BackingField = CJNHFNHJHPE;
  return;
}


// ===== public void .ctor()  [RVA 0x33246EC]
// Nekki.SF2.GUI.Dialogs.Raids.RaidLeaderboardView$$.ctor @ RVA 0x33246EC

void Nekki_SF2_GUI_Dialogs_Raids_RaidLeaderboardView___ctor
               (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaderboardView_o *__this,MethodInfo *method)

{
  if ((DAT_04567865 & 1) == 0) {
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04567865 = 1;
  }
  (__this->fields).BCGILLKGJMC = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04();
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public void SetVisibleLoadingMessage(bool CJNHFNHJHPE)  [RVA 0x3324744]
// Nekki.SF2.GUI.Dialogs.Raids.RaidLeaderboardView$$SetVisibleLoadingMessage @ RVA 0x3324744

void Nekki_SF2_GUI_Dialogs_Raids_RaidLeaderboardView__SetVisibleLoadingMessage
               (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaderboardView_o *__this,bool CJNHFNHJHPE,
               MethodInfo *method)

{
  (__this->fields).HOKHHIBHFBM = CJNHFNHJHPE;
  return;
}


// ===== public bool get_IsDestroyed()  [RVA 0x3324750]
// Nekki.SF2.GUI.Dialogs.Raids.RaidLeaderboardView$$get_IsDestroyed @ RVA 0x3324750

bool Nekki_SF2_GUI_Dialogs_Raids_RaidLeaderboardView__get_IsDestroyed
               (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaderboardView_o *__this,MethodInfo *method)

{
  return (__this->fields)._BOGAKJOFOEK_k__BackingField;
}


// ===== public void ScrollToIndex(int DPJIDNBJIBG, float LFJGFLNMBMC)  [RVA 0x3324758]
// Nekki.SF2.GUI.Dialogs.Raids.RaidLeaderboardView$$ScrollToIndex @ RVA 0x3324758

void Nekki_SF2_GUI_Dialogs_Raids_RaidLeaderboardView__ScrollToIndex
               (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaderboardView_o *__this,int32_t DPJIDNBJIBG,
               float LFJGFLNMBMC,MethodInfo *method)

{
  Nekki_SF2_GUI_SimpleScroll_o *__this_00;
  
  __this_00 = (__this->fields).PDHMLFAMNCO;
  if (__this_00 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
    Nekki_SF2_GUI_SimpleScroll__ScrollToItem(__this_00,DPJIDNBJIBG,LFJGFLNMBMC,8,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void OnDestroy()  [RVA 0x3324778]
// Nekki.SF2.GUI.Dialogs.Raids.RaidLeaderboardView$$OnDestroy @ RVA 0x3324778

void Nekki_SF2_GUI_Dialogs_Raids_RaidLeaderboardView__OnDestroy
               (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaderboardView_o *__this,MethodInfo *method)

{
  HCKCBFOGMMJ_o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_04567866 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_JICOLGELJGE<LFELBGMCDHD>_OHDOIFLJMMF__);
    DAT_04567866 = 1;
    method = extraout_x1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
  }
  __this_00 = HJPEKDOPBHN__OGBJOOPBEFG((MethodInfo *)0x0);
  if (__this_00 != (HCKCBFOGMMJ_o *)0x0) {
    JICOLGELJGE<object>__OHDOIFLJMMF
              ((JICOLGELJGE_T__o *)__this_00,(Il2CppObject *)__this,
               Method_JICOLGELJGE<LFELBGMCDHD>_OHDOIFLJMMF__);
    (__this->fields)._BOGAKJOFOEK_k__BackingField = true;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool get_IsInited()  [RVA 0x3324800]
// Nekki.SF2.GUI.Dialogs.Raids.RaidLeaderboardView$$get_IsInited @ RVA 0x3324800

bool Nekki_SF2_GUI_Dialogs_Raids_RaidLeaderboardView__get_IsInited
               (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaderboardView_o *__this,MethodInfo *method)

{
  return (__this->fields)._BLOJFJIFDAE_k__BackingField;
}


// ===== public void Init(LeaderboardSeasonViewController FLMDMALCFNA, LabelAlias BIMIBKKLPLB, LoadingCircle JMBOIPJLIDO, SimpleScroll MGFBPKIBNJI)  [RVA 0x3324808]
// Nekki.SF2.GUI.Dialogs.Raids.RaidLeaderboardView$$Init @ RVA 0x3324808

void Nekki_SF2_GUI_Dialogs_Raids_RaidLeaderboardView__Init
               (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaderboardView_o *__this,
               Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController_o *FLMDMALCFNA,
               Nekki_SF2_GUI_LabelAlias_o *BIMIBKKLPLB,
               Nekki_SF2_GUI_Scripts_LoadingCircle_o *JMBOIPJLIDO,
               Nekki_SF2_GUI_SimpleScroll_o *MGFBPKIBNJI,MethodInfo *method)

{
  Nekki_SF2_GUI_Scripts_LoadingCircle_o **ppNVar1;
  Nekki_SF2_GUI_LabelAlias_o **ppNVar2;
  Nekki_SF2_GUI_SimpleScroll_o **ppNVar3;
  
  if ((__this->fields)._BLOJFJIFDAE_k__BackingField != false) {
    return;
  }
  (__this->fields)._BLOJFJIFDAE_k__BackingField = true;
  (__this->fields).OMMHPJLPJGL = FLMDMALCFNA;
  thunk_FUN_01c20e04();
  ppNVar1 = &(__this->fields).PGEOMGONABB;
  *ppNVar1 = JMBOIPJLIDO;
  thunk_FUN_01c20e04(ppNVar1,JMBOIPJLIDO);
  ppNVar2 = &(__this->fields).JICANOFGOJF;
  *ppNVar2 = BIMIBKKLPLB;
  thunk_FUN_01c20e04(ppNVar2,BIMIBKKLPLB);
  ppNVar3 = &(__this->fields).PDHMLFAMNCO;
  *ppNVar3 = MGFBPKIBNJI;
  thunk_FUN_01c20e04(ppNVar3,MGFBPKIBNJI);
  return;
}

