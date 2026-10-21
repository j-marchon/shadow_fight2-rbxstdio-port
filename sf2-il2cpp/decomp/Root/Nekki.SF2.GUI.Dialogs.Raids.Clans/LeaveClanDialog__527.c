// TypeDefIndex 527
// Namespace: Nekki.SF2.GUI.Dialogs.Raids.Clans
// public class LeaveClanDialog : RaidBaseDialog
// Fields:
//   private LabelButton _createButton; // 0xC8
//   private LabelButton _searchButton; // 0xD0
//   private LabelButton _cancelButton; // 0xD8

// ===== private void PGPALEGOKKA()  [RVA 0x3595FC0]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.LeaveClanDialog$$PGPALEGOKKA @ RVA 0x3595FC0

void Nekki_SF2_GUI_Dialogs_Raids_Clans_LeaveClanDialog__PGPALEGOKKA
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_LeaveClanDialog_o *__this,MethodInfo *method)

{
  JJPNLEPEAFM__HOILBJHCLJG((MethodInfo *)0x0);
                    /* WARNING: Could not recover jumptable at 0x03695fe8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(__this->klass->vtable)._13_OnClose.methodPtr)
            (__this,0,(__this->klass->vtable)._13_OnClose.method);
  return;
}


// ===== public void .ctor()  [RVA 0x3595FEC]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.LeaveClanDialog$$.ctor @ RVA 0x3595FEC

void Nekki_SF2_GUI_Dialogs_Raids_Clans_LeaveClanDialog___ctor
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_LeaveClanDialog_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_Raids_RaidBaseDialog___ctor
            ((Nekki_SF2_GUI_Dialogs_Raids_RaidBaseDialog_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private void MHCAHALNKHG()  [RVA 0x3595FF4]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.LeaveClanDialog$$MHCAHALNKHG @ RVA 0x3595FF4

void Nekki_SF2_GUI_Dialogs_Raids_Clans_LeaveClanDialog__MHCAHALNKHG
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_LeaveClanDialog_o *__this,MethodInfo *method)

{
  JJPNLEPEAFM__DDOCEEFBIGC((Il2CppObject *)0x0,(MethodInfo *)0x0);
                    /* WARNING: Could not recover jumptable at 0x03696020. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(__this->klass->vtable)._13_OnClose.methodPtr)
            (__this,0,(__this->klass->vtable)._13_OnClose.method);
  return;
}


// ===== protected override void LCGFJKFJKJK(BaseDialog.OFBBBIDKKOD DNBBBGEENMM)  [RVA 0x3596024]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.LeaveClanDialog$$LCGFJKFJKJK @ RVA 0x3596024

void Nekki_SF2_GUI_Dialogs_Raids_Clans_LeaveClanDialog__LCGFJKFJKJK
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_LeaveClanDialog_o *__this,int32_t DNBBBGEENMM,
               MethodInfo *method)

{
  return;
}


// ===== protected override void GLANJNFACKI()  [RVA 0x3596028]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.LeaveClanDialog$$GLANJNFACKI @ RVA 0x3596028

void Nekki_SF2_GUI_Dialogs_Raids_Clans_LeaveClanDialog__GLANJNFACKI
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_LeaveClanDialog_o *__this,MethodInfo *method)

{
  return;
}


// ===== protected override void IGDDKJJMDLP()  [RVA 0x359602C]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.LeaveClanDialog$$IGDDKJJMDLP @ RVA 0x359602C

void Nekki_SF2_GUI_Dialogs_Raids_Clans_LeaveClanDialog__IGDDKJJMDLP
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_LeaveClanDialog_o *__this,MethodInfo *method)

{
  return;
}


// ===== public override void Init(object IMMNELPBGIF)  [RVA 0x3596030]
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
    FUN_01bab630(&StringLiteral_9679/*"OK"*/);
    FUN_01bab630(&StringLiteral_3640/*"CANCEL"*/);
    FUN_01bab630(&StringLiteral_4853/*"CreateBtn"*/);
    FUN_01bab630(&StringLiteral_17301/*"compareCloseBtn"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04568da1 = 1;
  }
  Nekki_SF2_GUI_Dialogs_Raids_RaidBaseDialog__GIENGNEGHPJ
            ((Nekki_SF2_GUI_Dialogs_Raids_RaidBaseDialog_o *)__this,StringLiteral_1/*""*/,
             StringLiteral_9679/*"OK"*/,StringLiteral_3640/*"CANCEL"*/,0,(MethodInfo *)0x0);
  pLVar1 = (__this->fields).super.super._btnOK;
  if (pLVar1 != (LabelButton_o *)0x0) {
    LabelButton__set_Alias(pLVar1,StringLiteral_4853/*"CreateBtn"*/,(MethodInfo *)0x0);
    pLVar1 = (__this->fields).super.super._btnCancel;
    if (pLVar1 != (LabelButton_o *)0x0) {
      LabelButton__set_Alias(pLVar1,StringLiteral_17301/*"compareCloseBtn"*/,(MethodInfo *)0x0);
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

