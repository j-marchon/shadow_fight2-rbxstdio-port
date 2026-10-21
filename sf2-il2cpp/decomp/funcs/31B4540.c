// Nekki.SF2.GUI.Dialogs.Raids.Clans.FindClanDialog$$CFPJAFNAAME @ RVA 0x31B4540

void Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanDialog__CFPJAFNAAME
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanDialog_o *__this,MethodInfo *method)

{
  UnityEngine_Events_UnityAction_o *call;
  System_Action_object__o *IELDNEAAPBE;
  MethodInfo *extraout_x1;
  LabelButton_o *pLVar1;
  UnityEngine_Events_UnityEvent_o *__this_00;
  
                    /* try { // try from 032b4554 to 033b4557 has its CatchHandler @ 032b4578 */
                    /* try { // try from 032b4558 to 033b457f has its CatchHandler @ 032b4458 */
  if ((DAT_04566b9f & 1) == 0) {
    FUN_01bab630(&System_Action<object>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanDialog_PGPALEGOKKA__);
                    /* catch() { ... } // from try @ 032b4554 with catch @ 032b4578 */
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
                    /* try { // try from 032b4580 to 033b4587 has its CatchHandler @ 032b459c */
    DAT_04566b9f = 1;
    method = extraout_x1;
  }
                    /* try { // try from 032b4588 to 033b4593 has its CatchHandler @ 032b4458 */
  pLVar1 = (__this->fields)._createButton;
  if (pLVar1 != (LabelButton_o *)0x0) {
                    /* try { // try from 032b4594 to 033b459b has its CatchHandler @ 032b459c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 032b4580 with catch @ 032b459c
                       catch(type#2 @ 00000000) { ... } // from try @ 032b4594 with catch @ 032b459c
                        */
    __this_00 = (UnityEngine_Events_UnityEvent_o *)(pLVar1->fields).super.super.super.m_OnClick;
    call = (UnityEngine_Events_UnityAction_o *)
           thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo,method);
    UnityEngine_Events_UnityAction___ctor();
    if (__this_00 != (UnityEngine_Events_UnityEvent_o *)0x0) {
      UnityEngine_Events_UnityEvent__AddListener(__this_00,call,(MethodInfo *)0x0);
      pLVar1 = (__this->fields)._cancelButton;
      IELDNEAAPBE = (System_Action_object__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
      System_Action<object>___ctor();
      if (pLVar1 != (LabelButton_o *)0x0) {
        SFButton__AddEventListener((SFButton_o *)pLVar1,2,IELDNEAAPBE,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

