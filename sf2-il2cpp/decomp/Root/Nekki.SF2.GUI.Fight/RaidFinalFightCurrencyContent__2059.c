// TypeDefIndex 2059
// Namespace: Nekki.SF2.GUI.Fight
// public class RaidFinalFightCurrencyContent : RaidEndFightBaseContent
// Fields:
//   private RewardPanel _RewardPanel; // 0x28
//   private LabelButton _buttonOk; // 0x30

// ===== private void OLMEBDADFOO()  [RVA 0x32B79A0]
// Nekki.SF2.GUI.Fight.RaidFinalFightCurrencyContent$$OLMEBDADFOO @ RVA 0x32B79A0

void Nekki_SF2_GUI_Fight_RaidFinalFightCurrencyContent__OLMEBDADFOO
               (Nekki_SF2_GUI_Fight_RaidFinalFightCurrencyContent_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Fight_RewardPanel_o *__this_00;
  UnityEngine_Events_UnityEvent_o *__this_01;
  
  __this_00 = (__this->fields)._RewardPanel;
  if (__this_00 != (Nekki_SF2_GUI_Fight_RewardPanel_o *)0x0) {
    bVar1 = Nekki_SF2_GUI_Fight_RewardPanel__ShowNextGroupIfNeed(__this_00,(MethodInfo *)0x0);
    if (bVar1) {
      return;
    }
    __this_01 = (__this->fields).super.NHNIOGOEAJB;
    if (__this_01 != (UnityEngine_Events_UnityEvent_o *)0x0) {
      UnityEngine_Events_UnityEvent__Invoke(__this_01,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x32B79DC]
// Nekki.SF2.GUI.Fight.RaidFinalFightCurrencyContent$$.ctor @ RVA 0x32B79DC

void Nekki_SF2_GUI_Fight_RaidFinalFightCurrencyContent___ctor
               (Nekki_SF2_GUI_Fight_RaidFinalFightCurrencyContent_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Fight_RaidEndFightBaseContent___ctor
            ((Nekki_SF2_GUI_Fight_RaidEndFightBaseContent_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public void Init(ICBMOMGINFH COPNBALDNLF)  [RVA 0x32B79E4]
// Nekki.SF2.GUI.Fight.RaidFinalFightCurrencyContent$$Init @ RVA 0x32B79E4

void Nekki_SF2_GUI_Fight_RaidFinalFightCurrencyContent__Init
               (Nekki_SF2_GUI_Fight_RaidFinalFightCurrencyContent_o *__this,
               ICBMOMGINFH_o *COPNBALDNLF,MethodInfo *method)

{
  UnityEngine_Events_UnityAction_o *call;
  ADJEBFOPFFF_o *__this_00;
  Nekki_SF2_GUI_Fight_RewardPanel_o *__this_01;
  LabelButton_o *pLVar1;
  UnityEngine_Events_UnityEvent_o *__this_02;
  
  if ((DAT_04567462 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Fight_RaidFinalFightCurrencyContent_OLMEBDADFOO__);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    DAT_04567462 = 1;
  }
  pLVar1 = (__this->fields)._buttonOk;
  if (pLVar1 != (LabelButton_o *)0x0) {
    __this_02 = (UnityEngine_Events_UnityEvent_o *)(pLVar1->fields).super.super.super.m_OnClick;
    call = (UnityEngine_Events_UnityAction_o *)
           thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
    UnityEngine_Events_UnityAction___ctor();
    if (__this_02 != (UnityEngine_Events_UnityEvent_o *)0x0) {
      UnityEngine_Events_UnityEvent__AddListener(__this_02,call,(MethodInfo *)0x0);
      if ((COPNBALDNLF == (ICBMOMGINFH_o *)0x0) ||
         ((COPNBALDNLF->fields).MJIIHOLHNCK == (BECIPDJBAOG_o *)0x0)) {
        return;
      }
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_00 = HJPEKDOPBHN__EKIJCGJLILF((MethodInfo *)0x0);
      if (__this_00 != (ADJEBFOPFFF_o *)0x0) {
        ADJEBFOPFFF__AEADCLCKCEL
                  (__this_00,(COPNBALDNLF->fields).MJIIHOLHNCK,false,(MethodInfo *)0x0);
        __this_01 = (__this->fields)._RewardPanel;
        if (__this_01 != (Nekki_SF2_GUI_Fight_RewardPanel_o *)0x0) {
          Nekki_SF2_GUI_Fight_RewardPanel__Init
                    (__this_01,(COPNBALDNLF->fields).MJIIHOLHNCK,false,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

