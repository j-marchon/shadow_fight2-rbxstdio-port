// Nekki.SF2.GUI.Profile.ItemsController$$Free @ RVA 0x301DDB0

void Nekki_SF2_GUI_Profile_ItemsController__Free
               (Nekki_SF2_GUI_Profile_ItemsController_o *__this,MethodInfo *method)

{
  UnityEngine_Events_UnityAction_T0__o *call;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_TableView_o *pNVar1;
  Nekki_SF2_GUI_TableView_SelectCellEvent_o *__this_00;
  
  if ((DAT_04565c29 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Events_UnityAction<TableViewCell>_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<TableViewCell>_RemoveListener__);
    DAT_04565c29 = 1;
    method = extraout_x1;
  }
  pNVar1 = (__this->fields)._TableView;
  if (pNVar1 != (Nekki_SF2_GUI_TableView_o *)0x0) {
    __this_00 = (pNVar1->fields).onSelectCell;
    call = (UnityEngine_Events_UnityAction_T0__o *)
           thunk_FUN_01bda818(UnityEngine_Events_UnityAction<TableViewCell>_TypeInfo,method);
    UnityEngine_Events_UnityAction<object>___ctor();
    if (__this_00 != (Nekki_SF2_GUI_TableView_SelectCellEvent_o *)0x0) {
      UnityEngine_Events_UnityEvent<object>__RemoveListener
                ((UnityEngine_Events_UnityEvent_T0__o *)__this_00,call,
                 Method_UnityEngine_Events_UnityEvent<TableViewCell>_RemoveListener__);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

