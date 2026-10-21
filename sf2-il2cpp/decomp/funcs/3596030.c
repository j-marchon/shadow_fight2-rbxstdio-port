// Nekki.SF2.GUI.Dialogs.Raids.Clans.LeaveClanDialog$$Init @ RVA 0x3596030

void Nekki_SF2_GUI_Dialogs_Raids_Clans_LeaveClanDialog__Init
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_LeaveClanDialog_o *__this,
               Il2CppObject *IMMNELPBGIF,MethodInfo *method)

{
  LabelButton_o *pLVar1;
  UnityEngine_Events_UnityAction_o *pUVar2;
  System_Action_object__o *IELDNEAAPBE;
  UnityEngine_Events_UnityEvent_o *pUVar3;
  
  if ((DAT_04568da1 & 1) == 0) {
    FUN_01bab630(&System_Action<object>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_LeaveClanDialog_MHCAHALNKHG__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_LeaveClanDialog_PGPALEGOKKA__);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    FUN_01bab630(&StringLiteral_9679);
    FUN_01bab630(&StringLiteral_3640);
    FUN_01bab630(&StringLiteral_4853);
    FUN_01bab630(&StringLiteral_17301);
    FUN_01bab630(&StringLiteral_1);
    DAT_04568da1 = 1;
  }
  Nekki_SF2_GUI_Dialogs_Raids_RaidBaseDialog__GIENGNEGHPJ
            ((Nekki_SF2_GUI_Dialogs_Raids_RaidBaseDialog_o *)__this,StringLiteral_1,
             StringLiteral_9679,StringLiteral_3640,0,(MethodInfo *)0x0);
  pLVar1 = (__this->fields).super.super._btnOK;
  if (pLVar1 != (LabelButton_o *)0x0) {
    LabelButton__set_Alias(pLVar1,StringLiteral_4853,(MethodInfo *)0x0);
    pLVar1 = (__this->fields).super.super._btnCancel;
    if (pLVar1 != (LabelButton_o *)0x0) {
      LabelButton__set_Alias(pLVar1,StringLiteral_17301,(MethodInfo *)0x0);
      pLVar1 = (__this->fields)._createButton;
      if (pLVar1 != (LabelButton_o *)0x0) {
        pUVar3 = (UnityEngine_Events_UnityEvent_o *)(pLVar1->fields).super.super.super.m_OnClick;
        pUVar2 = (UnityEngine_Events_UnityAction_o *)
                 thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
        UnityEngine_Events_UnityAction___ctor();
        if (pUVar3 != (UnityEngine_Events_UnityEvent_o *)0x0) {
          UnityEngine_Events_UnityEvent__AddListener(pUVar3,pUVar2,(MethodInfo *)0x0);
          pLVar1 = (__this->fields)._searchButton;
          if (pLVar1 != (LabelButton_o *)0x0) {
            pUVar3 = (UnityEngine_Events_UnityEvent_o *)(pLVar1->fields).super.super.super.m_OnClick
            ;
            pUVar2 = (UnityEngine_Events_UnityAction_o *)
                     thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
            UnityEngine_Events_UnityAction___ctor();
            if (pUVar3 != (UnityEngine_Events_UnityEvent_o *)0x0) {
              UnityEngine_Events_UnityEvent__AddListener(pUVar3,pUVar2,(MethodInfo *)0x0);
              pLVar1 = (__this->fields)._cancelButton;
              IELDNEAAPBE = (System_Action_object__o *)
                            thunk_FUN_01bda818(System_Action<object>_TypeInfo);
                    /* try { // try from 036961e4 to 0379642b has its CatchHandler @ 036961e4
                       catch() { ... } // from try @ 036961e4 with catch @ 036961e4
                       catch() { ... } // from try @ 03696534 with catch @ 036961e4
                       catch() { ... } // from try @ 03696590 with catch @ 036961e4
                       catch() { ... } // from try @ 036965c0 with catch @ 036961e4
                       catch() { ... } // from try @ 03696600 with catch @ 036961e4 */
              System_Action<object>___ctor();
              if (pLVar1 != (LabelButton_o *)0x0) {
                SFButton__AddEventListener((SFButton_o *)pLVar1,2,IELDNEAAPBE,(MethodInfo *)0x0);
                return;
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

