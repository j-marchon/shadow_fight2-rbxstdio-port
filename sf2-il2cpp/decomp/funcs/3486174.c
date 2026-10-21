// Nekki.SF2.GUI.Map.RaidQuestsButton$$Awake @ RVA 0x3486174

void Nekki_SF2_GUI_Map_RaidQuestsButton__Awake
               (Nekki_SF2_GUI_Map_RaidQuestsButton_o *__this,MethodInfo *method)

{
  bool bVar1;
  KKLJIDJBFEI_o *pKVar2;
  UnityEngine_UI_Button_ButtonClickedEvent_o *__this_00;
  UnityEngine_Events_UnityAction_o *call;
  GALHNMPIEHA_o *pGVar3;
  System_Action_o *pSVar4;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  UnityEngine_Events_UnityEvent_o *__this_01;
  
  if ((DAT_045683ae & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
                    /* try { // try from 035861a8 to 036861cf has its CatchHandler @ 035864dc */
    FUN_01bab630(&UnityEngine_Application_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_RaidQuestsButton_CJPKPFBKMNP__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_RaidQuestsButton_GBAMAIPLADF__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_RaidQuestsButton_LBHEKMPNMGK__);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    DAT_045683ae = 1;
    method = extraout_x1;
  }
  if ((UnityEngine_Application_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Application_TypeInfo,method);
  }
                    /* try { // try from 03586204 to 0368622f has its CatchHandler @ 035864d8 */
  bVar1 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
  if ((bVar1) && ((__this->fields).JOBALMMDPAF == false)) {
    (__this->fields).JOBALMMDPAF = true;
    Nekki_SF2_GUI_ResolutionButton__Awake
              ((Nekki_SF2_GUI_ResolutionButton_o *)__this,(MethodInfo *)0x0);
                    /* try { // try from 03586240 to 03686247 has its CatchHandler @ 035864b8 */
    pKVar2 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
    if (pKVar2 != (KKLJIDJBFEI_o *)0x0) {
      method_01 = method_00;
      if ((pKVar2->fields).super._MGGBEPKMPCF_k__BackingField != false) {
                    /* try { // try from 03586250 to 03686257 has its CatchHandler @ 035864c0 */
        Nekki_SF2_GUI_Map_RaidQuestsButton__EFJFDCNMFJC(__this,method_00);
        method_01 = extraout_x1_00;
      }
      Nekki_SF2_GUI_Map_RaidQuestsButton__DLDJLKECDAN(__this,method_01);
      Nekki_SF2_GUI_Map_RaidQuestsButton__ICECOGOGGJE(__this,method_02);
                    /* try { // try from 03586268 to 0368626f has its CatchHandler @ 035864c4 */
      __this_00 = (__this->fields).super.super.super.m_OnClick;
      if (__this_00 != (UnityEngine_UI_Button_ButtonClickedEvent_o *)0x0) {
                    /* try { // try from 03586274 to 0368627b has its CatchHandler @ 035864bc */
        UnityEngine_Events_UnityEventBase__RemoveAllListeners
                  ((UnityEngine_Events_UnityEventBase_o *)__this_00,(MethodInfo *)0x0);
        __this_01 = (UnityEngine_Events_UnityEvent_o *)(__this->fields).super.super.super.m_OnClick;
                    /* try { // try from 03586284 to 0368628b has its CatchHandler @ 035864cc */
        call = (UnityEngine_Events_UnityAction_o *)
               thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
                    /* try { // try from 0358628c to 0368629f has its CatchHandler @ 035864d0 */
                    /* try { // try from 035862a4 to 036862af has its CatchHandler @ 035864d4 */
        UnityEngine_Events_UnityAction___ctor();
        if (__this_01 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                    /* try { // try from 035862b0 to 03686317 has its CatchHandler @ 035864e0 */
          UnityEngine_Events_UnityEvent__AddListener(__this_01,call,(MethodInfo *)0x0);
          Nekki_SF2_GUI_Map_RaidQuestsButton__AIFHOHIMLFM(__this,method_03);
          if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          pGVar3 = HJPEKDOPBHN__CCIPAEHGPFC((MethodInfo *)0x0);
          pSVar4 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
          System_Action___ctor();
                    /* try { // try from 03586318 to 03686497 has its CatchHandler @ 03585cbc */
          if (pGVar3 != (GALHNMPIEHA_o *)0x0) {
            GALHNMPIEHA__COKCPKHDHDN(pGVar3,pSVar4,(MethodInfo *)0x0);
            pGVar3 = HJPEKDOPBHN__CCIPAEHGPFC((MethodInfo *)0x0);
            pSVar4 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
            System_Action___ctor();
            if (pGVar3 != (GALHNMPIEHA_o *)0x0) {
              GALHNMPIEHA__DGOGCOKGHKF(pGVar3,pSVar4,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

