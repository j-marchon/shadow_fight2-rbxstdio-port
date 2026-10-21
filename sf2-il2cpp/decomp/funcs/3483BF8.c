// Nekki.SF2.GUI.Dialogs.SettingsDialog$$JAAPCLHJNJC @ RVA 0x3483BF8

void Nekki_SF2_GUI_Dialogs_SettingsDialog__JAAPCLHJNJC
               (Nekki_SF2_GUI_Dialogs_SettingsDialog_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_BaseDialog_o *pNVar1;
  System_Action_T__o *pSVar2;
  
  if ((DAT_04568394 & 1) == 0) {
    FUN_01bab630(&System_Action<object>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_SFMonoBehaviour<object>_AddEventListener__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_SettingsDialog_DAPCBANDBDC__);
    DAT_04568394 = 1;
  }
  (__this->fields).HCKFHJLLLBN = false;
  pNVar1 = JJPNLEPEAFM__GKCFJGLKNII((MethodInfo *)0x0);
  (__this->fields).CPLHJKBAHOF = pNVar1;
  thunk_FUN_01c20e04(&(__this->fields).CPLHJKBAHOF);
  pNVar1 = (__this->fields).CPLHJKBAHOF;
  pSVar2 = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
  System_Action<object>___ctor();
  if (pNVar1 != (Nekki_SF2_GUI_Dialogs_BaseDialog_o *)0x0) {
    Nekki_SF2_GUI_SFMonoBehaviour<object>__AddEventListener
              ((Nekki_SF2_GUI_SFMonoBehaviour_object__o *)pNVar1,0,pSVar2,
               Method_Nekki_SF2_GUI_SFMonoBehaviour<object>_AddEventListener__);
    pNVar1 = (__this->fields).CPLHJKBAHOF;
    pSVar2 = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
    System_Action<object>___ctor();
    if (pNVar1 != (Nekki_SF2_GUI_Dialogs_BaseDialog_o *)0x0) {
      Nekki_SF2_GUI_SFMonoBehaviour<object>__AddEventListener
                ((Nekki_SF2_GUI_SFMonoBehaviour_object__o *)pNVar1,2,pSVar2,
                 Method_Nekki_SF2_GUI_SFMonoBehaviour<object>_AddEventListener__);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

