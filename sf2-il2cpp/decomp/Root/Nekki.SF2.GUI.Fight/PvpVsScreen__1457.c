// TypeDefIndex 1457
// Namespace: Nekki.SF2.GUI.Fight
// public class PvpVsScreen : VsScreen
// Fields:
//   private PvpVsScreenBossAbilityHint leftBossAbilityDescription; // 0xD8
//   private PvpVsScreenBossAbilityHint rightBossAbilityDescription; // 0xE0
//   private ResolutionImage botIcon; // 0xE8
//   private PJKHAJKEHEL BAKIMFMMFMP; // 0xF0
//   private PJKHAJKEHEL JALKELIHLPC; // 0xF8

// ===== protected override void FMONKFODIAA()  [RVA 0x318F1B0]
// Nekki.SF2.GUI.Fight.PvpVsScreen$$FMONKFODIAA @ RVA 0x318F1B0

void Nekki_SF2_GUI_Fight_PvpVsScreen__FMONKFODIAA
               (Nekki_SF2_GUI_Fight_PvpVsScreen_o *__this,MethodInfo *method)

{
  NLIDHEAMLMC_o *pNVar1;
  Nekki_SF2_GUI_ResolutionImage_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_RectTransform_o *pUVar2;
  PJKHAJKEHEL_o *pPVar3;
  Nekki_SF2_GUI_LabelAlias_o *pNVar4;
  Nekki_SF2_GUI_Fight_PvpVsScreenBossAbilityHint_o *pNVar5;
  
  if ((DAT_04566a35 & 1) == 0) {
    FUN_01bab630(&BGFNOPDHEOM_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<RectTransform>__);
    FUN_01bab630(&UnityEngine_UI_LayoutRebuilder_TypeInfo);
    DAT_04566a35 = 1;
  }
  Nekki_SF2_GUI_Fight_VsScreen__FMONKFODIAA
            ((Nekki_SF2_GUI_Fight_VsScreen_o *)__this,(MethodInfo *)0x0);
  pNVar5 = (__this->fields).leftBossAbilityDescription;
  pPVar3 = (__this->fields).BAKIMFMMFMP;
  pNVar4 = (__this->fields).super.nameLeft;
  if ((BGFNOPDHEOM_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pNVar1 = BGFNOPDHEOM__PFOBJKIPLCK(0,(MethodInfo *)0x0);
  if (pNVar5 != (Nekki_SF2_GUI_Fight_PvpVsScreenBossAbilityHint_o *)0x0) {
    Nekki_SF2_GUI_Fight_PvpVsScreenBossAbilityHint__Init
              (pNVar5,pPVar3,pNVar4,pNVar1,(MethodInfo *)0x0);
    pNVar5 = (__this->fields).rightBossAbilityDescription;
    pPVar3 = (__this->fields).JALKELIHLPC;
    pNVar4 = (__this->fields).super.nameRight;
    pNVar1 = BGFNOPDHEOM__PFOBJKIPLCK(1,(MethodInfo *)0x0);
    if (pNVar5 != (Nekki_SF2_GUI_Fight_PvpVsScreenBossAbilityHint_o *)0x0) {
      Nekki_SF2_GUI_Fight_PvpVsScreenBossAbilityHint__Init
                (pNVar5,pPVar3,pNVar4,pNVar1,(MethodInfo *)0x0);
      pPVar3 = (__this->fields).JALKELIHLPC;
      if (pPVar3 != (PJKHAJKEHEL_o *)0x0) {
        if ((pPVar3->fields).BLJLIBHLGLI != false) {
          __this_00 = (__this->fields).botIcon;
          if ((__this_00 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) ||
             (__this_01 = UnityEngine_Component__get_gameObject
                                    ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
             __this_01 == (UnityEngine_GameObject_o *)0x0)) goto LAB_0328f31c;
          UnityEngine_GameObject__SetActive(__this_01,true,(MethodInfo *)0x0);
        }
        pNVar5 = (__this->fields).leftBossAbilityDescription;
        if (pNVar5 != (Nekki_SF2_GUI_Fight_PvpVsScreenBossAbilityHint_o *)0x0) {
          pUVar2 = (UnityEngine_RectTransform_o *)
                   UnityEngine_Component__GetComponent<object>
                             ((UnityEngine_Component_o *)pNVar5,
                              Method_UnityEngine_Component_GetComponent<RectTransform>__);
          if ((UnityEngine_UI_LayoutRebuilder_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564(UnityEngine_UI_LayoutRebuilder_TypeInfo);
          }
          UnityEngine_UI_LayoutRebuilder__ForceRebuildLayoutImmediate(pUVar2,(MethodInfo *)0x0);
          pNVar5 = (__this->fields).rightBossAbilityDescription;
          if (pNVar5 != (Nekki_SF2_GUI_Fight_PvpVsScreenBossAbilityHint_o *)0x0) {
            pUVar2 = (UnityEngine_RectTransform_o *)
                     UnityEngine_Component__GetComponent<object>
                               ((UnityEngine_Component_o *)pNVar5,
                                Method_UnityEngine_Component_GetComponent<RectTransform>__);
            UnityEngine_UI_LayoutRebuilder__ForceRebuildLayoutImmediate(pUVar2,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
LAB_0328f31c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x318F320]
// Nekki.SF2.GUI.Fight.PvpVsScreen$$.ctor @ RVA 0x318F320

void Nekki_SF2_GUI_Fight_PvpVsScreen___ctor
               (Nekki_SF2_GUI_Fight_PvpVsScreen_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Fight_VsScreen___ctor((Nekki_SF2_GUI_Fight_VsScreen_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public override void Init(PJKHAJKEHEL BAKIMFMMFMP, PJKHAJKEHEL JALKELIHLPC, bool HIOHGCIKLNF = False)  [RVA 0x318F328]
// Nekki.SF2.GUI.Fight.PvpVsScreen$$Init @ RVA 0x318F328

void Nekki_SF2_GUI_Fight_PvpVsScreen__Init
               (Nekki_SF2_GUI_Fight_PvpVsScreen_o *__this,PJKHAJKEHEL_o *BAKIMFMMFMP,
               PJKHAJKEHEL_o *JALKELIHLPC,bool HIOHGCIKLNF,MethodInfo *method)

{
  PJKHAJKEHEL_o **ppPVar1;
  
  Nekki_SF2_GUI_Fight_VsScreen__Init
            ((Nekki_SF2_GUI_Fight_VsScreen_o *)__this,BAKIMFMMFMP,JALKELIHLPC,HIOHGCIKLNF,
             (MethodInfo *)0x0);
  ppPVar1 = &(__this->fields).BAKIMFMMFMP;
  *ppPVar1 = BAKIMFMMFMP;
  thunk_FUN_01c20e04(ppPVar1,BAKIMFMMFMP);
  ppPVar1 = &(__this->fields).JALKELIHLPC;
  *ppPVar1 = JALKELIHLPC;
  thunk_FUN_01c20e04(ppPVar1,JALKELIHLPC);
  return;
}

