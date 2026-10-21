// Nekki.SF2.GUI.Dialogs.Raids.Clans.FindClanView$$Init @ RVA 0x342B03C

void Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanView__Init
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanView_o *__this,MethodInfo *method)

{
  System_Action_object__o *IELDNEAAPBE;
  MethodInfo *in_x2;
  LabelButton_o *__this_00;
  
  if ((DAT_04568135 & 1) == 0) {
    FUN_01bab630(&System_Action<object>_TypeInfo);
    FUN_01bab630(&Method_TabView_KGHLJNMCILN__);
    DAT_04568135 = 1;
  }
  Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanView__HCOPLDHOCBA
            (__this,(__this->fields)._findClanWidgetPrefab,in_x2);
  __this_00 = (__this->fields)._closeButton;
  IELDNEAAPBE = (System_Action_object__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
  System_Action<object>___ctor();
  if (__this_00 != (LabelButton_o *)0x0) {
    SFButton__AddEventListener((SFButton_o *)__this_00,2,IELDNEAAPBE,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

