// Nekki.SF2.GUI.Dialogs.ExitDialog$$LCGFJKFJKJK @ RVA 0x3110688

void Nekki_SF2_GUI_Dialogs_ExitDialog__LCGFJKFJKJK
               (Nekki_SF2_GUI_Dialogs_ExitDialog_o *__this,int32_t CHNMNMJJJGL,MethodInfo *method)

{
  LabelButton_o *pLVar1;
  System_Action_object__o *IELDNEAAPBE;
  ONDBPECEKAJ_o *pOVar2;
  
  if ((DAT_0456657e & 1) == 0) {
    FUN_01bab630(&System_Action<object>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_ExitDialog_PGEIEIKOCIN__);
    DAT_0456657e = 1;
  }
  Nekki_SF2_GUI_Dialogs_BaseDialog__LCGFJKFJKJK
            ((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)__this,CHNMNMJJJGL,(MethodInfo *)0x0);
  pLVar1 = (__this->fields).super._btnOK;
  if (pLVar1 != (LabelButton_o *)0x0) {
    SFButton__RemoveAllEventListener((SFButton_o *)pLVar1,(MethodInfo *)0x0);
    pLVar1 = (__this->fields).super._btnOK;
    IELDNEAAPBE = (System_Action_object__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
    System_Action<object>___ctor();
    if (pLVar1 != (LabelButton_o *)0x0) {
      SFButton__AddEventListener((SFButton_o *)pLVar1,2,IELDNEAAPBE,(MethodInfo *)0x0);
      pOVar2 = (__this->fields).LHNINNECGJF;
      if ((pOVar2 != (ONDBPECEKAJ_o *)0x0) &&
         (pLVar1 = (__this->fields).super._btnOK, pLVar1 != (LabelButton_o *)0x0)) {
        LabelButton__set_TrackingDeviceID(pLVar1,(pOVar2->fields).IABOCPMGBLG,(MethodInfo *)0x0);
        pOVar2 = (__this->fields).LHNINNECGJF;
        if ((pOVar2 != (ONDBPECEKAJ_o *)0x0) &&
           (pLVar1 = (__this->fields).super._btnCancel, pLVar1 != (LabelButton_o *)0x0)) {
          LabelButton__set_TrackingDeviceID(pLVar1,(pOVar2->fields).IABOCPMGBLG,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

