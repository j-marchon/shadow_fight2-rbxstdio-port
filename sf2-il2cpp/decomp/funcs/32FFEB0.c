// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanLogoAttributeCell$$Init @ RVA 0x32FFEB0

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoAttributeCell__Init
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoAttributeCell_o *__this,
               IILNJJJFGLL_o *IMMNELPBGIF,Nekki_SF2_GUI_SimpleScroll_o *MGFBPKIBNJI,
               MethodInfo *method)

{
  UnityEngine_UI_Button_ButtonClickedEvent_o *__this_00;
  UnityEngine_Events_UnityAction_o *call;
  UnityEngine_Events_UnityEvent_o *__this_01;
  
  if ((DAT_04567710 & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoAttributeCell_OnClick__);
                    /* try { // try from 033ffedc to 034ffef7 has its CatchHandler @ 033fff50 */
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    DAT_04567710 = 1;
  }
  (__this->fields).PDHMLFAMNCO = MGFBPKIBNJI;
  thunk_FUN_01c20e04(&(__this->fields).PDHMLFAMNCO,MGFBPKIBNJI);
  __this_00 = (__this->fields).super.super.m_OnClick;
  if (__this_00 != (UnityEngine_UI_Button_ButtonClickedEvent_o *)0x0) {
                    /* try { // try from 033fff0c to 034fff1b has its CatchHandler @ 033fff54 */
    UnityEngine_Events_UnityEventBase__RemoveAllListeners
              ((UnityEngine_Events_UnityEventBase_o *)__this_00,(MethodInfo *)0x0);
    __this_01 = (UnityEngine_Events_UnityEvent_o *)(__this->fields).super.super.m_OnClick;
    call = (UnityEngine_Events_UnityAction_o *)
           thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
                    /* try { // try from 033fff34 to 034fff3b has its CatchHandler @ 03400020 */
    UnityEngine_Events_UnityAction___ctor();
    if (__this_01 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                    /* try { // try from 033fff44 to 034fff47 has its CatchHandler @ 033fff70 */
                    /* try { // try from 033fff48 to 034fff93 has its CatchHandler @ 033ffb64 */
                    /* catch() { ... } // from try @ 033ffe54 with catch @ 033fff4c */
                    /* catch() { ... } // from try @ 033ffedc with catch @ 033fff50 */
                    /* catch() { ... } // from try @ 033fff0c with catch @ 033fff54 */
                    /* catch() { ... } // from try @ 033ffe38 with catch @ 033fff58 */
                    /* catch() { ... } // from try @ 033ffe88 with catch @ 033fff5c */
      UnityEngine_Events_UnityEvent__AddListener(__this_01,call,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

