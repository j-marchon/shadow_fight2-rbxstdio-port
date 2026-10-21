// Nekki.SF2.GUI.TableView$$LOIGGEHCNPI @ RVA 0x30DABBC

void Nekki_SF2_GUI_TableView__LOIGGEHCNPI(Nekki_SF2_GUI_TableView_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_TableView_SelectCellEvent_o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566350 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<TableViewCell>_Invoke__);
    DAT_04566350 = 1;
    method = extraout_x1;
  }
  __this_00 = (__this->fields).onSelectCell;
  if (__this_00 != (Nekki_SF2_GUI_TableView_SelectCellEvent_o *)0x0) {
    UnityEngine_Events_UnityEvent<object>__Invoke
              ((UnityEngine_Events_UnityEvent_T0__o *)__this_00,
               (Il2CppObject *)(__this->fields)._LDAHBFIIBJJ_k__BackingField,
               Method_UnityEngine_Events_UnityEvent<TableViewCell>_Invoke__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}

